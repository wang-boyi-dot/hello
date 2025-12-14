#include <stdio.h>
void del_char(char a[], char ch) {
    int i = 0;
    int j = 0;
    while (a[i] != '\0') {
        if (a[i] != ch) {
            a[j] = a[i];
            j++;   
        }
        i++; }
    a[j] = '\0';
}
int main(){
    char ch;     
    char str[100];   
    scanf("%c", &ch);
    getchar();
    scanf("%s", str);
    del_char(str, ch);
    printf("%s\n", str);
    return 0;
}
