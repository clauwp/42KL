#include <string.h>

void *ft_print_memory(void *addr, unsigned int size);

int main(void)
{
	char	*str = "hello how are you \001\02 i dont know what am i doing lol";
	void *ret = ft_print_memory(str,strlen(str));
	ret = 0;
}
