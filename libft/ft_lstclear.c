/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel < pevangel@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:54:55 by pevangel          #+#    #+#             */
/*   Updated: 2023/10/24 11:06:37 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*head;
	t_list	*temp;

	if (lst == NULL || del == NULL)
		return ;
	head = *lst;
	while (head)
	{
		temp = head -> next;
		(*del)(head -> content);
		free(head);
		head = temp;
	}
	*lst = NULL;
}
/* 
void custom_free(void *content) {
    free(content);
}

int main() {
    // Cria uma lista encadeada de exemplo
    t_list *lst = NULL;
    char *str1 = ft_strdup("Primeiro elemento");
    char *str2 = ft_strdup("Segundo elemento");

    // Adiciona elementos à lista
    ft_lstadd_back(&lst, ft_lstnew(str1));
    ft_lstadd_back(&lst, ft_lstnew(str2));

    // Imprime o conteúdo da lista antes de limpar
    t_list *current = lst;
    while (current != NULL) {
        printf("Conteúdo da lista: %s\n", (char *)current->content);
        current = current->next;
    }

    // Limpa a lista e libera a memória alocada
    ft_lstclear(&lst, custom_free);

    // Imprime a lista após a limpeza (deve estar vazia)
    if (lst == NULL) {
        printf("A lista foi limpa e agora está vazia.\n");
    } else {
        printf("A lista não foi limpa corretamente.\n");
    }

    return 0;
}
 */