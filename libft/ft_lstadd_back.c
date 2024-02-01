/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel < pevangel@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:08:47 by pevangel          #+#    #+#             */
/*   Updated: 2023/10/24 11:27:12 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	temp = (*lst);
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;
}
/* 
int main() {
    // Cria uma lista encadeada de exemplo
    t_list *lst = NULL;
    char *str1 = ft_strdup("Primeiro elemento");
    char *str2 = ft_strdup("Segundo elemento");

    // Adiciona elementos ao final da lista
    ft_lstadd_back(&lst, ft_lstnew(str1));
    ft_lstadd_back(&lst, ft_lstnew(str2));

    // Imprime o conteúdo de todos os elementos na lista
    t_list *current = lst;
    while (current) {
        printf("Conteúdo da lista: %s\n", (char *)current->content);
        current = current->next;
    }

    // Limpa a memória alocada para a lista
    while (lst) {
        t_list *temp = lst->next;
        free(lst->content);
        free(lst);
        lst = temp;
    }

    return 0;
} */