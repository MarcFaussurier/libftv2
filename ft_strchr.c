char	*ft_strchr(const char *s, int c)
{
	while (1) 
	{
		if (*s == c)
			return ((char*)s);
		if (!*s)
			break ;
		s += 1;
	}
	return (0);
}
