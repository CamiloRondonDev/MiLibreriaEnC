#include<stdio.h>
#include<conio.h>
#include<string.h>
#include"registroUsuarios.h"
#include"checkAdmin.h"

int main(){
    char user[41];
    int id;
    printf("-----------Bienvenido a su libreria------------\n");
    printf("1. login\n");
    printf("2. Registro Usuarios\n");
    printf("3. salir\n");
    scanf("%d",&id);
    fflush(stdin);

    switch (id)
    {
    case 1:
    system("cls");
    check();
        break;
    case 2:
       system("cls");
       registroUsers();
        break;
  case 3:
     system("cls");
        return 0;
        break;
    default:
    printf("valor erroneo");
        break;
    }


return 0;
}

