#include <stdio.h>

int factorial(int*);
int swap(int*, int*);
void twice(size_t, int[]);
void string(char[]);
void kk(int*, int*);

int main(){

   int a, b;
   a = 10;
   b = 20;
   kk(&a, &b);

   printf("%d %d", a, b);

    return 0;
}

int factorial(int *n){

    if(*n <= 0){
        printf("Error\n");
        return 0;
    }

   int res = 1;
   
   for(int i = 1; i <= *n; i++){
    res *= i;
   }

   return res;

}

int swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void twice(size_t n, int p[]){
    for(int i = 0; i < n; i++){
        p[i] = p[i] * 2;
    }
}

void string(char s[]){
    printf("%s\n", s);
}

void kk(int *a, int *b){
    *a *= 2;
    *b *= 2;
}
