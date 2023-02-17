#ifndef bastarddcisorp2010_h
#define bastarddcisorp2010_h
#endif

#pragma once

#include "quantum.h"


#define LAYOUT( \
	K000, K001, K002, K003,                   K007, K008, K009, K010, \
	K100, K101, K102, K103, K104,       K106, K107, K108, K109, K110, \
	K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, \
	K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, \
	K400, K401, K402, K403, K404, K405, K406, K407, K408, K409, K410  \
) { \
	{ K000,  K001,  K002,  K003,  KC_NO, KC_NO, KC_NO, K007,  K008,  K009,  K010 }, \
	{ K100,  K101,  K102,  K103,  K104,  KC_NO, K106,  K107,  K108,  K109,  K110 }, \
	{ K200,  K201,  K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210 }, \
	{ K300,  K301,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310 }, \
	{ K400,  K401,  K402,  K403,  K404,  K405,  K406,  K407,  K408,  K409,  K410 }  \
}
