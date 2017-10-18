/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghippoda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 16:50:40 by ghippoda          #+#    #+#             */
/*   Updated: 2016/11/21 16:41:30 by ghippoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_letter(char c, char a)
{
	if (a == c || c == 0)
		return (1);
	return (0);
}

static int		ft_count_words(char *str, char c)
{
	int			words;
	int			i;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_letter(str[i + 1], c) == 1 &&
				ft_letter(str[i], c) == 0)
			words++;
		i++;
	}
	return (words);
}

static void		ft_write_word(char *word, char *str, char c)
{
	int			i;

	i = 0;
	while (ft_letter(str[i], c) == 0)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
}

static void		write_tab(char **tab, char *str, char c)
{
	int			i;
	int			j;
	int			num_word;

	i = 0;
	num_word = 0;
	while (str[i] != '\0')
	{
		if (ft_letter(str[i], c) == 0)
		{
			j = 0;
			while (ft_letter(str[i + j], c) == 0)
				j++;
			tab[num_word] = (char*)malloc(sizeof(char) * (j + 1));
			ft_write_word((tab[num_word]), (str + i), c);
			num_word++;
			i += j;
		}
		else
			i++;
	}
	tab[num_word] = 0;
}

char			**ft_strsplit(char const *s, char c)
{
	char		**tab;
	int			nb_word;
	char		*tmp;

	if (s == NULL)
		return (NULL);
	tmp = (char*)s;
	nb_word = ft_count_words(tmp, c);
	if ((tab = (char**)malloc(sizeof(*tab) * (nb_word + 1))) == NULL)
		return (NULL);
	write_tab(tab, tmp, c);
	return (tab);
}
