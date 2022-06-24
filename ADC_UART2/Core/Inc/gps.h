#include "main.h"

#define GPS_DEBUG	0
#define	GPS_USART	&huart4
#define GPSBUFSIZE  128       // GPS rx buffer size
extern UART_HandleTypeDef huart4;

typedef struct{
    // GGA - Global Positioning System Fixed Data
    char nmea_longitude[15];
    char nmea_latitude[15];
    int utc_time;
    char ns, ew;

    // RMC - Recommended Minimmum Specific GNS Data
    char rmc_status;
    float speed_k;
    float course_d;
    char date[6];
} GPS_t;

void GPS_Init();
void GPS_UART_CallBack();
int GPS_validate(char *nmeastr);
void GPS_parse(char *GPSstrParse);
