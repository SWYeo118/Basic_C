#include <stdio.h>
int main()
{

	int score[20][10] = {0}; //score[�л� ��][���� ��] -> score[�л� ��ȣ][���� ����]
	int sumScore[20] = {0};
	float studentArg[20] = {0};
	int subArg[10] = {0};
	
	int studentNum = 0;
	int subNum = 0;

	printf("�л� ���� �Է��ϼ��� : ");
	scanf("%d", &studentNum);
	printf("���� ���� �Է��ϼ��� : ");
	scanf("%d", &subNum);
		
	for(int index=0; index < studentNum; index++) {
		printf("kopo_sw%d �л��� ���� %d���� ���ʴ�� �Է��ϼ��� : ", index, subNum);
			for(int index2=0; index2 < subNum; index2++) {
				scanf("%d", &score[index][index2]);
			}
		}
	for(int index=0; index < studentNum; index++) {
		
		for(int index2=0; index2 < subNum; index2++) {
				(sumScore[index] += score[index][index2]);
			}
			(studentArg[index] = (sumScore[index]/subNum));
		printf("kopo_sw%d �л��� ���� �� ���� %d ���̰�, ����� %.2f�� �Դϴ� : \n", index, sumScore[index], studentArg[index]);
		}
		


	
	return 0;
	
	
	
}
