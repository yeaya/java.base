#ifndef _sun_nio_cs_DoubleByte$Decoder_DBCSONLY_h_
#define _sun_nio_cs_DoubleByte$Decoder_DBCSONLY_h_
//$ class sun.nio.cs.DoubleByte$Decoder_DBCSONLY
//$ extends sun.nio.cs.DoubleByte$Decoder

#include <java/lang/Array.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>

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

class $export DoubleByte$Decoder_DBCSONLY : public ::sun::nio::cs::DoubleByte$Decoder {
	$class(DoubleByte$Decoder_DBCSONLY, 0, ::sun::nio::cs::DoubleByte$Decoder)
public:
	DoubleByte$Decoder_DBCSONLY();
	using ::sun::nio::cs::DoubleByte$Decoder::decode;
	void init$(::java::nio::charset::Charset* cs, $Array<char16_t, 2>* b2c, $chars* b2cSB, int32_t b2Min, int32_t b2Max, bool isASCIICompatible);
	void init$(::java::nio::charset::Charset* cs, $Array<char16_t, 2>* b2c, $chars* b2cSB, int32_t b2Min, int32_t b2Max);
	virtual ::java::nio::charset::CoderResult* crMalformedOrUnmappable(int32_t b1, int32_t b2) override;
	static $chars* b2cSB_UNMAPPABLE;
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_DoubleByte$Decoder_DBCSONLY_h_