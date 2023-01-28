#include <stdio.h>

//pasbyvalue
int cubeByValue(int n) {
    n = n * n * n;
    return n;
} 

//passbyreference เมื่อฟังก์ชันนั้นมีการทำงานได้หลายค่า มีคำตอบหลายค่า or ลิสต์ในไพธ่อน เป็นเรฟทันที
int cubeByreference(int* n){
    *n = *n * * n * * n;
    return n;
}

int main() {
    int n = 5;
    printf("%d\n", n);
    int result = cubeByValue(n);
    printf("%d\n", n);
    printf("result = %d\n", result);
    printf("-------------------------\n");

    int n2 =10;
    printf("%d\n", n2);
    int result = cubeByreference(;
    return 0;)
}

char* encode(){
    char* newstr = (char*) malloc(100 * sizeof(char));
    int i;
    for(i=0; str[i] != '\0'; ++i){
        *(newstr + i) = str[i] + 1;
    }
    *(newstr + i) = '\0';
    return newstr;
}

void encode_2(char str[]){




    int main(){
        char* result =encode("ABC");
        printf("[%s]\n", result);

        encode_2(result);
        printf("[%s]\n", result);
    }
}