/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel < pevangel@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:45:20 by pevangel          #+#    #+#             */
/*   Updated: 2023/10/24 11:07:34 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	(*del)(lst -> content);
	free(lst);
}
/* 
#include <stdlib.h>

// Função para liberar a memória do conteúdo de um elemento da lista
void custom_free(void *content) {
    free(content);
}

int main() {
    // Cria um elemento de lista de exemplo
    char *str = ft_strdup("Conteúdo do elemento");

    // Cria um elemento de lista
    t_list *lst = ft_lstnew(str);

    // Imprime o conteúdo do elemento da lista antes de excluí-lo
    printf("Conteúdo antes da exclusão: %s\n", (char *)lst->content);

    // Exclui o elemento da lista e libera a memória alocada
    ft_lstdelone(lst, custom_free);

    // Tenta imprimir o conteúdo após a exclusão (deve estar vazio)
    if (lst == NULL) {
        printf("O elemento da lista foi excluído com sucesso.\n");
    } else {
        printf("O elemento da lista não foi excluído corretamente.\n");
    }

    return 0;
}
 */