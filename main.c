/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 19:23:11 by giodos-s          #+#    #+#             */
/*   Updated: 2026/05/07 20:06:43 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	arg_error_msg(void)
{
	printf("ARGUMENT ERROR\n");
	printf(" Insert the follow arguments :\n");
	printf(" <numb_philo> <time to die> <time to eat> <time to sleep>");
	printf("<numb of times each philo must eat>\n");
}


int	main(int argc, char *argv)
{
	int		i;
	t_philo	*philo;

	i = 0;
	if (argc > 5 || argc < 5)
		arg_error_msg();
	while (argv[i])
	{
		check_arguments(argv, &philo);
	}
	return(0);
}

void	check_arguments(char *argv, t_philo *philo)
{

}