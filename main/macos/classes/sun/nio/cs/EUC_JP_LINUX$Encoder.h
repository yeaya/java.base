#ifndef _sun_nio_cs_EUC_JP_LINUX$Encoder_h_
#define _sun_nio_cs_EUC_JP_LINUX$Encoder_h_
//$ class sun.nio.cs.EUC_JP_LINUX$Encoder
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

class EUC_JP_LINUX$Encoder : public ::sun::nio::cs::EUC_JP$Encoder {
	$class(EUC_JP_LINUX$Encoder, $NO_CLASS_INIT, ::sun::nio::cs::EUC_JP$Encoder)
public:
	EUC_JP_LINUX$Encoder();
	using ::sun::nio::cs::EUC_JP$Encoder::canEncode;
	void init$(::java::nio::charset::Charset* cs);
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_EUC_JP_LINUX$Encoder_h_