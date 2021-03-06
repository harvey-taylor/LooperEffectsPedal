#ifndef UART_INTERFACE_H
#define UART_INTERFACE_H

#include <stdint.h>

#include "ByteReceiveInterruptCallbackInterface.h"

class UartInterface
{
public:
   virtual ~UartInterface() {};

   virtual void Enable() = 0;
   virtual void SendStringBlocking(const char *message) = 0;

   virtual void SetReceiveCallback(ByteReceiveInterruptCallbackInterface *callback) = 0;
};

#endif
