/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycoutena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 13:08:16 by ycoutena          #+#    #+#             */
/*   Updated: 2018/02/12 12:11:29 by ycoutena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libfts.h" 

int main(int ac, char **av)
{
	char *s;
	char *t;

	s = (char *)malloc(sizeof(char)+1 *4);
	t = (char *)malloc(sizeof(char)+1 *4);
	for (int j = 0; j < 4; j++)
	{
		s[j] = '1';
		t[j] = '1';
	}
	printf("FUNCTION BZERO \n");
	printf("ft_bzero :\n");
	printf("avant %s \n", s);
	ft_bzero(s , 2);
	printf("apres %s c %c \n", s, s[3]);
	printf("bzero :\n");
	printf("avant %s \n", t);
	bzero(t , 2);
	printf("apres %s c %c \n", t, t[3]);
	printf("------------------------- \n");

	printf("FUNCTION ISALPHA \n");
	char a = '[';
	printf("ft_isalpha\n");
	printf("%c is alpha %d\n", a, ft_isalpha(a));
	printf("isalpha\n");
	printf("%c is alpha %d\n", a, isalpha(a));
	char b = 'a';
	printf("ft_isalpha\n");
	printf("%c is alpha %d\n", b, ft_isalpha(b));
	printf("isalpha\n");
	printf("%c is alpha %d\n", b, isalpha(b));
	char z = 'z';
	printf("ft_isalpha\n");
	printf("%c is alpha %d\n", z, ft_isalpha(z));
	printf("isalpha\n");
	printf("%c is alpha %d\n", z, isalpha(z));
	char A = 'A';
	printf("ft_isalpha\n");
	printf("%c is alpha %d\n", A, ft_isalpha(A));
	printf("isalpha\n");
	printf("%c is alpha %d\n", A, isalpha(A));
	char Z = 'Z';
	printf("ft_isalpha\n");
	printf("%c is alpha %d\n", Z, ft_isalpha(Z));
	printf("isalpha\n");
	printf("%c is alpha %d\n", Z, isalpha(Z));
	printf("------------------------- \n");

	printf("FUNCTION ISDIGIT \n");
	char num = '0'-1;
	printf("ft_isdigit\n");
	printf("%c is digit %d\n", num, ft_isdigit(num));
	printf("isdigit\n");
	printf("%c is digit %d\n", num, isdigit(num));
	char num1 = '0';
	printf("ft_isdigit\n");
	printf("%c is digit %d\n", num1, ft_isdigit(num1));
	printf("isdigit\n");
	printf("%c is digit %d\n", num1, isdigit(num1));
	char num2 = '9';
	printf("ft_isdigit\n");
	printf("%c is digit %d\n", num2, ft_isdigit(num2));
	printf("isdigit\n");
	printf("%c is digit %d\n", num2, isdigit(num2));
	char num3 = '9'+1;
	printf("ft_isdigit\n");
	printf("%c is digit %d\n", num3, ft_isdigit(num3));
	printf("isdigit\n");
	printf("%c is digit %d\n", num3, isdigit(num3));
	printf("------------------------- \n");
	
	
	printf("FUNCTION ISALNUM \n");
	char al = ':';
	printf("ft_isalnum\n");
	printf("%c is alnum %d\n", al, ft_isalnum(al));
	printf("isalnum\n");
	printf("%c is alnum %d\n", al, isalnum(al));
	al = 'a';
	printf("ft_isalnum\n");
	printf("%c is alnum %d\n", al, ft_isalnum(al));
	printf("isalnum\n");
	printf("%c is alnum %d\n", al, isalnum(al));
	al = 'a'-1;
	printf("ft_isalnum\n");
	printf("%c is alnum %d\n", al, ft_isalnum(al));
	printf("isalnum\n");
	printf("%c is alnum %d\n", al, isalnum(al));
	al = 'Z';
	printf("ft_isalnum\n");
	printf("%c is alnum %d\n", al, ft_isalnum(al));
	printf("isalnum\n");
	printf("%c is alnum %d\n", al, isalnum(al));
	printf("------------------------- \n");

	printf("FUNCTION ISASCII \n");
	char as = 128;
	printf("ft_isascii\n");
	printf("%c is ascii %d\n", as, ft_isascii(as));
	printf("isascii\n");
	printf("%c is ascii %d\n", as, isascii(as));
	as = 1;
	printf("ft_isascii\n");
	printf("%c is ascii %d\n", as, ft_isascii(as));
	printf("isascii\n");
	printf("%c is ascii %d\n", as, isascii(as));
	as = 50;
	printf("ft_isascii\n");
	printf("%c is ascii %d\n", as, ft_isascii(as));
	printf("isascii\n");
	printf("%c is ascii %d\n", as, isascii(as));
	printf("------------------------- \n");

	printf("FUNCTION ISPRINT \n");
	char ap = '\n';
	printf("ft_isprint\n");
	printf("%c is print %d\n", ap, ft_isprint(ap));
	printf("isprint\n");
	printf("%c is print %d\n", ap, isprint(ap));
	ap = 'h';
	printf("ft_isprint\n");
	printf("%c is print %d\n", ap, ft_isprint(ap));
	printf("isprint\n");
	printf("%c is print %d\n", ap, isprint(ap));
	ap = 8;
	printf("ft_isprint\n");
	printf("%c is print %d\n", ap, ft_isprint(ap));
	printf("isprint\n");
	printf("%c is print %d\n", ap, isprint(ap));
	printf("------------------------- \n");

	printf("FUNCTION TOUPPER \n");
	char tp = 'z'+1;
	printf("ft_toupper\n");
	printf("%c toupper %c\n", tp, ft_toupper(tp));
	printf("toupper\n");
	printf("%c toupper %c\n", tp, toupper(tp));
	tp = 'z';
	printf("ft_toupper\n");
	printf("%c toupper %c\n", tp, ft_toupper(tp));
	printf("toupper\n");
	printf("%c toupper %c\n", tp, toupper(tp));
	tp = 'a';
	printf("ft_toupper\n");
	printf("%c toupper %c\n", tp, ft_toupper(tp));
	printf("toupper\n");
	printf("%c toupper %c\n", tp, toupper(tp));
	tp = 'a'-1;
	printf("ft_toupper\n");
	printf("%c toupper %c\n", tp, ft_toupper(tp));
	printf("toupper\n");
	printf("%c toupper %c\n", tp, toupper(tp));
	tp = 'G';
	printf("ft_toupper\n");
	printf("%c toupper %c\n", tp, ft_toupper(tp));
	printf("toupper\n");
	printf("%c toupper %c\n", tp, toupper(tp));
	printf("------------------------- \n");
	
	printf("FUNCTION TOLOWER \n");
	char tl = 'Z'-1;
	printf("ft_tolower\n");
	printf("%c tolower %c\n", tl, ft_tolower(tl));
	printf("tolower\n");
	printf("%c tolower %c\n", tl, tolower(tl));
	tl = 'Z';
	printf("ft_tolower\n");
	printf("%c tolower %c\n", tl, ft_tolower(tl));
	printf("tolower\n");
	printf("%c tolower %c\n", tl, tolower(tl));
	tl = 'A';
	printf("ft_tolower\n");
	printf("%c tolower %c\n", tl, ft_tolower(tl));
	printf("tolower\n");
	printf("%c tolower %c\n", tl, tolower(tl));
	tl = 'A'-1;
	printf("ft_tolower\n");
	printf("%c tolower %c\n", tl, ft_tolower(tl));
	printf("tolower\n");
	printf("%c tolower %c\n", tl, tolower(tl));
	tl = 'H';
	printf("ft_tolower\n");
	printf("%c tolower %c\n", tl, ft_tolower(tl));
	printf("tolower\n");
	printf("%c tolower %c\n", tl, tolower(tl));
	printf("------------------------- \n");
	
	printf("FUNCTION PUTS \n");
	int l;
	int l2;
	write(1,"ft_puts : ", 10);
	l = ft_puts("42");
	printf("puts : ");
	l2 = puts("42");
	printf("test %d, %d\n", l, l2);
	write(1,"ft_puts : ", 10);
	l = ft_puts("");
	printf("puts : ");
	l2 = puts("");
	printf("test %d, %d\n", l, l2);
	write(1,"ft_puts : ", 10);
	l = ft_puts(NULL);
	printf("puts : ");
	l2 = puts(NULL);
	printf("test %d, %d\n", l, l2);
	write(1,"ft_puts : ", 10);
	l = ft_puts("0");
	printf("puts : ");
	l2 = puts("0");
	printf("test %d, %d\n", l, l2);
	printf("------------------------- \n");
	
	printf("FUNCTION STRLEN \n");
	char *str = "test";
	printf("ft_strlen\n");
	printf("%s %ld\n", str, ft_strlen(str));
	printf("strlen\n");
	printf("%s %ld\n", str, strlen(str));
	str = "";
	printf("ft_strlen\n");
	printf("%s %ld\n", str, ft_strlen(str));
	printf("strlen\n");
	printf("%s %ld\n", str, strlen(str));
	printf("------------------------- \n");
	
	printf("FUNCTION STRCAT \n");
	char cat[50] = "Bonjour ";
	char cat2[50] = " test";
	char *string;
	char cat3[50] = "Bonjour ";
	char cat4[50] = " test";
	int ret;
	printf("ft_puts : \n");
	 string = ft_strcat(cat, cat2);
	printf(" ft_puts ret -> %s\n", string);
	printf("puts : \n");
	s = strcat(cat3, cat4);
	printf(" ft_puts ret -> %s\n", string);
	printf("------------------------- \n");

	printf("FUNCTION MEMSET \n");
	char mem[50] = "test";
	char mem2[50] = "test";
	printf("ft_memeset->  %s\n", ft_memset(mem, 'A',1));
	printf("memeset-> %s\n", memset(mem2, 'A', 1));
	printf("ft_memeset->  %s\n", ft_memset(mem, 'b',3));
	printf("memeset-> %s\n", memset(mem2, 'b', 3));
	printf("ft_memeset->  %s\n", ft_memset(mem, 'c',12));
	printf("memeset-> %s\n", memset(mem2, 'c', 12));
	printf("------------------------- \n");

	printf("FUNCTION MEMCPY \n");
	char a1[50] = "";
	char b1[50] = "test";
	char c1[50] = "";
	char d1[50] = "test";
	printf("ft_memcpy-> %s\n",ft_memcpy(b1, "abcde", 0));
	printf("memcpy-> %s\n",memcpy(d1, "abcde", 0));
	printf("ft_memcpy-> %s\n",ft_memcpy(b1, "abcde", 2));
	printf("memcpy-> %s\n",memcpy(d1, "abcde", 2));
	printf("ft_memcpy-> %s\n",ft_memcpy(b1, "abcde", 12));
	printf("memcpy-> %s\n",memcpy(d1, "abcde", 12));
	printf("ft_memcpy-> %s\n",ft_memcpy(a1, "abcde", 1));
	printf("memcpy-> %s\n",memcpy(c1, "abcde", 1));
	printf("------------------------- \n");

	printf("FUNCTION STRDUP \n");
	char *dup;
	char *dup1;
	dup = ft_strdup("test ft_strdup");
	printf("ft_strdup => %s %c \n", dup, dup[2]);
	dup1 = strdup("test strdup");
	printf("strdup => %s %c\n", dup1, dup1[2]);
	free(dup);
	free(dup1);
	dup = ft_strdup("totTto");
	printf("ft_strdup => %s %c \n", dup, dup[3]);
	dup1 = strdup("totTto");
	printf("strdup => %s %c\n", dup1, dup1[3]);
	free(dup);
	free(dup1);
	printf("------------------------- \n");

	printf("FUNCTION CAT \n");
	ft_cat(open("./t.txt", O_RDONLY));
	ft_cat(0);
	ft_cat(open(__FILE__, O_RDONLY));
	ft_cat(open(av[0], O_RDONLY));
	ft_cat(-42);
	printf("\n------------------------- \n");

	printf("FUNCTION ISSPACE \n");
	int sp = 14;
	printf("ft_isspace %d \n", ft_isspace(sp));
	printf("isspace %d \n", isspace(sp));
	sp = ' ';
	printf("ft_isspace %d \n", ft_isspace(sp));
	printf("isspace %d \n", isspace(sp));
	sp = 9;
	printf("ft_isspace %d \n", ft_isspace(sp));
	printf("isspace %d \n", isspace(sp));
	sp = 101;
	printf("ft_isspace %d \n", ft_isspace(sp));
	printf("isspace %d \n", isspace(sp));
	printf("\n------------------------- \n");
	
	
	printf("FUNCTION STRCHR \n");
	char *st = "bon anniversaireX";
	int c = 'b';
	printf("ft_strchr %c, %s \n", c, ft_strchr(st, c));
	printf("strchr %c, %s \n",c, strchr(st, c));
	c = 'X';
	printf("ft_strchr %c, %s \n",c, ft_strchr(st, c));
	printf("strchr %c, %s \n",c, strchr(st, c));
	c = 'i';
	printf("ft_strchr %c, %s \n",c, ft_strchr(st, c));
	printf("strchr %c, %s \n",c, strchr(st, c));
	c = 'Z';
	printf("ft_strchr %c, %s \n",c, ft_strchr(st, c));
	printf("strchr %c,%s \n",c, strchr(st, c));
	c = 0;
	printf("ft_strchr %c, %s \n",c, ft_strchr(st, c));
	printf("strchr %c, %s \n",c, strchr(st, c));
	printf("------------------------- \n");

	printf("FUNCTION STRRCHR \n");
	s = "bon anniversaireX";
	c = 'b';
	printf("ft_strrchr %c, %s \n",c, ft_strrchr(s, c));
	printf("strrchr %c, %s \n",c, strrchr(s, c));
	c = 'X';
	printf("ft_strrchr %c, %s \n",c, ft_strrchr(s, c));
	printf("strrchr %c, %s \n",c, strrchr(s, c));
	c = 'i';
	printf("ft_strrchr %c, %s \n",c, ft_strrchr(s, c));
	printf("strrchr %c, %s \n",c, strrchr(s, c));
	c = 'Z';
	printf("ft_strrchr %c, %s \n",c, ft_strrchr(s, c));
	printf("strrchr %c, %s \n",c, strrchr(s, c));
	c = 0;
	printf("ft_strrchr %c, %s \n",c, ft_strchr(st, c));
	printf("strrchr %c, %s \n",c, strchr(st, c));
	return (0);
}

