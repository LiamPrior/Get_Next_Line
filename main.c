/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 14:33:04 by lprior            #+#    #+#             */
/*   Updated: 2017/12/05 14:42:46 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	main(void)
{
	char	*str;
	int		fd;
	int		result;

	if ((fd = open("test.txt", O_RDONLY)) < 0)
		return (0);
	while ((result = get_next_line(fd, &str)) > 0)
	{
		printf("%s\n", str);
		free(str);
	}
	close(fd);
	return (0);
}
