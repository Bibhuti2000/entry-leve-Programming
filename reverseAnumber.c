#include <stdio.h>
#include <stdlib.h>
#define FULL 10
int reverse(int x){
     int unSignedOutput = 0;
    int sign = 1;

    int b;
    if(x<0){
        sign = -1;
        x = -x;
    }
    while(x>0){
        int t = x%10;
        if(x<10) b = x;
        x = x/10;
        unSignedOutput = unSignedOutput*10+t;
    }

    return unSignedOutput*sign;

}
int main(){
int j = reverse(-256);
printf("%d",j);
return 0;
}
