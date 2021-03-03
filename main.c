#include "monitor.h"

int main() {
  assert(isBatteryTempHealthy(25));
  assert(!isBatteryTempHealthy(50));
  assert(isBatterySocHealthy(60));
  assert(!isBatterySocHealthy(100));
  assert(isBatteryChargingOK(0.56, 15));
  assert(!isBatteryChargingOK(2, 20));
}
