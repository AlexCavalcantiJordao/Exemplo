int main (void)
{
	char c = get_char("Voc� � maior ?");
	if (c == 'y' ||  c == 'Y')
	{
		printf("Acordada.\n")
	}
	else if (c == 'n' || c == 'N')
	{
		printf("N�o acordada.\n");
	}
}
