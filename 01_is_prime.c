// #include <stdio.h>

// int is_prime(int num);
// int main()
// {
//     int A, B;
//     scanf("%d %d",&A,&B);
//     for (int num = A; num <= B; num++)
//     {
//         int tens = num / 10;
//         int units = num % 10;
//         int swapped = units * 10 + tens;
//         if (is_prime(num) && is_prime(swapped))
//         {
//             printf("%d\n",num);
//         }
//     }
//     return 0;
// }
// int is_prime(int num)
// {
//     if (num <= 1)
//     {
//         return 0;
//     }
//     if (num == 2)
//     {
//         return 1;
//     }
//     if (num % 2 == 0)
//     {
//         return 0;
//     }

//     for (int i = 3; i * i <= num; i += 2)
//     {
//         if (num % i == 0)
//         {
//             return 0;
//         }
//     }
//     return 1;
// }