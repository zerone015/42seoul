/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 20:56:18 by yoson             #+#    #+#             */
/*   Updated: 2022/07/08 22:21:49 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int value)
{
	char	*str_rear;

	str_rear = str + ft_strlen(str);
	while (str <= str_rear)
	{
		if (*str_rear == value)
			return (str_rear);
		str_rear--;
	}
	return (0);
}
