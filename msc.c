#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void main(){
    char cmd[100], prompt[] = "ftp>";
    char *token_arr[64] = {NULL};

    printf("Welcome to FTP Program V 1.0\n");
    
    while(1){
        printf("%s", prompt);
        scanf("%s",cmd);
        printf("you have entered command %s\n",cmd);
        if  (strcmp("exit", cmd) == 0) {break;}
    } 

    printf("Exiting the program now....\n");
    exit;
}

void display_error(char *pre_str, char *str) {
    write(STDERR_FILENO, pre_str, strnlen(pre_str, 64));
    write(STDERR_FILENO, str, strnlen(str, 64));
    write(STDERR_FILENO, "\n", 1);
}

int parse_cmd();
void msg_disp(int typ, int msg_cd){
    struct struct_msg
    {
        int msg_typ, msg_cd;
        char message[];  
    };

    struct struct_msg msg_arr[10];
    msg_arr[0].msg_typ = 1;
    msg_arr[0].msg_cd = 0;
    msg_arr[0].message[12] = "Successfull"; 

    msg_arr[1].msg_typ = 1;
    msg_arr[1].msg_cd = 0;
    msg_arr[1].message[12] = "Successfull";

    msg_arr[2].msg_typ = 1;
    msg_arr[2].msg_cd = 0;
    msg_arr[2].message[12] = "Successfull";

    
    
    if(ret_cd == 0){
        printf("Synatx OK");  
    }else{
        printf("display error using error message code from a struct array");
    }
}