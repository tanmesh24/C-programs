#include<stdio.h>
#include<stdbool.h>
#include<string.h>
void palindrome(char *a){
     int i = 0;
    int j = strlen(a) - 2;
    bool flag  = true;
    while(i<j){
        if(a[i] != a[j]){
           flag = false;
           break;
        }
        else{
            i++;
            j--;
        }
    }
    if(flag)
    printf("Yes");
    else{
        printf("No");
    }
    printf("\n");
}
int main(){
    int q;
    scanf("%d",&q);
    char str[q][10];
    for(int i = 0;i<=q;i++){
        fgets(str[i],sizeof(str[i]),stdin);
    }
    printf("\n");
   for(int i = 1;i<=q;i++){
    palindrome(str[i]);
   }
   
}