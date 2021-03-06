//
//  config.h
//  futurerestore
//
//  Created by tihmstar on 04.09.16.
//  Copyright © 2016 tihmstar. All rights reserved.
//
#ifdef HAVE_INTTYPES_H
#define __STDC_FORMAT_MACROS
#include <inttypes.h>
#endif

#ifndef config_h
#define config_h

#include "../config.h"

#define IMG4TOOL_NOMAIN
#define NO_DEBUG_PLIST
#define NO_GENERATE_GUID

//idevicerestore config
#define IDEVICERESTORE_NOMAIN

#undef VERSION_COMMIT_SHA
#undef VERSION_COMMIT_COUNT
#define VERSION_COMMIT_COUNT_FUTURERESTORE "undefined version number"
#define VERSION_COMMIT_SHA_FUTURERESTORE "undefined version commit"

#endif /* config_h */
