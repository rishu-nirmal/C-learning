// // // Fibonacci series //

// // // #include <stdio.h>
// // // int main()
// // // {
// // //     int n,i;
// // //     int a = 0, b = 1, c;
// // //     printf("\n Enter the number of terms: ");
// // //     scanf("%d",&n);
// // //     printf("\n Fibonacci series is: ");
// // //     for(i=1;i<=n;i++)
// // //     {
// // //         printf("\t%d",a);
// // //         c = a + b;
// // //         a = b;
// // //         b = c;
// // //     }
// // //     return 0;
// // // }

// // // Sin expansion //

// // // #include <stdio.h>
// // // int main() {
// // //     int i,n;
// // //     float x,sum = 0,term;

// // //     printf("Enter the value of x in radians: ");
// // //     scanf("%f",&x);

// // //     printf("Enter the number of terms: ");
// // //     scanf("%d",&n);

// // //     term = x;

// // //     for(i=1;i<=n;i++) {
// // //         sum = sum + term;
// // //         term = -term*x*x/((2*i)*(2*i+1));
// // //     }

// // //     printf("Sin(x) = %f",sum);
// // //     return 0;
// // // }

// // // Cos expansion //

// // // #include <stdio.h>
// // // int main() {
// // //     int i,n;
// // //     float x,sum = 0,term;

// // //     printf("Enter the value of x in radians: ");
// // //     scanf("%f",&x);

// // //     printf("Enter the number of terms: ");
// // //     scanf("%d",&n);

// // //     term = 1;

// // //     for(i=1;i<=n;i++) {
// // //         sum = sum + term;
// // //         term = -term*x*x/((2*i-1)*(2*i));
// // //     }

// // //     printf("Cos(x) = %f",sum);
// // //     return 0;
// // // }

// // // Exponential expansion //

// // // #include <stdio.h>
// // // int main() {
// // //     int n,i;
// // //     float x,sum = 0,term;

// // //     printf("Enter the value of x in radians: ");
// // //     scanf("%f",&x);

// // //     printf("Enter the number of terms: ");
// // //     scanf("%d",&n);

// // //     term = 1;

// // //     for(i=1;i<=n;i++) {
// // //         sum = sum + term;
// // //         term = term*x/i;
// // //     }

// // //     printf("Exp(x) = %f",sum);
// // //     return 0;
// // // }

// // // Program to find the greatest of four numbers entered by the user //

// // // #include <stdio.h>
// // // int main() {
// // //     int a,b,c,d;
// // //     printf("Enter  any four numbers: ");
// // //     scanf("%d%d%d%d",&a,&b,&c,&d);

// // //     if(a>=b && a>=c && a>=d) {
// // //         printf("First number is greater.");
// // //     }
// // //     else if(b>=a && b>=c && b>=d) {
// // //         printf("Second number is greater.");
// // //     }
// // //     else if(c>=a && c>=b && c>=d) {
// // //         printf("Third number is greater.");
// // //     }
// // //     else {
// // //         printf("Last number is the greatest.");
// // //     }
// // //     return 0;
// // // }

// // // Pascals triangle //

// // #include <stdio.h>
// // int main() {
// //     int r,i,j,val;

// //     printf("Enter the number of rows: ");
// //     scanf("%d",&r);

// //     for(i=0;i<=r;i++) {
// //         val = 1;
// //         for(int space=0;space<=r-i-1;space++) {
// //             printf(" ");
// //         }

// //         for(j=0;j<=i;j++) {
// //             printf("%d ",val);
            

// //             val = val*(i-j)/(j+1);
// //         }
// //         printf("\n");
// //     }
// //     return 0;
// // }

// #include <stdio.h>
// #include <math.h>

// int main() {
//     int num, originalNum, remainder, result = 0, n = 0;

//     printf("Enter an integer: ");
//     scanf("%d", &num);

//     originalNum = num;

//     int temp = num;
//     while (temp != 0) {
//         temp /= 10;
//         ++n;
//     }

//     temp = num;

//     while (temp != 0) {
//         remainder = temp % 10;
        
//         result += (int)round(pow(remainder, n)); 
        
//         temp /= 10;
//     }

//     // Check and display the result
//     if (result == originalNum)
//         printf("%d is an Armstrong number.\n", num);
//     else
//         printf("%d is not an Armstrong number.\n", num);

//     return 0;
// }

// Guess the magic number //

#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main(void) {
    int magic;
    int guess;

    srand(time(NULL));

    magic = (rand() % 100) + 1;

    printf("Guess the magic number (between 1 and 100): ");
    scanf("%d", &guess);

    if (guess == magic) {
        printf("** Right **\n");
    } else {
        printf("Wrong! The magic number was %d.\n", magic);
    }

    return 0;
}
