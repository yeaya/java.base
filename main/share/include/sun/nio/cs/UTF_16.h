#ifndef _sun_nio_cs_UTF_16_h_
#define _sun_nio_cs_UTF_16_h_
//$ class sun.nio.cs.UTF_16
//$ extends sun.nio.cs.Unicode

#include <sun/nio/cs/Unicode.h>

#pragma push_macro("UTF_16")
#undef UTF_16

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

class $import UTF_16 : public ::sun::nio::cs::Unicode {
	$class(UTF_16, $NO_CLASS_INIT, ::sun::nio::cs::Unicode)
public:
	UTF_16();
	void init$();
	virtual bool contains(::java::nio::charset::Charset* cs) override;
	virtual $String* historicalName() override;
	virtual ::java::nio::charset::CharsetDecoder* newDecoder() override;
	virtual ::java::nio::charset::CharsetEncoder* newEncoder() override;
};

		} // cs
	} // nio
} // sun

#pragma pop_macro("UTF_16")

#endif // _sun_nio_cs_UTF_16_h_