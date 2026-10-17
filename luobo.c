#include <stdio.h>
#include <string.h>
int main(){
    int x,y;
    printf("%f",(x=3,y=5,x>y?1:1.5));
    char a[50],*b[]={"萝卜","纸巾"};
    printf("开门模拟器\n请输入文本\n");
    for(int i=1;i<6;i++)
        printf("%s\n",b[i%2]),scanf("%s",a),
        !strcmp(a,b[i%2])?printf("真棒\n"):printf("再来\n");
    printf("不来了小傻猫\n");
}