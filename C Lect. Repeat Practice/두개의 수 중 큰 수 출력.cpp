#include <stdio.h>

int main()
{
	int A, B, C, D, E, max, min;
	printf("숫자 A 입력 : ");
	scanf("%d", &A);
	printf("숫자 B 입력 : ");
	scanf("%d", &B);
	printf("숫자 C 입력 : ");
	scanf("%d", &C);
	printf("숫자 D 입력 : ");
	scanf("%d", &D);
	printf("숫자 E 입력 : ");
	scanf("%d", &E);

	if (A>B && A>C && A>D && A>E)
	{
	max = A;
		if (B<C && B<D && B<E)
		{
			min = B;
		}
		if (C<B && C<D && C<E)
		{
			min = C;
		}
		if (D<C && D<B && D<E)
		{
			min = D;
		}
		if (E<B && E<C && E<D)
		{
			min = E;
		}
	}
	if (B>A && B>C && B>D && B>E)
	{
	max = B;
		if (A<C && A<D && A<E)
		{
			min = A;
		}
		if (C<A && C<D && C<E)
		{
			min = C;
		}
		if (D<C && D<A && D<E)
		{
			min = D;
		}
		if (E<A && E<C && E<D)
		{
			min = E;
		}
	}	
	if (C>A && C>B && C>D && C>E)
	{
	max = C;
		if (B<A && B<D && B<E)
		{
			min = B;
		}
		if (D<A && D<B && D<E)
		{
			min = C;
		}
		if (A<B && A<D && A<E)
		{
			min = A;
		}
		if (E<A && E<B && E<D)
		{
			min = E;
		}
	}
	if (D>B && D>C && D>A && D>E)
	{
	max = D;
		if (A<C && A<B && A<E)
		{
			min = A;
		}
		if (B<A && B<C && B<E)
		{
			min = B;
		}
		if (C<A && C<B && C<E)
		{
			min = C;
		}
		if (E<A && E<B && E<C)
		{
			min = E;
		}
	}
	if (E>B && E>C && E>D && E>A)
	{
	max = E;
		if (A<C && A<D && A<B)
		{
			min = A;
		}
		if (B<A && B<C && B<D)
		{
			min = B;
		}
		if (C<A && C<B && C<D)
		{
			min = C;
		}
		if (D<A && D<B && D<C)
		{
			min = D;
		}
	}			
	printf("최대값은 %d입니다.\n", max);
	printf("최소값은 %d입니다.\n", min);
	return 0;
}
