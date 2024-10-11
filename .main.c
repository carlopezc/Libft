/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:55:10 by carlopez          #+#    #+#             */
/*   Updated: 2024/10/03 12:17:24 by carlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <ctype.h>

char	f(unsigned int i, char c)
{
	i = 0;
	c -= 32 + i;
	return (c);
}

void	f2(unsigned int i, char *c)
{
	i = 0;
	*c -= 32 + i;
}

void	del(void *c)
{
	c = NULL;
	free(c);
}

void	f_iter(void *c)
{
	int	i;
	char	*cc;

	if(!c)
		return ;
	cc = (char *)c;
	i = 0;
	while (cc[i])
	{
		cc[i] -= 32;
		i++;
	}

}
void	*f_map(void *c)
{
	int	i;
	char	*cc;

	if(!c)
		return (NULL) ;
	cc = (char *)c;
	i = 0;
	while (cc[i])
	{
		cc[i] -= 32;
		i++;
	}
	return (c);

}

int	main(void)
{

	//Prueba de isalpha
	printf("PRUEBAS DE ISALPHA\n");
	printf("Mi ft_isalpha: %d\n", ft_isalpha('c'));
	printf("El original isalpha: %d\n", isalpha('c'));
	printf("\n");

	//Prueba de isdigit	
	printf("PRUEBAS DE ISDIGIT\n");
	printf("Mi ft_isdigit: %d\n", ft_isdigit('c'));
	printf("El original: %d\n", isdigit('c'));

	printf("\n");

	//Prueba de isalnum	
	printf("PRUEBAS DE ISALNUM\n");
	printf("Mi ft_isalnum: %d\n", ft_isalnum('c'));
	printf("El original: %d\n", isalnum('c'));

	printf("\n");

	//Prueba de isascii
	printf("PRUEBAS DE ISASCII\n");
	printf("Mi ft_isascii: %d\n", ft_isascii('c'));
	printf("El original: %d\n", isascii('c'));

	printf("\n");

	//Prueba de isprint
	printf("PRUEBAS DE ISPRINT\n");
	printf("Mi ft_isprint: %d\n", ft_isprint('c'));
	printf("El original: %d\n", isprint('c'));

	printf("\n");

	//Prueba de strlen
	printf("PRUEBAS DE STRLEN\n");
	printf("Mi ft_strlen: %zu\n", ft_strlen("ertyuio"));
	printf("El original: %zu\n", strlen("ertyuio"));

	printf("\n");

	//Prueba de memset
	printf("PRUEBAS DE MEMSET\n");
	char dst_ft[] = "hola";
	char dst[] = "hola";
	printf("Mi ft_memset: %s\n", (char *)ft_memset(dst_ft, 'a', 4));
	printf("El original: %s\n", (char *)memset(dst, 'a', 4));

	printf("\n");

	//Prueba de bzero
	printf("PRUEBAS DE BZERO\n");
	char c[] = "solo esto";
	char p[] = "solo esto";
	ft_bzero(c, 4);
	ft_putstr_fd("Mi ft_bzero: ", 1);
	write (1, c, 10);
	printf("\n");
	bzero(p, 4);
	ft_putstr_fd("El original: ", 1);
	write (1, p, 10);

	printf("\n\n");

	//Prueba de memcpy
	printf("PRUEBAS DE MEMCPY\n");
	char dest_ft[] = "";
	char src_ft[] = "";
	char dest[] = "";
	char src[] = "";
	printf("Mi ft_memcpy: %s\n", (char *)ft_memcpy(dest_ft, src_ft, 4));
	// peta si compilas con flags printf("El original: %s\n", (char  *)memcpy(dest, src, 4));

	printf("\n");

	//Prueba de memmove
	printf("PRUEBAS DE MEMMOVE\n");
	char dest_ft2[] = "";
	char src_ft2[] = "holiiiiii";
	char dest2[] = "";
	char src2[] = "holiiiiii";
	printf("Mi ft_memmove: %s\n", (char *)ft_memmove(dest_ft2, src_ft2, 5));
	//peta si compilas con flags printf("El original: %s\n", (char  *)memmove(dest2, src2, 5));

	printf("\n");

	//Prueba de strlcpy
	printf("PRUEBAS DE STRLCPY\n");
	char dst_3[] = "";
	char src_3[] = "hola caracolaaaaa";
	printf("Mi ft_strlcpy: %zu\n", ft_strlcpy(dst_3, src_3, 5));
	printf("Dst ahora: %s\n", dst_3);

	printf("\n");

	//Prueba de strlcat
	printf("PRUEBAS DE STRLCAT\n");
	printf("Mi ft_strlcat: %zu\n", ft_strlcat(dst_3, src_3, 0));
	printf("Mi ft_strlcat: %zu\n", ft_strlcat(dst_3, src_3, 20));

	printf("\n");

	//Prueba de toupper
	printf("PRUEBAS DE TOUPPER\n");
	printf("Mi ft_toupper: %d\n", ft_toupper('C'));
	printf("El original: %d\n", toupper('C'));

	printf("\n");

	//Prueba de tolower
	printf("PRUEBAS DE TOLOWER\n");
	printf("Mi ft_tolower: %d\n", ft_tolower('C'));
	printf("El original: %d\n", tolower('C'));

	printf("\n");

	//Prueba de strchr
	printf("PRUEBAS DE STRCHR\n");
	printf("Mi ft_strchr: %s\n", ft_strchr("holi caracoli", 'l'));
	printf("El original: %s\n", strchr("holi caracoli", 'l'));

	printf("\n");

	//Prueba de strrchr
	printf("PRUEBAS DE STRRHR\n");
	printf("Mi ft_strrchr: %s\n", ft_strrchr("hola elena", 'e'));
	printf("El original: %s\n", strrchr("hola elena", 'e'));

	printf("\n");

	//Prueba strncmp
	printf("PRUEBAS DE STRNCMP\n");
	printf("Mi ft_strncmp: %d\n", ft_strncmp("hola", "h", 0));
	printf("El original: %d\n", strncmp("hola", "h", 0));

	printf("\n");

	//Prueba memchr
	printf("PRUEBAS DE MEMCHR\n");
	printf("Mi ft_memchr: %s\n",(char *)ft_memchr("", 'u', 2));
	printf("El original: %s\n", (char *)memchr("", 'u', 2));

	printf("\n");

	//Prueba memcmp
	printf("PRUEBA DE MEMCMP\n");
	printf("Mi ft_memcmp: %d\n", ft_memcmp("", "", 0));
	printf("El original: %d\n", memcmp("", "", 0));

	printf("\n");

	//Prueba de strnstr
	printf("PRUEBA DE STRNSTR\n");
	printf("Mi ft_strnstr: %s\n", ft_strnstr("", "lucas", 6));

	printf("\n");

	//Prueba de atoi
	printf("PRUEBA DE ATOI\n");
	printf("Mi ft_atoi: %d\n", ft_atoi("-+1234"));
	printf("El original: %d\n", atoi("-+1234"));

	printf("\n");

	//Prueba de calloc
	printf("PRUEBA DE CALLOC\n");
	printf("Mi ft_calloc: %s\n", (char *)ft_calloc(5, 1));
	printf("El original: %s\n", (char *)calloc(5, 1));

	printf("\n");

	//Prueba de strdup
	printf("PRUEBA DE STRDUP\n");
	const char s[] = "hola hola hola caracola";
	printf("Mi ft_strdup: %s\n", ft_strdup(s));
	printf("El original: %s\n", strdup(s));

	printf("\n");

	//Prueba de substr
	printf("PRUEBA DE SUBSTR\n");
	char const s_substr[] = "hola me llamo Lucas";
	printf("Mi ft_substr: %s\n", ft_substr(s_substr, 5, 14));
	printf("Mi ft_substr: %s\n", ft_substr(s_substr, 5, 8));

	printf("\n");

	//Prueba de strjoin
	printf("PRUEBA DE STRJOIN\n");
	char s1_strjoin[] = "hola ";
	char s2_strjoin[] = "caracola";
	char s1_strjoin2[] = "";
	char s2_strjoin2[] = "lucas";

	printf("Mi ft_strjoin: %s\n", ft_strjoin(s1_strjoin, s2_strjoin));
	printf("Mi ft_strjoin: %s\n", ft_strjoin(s1_strjoin2, s2_strjoin2));

	printf("\n");

	//Prueba de strtrim
	printf("PRUEBA DE STRTRIM\n");
	char s1_strtrim[] = "  hh    me llamo Lucas   hh   h ";
	char s1_strtrim2[] = "";
	char const set[] = " h";
	printf("Mi ft_strtrim: %s\n", ft_strtrim(s1_strtrim, set));
	printf("Mi ft_strtrim: %s\n", ft_strtrim(s1_strtrim2, set));

	printf("\n");

	//Prueba de split
	printf("PRUEBA DE SPLIT\n");
	const char s_split[] = "hola me llamo carlota";
	char **c_split;
	int	i;
	int	j;

	i = 0;
	j = 0;
	c_split = ft_split(s_split, ' ');
	printf("Mi ft_split: \n");
	while (c_split[j])
	{
		printf("%s\n", c_split[j]);
		j++;
	}

	printf("\n");

	//Prueba de itoa
	printf("PRUEBA DE ITOA\n");
	printf("Mi ft_itoa: %s\n", ft_itoa(-123456));
	printf("Mi ft_itoa: %s\n", ft_itoa(0));
	printf("Mi ft_itoa: %s\n", ft_itoa(12345678));

	printf("\n");

	//Prueba de strmapi
	printf("PRUEBA DE STRMAPI\n");
	char s_strmapi[] = "hola caracola";
	printf("Mi ft_strmapi: %s\n", ft_strmapi(s_strmapi, f));
	printf("Mi ft_strmapi: %s\n", ft_strmapi(s_strmapi, NULL));

	printf("\n");

	//Prueba de striteri
	printf("PRUEBA DE STRITERI\n");
	char s_striteri[] = "holaaaalucas";
	ft_striteri(s_striteri, f2);
	printf("Mi ft_striteri: %s\n", s_striteri);

	printf("\n");

	//Prueba de putchar_fd
	printf("PRUEBA DE PUTCHAR_FD\n");
	ft_putstr_fd("Mi ft_putchar_fd: \n", 1); 
	ft_putchar_fd('c', 1);
	printf("\n");
	ft_putchar_fd('0', 1);
	printf("\n");
	ft_putchar_fd(65, 1);

	printf("\n");

	//Prueba de putstr_fd
	ft_putstr_fd("PRUEBA DE PUTSTR_FD\n", 1);
	ft_putstr_fd("Mi ft_putstr_fd: \n", 1);
	ft_putstr_fd("holiiiii\n", 1);
	ft_putstr_fd("123456\n", 1);
	ft_putstr_fd("blablabla\n", 1);

	printf("\n");

	//Prueba de putendl_fd
	printf("PRUEBA DE PUTENDL_FD\n");
	printf("Mi ft_putendl_fd: \n");
	ft_putendl_fd("hola caracola\n", 1);
	ft_putendl_fd("hola\n", 1);

	//Prueba de putnbr_fd
	printf("PRUEBA DE PUTNBR_FD\n");
	printf("Mi ft_putnbr_fd: \n");
	ft_putnbr_fd(12345678, 1);
	printf("\n");
	ft_putnbr_fd(0, 1);
	printf("\n");
	ft_putnbr_fd(-12345, 1);

	printf("\n");
	printf("\n");

	//Prueba de lstnew
	printf("PRUEBA DE LSTNEW\n");
	printf("Mi ft_lstnew: %s\n", (char *)(ft_lstnew("new nodo"))->content);
	printf("Mi ft_lstnew: %s\n", (char *)(ft_lstnew(""))->content);
	printf("Mi ft_lstnew: %p\n", (char *)(ft_lstnew("new"))->next);

	printf("\n");

	//Prueba de lst_addfront
	printf("PRUEBA DE LSTADD_FRONT\n");
	t_list	**nodos;
	t_list	*nodo1;
	t_list	*nodo2;
	t_list	*nodo3;

	nodo1 = ft_lstnew("nodo2");
	nodos = (t_list **)malloc(sizeof(t_list *));
	*nodos = nodo1;
	nodo2 = ft_lstnew("nodo3");
	nodo3 = ft_lstnew("nodo1");
	nodo1->next = nodo2;
	printf("Nodo 1 es: %s\n", (char *)(*nodos)->content);
	ft_lstadd_front(nodos, nodo3);
	printf("Mi ft_lstadd_front, nodo 1 es: %s\n", (char *)(*nodos)->content);

	printf("\n");

	//Prueba de lstsize
	printf("PRUEBA DE LSTSIZE\n");
	printf("Mi ft_lstsize: %d\n", ft_lstsize(nodo3));

	printf("\n");

	//Prueba de lstlast
	printf("PRUEBA DE LSTLAST\n");
	t_list	*first;
	t_list	*last;

	first = ft_lstnew("primero");
	last = ft_lstnew("ultimo");
	first->next = last;
	printf("Mi ft_lstlast: %s\n", (char *)(ft_lstlast(first))->content);

	printf("\n");

	//Prueba de lstadd_back
	printf("PRUEBA DE LSTADD_BACK\n");
	t_list	**lista;
	t_list	*lista1;
	t_list	*ultimo;

	lista1 = ft_lstnew("1");
	lista = (t_list **)malloc(sizeof(t_list *));
	*lista = lista1;
	ultimo = ft_lstnew("ultimo");
	ft_lstadd_back(lista, ultimo);
	printf("Mi ft_lstadd_back: %s\n", (char *)(ft_lstlast(*lista))->content);

	printf("\n");

	//Prueba de lstdelone
	printf("PRUEBA DE LSTDELONE\n");
	t_list	*lst_del;
	t_list	*lst1_del;

	lst_del = ft_lstnew("holi");
	lst1_del = ft_lstnew("hola");
	lst_del->next = lst1_del;
	printf("Antes: %s\n", (char *)((lst_del->next)->content));
	ft_lstdelone(lst1_del, del);
	//printf("Mi ft_lstdelone %s\n", (char *)((lst_del->next)->content));

	printf("\n");

	//Prueba de lstclear
	printf("PRUEBA DE LSTCLEAR\n");
	t_list	**lst_clear;
	t_list	*lst1_clear;
	t_list	*lst2_clear;

	lst_clear = (t_list **)malloc(sizeof(t_list*));
	lst1_clear = ft_lstnew("1");
	lst2_clear = ft_lstnew("2");
	*lst_clear = lst1_clear;
	lst1_clear->next = lst2_clear;
	printf("Antes: %s\n", (char *)((*lst_clear)->content));
	ft_lstclear(lst_clear, del);
	//printf("Mi ft_lstclear: %s\n", (char *)((*lst_clear)->content));

	printf ("\n");

	//Prueba de lstiter
	printf("PRUEBA DE LSTITER\n");
	t_list	*lst_iter;
	t_list	*lst2_iter;

	char p1_iter[] = "primero";
	char p2_iter[] = "segundo";
	lst_iter = ft_lstnew(p1_iter);
	lst2_iter = ft_lstnew(p2_iter);
	lst_iter->next = lst2_iter;
	printf("Antes: %s\n", (char *)(lst_iter->content));
	ft_lstiter(lst_iter, f_iter);
	printf("Mi ft_lstiter: %s\n", (char *)(lst_iter->content));

	printf("\n");

	//Prueba de lstmap
	printf("PRUEBA DE LSTMAP\n");
	t_list	*lst_map;
	t_list	*lst1_map;
	t_list	*lst2_map;

	char s_map[] = "hola";
	char s2_map[] = "adios";

	lst1_map = ft_lstnew(s_map);
	lst2_map = ft_lstnew(s2_map);
	lst1_map->next = lst2_map;
	lst_map = ft_lstmap(lst1_map, f_map, del);
	printf("%s\n", (char *)(lst_map->content));
	printf("%s\n", (char *)((lst_map->next)->content));

	printf("\n");
}
