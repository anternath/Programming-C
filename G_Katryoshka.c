#include<stdio.h>
int main(){
    long long int eye,mouth,body,min;
    scanf("%lld %lld %lld",&eye,&mouth,&body);
    if(eye<mouth&&eye<body){
        min=eye;
    }
    else if(mouth<eye&&mouth<body){
        min=mouth;
    }
    else if(body<eye&&body<mouth){
        min=body;
    }
    long long int a=(eye-min)/2;
    long long int b=mouth-min;
    long long int c=body-min;
    if(a<=c){
        printf("%lld",a + min);
    }
    else if(c<a){
        printf("%lld",c+min);
    }
    return 0;
}