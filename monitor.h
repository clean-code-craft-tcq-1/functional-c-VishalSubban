#include <stdio.h>
#include <assert.h>

#define OVER_TEMPERATURE 45
#define UNDER_TEMPERATURE 0
#define OVER_VOLTAGE 18
#define UNDER_VOLTAGE 2.5
#define MIN_SOC_AREA 20
#define MAX_SOC_AREA 80
#define OVER_CURRENT 0.8

int isBatteryTempHealthy(float temperature);
int isBatterySocHealthy(float stOfCharge);
int isBatteryChargingOK(float current,float chargeRate);