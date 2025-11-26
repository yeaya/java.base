#ifndef _sun_nio_cs_EUC_JP_Open$Encoder_h_
#define _sun_nio_cs_EUC_JP_Open$Encoder_h_
//$ class sun.nio.cs.EUC_JP_Open$Encoder
//$ extends sun.nio.cs.EUC_JP$Encoder

#include <sun/nio/cs/EUC_JP$Encoder.h>

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

class EUC_JP_Open$Encoder : public ::sun::nio::cs::EUC_JP$Encoder {
	$class(EUC_JP_Open$Encoder, 0, ::sun::nio::cs::EUC_JP$Encoder)
public:
	EUC_JP_Open$Encoder();
	using ::sun::nio::cs::EUC_JP$Encoder::canEncode;
	void init$(::java::nio::charset::Charset* cs);
	virtual int32_t encodeDouble(char16_t ch) override;
	static ::sun::nio::cs::DoubleByte$Encoder* ENC0208_Solaris;
	static ::sun::nio::cs::DoubleByte$Encoder* ENC0212_Solaris;
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_EUC_JP_Open$Encoder_h_