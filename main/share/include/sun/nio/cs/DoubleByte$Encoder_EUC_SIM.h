#ifndef _sun_nio_cs_DoubleByte$Encoder_EUC_SIM_h_
#define _sun_nio_cs_DoubleByte$Encoder_EUC_SIM_h_
//$ class sun.nio.cs.DoubleByte$Encoder_EUC_SIM
//$ extends sun.nio.cs.DoubleByte$Encoder

#include <java/lang/Array.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>

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

class $import DoubleByte$Encoder_EUC_SIM : public ::sun::nio::cs::DoubleByte$Encoder {
	$class(DoubleByte$Encoder_EUC_SIM, $NO_CLASS_INIT, ::sun::nio::cs::DoubleByte$Encoder)
public:
	DoubleByte$Encoder_EUC_SIM();
	using ::sun::nio::cs::DoubleByte$Encoder::canEncode;
	using ::sun::nio::cs::DoubleByte$Encoder::encode;
	void init$(::java::nio::charset::Charset* cs, $chars* c2b, $chars* c2bIndex, bool isASCIICompatible);
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_DoubleByte$Encoder_EUC_SIM_h_