/*                                                                              
** my_strlen.c for revision_piscine in /home/saumur_f/revision/piscine/J07    
**                                                                              
** Made by saumurot florian                                                     
** Login   <saumur_f@epitech.net>                                               
**                                                                              
** Started on  Sun May 31 18:03:19 2015 saumurot florian                        
** Last update Sun May 31 18:03:55 2015 saumurot florian                        
*/

int my_strlen(char *str)
{
int i;

i = 0;
while (str[i] != '\0')
  ++i;
return (i);
}
