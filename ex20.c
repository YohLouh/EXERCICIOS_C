// Sistema de login que pede usuário e senha, repetindo até usuário ser 'admin' e senha '1234'
#include <stdio.h>
#include <string.h>

bool login(char usuario[], char senha[]){
    char user[50] = "admin";
    char password[50] = "1234";
    if(strcmp(usuario, user) == 0 && strcmp(senha, password) == 0){
        return true;
    } else {
        return false;
    }

}

void main(){

    char usuario[50], senha[50];
    printf("Insira o usuario: ");
    scanf("%s", &usuario);
    printf("Insira a senha: ");
    scanf("%s", &senha);

    login(usuario, senha);
    if(login(usuario, senha)){
        printf("Usuario e senha corretos!");
    } else {
        printf("Usuario e senha incorretos.");
    }

}