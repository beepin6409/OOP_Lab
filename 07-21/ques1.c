/* WAP to remove duplicate characters in a string and replace it with number. 
Like abahdsfkh will result in 1b2hdsfkh. Using structure */

#include <stdio.h>

struct duplicate{
    char str[10];
};

int main(){
    struct duplicate name;
    gets(name.str);
    int num=1;
    for(int i=0;i<10;i++){
        for(int j=0;j<i;j++){
            if(name.str[i]==name.str[j]){
                printf("%d",num);
                num++;
                continue;
                
            }
            else{
                printf("%c",name.str[i]);
            }
    }
    return 0;

}