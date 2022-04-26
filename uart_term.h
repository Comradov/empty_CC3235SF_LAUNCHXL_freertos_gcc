#ifndef __UART_IF_H__
#define __UART_IF_H__

// TI-Driver includes

#include <ti/drivers/UART.h>

//Defines

#define UART_PRINT Report
#define DBG_PRINT Report
#define ERR_PRINT(x) Report("Error [%d] at line [%d] in function [%s]  \r\n", x, __LINE__, __FUNCTION__)

#define TRACE Report( "%s:%d:%s(): TRACE\r\n", __FILE__, __LINE__, __FUNCTION__ )
#define PRINTF_FFL( _fmt, _args... ) { Report( "%s:%d:%s() " _fmt, __FILE__, __LINE__, __FUNCTION__, ##_args ); }
#define PRINTF Report

/* API */

UART_Handle InitTerm(void);

int Report(const char *pcFormat, ...);

void Message(const char *str);


#endif // __UART_IF_H__
