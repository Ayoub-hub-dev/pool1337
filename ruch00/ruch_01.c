/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ruch_01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouahman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 08:41:28 by aouahman          #+#    #+#             */
/*   Updated: 2023/09/17 08:41:38 by aouahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_ruch(int col, int row) {
    int i = 1;
    int j;
    
    while ( i <= row) {
        j = 1;
        while ( j <= col) {
            if ( j > 1 && j < col) {
                write(1, "*", 1);
            }else if((i == 1 && j == 1) || (i == row && j == col)) {
                write(1, "/", 1);
            }else if((i == row && j == 1) || (i == 1 && j == col)) {
                write(1, "\\", 1);
            }
            j++;
        }
        i++;
        write(1, "\n", 1);
    }
}
int main(){
    ft_ruch(4, 4);
    return 0;
}
