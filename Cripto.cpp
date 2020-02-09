#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
//Configura todas as teclas, não imprime.
int main(){
    char txt[2000];
    printf("*Bem vindo ao *TalkC++!!!\n");
    printf("\n*");
    system("pause");
    system("cls");
    system("cls");
    printf("*Digite sua mensagem\n*Aperte enter para confirmar\n");
    printf("*");
    gets(txt);
    int cont;
    for (cont=0;cont<=strlen(txt);cont++){
        if (txt[cont] == 'a'){
             txt[cont] = '!';
        }
        else if (txt[cont] == 'b'){
             txt[cont] = '@';
        }
        else if (txt[cont] == 'c'){
             txt[cont] = '#';
        }
        else if (txt[cont] == 'd'){
             txt[cont] = '$';
        }
        else if (txt[cont] == 'e'){
             txt[cont] = '%';
        }
        else if (txt[cont] == 'f'){
             txt[cont] = '¨';
        }
        else if (txt[cont] == 'g'){
             txt[cont] = '&';
        }
        else if (txt[cont] == 'h'){
             txt[cont] = '(';
        }
        else if (txt[cont] == 'i'){
             txt[cont] = ')';
        }
        else if (txt[cont] == 'j'){
             txt[cont] = '_';
        }
        else if (txt[cont] == 'k'){
             txt[cont] = 'Z';
        }
        else if (txt[cont] == 'l'){
             txt[cont] = 'Y';
        }
        else if (txt[cont] == 'm'){
             txt[cont] = 'X';
        }
        else if (txt[cont] == 'n'){
             txt[cont] = 'W';
        }
        else if (txt[cont] == 'o'){
             txt[cont] = 'V';
        }
        else if (txt[cont] == 'p'){
             txt[cont] = 'O';
        }
        else if (txt[cont] == 'q'){
             txt[cont] = 'P';
        }
        else if (txt[cont] == 'r'){
             txt[cont] = 'Q';
        }
        else if (txt[cont] == 's'){
             txt[cont] = 'R';
        }
        else if (txt[cont] == 't'){
             txt[cont] = 'S';
        }
        else if (txt[cont] == 'u'){
             txt[cont] = 'T';
        }
        else if (txt[cont] == 'v'){
             txt[cont] = 'U';
        }
        else if (txt[cont] == 'w'){
             txt[cont] = 'H';
        }
        else if (txt[cont] == 'x'){
             txt[cont] = 'I';
        }
        else if (txt[cont] == 'y'){
             txt[cont] = 'J';
        }
        else if (txt[cont] == 'z'){
             txt[cont] = 'K';
        }
        else if (txt[cont] == '0'){
             txt[cont] = 'l';
        }
        else if (txt[cont] == '1'){
             txt[cont] = 'm';
        }
        else if (txt[cont] == '2'){
             txt[cont] = 'n';
        }
        else if (txt[cont] == '3'){
             txt[cont] = 'g';
        }
        else if (txt[cont] == '4'){
             txt[cont] = 'f';
        }
        else if (txt[cont] == '5'){
             txt[cont] = 'e';
        }
        else if (txt[cont] == '6'){
             txt[cont] = 'd';
        }
        else if (txt[cont] == '7'){
             txt[cont] = 'c';
        }
        else if (txt[cont] == '8'){
             txt[cont] = 'b';
        }
        else if (txt[cont] == '9'){
             txt[cont] = 'a';
        }
        else if (txt[cont] == '+'){
             txt[cont] = '|';
        }
        else if (txt[cont] == '-'){
             txt[cont] = ',';
        }
        else if (txt[cont] == '/'){
             txt[cont] = '.';
        }
        else if (txt[cont] == '.'){
             txt[cont] = '/';
        }
        else if (txt[cont] == ','){
             txt[cont] = '-';
        }
        else if (txt[cont] == 'A'){
             txt[cont] = '0';
        }
        else if (txt[cont] == 'B'){
             txt[cont] = '9';
        }
        else if (txt[cont] == 'C'){
             txt[cont] = '8';
        }
        else if (txt[cont] == 'D'){
             txt[cont] = '7';
        }
        else if (txt[cont] == 'E'){
             txt[cont] = '6';
        }
        else if (txt[cont] == 'F'){
             txt[cont] = '5';
        }
        else if (txt[cont] == 'G'){
             txt[cont] = '4';
        }
        else if (txt[cont] == 'H'){
             txt[cont] = '3';
        }
        else if (txt[cont] == 'I'){
             txt[cont] = '2';
        }
        else if (txt[cont] == 'J'){
             txt[cont] = '1';
        }
        else if (txt[cont] == 'K'){
             txt[cont] = 'z';
        }
        else if (txt[cont] == 'L'){
             txt[cont] = 'y';
        }
        else if (txt[cont] == 'M'){
             txt[cont] = 'x';
        }
        else if (txt[cont] == 'N'){
             txt[cont] = 'w';
        }
        else if (txt[cont] == 'O'){
             txt[cont] = 'v';
        }
        else if (txt[cont] == 'P'){
             txt[cont] = 'o';
        }
        else if (txt[cont] == 'Q'){
             txt[cont] = 'p';
        }
        else if (txt[cont] == 'R'){
             txt[cont] = 'q';
        }
        else if (txt[cont] == 'S'){
             txt[cont] = 'r';
        }
        else if (txt[cont] == 'T'){
             txt[cont] = 's';
        }
        else if (txt[cont] == 'U'){
             txt[cont] = 't';
        }
        else if (txt[cont] == 'V'){
             txt[cont] = 'u';
        }
        else if (txt[cont] == 'W'){
             txt[cont] = 'h';
        }
        else if (txt[cont] == 'X'){
             txt[cont] = 'i';
        }
        else if (txt[cont] == 'Y'){
             txt[cont] = 'j';
        }
        else if (txt[cont] == 'Z'){
             txt[cont] = 'k';
        }
    }
    printf("*Processando...\n*");
    system("pause");
    system("cls");
    printf("*Mensagem configurada\n*");
    for (cont=0;cont<=strlen(txt);cont++){
         printf("%c",txt[cont]);
    }
    printf("\n*");
    system("pause");
    //Cria um arquivo txt com a mensagem
    FILE *fp;
    fp = fopen("inc.m","w");
    for (cont=0;cont<=strlen(txt);cont++){
         fprintf(fp,"%c",txt[cont]);
    }
    system("cls");
    printf("*Arquivo criado com sucesso\n*Obrigado por usar\n*");
    system("pause");
    return 0;
}
