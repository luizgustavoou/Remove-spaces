#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char* remove_space(char *text) {
  char *new_text = (char*) malloc(sizeof(char)*strlen(text) + 1);
  
  char *pedaco;

  pedaco = strtok(text, " ");
  strcat(new_text, pedaco);
  while((pedaco = strtok(NULL, " ")) != NULL) {
    strcat(new_text, pedaco);
  }

  return new_text;
}


int main(void) {
  char text[100];
  char *new_text;
  
  scanf("%[^\n]", text);
  new_text = remove_space(text);

  printf("%s", new_text);
  

}
