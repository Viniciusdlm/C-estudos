#include <stdio.h>
int main(){
int i, contar;
char palavra[] = "Casa";
for (i = 0; palavra[i] != '\0'; i++)
{
printf("%c\n", palavra[i]);
contar++;
}

return 0;
}