#ifndef _sun_nio_cs_SingleByte_h_
#define _sun_nio_cs_SingleByte_h_
//$ class sun.nio.cs.SingleByte
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		class Buffer;
	}
}
namespace java {
	namespace nio {
		namespace charset {
			class CoderResult;
		}
	}
}

namespace sun {
	namespace nio {
		namespace cs {

class $export SingleByte : public ::java::lang::Object {
	$class(SingleByte, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SingleByte();
	void init$();
	static void initC2B($chars* b2c, $chars* c2bNR, $chars* c2b, $chars* c2bIndex);
	static ::java::nio::charset::CoderResult* withResult(::java::nio::charset::CoderResult* cr, ::java::nio::Buffer* src, int32_t sp, ::java::nio::Buffer* dst, int32_t dp);
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_SingleByte_h_