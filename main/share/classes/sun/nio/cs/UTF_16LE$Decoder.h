#ifndef _sun_nio_cs_UTF_16LE$Decoder_h_
#define _sun_nio_cs_UTF_16LE$Decoder_h_
//$ class sun.nio.cs.UTF_16LE$Decoder
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

class UTF_16LE$Decoder : public ::sun::nio::cs::UnicodeDecoder {
	$class(UTF_16LE$Decoder, $NO_CLASS_INIT, ::sun::nio::cs::UnicodeDecoder)
public:
	UTF_16LE$Decoder();
	void init$(::java::nio::charset::Charset* cs);
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_UTF_16LE$Decoder_h_