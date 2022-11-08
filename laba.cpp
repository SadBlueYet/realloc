#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	char* buffer = (char*)malloc(1024 * sizeof(char));
	bool sub = true;
	int counter = 0;
	while (sub) {
		scanf("%c", buffer[counter]);
		counter++;
		if (counter % 1024 == 0)
			buffer = (char*)realloc(buffer, 1024 * (counter / 1024 + 1)   * sizeof(char));
	}
	int i = 0;
	for (; buffer[i] != '\0'; i++);
	//std::cin >> buffer;
	cout << buffer[16];
	return 0;
}