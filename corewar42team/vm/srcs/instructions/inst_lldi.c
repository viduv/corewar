/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inst_lldi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viduvern <viduvern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 01:22:18 by viduvern          #+#    #+#             */
/*   Updated: 2019/09/02 10:38:08 by viduvern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/vm.h"
/*
**	opcode 0x0a, changes the carry
**  usage : ldi ARG_1(RG/ID/D2), ARG_2(ID/D2), ARG_3(RG)
**	reads REG_SIZE at the adress process->pc + (ARG_1 + ARG_2) and stores it
**	in ARG_3
*/
static void		inst_lldi(t_player *cur, t_arena *arena)
{


}