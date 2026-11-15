#include <stdio.h> 
int main() { 
int n, temp, digit, reverse = 0; 
int i, prime1 = 1, prime2 = 1; 
printf("Enter number: "); 
scanf("%d", &n); 
temp = n; 
while (temp != 0) { 
digit = temp % 10; 
reverse = reverse * 10 + digit; 
temp /= 10; 
} 
if (n <= 1) 
prime1 = 0; 
for (i = 2; i * i <= n; i++) { 
if (n % i == 0) { 
prime1 = 0; 
break; 
} 
} 
if (reverse <= 1) 
prime2 = 0; 
for (i = 2; i * i <= reverse; i++) { 
if (reverse % i == 0) { 
prime2 = 0; 
break; 
} 
} 
printf("Reverse = %d\n", reverse); 
if (prime1 && prime2) 
printf("Twisted Prime"); 
else 
printf("Not Twisted Prime"); 
return 0; 
}
