#ifndef _sun_nio_cs_CESU_8_h_
#define _sun_nio_cs_CESU_8_h_
//$ class sun.nio.cs.CESU_8
//$ extends sun.nio.cs.Unicode

#include <sun/nio/cs/Unicode.h>

#pragma push_macro("CESU_8")
#undef CESU_8

namespace java {
	namespace nio {
		class Buffer;
	}
}
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

class CESU_8 : public ::sun::nio::cs::Unicode {
	$class(CESU_8, $NO_CLASS_INIT, ::sun::nio::cs::Unicode)
public:
	CESU_8();
	void init$();
	virtual $String* historicalName() override;
	virtual ::java::nio::charset::CharsetDecoder* newDecoder() override;
	virtual ::java::nio::charset::CharsetEncoder* newEncoder() override;
	static void updatePositions(::java::nio::Buffer* src, int32_t sp, ::java::nio::Buffer* dst, int32_t dp);
};

		} // cs
	} // nio
} // sun

#pragma pop_macro("CESU_8")

#endif // _sun_nio_cs_CESU_8_h_