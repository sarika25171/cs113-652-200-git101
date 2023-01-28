#include <stdio.h>
// int x = 10;
// int y = 50;
// int addTen(int x, int y){
//     x += 10;
//     printf("in addTen x = %d, y = %d\n", x, y);
//     return x; 
// }
// void addTwenty(int x);
// int fac(int n){
/*
5! = 5 * 24 = 120
.........4 * 3!
.............3 * 2!
.................2 * 1
*/
// int fac(int n){
//     if(n == 1){
//         return 1;
//     }
//     return n * fac(n-1);
// }
// }

// int fibo(int n){
//     if (n == 1 || n == 2){
//         return 1;
//     }
//     return 
// }


int main()
{
    // int x = 20;
    // printf("%d\n, x");
    // int y = addTen(x, 50);
    // printf("in main x = %d\n", x, y);


    /* //lab4ข้อ1
    int x = 7, ans = 0, p = 1;
    while (x != 0){
        int tmp = x % 2;
        ans += tmp *p;
        p *= 10;
        x = x >> 1;
    }
    printf("%04d\n", ans);
    */ 


}
void addTwenty(int x){
    printf("%d\n", x + 20);
}
/*
7 => 0111
7 % 2 = 1
7 >> 1 = 011
7 >> 2 = 01

1 * 10^0
1 * 10^1
1 * 10^2
*/

