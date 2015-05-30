#include <stdio.h>

enum Status{
	INSERT=1,UPDATE,DELETE=9
};

int main(){
	enum Status status = DELETE; 
	switch(status) {
	case INSERT:
		printf("INSERT%d",status);
		break;
	case UPDATE:
		printf("UPDATE%d",status);
		break;
	case DELETE:
		printf("DELETE%d",status);
		break;
	}
	return 0;
}

