// SPDX-License-Identifier: BSD-3-Clause

// ESTE O EROARE DE COMPILARE fara extern int puts 
extern int puts(const char*);
static void hi(void)
{
	puts("Hi!");
}

static void bye(void)
{
	puts("Bye!");
}

int main(void)
{
	hi();
	bye();
}
