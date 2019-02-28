/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pictures.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 09:54:19 by alkozma           #+#    #+#             */
/*   Updated: 2019/02/28 09:56:25 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PICTURES_H
# define PICTURES_H

# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct			t_photo
{
	char				**tags;
	size_t				tag_size;
	struct t_photo		*next;
}						s_photo;

#endif
