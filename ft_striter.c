
void	ft_striter(char *s, void (*f)(char *))
{
	unsigned int i;

	i = 0;
	while (s1[i])
		(*f)(&s[i]);
		i++;
}
