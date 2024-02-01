/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel < pevangel@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:40:36 by pevangel          #+#    #+#             */
/*   Updated: 2023/10/24 11:24:30 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst -> next;
	return (lst);
}
/* #include <stdio.h>
#include <stdlib.h>

int main() {
    // Cria uma lista encadeada de exemplo
    t_list *lst = NULL;
    char *str1 = ft_strdup("Primeiro elemento");
    char *str2 = ft_strdup("Segundo elemento");

    // Adiciona elementos à lista
    ft_lstadd_back(&lst, ft_lstnew(str1));
    ft_lstadd_back(&lst, ft_lstnew(str2));

    // Encontra o último elemento da lista
    t_list *last = ft_lstlast(lst);

    if (last) {
        printf("O último elemento da lista contém: %s\n", (char *)last->content);
    } else {
        printf("A lista está vazia.\n");
    }

    // Limpa a memória alocada para a lista
    while (lst) {
        t_list *temp = lst->next;
        free(lst->content);
        free(lst);
        lst = temp;
    }
}
 */