Dupa ce am rulat objdump -M intel break_this, am obtinut adresa de inceput pentru magic_function - 0x8048596
Vedem ca in read_buffer avem sub esp, 0x54 => bufferul are dimensiunea de 84 de octeti. 
Ca sa suprascriem avem nevoie de 88 + 4 + 4 = 92 de caractere de A, plus adresa lui magic_function