#include <stdio.h>

struct User{
    char usuario[20];
    char senha [20];
};

int main(){

    struct User user;

    printf("Digite seu nome:\n");
    scanf("%s", &user.usuario);


    printf("Ola, %s", user.usuario);

    return 0;

}