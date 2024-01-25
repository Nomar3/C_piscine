#include <unistd.h>
void ft_console_write (char array[4][4] )
{
	//int array[4][4];
	//array [i][j];
	
	int i = 0;
	int j = 0;
	while (i < 4)
		{
			while (j <4)
			{
				write (1, array[i][j], 1);
				j ++;
			}
			i ++;
			j = 0;
		}
}
int main (void)
{
	char	array [4][4]= {
		{'1','2','3','4'},
		{'2','3','4','1'},
		{'3','4','1','2'},
		{'4','1','2','3'}
	};
	ft_console_write (array);
	return 0;

}
