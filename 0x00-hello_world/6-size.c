1	#include <stdio.h>

2	

3	/**

4	 *main - Entry point

5	 *Return: Always 0 (Success)

6	 */

7

8	 int main(void)

9	 {

10		 printf("Size of a char: %zu byte(s)\n", sizeof(char));

11		 printf("Size of an int: %zu byte(s)\n", sizeof(int));

12		 printf("Size of a long int: %zu byte(s)\n", sizeof(long int));

13		 printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));

14		 printf("Size of a float: %zu byte(s)\n", sizeof(float));

15		 return (0);

16	 }
