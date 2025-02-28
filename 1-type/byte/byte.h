unsigned char max_byte(unsigned short number) {
    unsigned char maxByte = 0;

    unsigned char byte1 = number & 0xFF;
    unsigned char byte2 = (number >> 8) & 0xFF;

    if (byte1 > maxByte) {
        maxByte = byte1;
    }
    if (byte2 > maxByte) {
        maxByte = byte2;
    }

    return maxByte;
}