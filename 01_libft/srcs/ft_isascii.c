/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 14:18:24 by yoson             #+#    #+#             */
/*   Updated: 2022/07/04 18:51:30 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int value)
{
	if (value >= 0 && value <= 127)
		return (1);
	return (0);
}