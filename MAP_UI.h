#define A 900
#define B 300

void MS_Command()
{
	DrawBox( A, B, A+100, B+200, Color.Blue, TRUE);
	DrawFormatStringToHandle( A+20, B+10, Color.White, Font.c[30],
		"�ړ�");
	DrawFormatStringToHandle(A + 20, B + 60, Color.White, Font.c[30],
		"�U��");
	DrawFormatStringToHandle(A + 20, B + 110, Color.White, Font.c[30],
		"���_");
	DrawFormatStringToHandle(A + 20, B + 160, Color.White, Font.c[30],
		"�ҋ@");
	DrawFormatStringToHandle(A + 20 - 60, B + 10 + Arrow.X, Color.White, Font.c[30],
		"��");
}
void MAP_Command2()
{
	DrawBox(A, B, A + 200, B + 200, Color.Blue, TRUE);
	DrawFormatStringToHandle(A + 20, B + 10, Color.White, Font.c[30],
		"�^�[���I��");
	DrawFormatStringToHandle(A + 20, B + 60, Color.White, Font.c[30],
		"�S�̃}�b�v");
	DrawFormatStringToHandle(A + 20, B + 110, Color.White, Font.c[30],
		"�����ꗗ");
	DrawFormatStringToHandle(A + 20, B + 160, Color.White, Font.c[30],
		"�Z�[�u");
	DrawFormatStringToHandle(A + 20 - 60, B + 10 + Arrow.X, Color.White, Font.c[30],
		"��");
}
