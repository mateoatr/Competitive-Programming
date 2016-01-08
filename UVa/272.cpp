#include <cstdio>
#include <cstring> 
using namespace std; 

int main(){ 
	char read[1024]; 
	bool flag = true; 
	while(gets(read)){ 
		int len = strlen(read); 
		for(int i = 0; i < len; i++){ 
			if((read[i] == '"') && flag){ 
				printf("``"); 
				flag = false; 
			} 
			else if((read[i] == '"') && !flag){ 
				printf("''"); 
				flag = true; 
			} 
			else 
				printf("%c", read[i]); 
		} 
	} 
	return 0; 
}
