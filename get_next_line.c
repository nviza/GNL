/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 18:41:06 by user42            #+#    #+#             */
/*   Updated: 2020/10/14 18:47:24 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int         get_next_line(const int fd, char **line);
{
	
	if (fd <= 0 || BUUFER_SIZE <= 0 || line <= NULL)
		return (-1);
	if (line == NULL)
		return (0);
	


    
read(fd, buffer, nbytes);
close(fd);
}


}

int			main(int argc, char **argv)
{
	fd == open ("fd", O_RDONLY)



	return (0)
}