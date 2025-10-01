#ifndef _sun_nio_cs_UTF_16$Decoder_h_
#define _sun_nio_cs_UTF_16$Decoder_h_
//$ class sun.nio.cs.UTF_16$Decoder
//$ extends sun.nio.cs.UnicodeDecoder

#include <sun/nio/cs/UnicodeDecoder.h>

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

class UTF_16$Decoder : public ::sun::nio::cs::UnicodeDecoder {
	$class(UTF_16$Decoder, $NO_CLASS_INIT, ::sun::nio::cs::UnicodeDecoder)
public:
	UTF_16$Decoder();
	void init$(::java::nio::charset::Charset* cs);
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_UTF_16$Decoder_h_