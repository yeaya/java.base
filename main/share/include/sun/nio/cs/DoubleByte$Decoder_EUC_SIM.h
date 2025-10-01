#ifndef _sun_nio_cs_DoubleByte$Decoder_EUC_SIM_h_
#define _sun_nio_cs_DoubleByte$Decoder_EUC_SIM_h_
//$ class sun.nio.cs.DoubleByte$Decoder_EUC_SIM
//$ extends sun.nio.cs.DoubleByte$Decoder

#include <java/lang/Array.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>

#pragma push_macro("SS3")
#undef SS3
#pragma push_macro("SS2")
#undef SS2

namespace java {
	namespace nio {
		namespace charset {
			class Charset;
			class CoderResult;
		}
	}
}

namespace sun {
	namespace nio {
		namespace cs {

class $import DoubleByte$Decoder_EUC_SIM : public ::sun::nio::cs::DoubleByte$Decoder {
	$class(DoubleByte$Decoder_EUC_SIM, $NO_CLASS_INIT, ::sun::nio::cs::DoubleByte$Decoder)
public:
	DoubleByte$Decoder_EUC_SIM();
	using ::sun::nio::cs::DoubleByte$Decoder::decode;
	void init$(::java::nio::charset::Charset* cs, $Array<char16_t, 2>* b2c, $chars* b2cSB, int32_t b2Min, int32_t b2Max, bool isASCIICompatible);
	virtual ::java::nio::charset::CoderResult* crMalformedOrUnderFlow(int32_t b) override;
	virtual ::java::nio::charset::CoderResult* crMalformedOrUnmappable(int32_t b1, int32_t b2) override;
	virtual int32_t decode($bytes* src, int32_t sp, int32_t len, $chars* dst) override;
	static const int32_t SS2 = 142;
	static const int32_t SS3 = 143;
};

		} // cs
	} // nio
} // sun

#pragma pop_macro("SS3")
#pragma pop_macro("SS2")

#endif // _sun_nio_cs_DoubleByte$Decoder_EUC_SIM_h_