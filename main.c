#include <stdio.h>

struct User{
    char usuario[20];
    char senha [20];
};

struct Login{
    char user[20];
    char password[20];
};

int main(){

    struct User user;
    struct Login login;


    printf("Digite seu nome:\n");
    scanf("%s", &login.user);

    printf("Digite sua senha:\n");
    scanf("%s", &login.password);


    printf("Bem vindo, %s", login.user);

    return 0;

}