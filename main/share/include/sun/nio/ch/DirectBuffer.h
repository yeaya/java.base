#ifndef _sun_nio_ch_DirectBuffer_h_
#define _sun_nio_ch_DirectBuffer_h_
//$ interface sun.nio.ch.DirectBuffer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace ref {
			class Cleaner;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class $import DirectBuffer : public ::java::lang::Object {
	$interface(DirectBuffer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int64_t address() {return 0;}
	virtual $Object* attachment() {return nullptr;}
	virtual ::jdk::internal::ref::Cleaner* cleaner() {return nullptr;}
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_DirectBuffer_h_