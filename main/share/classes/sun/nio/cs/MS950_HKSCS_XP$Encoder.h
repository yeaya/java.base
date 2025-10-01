#ifndef _sun_nio_cs_MS950_HKSCS_XP$Encoder_h_
#define _sun_nio_cs_MS950_HKSCS_XP$Encoder_h_
//$ class sun.nio.cs.MS950_HKSCS_XP$Encoder
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

class MS950_HKSCS_XP$Encoder : public ::sun::nio::cs::HKSCS$Encoder {
	$class(MS950_HKSCS_XP$Encoder, 0, ::sun::nio::cs::HKSCS$Encoder)
public:
	MS950_HKSCS_XP$Encoder();
	using ::sun::nio::cs::HKSCS$Encoder::canEncode;
	using ::sun::nio::cs::HKSCS$Encoder::encode;
	void init$(::java::nio::charset::Charset* cs);
	virtual int32_t encodeSupp(int32_t cp) override;
	static ::sun::nio::cs::DoubleByte$Encoder* ms950;
	static $Array<char16_t, 2>* c2bBmp;
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_MS950_HKSCS_XP$Encoder_h_