#include<stdio.h>
int anter(int a){
    int s=a;
    printf("s variable er location %p\n",&s);
    printf("%d\n",s);
    return s;
}
int main(){
    anter(500);
    int s= 300;
    printf("s variable er location2 %p\n",&s);
    printf("%d",s);
    
    return 0;
}