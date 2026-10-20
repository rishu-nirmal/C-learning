// #include <stdio.h>
// int main()
// {
//     int number = 777;
//     int age = 19;
//     char name[] = "Rishabh";

//     printf("Number: %d\n", number);
//     printf("Age: %d\n", age);
//     printf("Name: %s\n", name);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     float age = 19;
//     printf("I am %f years old.\n", age);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a,b;
//     printf("\n Enter number 1:");
//     scanf("%d",&a);
//     printf("\n Enter number 2:");
//     scanf("%d",&b);
//     int product = a * b;
//     printf("\n product of two numbers is: %d",product);
//     return 0;
// }
// Area of square //

// #include <stdio.h>
// int main()
// {
//     int side;
//     printf("\n Enter the side of square:");
//     scanf("%d",&side);
//     int area = side * side;
//     printf("\n Area of sqaure is: %d",area);
//     return 0;
// }

// Area of Circle //

// #include <stdio.h>
// int main()  
// {
//     float radius;
//     printf("\n Enter the radius of the circle:");
//     scanf("%f",& radius);
//     float area = 3.14 * radius * radius;
//     printf("\n Area of circle is: %f", area);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a,b;
//     printf("\n Enter nummber 1:");
//     scanf("%d",&a);
//     printf("\n Enter number 2:");
//     scanf("%d",&b);
//     int sum = a + b;
//     int difference = a - b;
//     int product = a * b;
//     int quotient = a / b;
//     printf("\n Sum of two numbers is: %d",sum);
//     printf("\n Difference of two numbers is: %d",difference);
//     printf("\n Product of two numbers is: %d",product);
//     printf("\n Quotient of two numbers is: %d",quotient);
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     int a = 1.9999;
//     printf("\n Value of a is: %d",a);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int x, operation;
//     printf("\n Enter a number:");
//     scanf("%d",&x);
//     operation = x*(4/2)*3;
//     printf("\n Result of the operation is: %d",operation);
//     return 0;

// }

// #include <stdio.h.>
// int main()
// {
//     printf("%d", 100<4);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     printf("\n %d", 4>2 && 36>42);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     printf("\n %d", 4>2 || 36>42);
//     return 0;
// }

// #

// #include <stdio.h>
// int main()
// {
//     int x, operation;
//     printf("\n Enter a number:");
//     scanf("%d",&x);
//     operation = (x%2==0);
//     printf("\n Given number is even or not: %d",operation);

//     return 0;
// }

// Practising loops //

// #include <stdio.h>
// void main()
// {
//     int n,i;
//     printf("\n Enter the number of lines: ");
//     scanf("%d",&n);
//     for (i=0;i<n;i++) {
//         printf("\n India,");
//         printf(" West Bengal.");
//     }
// }

// Function and calling of a function  //

// #include <stdio.h>

// int addNumbers(int a, int b);

// int addNumbers(int a, int b) {
//     int sum = a + b;
//     return sum;
// }

// int main() {
//     int num1, num2, result;
//     printf("\n Enter the numbers: ");
//     scanf("%d%d", &num1, &num2);

//     result = addNumbers(num1, num2);
//     printf("\n Sum of the two numbers is: %d",result);
//     return 0;
// }

// Fibonacci Series //

// #include <stdio.h>
// int main() {
//     int n,i;
//     int a = 0, b = 1,c;
//     printf("Enter the value of n: ");
//     scanf("%d",&n);

//     printf("\n Fibonacci Series: ");

//     for(i=1;i<=n;i++) {
//         printf("\t %d",a);
//         c=a+b;
//         a=b;
//         b=c;
//     }
//     return 0;
// }

// To determine factorial //

#include <stdio.h>
int main() {
    int N,i,S=0,F=1;
    printf("\n Enter the integer: ");
    scanf("%d",&N);
    for(i=1;i<=N;i++) {
    F=F*i;
    S=S+i;
    }
    printf("\nResults:\n");
    printf("\n %d!=%d",N,F);
    if(N>0)
      printf("\n Sum of the sequence from 1 to %d is %d.",N,S);
    else
      printf("\n Result of the sum is: %d",S);
    return 0;
}