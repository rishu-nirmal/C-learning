// Menu Based area Calculator //

// #include <stdio.h>
// #define pi 3.141596

// int main()
// {
//     int choose;
//     float base, height, radius, side, length, breadth, a, b, area;

//     do {
//         printf("\n ----Welocome_to_Area_Calculator----");
//         printf("\n 1.Area of Triangle: ");
//         printf("\n 2.Area of Rectangle: ");
//         printf("\n 3.Area of Circle: ");
//         printf("\n 4.Area of Square: ");
//         printf("\n 5.Area of Trapezium: ");
//         printf("\n 6.Exit the program: ");
//         printf("\n Enter a number from(1-6): ");
//         scanf("%d",&choose);

//         switch(choose) {
//             case 1: // Triangle //
//             printf("\n Enter the height: ");
//             scanf("%f",&height);
//             printf("\n Enter the base: ");
//             scanf("%f",&base);
//             area = 0.5*base*height;
//             printf("\n Area of Triangle=%.2f",area);
//             break;

//             case 2: // Rectangle //
//             printf("\n Enter the length: ");
//             scanf("%f",&length);
//             printf("\n Enter the breadth: ");
//             scanf("%f",&breadth);
//             area = length*breadth;
//             printf("\n Area of the Rectangle=%.2f",area);
//             break;

//             case 3: // Circle //
//             printf("\n Enter the radius: ");
//             scanf("%f",&radius);
//             area = pi*radius*radius;
//             printf("\n Area of the Circle=%.2f",area);
//             break;

//             case 4: // Square //
//             printf("\n Enter the Side: ");
//             scanf("%f",&side);
//             area = side*side;
//             printf("\n Area of the Square=%.2f",area);
//             break;

//             case 5: // Trapezium //
//             printf("\n Enter the length: ");
//             scanf("%f",&length);
//             printf("\n Enter the breadth: ");
//             scanf("%f",&breadth);
//             printf("\n Enter the height: ");
//             scanf("%f",&height);
//             area = 0.5*(length+breadth)*height;
//             printf("\n Area of the Trapezium=%.2f",area);
//             break;

//             case 6: // Exit //
//             printf("\n Thank you !");
//             break;

//             default:
//             printf("\n Invalid Input");
//         }

//     }while(choose!=6);
//     return 0;
// }

// Recursive Function //

// #include <stdio.h>

// void printHW(int count);

// int main() 
// {
//     printHW(15);
//     return 0;
// }

// void printHW(int count) {
//     if(count == 0) {
//         return;
//     }
//     printf("\n Hello World!");
//     printHW(count-1);
// }

// To calculate Sum of N natural numbers using Recursion //

// #include <stdio.h>

// int sum(int n);

// int main() {
//     printf("\n sum is : %d",sum(10));
//     return 0;
// }

// int sum(int n) {
//     if (n==1) {
//         return 1;
//     }
//     int sumNm1 = sum(n-1);
//     int sumN = sumNm1 + n;
//     return sumN;
// }

// To calculate factorial of any whole number  n //

// #include <stdio.h>

// int fact(int n);

// int main() {
//     printf("\n Factoril is : %d",fact(5));
//     return 0;
// }

// int fact(int n) {
//     if (n==0) {
//         return 1;
//     }
//     int factNm1 = fact(n-1);
//     int factN = factNm1*n;
//     return factN;
// }

// Make a program to convert from Celcius to Fahrenheit //

// #include <stdio.h>

// // Function prototype: takes Celsius, returns Fahrenheit
// float tempScale(float celsius);

// int main() 
// {
//     float c_input = -40.0; // Example input
//     float f_result;
    
//     // Call the function and store the result
//     f_result = tempScale(c_input);
    
//     printf("\n %.2f celsius equals to %.2f fahrenheit", c_input, f_result);
//     return 0;
// }

// float tempScale(float celsius) {
//     // Calculate and immediately return the result
//     return (celsius * 9.0 / 5.0) + 32;
// }
