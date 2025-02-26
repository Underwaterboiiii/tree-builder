#include <stdio.h>

int main(){
int rows = 0;

printf("Enter tree height");
scanf("%d", &rows);
printf("\n");

for (int i = 1; i <= rows; i++){
int treeCount = (i*2) - 1;
int spacesCount = rows - i + 1;

for(int j = 0; j< spacesCount; j++)
    printf(" ");
for (int j = 0; j < treeCount; j++)
    printf("*");
printf("\n")
}
for(int i = 0; i < 3; i++){
for(int j = 0; j < rows; j++)
    printf(" ");
printf("*\n");
}
return 0;
}