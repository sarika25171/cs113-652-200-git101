#include <stdio.h>
#define PI 3.14 
#define for 1
int i = 10;
unsigned int u = 100;
long l = 1000;
long long ll = 10000;
// unsigned long long long

float f = 1.0;
double d = 'a';

char c = 'a';
char name[] = "pang";






int main(){
    printf("Hello World!\n");
    printf("%d %u %ld %f %lf %c %s", i, u, l, f, d, c, name);

    int q = c + 20;
    printf("%d", q);

    int w = 1/2;
    printf("%lf\n", w);

    double w = 1.0/2;
    printf("%lf\n", w);
    

}