
char	*ft_strrchr(const char *s, int c)
{
	char	*r;

	r = 0;
	while (1) 
	{
		if (*s == c)
			r = ((char*)s);
		if (!*s)
			break ;
		s += 1;
	}
	return (r);
}
