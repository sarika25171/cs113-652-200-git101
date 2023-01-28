#include <stdio.h>
#include <stdlib.h>
int main(){
    // int i = 0;   //loopแบบรู้จำนวนรอบ
    // char str[10];
    // fgets(str, 10, stdin);
    // while (i < atoi(str))
    // {
    //     printf("%d\n", i);
    //     i++; // ++i; same value //runtime i++ slower than ++i in cpu
    // }

    // int i = 0;   
    // char str[10];
    // fgets(str, 10, stdin);
    // while (1) //infinite loop
    //{
    //     printf("%d\n", i);
    //     i++; // ++i;
    //}

    // int j = 0;
    //  for (int i = 0; i < 10; i++, j+= 2){
    //      printf("%d %d\n", i, j);
    //  }

    //  20 8
    //  20 % 8 = 4
    //  8 % 4 = 0
    //  4 % 0

    int i = atoi(str);

    switch (i){
        case 1:
            printf("- 1");
            break;
        case 2:
            printf("- 2");
            break;
        default :
            printf("default");
            break;
   }


}

