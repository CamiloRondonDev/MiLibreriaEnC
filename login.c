#include<stdio.h>
#include<conio.h>
#include<string.h>
#include"registroUsuarios.h"
#include"checkAdmin.h"
#include"menuAdmin.h"

int main(){
    char user[41];
    int id,res;
    printf("------Bienvenido a su librer%ca------\n",161);
    printf(" 1. login\n");
    printf(" 2. Registro Usuarios\n");
    printf(" 3. salir\n");
    scanf("%d",&id);
    fflush(stdin);

    switch (id)
    {
    case 1:
    system("cls");
    res = check();
    if(res!=1){
      break;
    }else{
        system("cls");
        menuAdmin();
    }

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

