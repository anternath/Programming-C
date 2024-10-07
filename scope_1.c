#include<stdio.h>
int x; //global variable
int anter(int a){
    int x = 100;
    printf("%d\n",x);
    int s=a;
    printf("s variable er location %p\n",&s);
    printf("%d\n",s);
    return s;
}
int main(){
    anter(500);
    int s= 300;
    int x =400;
    printf("s variable er location2 %p\n",&s);
    printf("%d\n",x);
    printf("%d",s);
    
    return 0;
}