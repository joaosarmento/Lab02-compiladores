/* exemplo de programa em 
   linguagem simplificada */
   
int main()
{
  // variáveis
  int i;
  int j;
  bool z;

  // atribuições normais
  i = 15;
  j = 30;
  z = i > 10 && j <= 20;

  // Conversões automáticas
  // If
  if (5) {
    z = 10;
  }

  if (1 && 7) {
    z = 25;
  }

  if (0||1) {
    z = 0;
  }

  // While
  while (0) {
    z = 1;
  }

  //Do-While
  do{
    z = 0 && 1;
  } while (!1);
  
}
