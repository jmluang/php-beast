
/*
 * You can modify this sign to disguise your encrypt file
 */
char encrypt_file_header_sign[] = {
	0xa8, 0xf6, 0xa6, 0x0c,
	0x12, 0xb4, 0x62, 0xee
};

int encrypt_file_header_length = sizeof(encrypt_file_header_sign);
