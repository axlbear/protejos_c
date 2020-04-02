#include "func_a.h"

int main (void)
{
    setlocale(LC_ALL, "UTF-8");

    char op;

    do{
    system("cls");
    puts("| Calculadora");
    puts("| Desenvolvido por Alex Marzani - 2020");
    puts("|");
    puts("| (a) - Soma");
    puts("| (b) - Subtração");
    puts("| (c) - Multiplicação");
    puts("| (d) - Divisão");
    puts("| (e) - Regra de Três");
    puts("| (f) - Porcentagem");
    puts("| (g) - Teorema de Pitágoras");
    puts("| (h) - Plano Cartesiano");
    puts("| (i) - Número elevado");
    puts("| (x) - Sair");
    printf("| >>> ");
    scanf("%c", &op);
    
    switch (tolower(op)){
        case 'a' : soma(); break;
        case 'b' : sub(); break;
        case 'c' : multi(); break;
        case 'd' : divisao(); break;
        case 'e' : regra(); break;
        case 'f' : porc(); break;
        case 'g' : teorema(); break;
        case 'h' : plano(); break;
        default : break;
        }
    } while ( op != 'x');

    return 0;
}
