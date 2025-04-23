#include <stdio.h>
#include <assert.h>

void testar() {
  // Função de teste simples
  assert(2 ==2);  // verifica se 2 é igual a 2
  printf("Teste passou!\n");
}

int main(){
  testar();
  return 0;
}
