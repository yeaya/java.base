#ifndef _sun_nio_ch_IOStatus_h_
#define _sun_nio_ch_IOStatus_h_
//$ class sun.nio.ch.IOStatus
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("UNAVAILABLE")
#undef UNAVAILABLE
#pragma push_macro("UNSUPPORTED")
#undef UNSUPPORTED
#pragma push_macro("THROWN")
#undef THROWN
#pragma push_macro("EOF")
#undef EOF
#pragma push_macro("UNSUPPORTED_CASE")
#undef UNSUPPORTED_CASE
#pragma push_macro("INTERRUPTED")
#undef INTERRUPTED

namespace sun {
	namespace nio {
		namespace ch {

class $import IOStatus : public ::java::lang::Object {
	$class(IOStatus, $NO_CLASS_INIT, ::java::lang::Object)
public:
	IOStatus();
	void init$();
	static bool check(int32_t n);
	static bool check(int64_t n);
	static bool checkAll(int64_t n);
	static int32_t normalize(int32_t n);
	static int64_t normalize(int64_t n);
	static bool okayToRetry(int64_t n);
	static const int32_t EOF = (-1);
	static const int32_t UNAVAILABLE = (-2);
	static const int32_t INTERRUPTED = (-3);
	static const int32_t UNSUPPORTED = (-4);
	static const int32_t THROWN = (-5);
	static const int32_t UNSUPPORTED_CASE = (-6);
};

		} // ch
	} // nio
} // sun

#pragma pop_macro("UNAVAILABLE")
#pragma pop_macro("UNSUPPORTED")
#pragma pop_macro("THROWN")
#pragma pop_macro("EOF")
#pragma pop_macro("UNSUPPORTED_CASE")
#pragma pop_macro("INTERRUPTED")

#endif // _sun_nio_ch_IOStatus_h_