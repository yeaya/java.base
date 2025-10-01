#ifndef _sun_nio_ch_NativeThread_h_
#define _sun_nio_ch_NativeThread_h_
//$ class sun.nio.ch.NativeThread
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace nio {
		namespace ch {

class NativeThread : public ::java::lang::Object {
	$class(NativeThread, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NativeThread();
	void init$();
	static int64_t current();
	static void signal(int64_t nt);
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_NativeThread_h_