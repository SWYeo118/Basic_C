#include <stdio.h>

int main()

{
	FILE *fp;
	fp = fopen("영수증.txt", "a");
	
	fprintf(fp, "%-6s %8s", "IC신용승인","\t\t\t\t(고 객 용)\n");
	fprintf(fp, "단말기 : %-12s" "\t\t전표번호 : %6s", "1A79798148", "020298\n");
	fprintf(fp, "가맹점 : 김태준의 탕탕집\n");
	fprintf(fp, "주  소 : 서울 강남구 학동로4길 12, 1,2층(논현동)\n");
	fprintf(fp, "대표자 : 김태준\n");
	fprintf(fp, "사업자 : %s %15s", "536-37-00183","\t\tTEL : 02-511-3235\n");
	fprintf(fp, "----------------------------------------------------------\n");
	fprintf(fp, "금    액%7s","\t\t\t\t\t6,818원\n");
	fprintf(fp, "부 가 세%7s","\t\t\t\t\t  682원\n");
	fprintf(fp, "합    계%7s","\t\t\t\t\t7,500원\n");
	fprintf(fp, "----------------------------------------------------------\n");
	fprintf(fp, "IBK비씨카드\n");
	fprintf(fp, "카드번호 : %-20s" "\t\t   일시불\n", "6250-03**-****-4903(C)");
	fprintf(fp, "거래일시 : %-20s", "2018/01/30 12:46:24\n");
	fprintf(fp, "승인번호 : %-8d\n", 72110079);
	fprintf(fp, "매입 : 비씨카드사\t가맹 : %d\n", 798606607);
	fprintf(fp, "알림 : EDC매출표\n");
	fprintf(fp, "문의 : TEL)1544-4700\n");
	fprintf(fp, "----------------------------------------------------------\n" );
	fprintf(fp, "\t\t      * 감사합니다 *\n");
	fprintf(fp, "\t     617021027/027/2.05/20170215/0510\n");
	
	fclose(fp);
	
	return 0;
}
