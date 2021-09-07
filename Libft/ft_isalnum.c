int	ft_isalpha(char c);
int	ft_isdigit(char c);

int	ft_isalnum(char c){
	if (ft_isalpha(c) | ft_isdigit(c))
		return (1);
	return (0);
}

int	ft_isalpha(char c){
	if ((c >= 'A' && c <='Z') | (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

int	ft_isdigit(char c){
	 if (c>='0' && c <= '9')
		 return (1); 
	 return (0);
}
