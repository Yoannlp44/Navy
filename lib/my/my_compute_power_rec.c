/*
** EPITECH PROJECT, 2018
** my_compute_pow_rec
** File description:
** a
*/

int my_compute_power_rec(int nb, int p)
{
    int result = nb;

    if (p == 0)
        return (1);
    if (p < 0)
        return (0);
    if (nb > 2147483647)
        return (0);
    result *= my_compute_power_rec(nb, p - 1);
    return (result);
}
