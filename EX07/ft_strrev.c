/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamotaun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 09:55:27 by kamotaun          #+#    #+#             */
/*   Updated: 2020/07/10 10:05:22 by kamotaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrev(char *str){
	char *str_cpy = *str;
	int size = 0;
	while(*str_cpy != '\0'){
		str_cpy++;
		size++;
	}
	char str_a[size];
	int i = 0;
	while( i < size){
		str_a[i] = *(str[size - i - 1]);
		i++;
	}
	return str_a;
}
