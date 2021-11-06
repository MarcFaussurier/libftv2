#include <libft.h>
#include <stdio.h>
#include <string.h>

#define TEST(R) { \
	if (!(R))	\
		printf("LINE %i: KO\n", __LINE__); \
}

int 	main()
{
	//
	TEST(ft_islower('a' - 1) == 0);
	TEST(ft_islower('a') == 1);
	TEST(ft_islower('z') == 1);
	TEST(ft_islower('A') == 0);
	TEST(ft_islower('A') == 0);
	//
	TEST(ft_isupper('a' - 1) == 0);
	TEST(ft_isupper('a') == 0);
	TEST(ft_isupper('z') == 0);
	TEST(ft_isupper('A') == 1);
	TEST(ft_isupper('A') == 1);
	//
	TEST(ft_isalpha('a' - 1) == 0);
	TEST(ft_isalpha('a') == 1);
	TEST(ft_isalpha('z') == 1);
	TEST(ft_isalpha('A') == 1);
	TEST(ft_isalpha('A') == 1);
	TEST(ft_isalpha('a' - 1) == 0);
	TEST(ft_isalpha('a') == 1);
	TEST(ft_isalpha('z') == 1);
	TEST(ft_isalpha('A') == 1);
	TEST(ft_isalpha('A') == 1);
	//
	TEST(ft_isdigit('0' - 1) == 0);
	TEST(ft_isdigit('0') == 1);
	TEST(ft_isdigit('9') == 1);
	TEST(ft_isdigit('9'+ 1) == 0);
	//
	TEST(ft_isalnum('a' - 1) == 0);
	TEST(ft_isalnum('a') == 1);
	TEST(ft_isalnum('z') == 1);
	TEST(ft_isalnum('A') == 1);
	TEST(ft_isalnum('A') == 1);
	TEST(ft_isalnum('a' - 1) == 0);
	TEST(ft_isalnum('a') == 1);
	TEST(ft_isalnum('z') == 1);
	TEST(ft_isalnum('A') == 1);
	TEST(ft_isalnum('A') == 1);
	TEST(ft_isalnum('0' - 1) == 0);
	TEST(ft_isalnum('0') == 1);
	TEST(ft_isalnum('9') == 1);
	TEST(ft_isalnum('9'+ 1) == 0);
	//
	TEST(ft_isascii(-1) == 0);
	TEST(ft_isascii(1) == 1);
	TEST(ft_isascii(31) == 1);
	TEST(ft_isascii(128) == 0);
	//
	TEST(ft_isprint(' ' - 1) == 0);
	TEST(ft_isprint('#') == 1);
	TEST(ft_isprint('~' + 1) == 0);
	//
	TEST(ft_strlen("") == 0);
	TEST(ft_strlen("avion") == 5);
	TEST(ft_strlen("a") == 1);
	TEST(ft_strlen("42 lolilol") == 10);
	//
	char test[] = "42 lolilol";
	ft_memset(test, '4', 2);
	TEST(strcmp(test, "44 lolilol") == 0);
	ft_memset(test, 280, 2);
	TEST(strcmp(test, "\x18\x18 lolilol") == 0);
	//
	ft_bzero(test, 2);
	TEST(strcmp(test, "") == 0);
	//
	ft_memcpy(test, "\xff\x0\xff", 3);
	TEST(memcmp(test, "\xff\x0\xff", 3) == 0);
	//
	ft_memmove(test, test + 1, 3);
	TEST(memcmp(test, "\xff\x0\xff", 3) == 0);

}
