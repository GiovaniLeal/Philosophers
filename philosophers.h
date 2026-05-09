/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 19:29:27 by giodos-s          #+#    #+#             */
/*   Updated: 2026/05/09 18:06:00 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

/* ************************************************************************** */
//*                         STANDART LIBRARIES                                */
/* ************************************************************************** */
# include <stdio.h> //?PRINTF
# include <unistd.h> //? USLEEP
# include <stdlib.h> //?MALLOC
# include <pthread.h> //
# include <sys/time.h> //? gettimeofday 

/* ************************************************************************** */
//*                      RULES AND PHILOSOPHERS STRUCTS                       */
/* ************************************************************************** */
typedef struct s_rules
{
	int				t_eat;
	int				t_sleep;
	int				t_think;
	int				t_die;
	int				num_philos;
	int				must_eat;
	int				someone_died;
	long long		start_time;
	pthread_mutex_t	*forks;
	pthread_mutex_t	*print_lock;
}	t_rules;

typedef struct s_philo
{
	int				id;
	int				meals_eaten;
	t_rules			*rules;
	pthread_t		thread;
	long long		last_meal;
	pthread_mutex_t	*left_fork;
	pthread_mutex_t	*right_fork;
}	t_philo;
#endif