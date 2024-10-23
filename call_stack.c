#include<stdio.h>
void hello(){
    printf("start hello\n");
    printf("end hello\n");
}
void world(){
    printf("Start world\n");
    hello();
    printf("End world\n");
}
int main(){
    printf("start main\n");
    world();
    printf("end main\n");
    return 0;
}