/*                                                                              
** my_putstr.c for revision_piscine in /home/saumur_f/revision/piscine/J07     
**                                                                              
** Made by saumurot florian                                                     
** Login   <saumur_f@epitech.net>                                               
**                                                                              
** Started on  Sun May 31 18:03:19 2015 saumurot florian                        
** Last update Sun May 31 18:03:55 2015 saumurot florian                        
*/

#include <unistd.h>

void  my_putstr(char *str)
{
write(1, str, my_strlen(str));
}
