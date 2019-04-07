/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljalikak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 14:49:28 by ljalikak          #+#    #+#             */
/*   Updated: 2019/04/03 16:22:53 by ljalikak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int		main(int argc, char **argv)
{
	int		file;
	char	buf[1];

	if (argc < 2)
		write(1, "File name missing.\n", 19);
	else if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	else
	{
		file = open(argv[1], O_RDONLY);
		if (file == -1)
			return (1);
		while (read(file, &buf[0], 1))
			write(1, &buf[0], 1);
		if (close(file) == -1)
			return (1);
	}
	return (0);
}
