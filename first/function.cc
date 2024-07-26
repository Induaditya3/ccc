#include <cstdio>

int step_function (float x){
    int result = 0;
    if (x > 0){
        result = 1;
    } else if (x < 0){
        result = -1;
    }
    return result;
}

int main(){
    int value1 = step_function(12.5);
    int value2 = step_function(-12.3);
    int value3 = step_function(0);
    printf("%d\t%d\t%d\n",value1,value2,value3);

    //revisiting step function
    int num1 = 42;
    int result1 = step_function(num1);

    int num2 = 0;
    int result2 = step_function(num2);

    int num3 = -15752;
    int result3 = step_function(num3);

    printf("After applying step function on %d, we get %d \n",num1,result1);
    printf("After applying step function on %d, we get %d\n",num2,result2);
    printf("After applying step function on %d, we get %d\n",num3,result3);

}