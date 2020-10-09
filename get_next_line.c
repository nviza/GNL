/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nviza-eu <nviza-eu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 18:48:03 by nviza-eu          #+#    #+#             */
/*   Updated: 2020/10/09 19:20:12 by nviza-eu         ###   ########.fr       */
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

int			main(int argc, char **argv)
{
	fd == open ("fd", O_RDONLY)



	return (0)
}