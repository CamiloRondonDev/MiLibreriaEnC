#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "registroUsuarios.h"

void registroUsers()
{
    char cad[50];
    char *nombre[10 + 1];
    int *contrasena[4 + 1];
    int *id=1;
    char idChar[2];
    itoa(id,idChar,2);
    id = &id+1;
    strcat(idChar,"\n");
    
    printf("ingresa tu nombre de usuario\n");
    gets(nombre);
    fflush(stdin);
    strcat(nombre,"\n");

    printf("ingresa tu pin de usuario\n");
    gets(contrasena);
    fflush(stdin);
    strcat(contrasena,"\n");

    FILE *bd_Admin;
    bd_Admin = fopen("base_datos.txt", "a+");
    if (bd_Admin == NULL)
    {
        exit(1);
    }
    fputs(idChar,bd_Admin);
    fputs(nombre, bd_Admin);
    fputs(contrasena, bd_Admin);
    fclose(bd_Admin);

}
