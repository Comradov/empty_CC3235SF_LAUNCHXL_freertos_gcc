
#ifndef EVENTHANDLERS_H_
#define EVENTHANDLERS_H_


/* Driver Header files */

#include <ti/drivers/net/wifi/simplelink.h>
#include <ti/drivers/net/wifi/device.h>
#include <stdint.h>


void SimpleLinkFatalErrorEventHandler(SlDeviceFatal_t *slFatalErrorEvent);

void SimpleLinkGeneralEventHandler(SlDeviceEvent_t *pDevEvent);

void SimpleLinkWlanEventHandler(SlWlanEvent_t *pWlanEvent);

void SimpleLinkNetAppEventHandler(SlNetAppEvent_t *pNetAppEvent);

void SimpleLinkSockEventHandler(SlSockEvent_t *pSock);

void SimpleLinkHttpServerEventHandler( SlNetAppHttpServerEvent_t *pHttpEvent, SlNetAppHttpServerResponse_t *pHttpResponse);

void SimpleLinkNetAppRequestEventHandler(SlNetAppRequest_t *pNetAppRequest, SlNetAppResponse_t *pNetAppResponse);

void SimpleLinkNetAppRequestMemFreeEventHandler( uint8_t *buffer );


#endif /* EVENTHANDLERS_H_ */
