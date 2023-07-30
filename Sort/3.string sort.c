#include <stdio.h>
#include<string.h>
int main(){
    int n,i,j;
    char temp[100],str[100][100];
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        gets(str[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(strcmp(str[i],str[j])>0){
                strcpy(temp,str[j]);
                strcpy(str[j],str[i]);
                strcpy(str[i],temp);
            }
        }
    }
    for(i=0;i<n;i++)
        puts(str[i]);
    return 0;
}

