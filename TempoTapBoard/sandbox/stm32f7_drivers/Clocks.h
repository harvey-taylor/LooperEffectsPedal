#ifndef CLOCKS_H
#define CLOCKS_H

#include <stdint.h>

namespace stm32_drivers {

class Clocks
{
public:
   Clocks();

   static void ResetPeripheral(volatile uint32_t *peripheralReset, uint8_t peripheralIndex);
   static void EnablePeripheralClock(volatile uint32_t *peripheralClockEnable, uint8_t peripheralIndex);
   static void DisablePeripheralClock(volatile uint32_t *peripheralClockEnable, uint8_t peripheralIndex);
   static bool IsPeripheralClockEnabled(volatile uint32_t *peripheralClockEnable, uint8_t peripheralIndex);
   static const uint32_t SystemClockFrequency_Hz;
   static const uint32_t PeripheralBusAPB1ClockFrequency_Hz;
   static const uint32_t PeripheralBusAPB2ClockFrequency_Hz;
};

}

#endif
