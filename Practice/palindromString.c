#include <stdio.h>
#include <string.h>

int main(){
    char string1[20];
    int i, length;
    int numberOfTestCase;
    scanf("%d", &numberOfTestCase);

    
    for(int k=0;k < numberOfTestCase ;k++){
        int flag = 0;
        scanf("%s", string1);
    
        length = strlen(string1);
        
        for(i=0;i < length ;i++){
            if(string1[i] != string1[length-i-1]){
                flag = 1;
            }
            }
        
        if (!flag && length > 7) {
            printf("Case #2: %c%d%c\n", string1[0],length - 2, string1[length - 1]);
        }    
        else if (flag)
        {
            printf("Case #1: Not Palindrome\n");
            
        }
        else {
            printf("Case #3: %s\n", string1);
        }
    }
    return 0;
}