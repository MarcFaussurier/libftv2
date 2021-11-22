#include <libft.h>

int 		ft_atoi(const char *str)
{
	int		o;
	int		sign;

	o = 0;
	sign = 1;
	while (ft_isspace(*str))
		str += 1;
	if (*str == '+')
	{
		str += 1;
	}
	else if (*str == '-')
	{
		sign = -1;
		str += 1;
	}
	while (ft_isdigit(*str))
	{
		o *= 10;
		o += *str - '0';
		str += 1;
	}
	return (o * sign);
}
