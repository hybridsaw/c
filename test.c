#include<stdio.h>

int main()
{
	printf("<!DOCTYPE html>\n");
	printf("<meta charaset=\"UTF-8\">\n");
	printf("<title>99</title>\n");
	printf("<hl>99</hl>\n");
	printf("<table>\n");
	printf("<tr>\n");
	printf("<th>\n");
	printf("<tr>");
	for (int y = 0; y<10; ++y){
		for (int x = 0; x<10; ++x){
			if (x == 0 && y == 0){
				printf("<th>");
			}
			else if (x == 0 || y == 0){
				printf("<th>%d",x+y);
			}
			else{
				printf("<th>%d", x*y);
			}

			if (x == 9){
				printf("\n");
			}
		}
	}
	return 0;
}