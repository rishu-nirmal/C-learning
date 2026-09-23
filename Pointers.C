// Basic Syntax of writing pointer //

// #include <stdio.h>
// int main()
// {
//     int age = 22;
//     int *ptr = &age;
//     int _age = *ptr;

//     printf("%d", _age);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int x;
//     int *ptr;

//     ptr = &x;
//     *ptr = 0;

//     printf("x=%d\n",x);
//     printf("ptr=%d\n",*ptr);

//     *ptr += 5;
//     printf("x=%d\n",x);
//     printf("ptr=%d\n",*ptr);

//     (*ptr)++;
//     printf("x=%d\n",x);
//     printf("ptr=%d\n",*ptr);


//     return 0;
// }

// Declaring Pointer to Pointer //

// #include <stdio.h>
// int main()
// {
//     float price = 100.00;
//     float *ptr = &price;
//     float **pptr = &ptr;

//     printf("\n%f",**pptr);
//     return 0;
// }

// Taking square of a given number using pointers //

// #include <stdio.h>

// void square(int n);

// int main()
// {
//     int number = 4;
//     square(number);
//     printf("number  = %d\n",number);
//     return 0;
// }

// void square(int n)
// {
//     n = n*n;
//     printf("square = %d\n",n);
// }

// Using swap function //

#include <stdio.h>

void swap(int a, int b);

int main()
{
    int x = 3, y = 5;
    swap(x,y);
    printf("\n x = %d & y = %d", x,y);
    return 0;
}

void swap(int a, int b)
{
    int t = a;
    a = b;
    b = t;
    printf("a = %d & b = %d", a,b);
}