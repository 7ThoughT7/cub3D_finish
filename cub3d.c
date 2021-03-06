/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmohamme <bmohamme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:00:16 by bmohamme          #+#    #+#             */
/*   Updated: 2022/02/03 17:00:16 by bmohamme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./cub3d.h"

// Основная функция, запускает основные этапы обработки
// print_mod(map, 3);
int	main(int argc, char **argv)
{
	t_map	map;

	if (main_parser(argc, argv, &map) == 0)
		exit (0);
	if (main_graphics(&map) == 0)
		exit (0);
	exit (0);
}
