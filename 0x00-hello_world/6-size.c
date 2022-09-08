1	#include <stdio.h>

2	/**

3	 * main - Entry point

4	 *

5	 * Return: always 0

6	 */

7	 int main(void)

8	 {

9		 printf("Size of a char: %zu byte(s)\n", sizeof(char));

10		 printf("Size of an int: %zu byte(s)\n", sizeof(int));

11		 printf("Size of a long int: %zu byte(s)\n", sizeof(long int));

12		 printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));

13		 printf("Size of a float: %zu byte(s)\n", sizeof(float));

14		 return (0);

15	 }
