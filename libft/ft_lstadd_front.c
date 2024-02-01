/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel < pevangel@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:08:20 by pevangel          #+#    #+#             */
/*   Updated: 2023/10/24 11:00:23 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}
/* 
#include <stdio.h>

int	main(void)
{
	char	example1[] = "ola bem vindo";
	char	example2[] = "bem vindo ao mundo 42!";
	t_list	*lst;
	t_list	*current = lst;
	
	lst = ft_lstnew(example1);
	ft_lstadd_back(&lst, ft_lstnew(example2));
	while (lst->next)
	{
		printf("\n primeira lista: \n%s", (char *)lst->content);
		lst = lst->next;
	}
	printf("\n nova primeira lista \n%s", (char *)lst->content);
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}

  */