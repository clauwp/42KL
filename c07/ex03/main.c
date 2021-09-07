#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(int size, char **strs, char *sep);

int main(void)
{
	char	*s1 = "";
	char	*s2 = "";
	char	*s3 = "";
	char	*sep = "0";
	char	*strs[3] = {s1, s2, s3};

	char	*combined = ft_strjoin(2, strs, sep);
	printf("%s\n", combined);
	free(combined);
	//free(combined);
	printf("null terminated? %d\n", combined[28] == '\0');
}
