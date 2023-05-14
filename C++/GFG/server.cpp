#include <iostream>
#include <cstring>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>

using namespace std;

void server_program() {
    int server_socket, new_socket, valread;
    struct sockaddr_in address;
    int addrlen = sizeof(address);
    char buffer[1024] = {0};
    const char* hostname = "localhost";
    int port = 5000;

    // Creating socket file descriptor
    if ((server_socket = socket(AF_INET, SOCK_STREAM, 0)) == 0) {
        perror("socket failed");
        exit(EXIT_FAILURE);
    }

    // Forcefully attaching socket to the port
    int opt = 1;
    if (setsockopt(server_socket, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT, &opt, sizeof(opt))) {
        perror("setsockopt");
        exit(EXIT_FAILURE);
    }

    // Initializing socket address
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = inet_addr(hostname);
    address.sin_port = htons(port);

    // Binding socket to address
    if (bind(server_socket, (struct sockaddr *)&address, sizeof(address))<0) {
        perror("bind failed");
        exit(EXIT_FAILURE);
    }

    // Start listening for incoming connections
    if (listen(server_socket, 2) < 0) {
        perror("listen");
        exit(EXIT_FAILURE);
    }

    // Accept incoming connection
    if ((new_socket = accept(server_socket, (struct sockaddr *)&address, (socklen_t*)&addrlen))<0) {
        perror("accept");
        exit(EXIT_FAILURE);
    }

    // Handle communication with client
    while (true) {
        // Receive data from client
        valread = read(new_socket, buffer, 1024);
        if (valread <= 0) {
            break;
        }
        printf("from connected user: %s\n", buffer);

        // Send response to client
        string response;
        cout << " -> ";
        getline(cin, response);
        const char* response_str = response.c_str();
        send(new_socket, response_str, strlen(response_str), 0);
        memset(buffer, 0, sizeof(buffer));
    }

    close(new_socket);
    close(server_socket);
}

int main() {
    server_program();
    return 0;
}
