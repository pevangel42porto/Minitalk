/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel < pevangel@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:03:21 by pevangel          #+#    #+#             */
/*   Updated: 2023/10/24 11:22:12 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void*))
{
	while (lst)
	{
		(*f)(lst -> content);
		lst = lst -> next;
	}
}
/* 
void	print_content(void *content)
{
	printf("conteudo da lista: %s\n", (char *)content);
}

int	main()
{
	t_list	*lst = NULL;
	t_list	*temp;
	char	*str = ft_strdup("ola bem vindo");
	char	*str2 = ft_strdup("ao mundo 42");

	ft_lstadd_back(&lst, ft_lstnew(str));
	ft_lstadd_back(&lst, ft_lstnew(str2));
	
	ft_lstiter(&lst, print_content);
	
	while (lst)
	{
		temp = lst->next;
		free(lst->content);
		free(lst);
		lst = temp	
	}
} */