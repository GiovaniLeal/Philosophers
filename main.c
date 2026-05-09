/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 19:23:11 by giodos-s          #+#    #+#             */
/*   Updated: 2026/05/09 17:35:21 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	arg_error_msg(void)
{
	printf("ARGUMENT ERROR\n");
	printf("===================================================\n");
	printf(" Insert the follow arguments :\n");
	printf(" <numb_philo> <time to die> <time to eat> <time to sleep>");
	printf("<numb of times each philo must eat>\n");
	print("\n");
	printf(" ** The number of philosophers not pass 200");
	printf("===================================================\n");
}


int	main(int argc, char *argv)
{
	int		i;
	t_philo	*philo;

	i = 0;
	if (argc > 5 || argc < 5)
		arg_error_msg();
	if (check_arguments(argv))
	{
		arg_error_msg();
		return (1);
	}
	create_thread();
	return(0);
}

int	check_arguments(char *argv)
{
	int	i;

	i= 0;
	while (argv[i])
	{
		if (argv[i] > 200)
			return (1);
	}
	return (0);
}