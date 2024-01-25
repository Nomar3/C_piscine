#include <unistd.h>
int check_entry_val (int * array)
{
	int check;
	check = 0;

	check = array[0] + array[1] + array [2] + array [3];
	if (check < 7 || check > 10)
	{
		return (0);
	}
	return (1);
}
/*int main (void)
{	
	int  array[4] ={ 1, 3, 2, 4};

	check_entry_val (array);
	return 0;
}*/

