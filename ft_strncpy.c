char	*ft_strncpy(char *dest,const char *src, size_t n)
{
	i = 0;
	while (i < n && src != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i <= n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
