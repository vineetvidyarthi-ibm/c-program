#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int marks[]={22,23,24,25,67,58,59,47,46,57,88,99,00,98,89,80,97,86,78,65,78};
    for(int i=0;i < n;i++){
        printf("marks retained=%d\n",marks[i]);
    }
    for(int j=n-1;j >=0;j--){
        printf("reverse marks=%d\n",marks[j]);
    }
    return 0;
}