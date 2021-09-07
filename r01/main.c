#include <stdio.h>
#include <unistd.h>

int		checkinput(int *input, char *argv);

int		checknum(char *input);

int		main(int argc, char **argv)
{
	int input[16];
	int i;

	i = 0;
	if (argc ==  2)
	{
			i = checkinput(input, argv[1]);
			if (i == 16)
			//grid here

			else
				write(1, "Error\n", 6);

	}
	else
		write(1, "Please Insert 16 Clues from number 1-4 only\n", 44);		
	return(0);
}

/*Filter and Turning the inputs into int */
int		checkinput(int *input, char *argv)
{
	int i;
	int j;
	i = 0;
	j = 0;

if (checknum(argv) == '1')
{
	while(argv[i])
	{
		if((argv[i] >= '1' && argv[i] <= '4') && (argv[i + 1] == ' ' || 	
					argv[i + 1] == '0') && (argv[i - 1] == ' '))
		{	
				input[j] = (argv[i] - '0');
				j++;
				i++;
		}		
		else
			 return(0);		
		
	}
		input[j] = '\0';
		return(0);
	}
	return (0);
}

/*Rejecting input that have too much 4 or 1*/
int		checknum(char *input)
{
	int i;
	int num;

	i = 0;
	num = 0;
	while(input[i])
	{
			if(input[i] == '4')
				num++;
		i++;
	}
			if (num > 2)
				return(0);
	i = 0;
	num = 0;
	while(input[i])
	{
		if(input[i] == '1')
			num++;
		i++;
	}
		if (num > 3)
			return(0);
		return(1);
}
