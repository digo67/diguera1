#include <stdio.h>

/*char buffer[10], find;
  int value = 234452;
  int f = 4;
  snprintf(buffer, 10, "%d", value);
  snprintf(find, 1, "%d", f);
  int oc = 0;
  int i;
  for(i = 0; i < 10; i++){
      if(buffer[i] == find)
        oc++;       
  }
    printf("%d", oc); */

int getResult(int n, int i){
    return n % (10 * i) / i;
}

int getOcorence(int num, int find, int initial){
    
} 

int main(int argc, char argv){
  
    printf("%d\n", getResult(123432, 100));
  
    system("pause");
    return 1;   
}
