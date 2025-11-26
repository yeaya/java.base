#ifndef _sun_nio_cs_MS950_HKSCS$Decoder_h_
#define _sun_nio_cs_MS950_HKSCS$Decoder_h_
//$ class sun.nio.cs.MS950_HKSCS$Decoder
//$ extends sun.nio.cs.HKSCS$Decoder

#include <java/lang/Array.h>
#include <sun/nio/cs/HKSCS$Decoder.h>

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
			class DoubleByte$Decoder;
		}
	}
}

namespace sun {
	namespace nio {
		namespace cs {

class $import MS950_HKSCS$Decoder : public ::sun::nio::cs::HKSCS$Decoder {
	$class(MS950_HKSCS$Decoder, 0, ::sun::nio::cs::HKSCS$Decoder)
public:
	MS950_HKSCS$Decoder();
	using ::sun::nio::cs::HKSCS$Decoder::decode;
	void init$(::java::nio::charset::Charset* cs);
	static ::sun::nio::cs::DoubleByte$Decoder* ms950;
	static $Array<char16_t, 2>* b2cBmp;
	static $Array<char16_t, 2>* b2cSupp;
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_MS950_HKSCS$Decoder_h_