#ifndef _sun_nio_cs_UTF_8_h_
#define _sun_nio_cs_UTF_8_h_
//$ class sun.nio.cs.UTF_8
//$ extends sun.nio.cs.Unicode

#include <sun/nio/cs/Unicode.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace java {
	namespace nio {
		class Buffer;
	}
}
namespace java {
	namespace nio {
		namespace charset {
			class Charset;
			class CharsetDecoder;
			class CharsetEncoder;
		}
	}
}

namespace sun {
	namespace nio {
		namespace cs {

class $export UTF_8 : public ::sun::nio::cs::Unicode {
	$class(UTF_8, $PRELOAD, ::sun::nio::cs::Unicode)
public:
	UTF_8();
	void init$();
	virtual bool contains(::java::nio::charset::Charset* cs) override;
	virtual $String* historicalName() override;
	virtual ::java::nio::charset::CharsetDecoder* newDecoder() override;
	virtual ::java::nio::charset::CharsetEncoder* newEncoder() override;
	static void updatePositions(::java::nio::Buffer* src, int32_t sp, ::java::nio::Buffer* dst, int32_t dp);
	static ::sun::nio::cs::UTF_8* INSTANCE;
};

		} // cs
	} // nio
} // sun

#pragma pop_macro("INSTANCE")

#endif // _sun_nio_cs_UTF_8_h_