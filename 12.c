#include <stdio.h>
int main(){
int a;
int b;
int c;
printf("nhapkytu");
scanf("%d%d%d", &a, &b, &c);
    if(a>b&&a>c)
        printf("alonnhat%d");
        else
            printf("sai");
    
    if(b>a&&b>c)
        printf("blonnhat%d");
        else
            printf("sai");
    
    if(c>a&&c>b)
        printf("clonnhat%d");
        else
            printf("sai");
    
        
    return 0;
}
