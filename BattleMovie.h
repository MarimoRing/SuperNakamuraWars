#define A 900
#define B 300
#define C 1000
#define D 500
void BattleMovie()
{
	DrawBox( A, B, C, D, Color.Blue, TRUE);
	DrawFormatStringToHandle( A+20, B+10, Color.White, Font.c[30],
		"�ړ�");
	DrawFormatStringToHandle(A + 20, B + 60, Color.White, Font.c[30],
		"�U��");
	DrawFormatStringToHandle(A + 20, B + 110, Color.White, Font.c[30],
		"���_");
	DrawFormatStringToHandle(A + 20, B + 160, Color.White, Font.c[30],
		"�ҋ@");
}
