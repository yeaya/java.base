#ifndef _sun_nio_cs_UTF_16LE$Encoder_h_
#define _sun_nio_cs_UTF_16LE$Encoder_h_
//$ class sun.nio.cs.UTF_16LE$Encoder
//$ extends sun.nio.cs.UnicodeEncoder

#include <sun/nio/cs/UnicodeEncoder.h>

namespace java {
	namespace nio {
		namespace charset {
			class Charset;
		}
	}
}

namespace sun {
	namespace nio {
		namespace cs {

class UTF_16LE$Encoder : public ::sun::nio::cs::UnicodeEncoder {
	$class(UTF_16LE$Encoder, $NO_CLASS_INIT, ::sun::nio::cs::UnicodeEncoder)
public:
	UTF_16LE$Encoder();
	using ::sun::nio::cs::UnicodeEncoder::canEncode;
	void init$(::java::nio::charset::Charset* cs);
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_UTF_16LE$Encoder_h_