int main (void)
{
	char c = get_char("Você é maior ?");
	if (c == 'y' ||  c == 'Y')
	{
		printf("Acordada.\n")
	}
	else if (c == 'n' || c == 'N')
	{
		printf("Não acordada.\n");
	}
}
