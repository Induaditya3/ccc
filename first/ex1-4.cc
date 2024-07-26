#include <cstdio>

int sum(int x, int y){
    return x+y;
}

int main(){
    int val1 = 12;
    int val2 = 34;
    printf("The sum of %d and %d is %d.\n",val1, val2,sum(val1,val2));
}