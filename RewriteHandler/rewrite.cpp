#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <unistd.h>
#include <iostream>


static void end_handler(int signal) {
    printf("You can`t do it\n");
    std::cout <<"\n" << signal << "\n" ;      
    

}

int main(int argc, char *argv[]) {
    
    if ((signal(SIGINT, end_handler) == SIG_ERR) || (signal(SIGHUP, end_handler) ==  
            SIG_ERR) || (signal(SIGTERM, end_handler) == SIG_ERR)) {
        printf("Error while setting a signal handler\n");
        exit(EXIT_FAILURE);
    }   
    while (1) { }
    return 0;  
}