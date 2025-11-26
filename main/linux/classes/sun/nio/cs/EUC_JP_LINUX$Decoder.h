#ifndef _sun_nio_cs_EUC_JP_LINUX$Decoder_h_
#define _sun_nio_cs_EUC_JP_LINUX$Decoder_h_
//$ class sun.nio.cs.EUC_JP_LINUX$Decoder
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

class EUC_JP_LINUX$Decoder : public ::sun::nio::cs::EUC_JP$Decoder {
	$class(EUC_JP_LINUX$Decoder, $NO_CLASS_INIT, ::sun::nio::cs::EUC_JP$Decoder)
public:
	EUC_JP_LINUX$Decoder();
	void init$(::java::nio::charset::Charset* cs);
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_EUC_JP_LINUX$Decoder_h_