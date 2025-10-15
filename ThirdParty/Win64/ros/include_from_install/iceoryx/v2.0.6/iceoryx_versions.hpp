#ifndef __ICEORYXVERSIONS__
#define __ICEORYXVERSIONS__

#define ICEORYX_VERSION_MAJOR    2
#define ICEORYX_VERSION_MINOR    0
#define ICEORYX_VERSION_PATCH    6
#define ICEORYX_VERSION_TWEAK    0

#define ICEORYX_LATEST_RELEASE_VERSION    "2.0.6"
#define ICEORYX_BUILDDATE                 "2025-08-07T12:22:47Z"
#define ICEORYX_SHA1                      "41b69258cf486685f23bd9cc256888aad99b9d9e"

#include "iceoryx_posh/internal/log/posh_logging.hpp"

#define ICEORYX_PRINT_BUILDINFO()     iox::LogInfo() << "Built: " << ICEORYX_BUILDDATE;


#endif
