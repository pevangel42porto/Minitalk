/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel < pevangel@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:59:18 by pevangel          #+#    #+#             */
/*   Updated: 2023/10/24 11:29:11 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void *))
{
	t_list	*temp;
	t_list	*head;
	void	*f_temp;

	head = 0;
	while (lst)
	{
		f_temp = f(lst->content);
		temp = ft_lstnew(f_temp);
		if (!temp)
		{
			del(f_temp);
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, temp);
		lst = lst->next;
	}
	return (head);
}
/* // Função para liberar a memória de uma string
void custom_free(void *content) {
    free(content);
}

int main() {
    // Cria uma lista encadeada de exemplo
    t_list *lst = NULL;
    char *str1 = ft_strdup("hello");
    char *str2 = ft_strdup("world");
    char *str3 = ft_strdup("libft");

    // Adiciona elementos à lista
    ft_lstadd_back(&lst, ft_lstnew(str1));
    ft_lstadd_back(&lst, ft_lstnew(str2));
    ft_lstadd_back(&lst, ft_lstnew(str3));

    // Aplica a função 'uppercase_string' a cada elemento da lista
    t_list *new_list = ft_lstmap(lst, uppercase_string, custom_free);

    // Imprime o conteúdo da nova lista
    t_list *current = new_list;
    while (current) {
        printf("Conteúdo da nova lista: %s\n", (char *)current->content);
        current = current->next;
    }

    // Limpa a memória alocada para ambas as listas
    ft_lstclear(&lst, custom_free);
    ft_lstclear(&new_list, custom_free); */