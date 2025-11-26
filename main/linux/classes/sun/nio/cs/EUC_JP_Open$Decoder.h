#ifndef _sun_nio_cs_EUC_JP_Open$Decoder_h_
#define _sun_nio_cs_EUC_JP_Open$Decoder_h_
//$ class sun.nio.cs.EUC_JP_Open$Decoder
//$ extends sun.nio.cs.EUC_JP$Decoder

#include <sun/nio/cs/EUC_JP$Decoder.h>

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

class EUC_JP_Open$Decoder : public ::sun::nio::cs::EUC_JP$Decoder {
	$class(EUC_JP_Open$Decoder, 0, ::sun::nio::cs::EUC_JP$Decoder)
public:
	EUC_JP_Open$Decoder();
	void init$(::java::nio::charset::Charset* cs);
	virtual char16_t decodeDouble(int32_t byte1, int32_t byte2) override;
	static ::sun::nio::cs::DoubleByte$Decoder* DEC0208_Solaris;
	static ::sun::nio::cs::DoubleByte$Decoder* DEC0212_Solaris;
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_EUC_JP_Open$Decoder_h_