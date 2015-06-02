/*                                                                              
** my_putchar.c for revision_piscine in /home/saumur_f/revision/piscine/J03     
**                                                                              
** Made by saumurot florian                                                     
** Login   <saumur_f@epitech.net>                                               
**                                                                              
** Started on  Sun May 31 18:03:19 2015 saumurot florian                        
** Last update Sun May 31 18:03:55 2015 saumurot florian                        
*/

#include <unistd.h>

void  my_putchar(char c)
{
write(1, &c, 1);
}
