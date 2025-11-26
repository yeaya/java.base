#ifndef _sun_nio_cs_Big5_HKSCS$Encoder_h_
#define _sun_nio_cs_Big5_HKSCS$Encoder_h_
//$ class sun.nio.cs.Big5_HKSCS$Encoder
//$ extends sun.nio.cs.HKSCS$Encoder

#include <java/lang/Array.h>
#include <sun/nio/cs/HKSCS$Encoder.h>

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
			class DoubleByte$Encoder;
		}
	}
}

namespace sun {
	namespace nio {
		namespace cs {

class $import Big5_HKSCS$Encoder : public ::sun::nio::cs::HKSCS$Encoder {
	$class(Big5_HKSCS$Encoder, 0, ::sun::nio::cs::HKSCS$Encoder)
public:
	Big5_HKSCS$Encoder();
	using ::sun::nio::cs::HKSCS$Encoder::canEncode;
	using ::sun::nio::cs::HKSCS$Encoder::encode;
	void init$(::java::nio::charset::Charset* cs);
	static ::sun::nio::cs::DoubleByte$Encoder* big5;
	static $Array<char16_t, 2>* c2bBmp;
	static $Array<char16_t, 2>* c2bSupp;
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_Big5_HKSCS$Encoder_h_