/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 20:33:33 by yoson             #+#    #+#             */
/*   Updated: 2022/07/05 20:34:48 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int value)
{
	if (value >= 'A' && value <= 'Z')
		return (value + 32);
	return (value);
}
