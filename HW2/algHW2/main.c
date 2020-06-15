#include <stdio.h>

//Сахаров Иван Сергеевич
//HW2

//1. Реализовать функцию перевода из десятичной системы в двоичную, используя рекурсию.
void dec2bin(int a){

    if (a>=2){
        dec2bin(a/2);
        printf("%d",a%2);
    } else{
        printf("%d",a%2);
    }

}


//2. Реализовать функцию возведения числа a в степень b:

//рекурсивно;
int RecFunc(int a, int b){
    if (b>1){
        b--;
        a*= RecFunc(a, b);
    }
    return a;
}

//без рекурсии;
int NoRecFunc(int a, int b){
    int result=a;

    while  (b>1){
        b--;
        result *=a;
    }
    return result;
}


int main(int argc, char *argv[]) {

    dec2bin(34556);

    printf("\n");
    printf("%d", RecFunc(3, 8));
    printf("\n");
    printf("%d", NoRecFunc(3,8));

    return 0;
}
