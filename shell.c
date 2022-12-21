#include "main.h"

/**
 * main - main
 * @ac: No use
 * @av: No use
 * Return: 0.
 **/
int main(int ac, char **av)
{
(void)av;
(void)ac;
signal(SIGINT, controlC);
prompt();
return (0);
}
