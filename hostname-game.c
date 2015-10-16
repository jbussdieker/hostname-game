#include <stdio.h>
#include <unistd.h>

int gethostname(char *name, size_t len);

void main() {
  char name[2048];
  int result = gethostname(name, 2048);
  if (result == 0)
    printf("%s\n", name);
  else
    printf("Error reading");
}
