#include <stdio.h>
int main() {
int n, 1;
printf("Enter a number ");
scanf("%d", &n);
printf("Multiplication table using while loop\n");
i=1;
while(i<=10){
printf("%d x %d = %d\n", n,i,n*i);
i++;
}

printf("Multiplication table using do while loop\n");
i=1;
do {
printf("%d x %d = %d\n" , n,i,n*i);
i++;
}while(i<=10);

printf(
"Multiplication table using for loop\n");
for(i=1; i<=10; 1++){
printf("%D x %d = %d\n", n,i,n*i);
}

return 0;

}
