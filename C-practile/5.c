#include <stdio.h>
int facto(int num, int fact){
    if(num==1){
        printf("%d \n",fact);
        return 0;
    }
    fact= fact*num;
    facto(num-1, fact);
    return 0;
}
int main()
{
    int num = 4;
    int fact = 1;
    facto(num, fact); 
    
    return 0;}