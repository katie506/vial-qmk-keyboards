#pragma once

#include "quantum.h"

#define LAYOUT_h( \
	K00, K01, K02, K03, K04  \
) { \
	{ K00,   K01,   K02,   K03,   K04 }  \
}
#define LAYOUT LAYOUT_h