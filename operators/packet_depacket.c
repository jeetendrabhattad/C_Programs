#include <stdio.h>

void DePacketize(int packet, int* const crc, int* const length, int* const data, int *const reserved)
{
    *reserved = packet&((1<<6)-1);
    packet = packet>>6;
    *data = packet&((1<<18)-1);
    packet = packet>>18;
    *length = packet&((1<<7)-1);
    packet = packet>>7;
    *crc = packet&1;
}

int Packetize(const int crc, const int length, const int data, const int reserved)
{
    int packet = crc;
    packet = packet<<7;
    packet = packet | length&((1<<7)-1);
    packet = packet<<18;
    packet = packet | data&((1<<18)-1);
    packet = packet<<6;
    packet = packet | reserved&((1<<6)-1);
    return packet;
}
int main()
{
    //crc-1, length-7, data-18, reserved-6 e.g 
    /*
       10000111000000010000000000000000
    CRC-1
    LENGTH-0000111
    DATA-000000010000000000
    RESERVED-000000
    */
    int crc, length, data, reserved = 0;
    printf("\nEnter Crc, Length, Data:");
    scanf("%d%d%d", &crc, &length, &data);
    int packet = Packetize(crc, length, data, reserved);
    printf("\nPacket : %d", packet);
    DePacketize(packet, &crc, &length, &data, &reserved);
    printf("\nAfter De-Packetizing: crc=%d, length=%d, data=%d, reserved=%d", crc, length, data, reserved);

    return 0;
}
