extern "C" {
	#include <libft.h>
}
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
#define ASSERT(R) { if (!(R)) {\
		printf("On line %i: KO\n", __LINE__);	}\
}

#define EQ(X, Y) { if ((Y) != (X)) { \
	cout << "Error: expected [" << (X) << "] got [" << (Y)  << "]\n"; \
	printf("On line %i: KO\n", __LINE__); } \
} 
int 	main()
{
	//
	ASSERT(ft_islower('a' - 1) == 0);
	ASSERT(ft_islower('a') == 1);
	ASSERT(ft_islower('z') == 1);
	ASSERT(ft_islower('A') == 0);
	ASSERT(ft_islower('A') == 0);
	//
	ASSERT(ft_isupper('a' - 1) == 0);
	ASSERT(ft_isupper('a') == 0);
	ASSERT(ft_isupper('z') == 0);
	ASSERT(ft_isupper('A') == 1);
	ASSERT(ft_isupper('A') == 1);
	//
	ASSERT(ft_isalpha('a' - 1) == 0);
	ASSERT(ft_isalpha('a') == 1);
	ASSERT(ft_isalpha('z') == 1);
	ASSERT(ft_isalpha('A') == 1);
	ASSERT(ft_isalpha('A') == 1);
	ASSERT(ft_isalpha('a' - 1) == 0);
	ASSERT(ft_isalpha('a') == 1);
	ASSERT(ft_isalpha('z') == 1);
	ASSERT(ft_isalpha('A') == 1);
	ASSERT(ft_isalpha('A') == 1);
	//
	ASSERT(ft_isdigit('0' - 1) == 0);
	ASSERT(ft_isdigit('0') == 1);
	ASSERT(ft_isdigit('9') == 1);
	ASSERT(ft_isdigit('9'+ 1) == 0);
	//
	ASSERT(ft_isalnum('a' - 1) == 0);
	ASSERT(ft_isalnum('a') == 1);
	ASSERT(ft_isalnum('z') == 1);
	ASSERT(ft_isalnum('A') == 1);
	ASSERT(ft_isalnum('A') == 1);
	ASSERT(ft_isalnum('a' - 1) == 0);
	ASSERT(ft_isalnum('a') == 1);
	ASSERT(ft_isalnum('z') == 1);
	ASSERT(ft_isalnum('A') == 1);
	ASSERT(ft_isalnum('A') == 1);
	ASSERT(ft_isalnum('0' - 1) == 0);
	ASSERT(ft_isalnum('0') == 1);
	ASSERT(ft_isalnum('9') == 1);
	ASSERT(ft_isalnum('9'+ 1) == 0);
	//
	ASSERT(ft_isascii(-1) == 0);
	ASSERT(ft_isascii(1) == 1);
	ASSERT(ft_isascii(31) == 1);
	ASSERT(ft_isascii(128) == 0);
	//
	ASSERT(ft_isprint(' ' - 1) == 0);
	ASSERT(ft_isprint('#') == 1);
	ASSERT(ft_isprint('~' + 1) == 0);
	//
	ASSERT(ft_strlen("") == 0);
	ASSERT(ft_strlen("avion") == 5);
	ASSERT(ft_strlen("a") == 1);
	ASSERT(ft_strlen("42 lolilol") == 10);
	//
	char test[] = "42 lolilol";
	ft_memset(test, '4', 2);
	ASSERT(strcmp(test, "44 lolilol") == 0);
	ft_memset(test, 280, 2);
	ASSERT(strcmp(test, "\x18\x18 lolilol") == 0);
	//
	ft_bzero(test, 2);
	ASSERT(strcmp(test, "") == 0);
	//
	ft_memcpy(test, "\xff\x0\xff", 3);
	ASSERT(memcmp(test, "\xff\x0\xff", 3) == 0);
	//
	char test2[6];
	memcpy(test2, test, 6);
	memmove(test2, test2 + 1, 3);
	ft_memmove(test, test + 1, 3);
	EQ(memcmp(test, test2, 3), 0);
	//
	*(test - 1) = 0;
	*(test2 - 1) = 0;
	//printf("- GOT:\t\t%i %i %i %i %i\n", *(test - 1) , test[0], test[1], test[2], test[3]);
	//printf("- EXCPECTED:\t%i %i %i %i %i\n", *(test2 - 1), test2[0], test2[1], test2[2], test2[3]);
	memcpy(test2, test, 6);
	memmove(test2, test2 - 1, 4);
	ft_memmove(test, test - 1, 4);
	EQ(memcmp(test, test2, 4), 0);

	//printf("- GOT:\t\t%i %i %i %i %i\n", *(test - 1) , test[0], test[1], test[2], test[3]);
	//printf("- EXPECTED:\t%i %i %i %i %i\n", *(test2 - 1), test2[0], test2[1], test2[2], test2[3]);

	char dstt[] 	= "HELLO \x0 THERE\n";
	char dstt2[] 	= "HELLO \x0 THERE\n";

	char srcc[] = "42";

	EQ( strlcpy(dstt, srcc, 0), ft_strlcpy(dstt2, srcc, 0));
	EQ(0, memcmp(dstt, dstt2, 14));
	
	EQ(strlcpy(dstt, srcc, 1), ft_strlcpy(dstt2, srcc, 1));
	EQ(0, memcmp(dstt, dstt2, 14));

	EQ(strlcpy(dstt, srcc, 2), ft_strlcpy(dstt2, srcc, 2))
	EQ(0, memcmp(dstt2, dstt2, 14));


	char srccc[] = "";

	EQ( strlcpy(dstt, srccc, 0), ft_strlcpy(dstt2, srccc, 0));
	EQ(0, memcmp(dstt, dstt2, 14));
	
	EQ(strlcpy(dstt, srccc, 1), ft_strlcpy(dstt2, srccc, 1));
	EQ(0, memcmp(dstt, dstt2, 14));

	EQ(strlcpy(dstt, srccc, 2), ft_strlcpy(dstt2, srccc, 2))
	EQ(0, memcmp(dstt2, dstt2, 14));



	char dszz[] 	= "HELLO \x0 THERE\n";
	char dszz2[] 	= "HELLO \x0 THERE\n";


	EQ( strlcat(dszz, srcc, 0), ft_strlcat(dszz2, srcc, 0));
	EQ(0, memcmp(dszz, dszz2, 14));
	
	EQ(strlcat(dszz, srcc, 1), ft_strlcat(dszz2, srcc, 1));
	EQ(0, memcmp(dszz, dszz2, 14));

	EQ(strlcat(dszz, srcc, 2), ft_strlcat(dszz2, srcc, 2))
	EQ(0, memcmp(dszz2, dszz2, 14));


	EQ( strlcat(dszz, srccc, 0), ft_strlcat(dszz2, srccc, 0));
	EQ(0, memcmp(dszz, dszz2, 14));
	
	EQ(strlcat(dszz, srccc, 1), ft_strlcat(dszz2, srccc, 1));
	EQ(0, memcmp(dszz, dszz2, 14));

	EQ(strlcat(dszz, srccc, 2), ft_strlcat(dszz2, srccc, 2))
	EQ(0, memcmp(dszz2, dszz2, 14));

	//
	//
	EQ(tolower('A'), ft_tolower('A'));
	EQ(tolower('q'), ft_tolower('q'));
	EQ(tolower('.'), ft_tolower('.'));
	EQ(tolower('A' - 1), ft_tolower('A' - 1));
	EQ(tolower('Z' + 1), ft_tolower('Z' + 1));

	//
	EQ(toupper('a'), ft_toupper('a'));
	EQ(toupper('Q'), ft_toupper('Q'));
	EQ(toupper('.'), ft_toupper('.'));
	EQ(toupper('a' - 1), ft_toupper('a' - 1));
	EQ(toupper('z' + 1), ft_toupper('z' + 1));

	char needle[] = "needle";
	EQ(strchr(needle, 'l'), ft_strchr(needle, 'l'));
	EQ(strchr(needle, 'n'), ft_strchr(needle, 'n'));
	EQ(strchr(needle, 'q'), ft_strchr(needle, 'q'));

	EQ( (unsigned long long) strchr(needle, 0), (unsigned long long) ft_strchr(needle, 0));


	EQ(strrchr(needle, 'l'), ft_strrchr(needle, 'l'));
	EQ(strchr(needle, 'n'), ft_strrchr(needle, 'n'));
	EQ(strrchr(needle, 'q'), ft_strrchr(needle, 'q'));

	EQ( (unsigned long long) strrchr(needle, 0), (unsigned long long) ft_strrchr(needle, 0));


	//
	
	EQ(strncmp("hello42", "hello22", 2), ft_strncmp("hello42", "hello22", 2));
	EQ(strncmp("hello42", "hello22", 7) > 0, ft_strncmp("hello42", "hello22", 7) > 0);
	EQ(strncmp("hello22", "hello42", 7) < 0, ft_strncmp("hello22", "hello42", 7) < 0);
	EQ(strncmp("hello42", "0hello22", 0), ft_strncmp("hello42", "0hello22", 0));


	char t[] = "\xff\0dawdawda\xfe\xfe\xff";

	EQ(memchr(t, '\xfe', 16), ft_memchr(t, '\xfe', 16));
	EQ(memchr(t, 'z', 6), ft_memchr(t, 'z', 6));
	EQ(memchr(t, 0, 6), ft_memchr(t, 0, 6));

	char s1[] = "\xff\0\xfe 5245";
	EQ(memcmp(s1, s1, 8), ft_memcmp(s1, s1, 8));
	char s2[] = "\xff\0\xfe 5246";
	EQ(memcmp(s1, s2, 8) < 0, ft_memcmp(s1, s2, 8) < 0);
	char s3[] = "\xff\0\xfe 5243";
	EQ(memcmp(s1, s2, 8) > 0, ft_memcmp(s1, s1, 8) > 0);


    const char *largestring = "Foo Bar Baz";
    const char *smallstring = "Bar";
    char *ptr;

    EQ((unsigned long long)strnstr(largestring, smallstring, 4), (unsigned long long)ft_strnstr(largestring, smallstring, 4));
    EQ((unsigned long long) strnstr(largestring, smallstring, 12), (unsigned long long)ft_strnstr(largestring, smallstring, 12));

    const char *smallstring2 = "Bar2";

    EQ((unsigned long long)strnstr(largestring, smallstring2, 12), (unsigned long long)ft_strnstr(largestring, smallstring2, 12));

#include <limits.h>
#include <stdlib.h>
	EQ(atoi("2147483647"), ft_atoi("2147483647"));
	EQ(atoi(" \t\v\f\r -2147483648"), ft_atoi(" \t\v\f\r -2147483648"));
	EQ(atoi("0"), ft_atoi("0"));
	EQ(atoi("-42"), ft_atoi("-42"));
	EQ(atoi("42"), ft_atoi("42"));

	void* r1 = calloc(2, 3);
	void* r2 = calloc(2, 3);
	EQ(0, memcmp(r1, r2, 2 * 3))

	r1 = calloc(0, 0);
	r2 = calloc(0, 0);
	EQ(0, memcmp(r1, r2, 0));

	char *a = strdup("avion");
	char *b = ft_strdup(a);
	EQ(0, strcmp(a, b));
	EQ(0, a == b);
	
	a = strdup("");
	b = ft_strdup(a);
	EQ(0, strcmp(a, b));
	EQ(0, a == b);
}
