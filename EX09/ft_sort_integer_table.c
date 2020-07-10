/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamotaun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 10:32:02 by kamotaun          #+#    #+#             */
/*   Updated: 2020/07/10 10:47:51 by kamotaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_integer_table(int *tab, int size){
	int check = 1;
	while( check <= size){
		int i = 0;
		while(i < size - 1){
			tab[i] = tab[i] < tab[i + 1] ? tab[i] : tab[i + 1];
			i++;
		}
		check++;
	}
