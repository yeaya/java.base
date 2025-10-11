#ifndef _sun_nio_cs_UTF_16LE_h_
#define _sun_nio_cs_UTF_16LE_h_
//$ class sun.nio.cs.UTF_16LE
//$ extends sun.nio.cs.Unicode

#include <sun/nio/cs/Unicode.h>

#pragma push_macro("UTF_16LE")
#undef UTF_16LE

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

class $import UTF_16LE : public ::sun::nio::cs::Unicode {
	$class(UTF_16LE, $NO_CLASS_INIT, ::sun::nio::cs::Unicode)
public:
	UTF_16LE();
	void init$();
	virtual bool contains(::java::nio::charset::Charset* cs) override;
	virtual $String* historicalName() override;
	virtual ::java::nio::charset::CharsetDecoder* newDecoder() override;
	virtual ::java::nio::charset::CharsetEncoder* newEncoder() override;
};

		} // cs
	} // nio
} // sun

#pragma pop_macro("UTF_16LE")

#endif // _sun_nio_cs_UTF_16LE_h_