/* $Id$
 *
 * reactos/subsys/csrss/api/user.c
 *
 * User functions
 *
 * ReactOS Operating System
 */

/* INCLUDES ******************************************************************/

#include <windows.h>
#define NTOS_MODE_USER
#include <ndk/ntndk.h>

#include "api.h"

#define NDEBUG
#include <debug.h>


/* GLOBALS *******************************************************************/

static BOOLEAN ServicesProcessIdValid = FALSE;
static ULONG ServicesProcessId;


/* FUNCTIONS *****************************************************************/

CSR_API(CsrRegisterServicesProcess)
{
  NTSTATUS Status;

  Reply->Header.MessageSize = sizeof(CSRSS_API_REPLY);
  Reply->Header.DataSize = sizeof(CSRSS_API_REPLY) - LPC_MESSAGE_BASE_SIZE;

  if (ServicesProcessIdValid == TRUE)
    {
      /* Only accept a single call */
      Status = STATUS_INVALID_PARAMETER;
    }
  else
    {
      ServicesProcessId = (ULONG)Request->Data.RegisterServicesProcessRequest.ProcessId;
      ServicesProcessIdValid = TRUE;
      Status = STATUS_SUCCESS;
    }

  Reply->Status = Status;

  return(Status);
}

/* EOF */
