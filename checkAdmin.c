#include<stdio.h>
#include<conio.h>
#include<string.h>
#include"checkAdmin.h"

int check(){
const char nameAdmin[] = "camilo";
const char paswoAdmin[] = "1616";
char nom[10+1];
char pasw[4+1];
    printf("ingrese usuario\n");
    gets(nom);
    fflush(stdin);
    printf("ingrese contrase%ca\n",164);
    gets(pasw);
    fflush(stdin);
if(strcmpi(nameAdmin,nom)==0 && strcmpi(paswoAdmin,pasw)==0){
    printf("Usuario correecto");
    return 1;
}else{
    printf("Usuario incorrecto");
    return 0;
}

}
