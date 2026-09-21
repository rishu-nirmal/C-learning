// To make use of a power function //

// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     float base , exponent, result ;
//     printf("\n Enter the value for base:");
//     scanf("%f",& base);
//     printf("\n Enter the value for exponent:");
//     scanf("%f",& exponent);
//     result = (int)round(pow(base,exponent));
//     printf("\n %f raised to the power of %f is: %f ", base, exponent, result);
//     return 0;

// }

// Conditional Statements //

// #include <stdio.h>
// int main()
// {
//     int age;
//     printf("\n Enter you age:");
//     scanf("%d",&age);
//     if (age > 18 && age < 25) {
//         printf("\n You are eligible to vote.");
//         printf("\n You are also eligible to drive.");
//     }
//     else if (age == 18) {
//         printf("\n You cannot stand for elections");
//     }
//     else{
//         printf("\n You are eligible to vote.");
//         printf("\n You can stand for elections.");
//     }
// }

// Ternary operator //

// #include <stdio.h>
// int main()
// {
//     int age;
//     printf("\n Enter your age:");
//     scanf("%d",&age);
//     (age > 18) ? printf("\n You are an adult.") : (age == 18) ? printf("\n You are exactly 18.") : (age < 18) ? printf("\n You are a minor.") : printf("\n Invalid age.");
//     return 0;   
// }

// switch case statement //

// #include <stdio.h>
// int main()
// {
//     int day;
//     printf("\n Enter a number between 1 to 7:");
//     scanf("%d",&day);
//     switch(day) {
//         case 1: printf("\n Monday");
//                 break;
//         case 2: printf("\n Tuesday");   
//                 break;
//         case 3: printf("\n Wednesday");
//                 break;
//         case 4: printf("\n Thursday");
//                 break;  
//         case 5: printf("\n Friday");
//                 break;
//         case 6: printf("\n Saturday");  
//                 break;
//         case 7: printf("\n Sunday");    
//                 break;
//         default: printf("\n Invalid input. Please enter a number between 1 to 7.");
//     }
// }

// for loop // 

// #include <stdio.h>
// int main()
// {
//    for (int i = 1; i <= 10; i++) {
//     printf("\n Hello World!");
//    }
//    return 0;
// }

// #include <stdio.h>
// int main()
// {
//    for (int i = 1; i <= 10; i++) {
//     printf("\n %d", i);
//    }
//    return 0;
// } 

// #include <stdio.h>
// int main()
// {
//    for (int i = 10; i >= 1; i--) {
//     printf("\n %d", i);
//    }
//    return 0;
// }

// #include <stdio.h>
// int main()
// {
//    for (int i = 0; i <= 10; i++) {
//     printf("\n %d", i);
//    }
//    return 0;
// }

// #include <stdio.h>
// int main()
// {
//    for (char ch = 'A'; ch <= 'Z'; ch++) {
//     printf("\n %c", ch);
//    }
//    return 0;
// }

// while loop //

// #include <stdio.h>
// int main()
// {
//     int i = 1;
//     while(i <= 10 ) {
//         printf("\n %d", i);
//         i++;
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("\n Enter a number:");
//     scanf("%d",&n);
//     int i=1;
//     while(i <= n) {
//         printf("\n %d", i);
//         i++;
//     }
//     return 0;
// }


// do while loop //

// #include <stdio.h>
// int main()
// {
//     int i = 1;
//     do {
//         printf("\n %d", i);
//         i++;
//     }while (i<=5);
//     return 0;
// }

// To calculate sum of N nautral numbers //

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("\n Enter a number: ");
//     scanf("\n %d",&n);
//     int sum = 0;
//     for(int i=1; i<=n; i++) {
//        sum = sum + i;
//     }
//     printf("\n %d", sum);
//     return 0;
// }

// To print table of any number //

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("\n Enter a number: ");
//     scanf("\n %d",&n);
//     for(int i=1; i<=10; i++) {
//        printf("\n %d", n*i);
//     }
//     return 0;
// }

// To take input from users until he enters an odd number //

// #include <stdio.h>
// int main()
// {
//     int n;
//     do {
//         printf("\n Enter a number: ");
//         scanf("\n %d",&n);
//         printf("\n %d", n);

//         if(n%2!=0) {
//             break;
//         }
//     }while(1);
//     return 0;
// }

// To skip a particular character or a digit we make use of Continue //

// #include <stdio.h>
// int main()
// {
//     for(int i=1;i<=10;i++) {
//         if (i==6) {
//             continue;
//         }
//         printf("\n %d",i);
//     }
//     return 0;
// }

// To print only odd numbers btw a given range //

// #include <stdio.h>
// int main()
// {
//     for(int i=10;i<=100;i++) {
//         if (i%2!=0) {
//             printf("\n %d",&i);
//         }
//     }
//     return 0;
// }

// To claculate factorial of any number given by the user //

// #include <stdio.h>
// int main()
// {
//     int n;
//     int factorial = 1;
//     printf("\n Enter any integer: ");
//     scanf("%d",&n);
//     for (int i=1;i<=n;i++) {
//         factorial = factorial*i;
//     }
//     printf("\n The factorial of the given digit is: %d",factorial);
//     return 0;
// }

// Functions and recursion //

// #include <stdio.h>

// void printhello();

// int main()
// {
//     printhello();
//     return 0;
// }

// void printhello() {
//     printf("\n Bonjour!");
//     printf("\n My name is jack.");
// }

// Make a function to print Hello and Goodbye //

// #include <stdio.h>

// void printHello();
// void printGoodBye();

// int main() {

//     printHello();
//     printGoodBye();
//     return 0;
// }

// void printHello() {
//     printf("\n Hello Everyone!");
// }

// void printGoodBye() {
//     printf("\n GoodBye Everyone!");
// }

// To calculate the total price of any product after adding its GST //

// #include <stdio.h>

// void calculatePrice(float value);

// int main()
// {
//     float value = 100.0;
//     calculatePrice(value);
//     return 0;
// }

// void calculatePrice(float value) {
//     value = value + (value*0.18);
//     printf("\n Final price is: %f",value);
// }
