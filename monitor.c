#include "monitor.h"

int isBatteryTempHealthy(float temperature){
    if(temperature < UNDER_TEMPERATURE || temperature > OVER_TEMPERATURE){
        printf("Battery not in nominal temperature !\n");
        return 0;
    }
    return 1;
}

int isBatterySocHealthy(float stOfCharge){
    if(stOfCharge < MIN_SOC_AREA || stOfCharge > MAX_SOC_AREA){
        printf("Battery not in proper State of Charge !\n");
        return 0;
    }
    return 1;
}

int isBatteryChargingOK(float current, float voltage)
{
    if(current > OVER_CURRENT){
        printf("Batter not under Charge Rate !\n");
        return 0;
    }else if(voltage < UNDER_VOLTAGE || voltage > OVER_VOLTAGE){
        printf("Voltage fluctuated!\n");
        return 0;
    }
    else { /*NOP */ }
    return 1;
}
