/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcamila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 12:56:27 by vcamila           #+#    #+#             */
/*   Updated: 2020/03/03 13:11:08 by vcamila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcapitalize(char *str)
{
	int l;

	l = 0;
	while (str[l] != '\0')
	{
        if ((((l == 0 || str[l - 1] == ' ' || (str[l - 1] >= ':' && 
        str[l - 1] <= '@') || (str[l - 1] >= '[' && 
        str[l - 1] <= '`') || str[l - 1] >= '!') && 
        (str[l - 1] <= '/')) && (str[l] <= 'z' && str[l] >= 'a')))
        {
            str[l] = str[l] - 32;
        }
        else if (!(l == 0 || str[l - 1] == ' ') &&
        (str[l] >= 'A' && str[l] <= 'Z'))
        {
            str[l] = str[l] + 32;
        }
        l = l + 1;
	}
    return (str);
}

