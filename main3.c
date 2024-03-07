#include <stdio.h>
#include <string.h>

int main() {
    char text[20];
    char c;
    char *t;
    
    printf("Enter text: ");
    gets(text);
    
    printf("Enter character: ");
    scanf("%c", &c);
    
    t = text;
    int len_text = strlen(text);
    int count = 0;
    
    for (int i = 0; i < len_text; i++) {
        if (*(t + i) == c)
            count++;
    }
    
    printf("Number of '%c' in \"%s\" = %d\n", c, text, count);
    
    return 0;
}
