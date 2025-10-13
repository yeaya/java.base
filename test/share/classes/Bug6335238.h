#ifndef _Bug6335238_h_
#define _Bug6335238_h_
//$ class Bug6335238
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("TIME_STRING")
#undef TIME_STRING
#pragma push_macro("UTC_LONG")
#undef UTC_LONG

namespace java {
	namespace text {
		class SimpleDateFormat;
	}
}

class $export Bug6335238 : public ::java::lang::Object {
	$class(Bug6335238, 0, ::java::lang::Object)
public:
	Bug6335238();
	void init$();
	static void main($StringArray* args);
	static const int64_t UTC_LONG = (int64_t)0x000000E2E6C7C260;
	static $String* TIME_STRING;
	static ::java::text::SimpleDateFormat* masterSdf;
	static int32_t duration;
	static bool stopped;
	static bool err;
};

#pragma pop_macro("TIME_STRING")
#pragma pop_macro("UTC_LONG")

#endif // _Bug6335238_h_