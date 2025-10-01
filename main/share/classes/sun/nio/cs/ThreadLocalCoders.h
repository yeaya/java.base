#ifndef _sun_nio_cs_ThreadLocalCoders_h_
#define _sun_nio_cs_ThreadLocalCoders_h_
//$ class sun.nio.cs.ThreadLocalCoders
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CACHE_SIZE")
#undef CACHE_SIZE

namespace java {
	namespace nio {
		namespace charset {
			class CharsetDecoder;
			class CharsetEncoder;
		}
	}
}
namespace sun {
	namespace nio {
		namespace cs {
			class ThreadLocalCoders$Cache;
		}
	}
}

namespace sun {
	namespace nio {
		namespace cs {

class $export ThreadLocalCoders : public ::java::lang::Object {
	$class(ThreadLocalCoders, 0, ::java::lang::Object)
public:
	ThreadLocalCoders();
	void init$();
	static ::java::nio::charset::CharsetDecoder* decoderFor(Object$* name);
	static ::java::nio::charset::CharsetEncoder* encoderFor(Object$* name);
	static const int32_t CACHE_SIZE = 3;
	static ::sun::nio::cs::ThreadLocalCoders$Cache* decoderCache;
	static ::sun::nio::cs::ThreadLocalCoders$Cache* encoderCache;
};

		} // cs
	} // nio
} // sun

#pragma pop_macro("CACHE_SIZE")

#endif // _sun_nio_cs_ThreadLocalCoders_h_