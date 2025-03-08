#include <stdio.h>
#include <string.h>

void statistic(char *str) {
	int s1 = 0, s2 = 0, s3 = 0, s4 = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
			s1++;
		else if (str[i] >= '0' && str[i] <= '9')
			s2++;
		else if (str[i] == ' ')
			s3++;
		else 
			s4++;
	}
	printf("%d %d %d %d", s1, s2, s3, s4);
}

int main() {
	char str[100];
//	gets(str);
	fgets(str, sizeof(str), stdin); // fgets() ��������Ļ��з�����ˣ���ͳ��ʱ��
                                    // Ҫ���ַ������һ���ַ���'\n'���滻��'\0' 
	// ȥ��ĩβ�Ļ��з�������У�
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
	
	statistic(str);
	
	return 0;
}
