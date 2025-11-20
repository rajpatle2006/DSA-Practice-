// removes duplicates in-place, keeps first occurrence order
#include <stdio.h>
#include <string.h>

void removeDuplicates(char *s){
    int seen[256] = {0}, write = 0;
    for(int i=0; s[i]; ++i){
        unsigned char c = s[i];
        if(!seen[c]){ seen[c] = 1; s[write++] = s[i]; }
    }
    s[write] = '\0';
}

int main(){
    char s[] = "aabbccabc";
    removeDuplicates(s);
    printf("%s\n", s); // output: abc
    return 0;
}