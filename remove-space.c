#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void remove_space(char *text) {
  char new_text[100] = "";
  char *pedaco;

  pedaco = strtok(text, " ");
  strcat(new_text, pedaco);
  while((pedaco = strtok(NULL, " ")) != NULL) {
    strcat(new_text, pedaco);
  }

  strcpy(text, new_text);
}


int main(void) {
  char text[100];
  
  scanf("%[^\n]", text);
  remove_space(text);
  
  printf("%s",  text);

}
