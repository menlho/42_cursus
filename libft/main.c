#include "libft.h"
#include <stdio.h>

int main()
{
    char    a1 = 'a';
    char    a2 = 'z';
    char    a3 = '0';
    char    a4 = '9';
    char    a5 = 'A';
    char    a6 = 'Z';
    char    a7 = '{';
    char    a8 = 13;

    char    *str1 = "Hello all";
    char    *str2 = "";
    
    printf(" \
            ------TESTS LIBFT------ \n \
            isalnum\n \
            %c : %d\n \
            %c : %d\n \
            %c : %d\n \
            %c : %d\n \
            %c : %d\n \
            %c : %d\n \
            %c : %d\n", a1 , ft_isalnum(a1), \
                        a2, ft_isalnum(a2), \
                        a3, ft_isalnum(a3), \
                        a4, ft_isalnum(a4), \
                        a5, ft_isalnum(a5), \
                        a6, ft_isalnum(a6), \
                        a7, ft_isalnum(a7));
    printf("\n \
            isalpha\n \
            %c : %d\n \
            %c : %d\n \
            %c : %d\n \
            %c : %d\n \
            %c : %d\n \
            %c : %d\n \
            %c : %d\n", a1 , ft_isalpha(a1), \
                        a2, ft_isalpha(a2), \
                        a3, ft_isalpha(a3), \
                        a4, ft_isalpha(a4), \
                        a5, ft_isalpha(a5), \
                        a6, ft_isalpha(a6), \
                        a7, ft_isalpha(a7));
    printf("\n \
            isdigit\n \
            %c : %d\n \
            %c : %d\n \
            %c : %d\n \
            %c : %d\n \
            %c : %d\n \
            %c : %d\n \
            %c : %d\n", a1 , ft_isdigit(a1), \
                        a2, ft_isdigit(a2), \
                        a3, ft_isdigit(a3), \
                        a4, ft_isdigit(a4), \
                        a5, ft_isdigit(a5), \
                        a6, ft_isdigit(a6), \
                        a7, ft_isdigit(a7));
    printf("\n \
            strlen\n \
            len(%s) : %lu\n \
            len(%s): %lu\n", str1, ft_strlen(str1), \
                            str2, ft_strlen(str2));
    return (0);
}