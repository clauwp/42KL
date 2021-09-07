#include <unistd.h>
#include <stdio.h>

char	*ft_putnbr(int nb);
char	converter(int a);
void	ft_print_combn(int n);
int	minnum(int n);
int	maxnum(int n);
char    valid(char  prChar[], int n);
int	power(int a, int b);

int	main(void)
{
	ft_print_combn(4);
}

void ft_print_combn(int n)
{
	int	prnbr;
	int	prMaxNum;
	char *prChar;
	int	c;
	char	val;

	c = n-1;
	prnbr = minnum(n);
	printf("%d\n",prnbr);
	prMaxNum = maxnum(n);
	printf("%d\n",prMaxNum);
	while (prnbr <= prMaxNum)
	{
		prChar = ft_putnbr(prnbr);
		if (prnbr < (10^n))
		{
			while (c > 0)
			{
				prChar[c] = prChar[c-1];
				c--;
			}
			c = n;
			prChar[0]='0';
		}
		val = valid(prChar,n);
		if (val == 'y')
		{
			write(1,prChar,n);
		}
		prnbr++;
	}
}

char	valid(char	prChar[], int n)
{
	int	count;
	char	indicator;

	count =n-1;
	indicator ='y';
	while (count > 0)
	{
		if (prChar[count] < prChar[count-1])
		{
			indicator = 'n';
		}
		count--;
	}
	return (indicator);
}			

int	minnum(int n)
{
	int rtrnum;
	int	counter;

	rtrnum =n-1;
	counter =1;

	while (counter < n-2)
	{
		counter++;
	}

	while (counter > 0)
	{
		rtrnum = rtrnum + (counter*power(10,counter));
		counter--;
	}
	return (rtrnum);
}

int	maxnum(int n)
{
	int	rtrnum;
	int	counter;
	int	num;

	counter = 1;
	num = 8;
	rtrnum = 9;

	while (counter < n)
	{
		rtrnum = (num*(power(10, counter)))+rtrnum;
		counter++;
	}
	return (rtrnum);
}

int	power(int a, int b)
{
	int	counter;

	counter = 0;
	while (counter < b)
	{
		a = a*a;
		counter++;
	}
	return (a);
}

char	*ft_putnbr(int nb)
{
	char	arr[10];
	int	rem;
	int	counter;
	char	rtArray[10];
	
	counter = 0;

	while (nb > 0)
	{
		rem = nb % 10;
		arr[counter] = rem;
		nb = nb / 10;
		counter++;
	}

	while (counter > 0)
	{
		char ch;
		int	temp;

		temp =0;
		ch = converter(arr[counter-1]);
		rtArray[temp] = ch;
		counter--;
		temp++;
	}
	return (rtArray);
}

char	converter(int a)
{
	char	ch;
	ch = a+'0';
	return (ch);
}

