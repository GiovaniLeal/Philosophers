/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 19:29:27 by giodos-s          #+#    #+#             */
/*   Updated: 2026/05/07 19:58:02 by giodos-s         ###   ########.fr       */
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
//*                         PHILOSOPHER STRUCT                                */
/* ************************************************************************** */
typedef struct s_philo{
              int           t_eat;
              int           t_sleep;
              int           t_think;
              int           t_die;
              int           numb_of_philos;
              int           numb_of_each_philo_eat;
}	t_philo;

#endif