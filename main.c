#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int maxfunc(int x, int y, int z)
{
    if(x>y){
        if( y>z){
            return x;
        }else{
            if (x>z){
                return x;
            } else{
                return z;
            }
        }
    } else{
        if(x>z){
            return y;
        }else{
            if (y>z){
                return y;
            } else{
                return z;
            }
        }
    }
}

int randomInRange(int min, int max){
    return rand() % max +min;
}

int main(int argc, char *argv[]) {


//=====================================================================================================================
    /*
       //Ex1
       //1. Ввести вес и рост человека.
       //Рассчитать и вывести индекс массы тела по формуле I=m/(h*h); где m-масса тела в килограммах, h - рост в метрах.


       double h;
       double m;
       double bmi;

       printf("Input your mass and height with a space.\n");
       printf("Mass in kilograms and height in meters.\n");
       scanf("%lf %lf", &m,&h);

       bmi = m / pow(h,2);

       printf( "BMI equal: %lf\n", bmi); */

//=====================================================================================================================

    //Ex2
    //2. Найти максимальное из четырех чисел. Массивы не использовать.


/*  int a=-5;
    int b=5;
    int c=5;
    int d=-3;
    int maximum;

    maximum = max(max(max(a,b),max(b,c)),max(max(b,c),max(c,d)));

    printf("Maximum from four number equal: %d\n", maximum);*/

//=====================================================================================================================

    //Ex3
    //3. Написать программу обмена значениями двух целочисленных переменных:
/*
    int a =3;
    int b = 6;
    int c = 0;

    //First
    c = a;
    a = b;
    b = c;

    //Second
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;

    printf("%d \n", a);
    printf("%d \n", b); */


//=====================================================================================================================

    //Ex4
    //4. Написать программу нахождения корней заданного квадратного уравнения.

/*
    double a,b,c;
    double discr;
    double x1,x2;

    printf("enter numbers a, b and c for an equation of the form  ax2 + bx +c = 0\n");
    scanf("%lf %lf %lf",&a, &b, &c);

    discr = b*b - 4*a*c;
    if (discr>0){
    x1 = (-b + sqrt(discr)) / (2 * a);
    x2 = (-b - sqrt(discr)) / (2 * a);
    printf("x1 = %lf, x2 = %lf.\n", x1, x2);
    }
    if (discr == 0){
        x1 = -b / (2 * a);
        printf("x1 = x2 answer %lf\n", x1);
    }
    if (discr <0){
        printf("no solutions\n");
    }

*/

//=====================================================================================================================

    //Ex5
    //5. С клавиатуры вводится номер месяца. Требуется определить, к какому времени года он относится.

/*
    int i;
    char Winter[] = "Winter";
    char Spring[] = "Spring";
    char Summer[] = "Summer";
    char Fall[] = "Fall";

    printf("Enter number of month in the year\n");
    scanf("%d", &i);

    //First

   if (i == 0){
        printf("Wrong number!");
    }

    if (i == 12 || i ==1 || i == 2){
        printf("It is %s",Winter);
    }
    if (i == 3 || i == 4 || i == 5){
        printf("It is %s",Spring);
    }
    if (i == 6 || i == 7 || i == 8){
        printf("It is %s",Summer);
    }
    if (i == 9 || i == 10 || i == 11){
        printf("It is %s",Fall);
    }*/


    //Second

/*
    switch (i) {
        case 0:
            printf("Wrong number!");
            break;
        case 1:
            printf(Winter);
            break;
        case 2:
            printf(Winter);
            break;
        case 3:
            printf(Spring);
            break;
        case 4:
            printf(Spring);
            break;
        case 5:
            printf(Spring);
            break;
        case 6:
            printf(Summer);
            break;
        case 7:
            printf(Summer);
            break;
        case 8:
            printf(Summer);
            break;
        case 9:
            printf(Fall);
            break;
        case 10:
            printf(Fall);
            break;
        case 11:
            printf(Fall);
            break;
        case 12:
            printf(Winter);
            break;
    }

*/

//=====================================================================================================================

    //Ex6
    //6. Ввести возраст человека (от 1 до 150 лет) и вывести его вместе с последующим словом «год», «года» или «лет».



//=====================================================================================================================

    //Ex7
    //С клавиатуры вводятся числовые координаты двух полей шахматной доски (x1,y1,x2,y2).
    //Требуется определить, относятся поля к одному цвету или нет

/*    int x1,x2,y1,y2;

    printf("Enter number x1 y1 x2 y2\n");
    printf("Each number can range from 0 to 7\n");
    scanf("%d %d %d %d", &x1,&y1,&x2,&y2);

    if((x1%2 == 0 && x2%2 ==0) || ((x1%2 != 0) &&(x2%2 !=0))){
        if ((y1%2 == 0 && y2%2==0)  || ((y1%2 != 0) && (y2%2 !=0))){
            printf("Same!");
        } else{
            printf("Not same!");
        }
    } else{
        if ((y1%2 == 0 && y2%2==0)  || ((y1%2 != 0) && (y2%2 !=0))){
            printf("Not same!");
        } else{
            printf("Same!");
        }
    }*/


//=====================================================================================================================

    //Ex8
    //8. Ввести a и b и вывести квадраты и кубы чисел от a до b.

/*    int a;
    int b;

    int cube;
    int square;

    printf("Enter two numbers a and b using space\n");
    scanf("%d %d", &a,&b);

    for (int i = a; i<=b;i++){
        square = i * i;
        cube = i*i*i;
        printf("Fore %d cube equals %d, square equals %d\n", i,cube,square);



    */

//=====================================================================================================================

    //Ex9
    //9. Даны целые положительные числа N и K.
    // Используя только операции сложения и вычитания,
    // найти частное от деления нацело N на K, а также остаток от этого деления.

/*  int N = 200;
    int K = 3;

    int quotient=0;
    int remainder=0;
    if (N ==K){
        quotient = 1;
        remainder =0;
    }

    while (N >K){
        N=N-K;
        quotient++;
        remainder = N;
    }

    printf("Quotient from division equals %d\n", quotient);
    printf("Remainder from division equals %d\n", remainder);
}*/

//=====================================================================================================================


    //Ex10
    //Дано целое число N (> 0).
    // С помощью операций деления нацело и взятия остатка от деления определить,
    // имеются ли в записи числа N нечетные цифры. Если имеются, то вывести True, если нет — вывести False.

/*
    int N = 185798641;
    int quotient=N;
    int remainder=0;
    _Bool l = false;

    while (quotient>0){
        remainder = quotient%10;
        quotient = quotient /10;
        if (remainder%2 != 0){
            l=true;
            printf("In Number %d there is odd number %d\n",N,remainder);
        }

    }
*/


//=====================================================================================================================


    //Ex11
    //11. С клавиатуры вводятся числа, пока не будет введен 0.
    // Подсчитать среднее арифметическое всех положительных четных чисел, оканчивающихся на 8.

/*
    int summ = 0;
    double result = 0;
    int i =0;
    int number;



printf("Enter numbers, for stop enter 0\n");
    do {
        scanf("%d",&number);
        if (number == 8 || number%10 == 8){
            summ+=number;
            i++;
        }
    }
    while (number !=0);


    result = (double)summ /(double)i;

    printf("Result is %.3lf\n", result);


*/

//=====================================================================================================================


    //Ex12
    //Написать функцию нахождения максимального из трех чисел.

/*
    int a,b,c;
    int max;

    printf("Enter 3 numbers a b c useing spase\n");
    scanf("%d %d %d", &a,&b,&c);


    max = maxfunc(a,b,c);
    printf("Max number from %d, %d and %d is %d\n", a, b,c, max);

*/

//=====================================================================================================================


    //Ex13
    //13. * Написать функцию, генерирующую случайное число от 1 до 100.
    //а) с использованием стандартной функции rand()
    //б) без использования стандартной функции rand()


    //a)
/*
    int a = 1;
    int b = 100;
    printf("%d", randomInRange(a,b));




*/



    return 0;
}