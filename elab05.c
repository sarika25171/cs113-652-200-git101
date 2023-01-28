//ข้อ8
// #include <stdio.h>
// #include <stdlib.h>

// void main()
// {
//     char stair_str[15], step_str[15];
//     int stair, round = 1, i, j, step = 0, stepRound = 1;
//     printf("Input number of stairs: ");
//     fgets(stair_str, 15, stdin);
//     stair = atoi(stair_str);
//     char stairArray[5][stair];
//     // stair
//     for (i = 0; i < stair; i++)
//     {
//         for (j = 0; j < 5; j++)
//         {
//             if (j == 0 || j == 4)
//             {
//                 stairArray[j][i] = '|';
//             }
//             else
//             {
//                 stairArray[j][i] = '-';
//             }
//         }
//     }
//     stairArray[2][stair - 1] = '^';
//     stairArray[2][stair - 2] = 'O';
//     while (stepRound != 0 && stair >= 2)
//     {
//         // system
//         printf("---- round %d ----\n", round);
//         for (i = 0; i < stair; i++)
//         {
//             for (j = 0; j < 5; j++)
//             {
//                 printf("%c", stairArray[j][i]);
//             }
//             printf("\n");
//         }
//         printf("Input step command: ");
//         fgets(step_str, 15, stdin);
//         stepRound = atoi(step_str);
//         // too high
//         if (stair == 2) {
//             round += 1;
//             continue;
//         }
//         if (stepRound + step > stair - 2)
//         {
//             stairArray[2][stair - step - 1] = '-';
//             stairArray[2][stair - step - 2] = '-';
//             stairArray[2][1] = '^';
//             stairArray[2][0] = 'O';
//             step = stair - 2;
//         }
//         // too low
//         else if (stepRound + step < 0)
//         {
//             stairArray[2][stair - step - 1] = '-';
//             stairArray[2][stair - step - 2] = '-';
//             stairArray[2][stair - 1] = '^';
//             stairArray[2][stair - 2] = 'O';
//             step = 0;
//         }
//         // normal
//         else
//         {
//             stairArray[2][stair - step - 1] = '-';
//             stairArray[2][stair - step - 2] = '-';
//             step += stepRound;
//             stairArray[2][stair - step - 1] = '^';
//             stairArray[2][stair - step - 2] = 'O';
//                 }
//         round += 1;
//     }
// }



//ข้อ3
// #include <stdio.h>
// #include <stdlib.h>

// void main()
// {
//     char a_str[15], b_str[15], op, op_str[5];
//     float a, b;
//     printf("Initial Value: ");
//     fgets(a_str, 15, stdin);
//     a = atof(a_str);
//     while (1)
//     {
//         printf("\n");
//         printf("Operator: ");
//         fgets(op_str, 15, stdin);
//         op = op_str[0];
//         if (op == '+' || op == '-' || op == '*' || op == '/')
//         {
//             printf("Input Value: ");
//             fgets(b_str, 15, stdin);
//             b = atof(b_str);
//             switch (op)
//             {
//             case '+':
//                 a += b;
//                 break;
//             case '-':
//                 a -= b;
//                 break;
//             case '*':
//                 a *= b;
//                 break;
//             case '/':
//                 a /= b;
//                 break;
//             }
//             printf("Present Value is %.4f\n", a);
//         }
//         else
//         {
//             break;
//         }
//     }
//     printf("\nFinish Calculation. Final Value is %.4f\n", a);
// }