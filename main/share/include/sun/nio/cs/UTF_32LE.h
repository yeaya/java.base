#ifndef _sun_nio_cs_UTF_32LE_h_
#define _sun_nio_cs_UTF_32LE_h_
//$ class sun.nio.cs.UTF_32LE
//$ extends sun.nio.cs.Unicode

#include <sun/nio/cs/Unicode.h>

#pragma push_macro("UTF_32LE")
#undef UTF_32LE

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

class $import UTF_32LE : public ::sun::nio::cs::Unicode {
	$class(UTF_32LE, $NO_CLASS_INIT, ::sun::nio::cs::Unicode)
public:
	UTF_32LE();
	void init$();
	virtual bool contains(::java::nio::charset::Charset* cs) override;
	virtual $String* historicalName() override;
	virtual ::java::nio::charset::CharsetDecoder* newDecoder() override;
	virtual ::java::nio::charset::CharsetEncoder* newEncoder() override;
};

		} // cs
	} // nio
} // sun

#pragma pop_macro("UTF_32LE")

#endif // _sun_nio_cs_UTF_32LE_h_