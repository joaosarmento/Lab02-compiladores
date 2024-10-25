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

  //Conversões automáticas
  if (5) {
    z = 10;
  }

  if (1 && 7) {
    z = 25;
  }

  if (0||1) {
    z = 0;
  }
}
