#include <stdio.h>
#include <string.h>


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

    strcpy(user.usuario, "admin");
    strcpy(user.senha, "123");
    


    printf("Digite seu nome:\n");
    scanf("%s", &login.user);

    printf("Digite sua senha:\n");
    scanf("%s", &login.password);


    if (strcmp(user.usuario, login.user) == 0 && strcmp(user.senha, login.password) == 0){
        printf("Bem vindo, %s", login.user);
    } else {
        printf("Usuario ou senha incorretos");
    }
    
    return 0;

}