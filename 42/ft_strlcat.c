/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoliada <okoliada@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 18:03:14 by okoliada          #+#    #+#             */
/*   Updated: 2026/10/07 18:03:16 by okoliada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*

*/
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);

	i = 0;
	j = d_len;
	if (size == 0 && d_len < size)
		return(s_len);
	while (i < size - 1)
	{
		dst[d_len] = src[i];
		d_len++;
		i++;
	}
	dst[i] = '\0';
	return (size);
}
