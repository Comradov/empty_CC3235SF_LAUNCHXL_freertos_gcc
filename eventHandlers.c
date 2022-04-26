
#include "eventHandlers.h"

#include <ti/drivers/net/wifi/simplelink.h>

#include "uart_term.h"

/*!
    \brief          SimpleLinkFatalErrorEventHandler

    This handler gets called whenever a socket event is reported
    by the NWP / Host driver. After this routine is called, the user's
    application must restart the device in order to recover.

    \param          slFatalErrorEvent    -   pointer to fatal error event.

    \return         void

    \note           For more information, please refer to:
                    user.h in the porting
                    folder of the host driver and the
                    CC31xx/CC32xx NWP programmer's
                    guide (SWRU455).

*/
void SimpleLinkFatalErrorEventHandler( SlDeviceFatal_t *slFatalErrorEvent ){
	TRACE;
	return;
};

/*!
    \brief          SimpleLinkGeneralEventHandler

    This handler gets called whenever a general error is reported
    by the NWP / Host driver. Since these errors are not fatal,
    application can handle them.

    \param          pDevEvent    -   pointer to device error event.

    \return         void

    \note           For more information, please refer to:
                    user.h in the porting
                    folder of the host driver and the
                    CC31xx/CC32xx NWP programmer's
                    guide (SWRU455).

*/
void SimpleLinkGeneralEventHandler(SlDeviceEvent_t *pDevEvent)
{
	TRACE;
	return;
}

/*!
    \brief          SimpleLinkWlanEventHandler

    This handler gets called whenever a WLAN event is reported
    by the host driver / NWP. Here user can implement he's own logic
    for any of these events. This handler is used by 'network_terminal'
    application to show case the following scenarios:

    1. Handling connection / Disconnection.
    2. Handling Addition of station / removal.
    3. RX filter match handler.
    4. P2P connection establishment.

    \param         pWlanEvent       -   pointer to Wlan event data.

    \return        void

    \note          For more information, please refer to: user.h in the porting
                   folder of the host driver and the
                   CC31xx/CC32xx NWP programmer's guide (SWRU455)

    \sa            cmdWlanConnectCallback, cmdEnableFilterCallback,
                   cmdWlanDisconnectCallback, cmdP2PModecallback.

*/
void SimpleLinkWlanEventHandler(SlWlanEvent_t *pWlanEvent)
{
	TRACE;
	return;
}

/*!
    \brief          SimpleLinkNetAppEventHandler

    This handler gets called whenever a Netapp event is reported
    by the host driver / NWP. Here user can implement he's own logic
    for any of these events. This handler is used by 'network_terminal'
    application to show case the following scenarios:

    1. Handling IPv4 / IPv6 IP address acquisition.
    2. Handling IPv4 / IPv6 IP address Dropping.

    \param          pNetAppEvent     -   pointer to Netapp event data.

    \return         void

    \note           For more information, please refer to:
                    user.h in the porting
                    folder of the host driver and the
                    CC31xx/CC32xx NWP programmer's
                    guide (SWRU455).

*/
void SimpleLinkNetAppEventHandler(SlNetAppEvent_t *pNetAppEvent)
{
	TRACE;
	return;
};

/*!
    \brief          SimpleLinkSockEventHandler

    This handler gets called whenever a socket event is reported
    by the NWP / Host driver.

    \param          SlSockEvent_t    -   pointer to socket event data.

    \return         void

    \note           For more information, please refer to:
                    user.h in the porting
                    folder of the host driver and the
                    CC31xx/CC32xx NWP programmer's
                    guide (SWRU455).

*/
void SimpleLinkSockEventHandler(SlSockEvent_t *pSock)
{
	TRACE;
	return;
};

/*!
    \brief          SimpleLinkHttpServerEventHandler

    This handler gets called whenever a HTTP event is reported
    by the NWP internal HTTP server.

    \param          pHttpEvent       -   pointer to http event data.

    \param          pHttpEvent       -   pointer to http response.

    \return         void

    \note           For more information, please refer to: user.h in the porting
                    folder of the host driver and the  CC31xx/CC32xx NWP
                    programmer's guide (SWRU455).

 */
void SimpleLinkHttpServerEventHandler( SlNetAppHttpServerEvent_t *pHttpEvent, SlNetAppHttpServerResponse_t *pHttpResponse )
{
 	TRACE;
	return;
}

/*!
    \brief          SimpleLinkNetAppRequestEventHandler

    This handler gets called whenever a NetApp event is reported
    by the NWP / Host driver. User can write he's logic to handle
    the event here.

    \param          _req     -   Pointer to NetApp request structure.

    \param          _resp    -   Pointer to NetApp request Response.

    \note           For more information, please refer to:
                    user.h in the porting folder of the host driver and the
                    CC31xx/CC32xx NWP programmer's guide (SWRU455).

    \return         void

 */
void SimpleLinkNetAppRequestEventHandler( SlNetAppRequest_t *_req, SlNetAppResponse_t *_resp ){
	TRACE;
	return;
};

/*!
    \brief          SimpleLinkNetAppRequestMemFreeEventHandler

    This handler gets called whenever the NWP is done handling with
    the buffer used in a NetApp request. This allows the use of
    dynamic memory with these requests.

    \param          pNetAppRequest     -   Pointer to NetApp request structure.

    \param          pNetAppResponse    -   Pointer to NetApp request Response.

    \note           For more information, please refer to:
                    user.h in the porting
                    folder of the host driver and the
                    CC31xx/CC32xx NWP programmer's
                    guide (SWRU455).

    \return         void

*/
void SimpleLinkNetAppRequestMemFreeEventHandler(uint8_t *buffer)
{
 	TRACE;
	return;
}

