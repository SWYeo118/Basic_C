#include <stdio.h>
int main()
{

	int score[20][10] = {0}; //score[학생 수][과목 수] -> score[학생 번호][과목 점수]
	int sumScore[20] = {0};
	float studentArg[20] = {0};
	int subArg[10] = {0};
	
	int studentNum = 0;
	int subNum = 0;

	printf("학생 수를 입력하세요 : ");
	scanf("%d", &studentNum);
	printf("과목 수를 입력하세요 : ");
	scanf("%d", &subNum);
		
	for(int index=0; index < studentNum; index++) {
		printf("kopo_sw%d 학생의 점수 %d개를 차례대로 입력하세요 : ", index, subNum);
			for(int index2=0; index2 < subNum; index2++) {
				scanf("%d", &score[index][index2]);
			}
		}
	for(int index=0; index < studentNum; index++) {
		
		for(int index2=0; index2 < subNum; index2++) {
				(sumScore[index] += score[index][index2]);
			}
			(studentArg[index] = (sumScore[index]/subNum));
		printf("kopo_sw%d 학생의 점수 총 합은 %d 점이고, 평균은 %.2f점 입니다 : \n", index, sumScore[index], studentArg[index]);
		}
		


	
	return 0;
	
	
	
}
