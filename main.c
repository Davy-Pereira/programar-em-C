// #include <stdio.h>
// #include <string.h>


// struct User{
//     char usuario[20];
//     char senha [20];
// };

// struct Login{
//     char user[20];
//     char password[20];
// };

// int main(){

//     struct User user;
//     struct Login login;

//     strcpy(user.usuario, "admin");
//     strcpy(user.senha, "123");
    


//     printf("Digite seu nome:\n");
//     scanf("%s", &login.user);

//     printf("Digite sua senha:\n");
//     scanf("%s", &login.password);


//     if (strcmp(user.usuario, login.user) == 0 && strcmp(user.senha, login.password) == 0){
//         printf("Bem vindo, %s", login.user);
//     } else {
//         printf("Usuario ou senha incorretos");
//     }

//     return 0;

// }



// Tempo de saudação de acordo com o horário do sistema
// #include <stdio.h>
// #include <time.h>

// int main() {

//     time_t agora = time(NULL);
//     struct tm *data = localtime(&agora);
//     int hora = data->tm_hour;

//     if (hora >= 6 && hora < 12) {
//         printf("Bom dia!\n");
//     } else if (hora >= 12 && hora < 18) {
//         printf("Boa tarde!\n");
//     } else if (hora >= 18 && hora < 24){
//         printf("Boa noite!\n");
//     } else {
//         printf("Boa madrugada!\n");
//     }


//     return 0;
// }



// DIAS DA SEMANA
// #include <stdio.h>
// #include <string.h>

// int main(){

//     int dia;

//     printf("Digite um numero de 1 a 7 para representar o dia da semana:\n");
//     scanf("%d", &dia);

//     switch(dia){

//         case 1:
//             printf("Domingo\n");
//             break;
        
//         case 2:
//             printf("Segunda-feira\n");
//             break;
        
//         case 3:
//             printf("Terça-feira\n");
//             break;
        
//         case 4:
//             printf("Quarta-feira\n");
//             break;
        
//         case 5:
//             printf("Quinta-feira\n");
//             break;
        
//         case 6:
//             printf("Sexta-feira\n");
//             break;

//         case 7:
//             printf("Sábado\n");
//             break;

//         default:
//             printf("Numero invalido. Digite um numero de 1 a 7.\n");
//             break;
//     }

//     return 0;
// }


//LAÇO DE REPETIÇÃO
#include <stdio.h>
#include <string.h>

int main(){

    int vezes = 1;

    // WHILE
    while(vezes <= 5){
        printf("%d Davi\n", vezes);
        vezes = vezes + 1;
    }

    // FOR
    for(int i = 1; i <= 5; i++){
        printf("%d Davi\n", i);
    };

    //DO WHILE
    int cont = 1;
    do{
        printf("%d Davi\n", cont);
       cont++;
    } while(cont <= 5);

    return 0 ;
}