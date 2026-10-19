// Question no 1 //

// #include <stdio.h>
// int main()
// {
//     int r = 4;
//     for(int i=1; i<=r; i++) {
//         for(int j = 1; j<=i; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// Question no 2 //

// #include <stdio.h>
// int main() {
//     int r = 4;
//     for(int i=1; i<=r; i++) {
//         for(int j=1; j<=i; j++) {
//             printf("%d",j);
//         }
//         printf("\n");
//     }
// }

// Question no 3 //

// #include <stdio.h>
// int main() {
//     int r = 4;
//     for(int i=1; i<=r; i++) {
//         for(int j=1; j<=i; j++) {
//             printf("%d",i);
//         }
//         printf("\n");
//     }
// }

// Question no 4 //

// #include <stdio.h>
// int main() {
//     int r=4;
//     int num = 1;
//     for(int i=1; i<=r; i++) {
//         for(int j=1; j<=i; j++) {
//             printf("%d",num);
//             num++;
//         }
//         printf("\n");
//     }
// }

// Question no 5 //

// #include <stdio.h>
// int main() {
//     int r=4;
//     int num = 1;
//     for(int i=1; i<=r; i++) {
//         for(int space=1; space<=r-i; space++) {
//             printf(" ");
//         }
//         for(int j=1; j<=i; j++) {
//             printf("%d ",num);
//             num++;
//         }
//         printf("\n");
//     }
// }

// Question no 6 //

// #include <stdio.h>
// int main() {
//     int r = 4;
//     for(int i=1; i<=r; i++) {
//         for(int space=1; space<=r-i; space++) {
//             printf(" ");
//         }
//         for(int j=1; j<=i; j++) {
//             printf("%d ",i);
//         }
//         printf("\n");
//     }
// }

// Question no 7 //

// #include <stdio.h>
// int main() {
//     int r=5;
//     for(int i=1; i<=r; i++) {
//         for(int j=1; j<=i; j++) {
//             if((i+j)%2==0) {
//                 printf("1");
//             } else {
//                 printf("0");
//             }
//         }
//         printf("\n");
//     }
// }

// Question no 8 //

// #include <stdio.h>
// int main() {
//     int r=5;
//     // Upper half of the diamond pattern //
//     for(int i=1; i<=r; i++) {
//         for(int space=1; space<=r-i; space++) {
//             printf(" ");
//         }
//         for(int j=1; j<=2*i-1; j++) {
//             printf("*");
//         }
        
//         printf("\n");
//     }

//     // Lower half of the diamond pattern //

//     for(int i=r-1; i>=1; i--) {
//         for(int space=1; space<=r-i; space++) {
//             printf(" ");
//         }
//         for(int j=1; j<=2*i-1; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//  Question no 9 //

// #include <stdio.h>

// int main() {
//     int rows = 5;

//     for (int i = 0; i < rows; i++) {
//         
//         for (int space = 1; space <= rows - i - 1; space++) {
//             printf(" ");
//         }

//         int val = 1; 
//         for (int j = 0; j <= i; j++) {
//             printf("%d ", val);
//        
//             val = val * (i - j) / (j + 1);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// Question no 10 //

// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter n: ");
//     scanf("%d", &n);

    
//     for (int i = 1; i <= n; i++) {
       
//         for (int space = 1; space <= n - i; space++) {
//             printf("  ");
//         }

       
//         for (int j = 1; j <= i; j++) {
//             printf("%d ", j);
//         }

        
//         for (int j = i - 1; j >= 1; j--) {
//             printf("%d ", j);
//         }

//         printf("\n");
//     }

    
//     for (int i = n - 1; i >= 1; i--) {
        
//         for (int space = 1; space <= n - i; space++) {
//             printf("  ");
//         }

        
//         for (int j = 1; j <= i; j++) {
//             printf("%d ", j);
//         }

        
//         for (int j = i - 1; j >= 1; j--) {
//             printf("%d ", j);
//         }

//         printf("\n");
//     }

//     return 0;
// }