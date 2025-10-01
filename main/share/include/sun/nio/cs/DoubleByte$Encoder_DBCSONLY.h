#ifndef _sun_nio_cs_DoubleByte$Encoder_DBCSONLY_h_
#define _sun_nio_cs_DoubleByte$Encoder_DBCSONLY_h_
//$ class sun.nio.cs.DoubleByte$Encoder_DBCSONLY
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

class $import DoubleByte$Encoder_DBCSONLY : public ::sun::nio::cs::DoubleByte$Encoder {
	$class(DoubleByte$Encoder_DBCSONLY, $NO_CLASS_INIT, ::sun::nio::cs::DoubleByte$Encoder)
public:
	DoubleByte$Encoder_DBCSONLY();
	using ::sun::nio::cs::DoubleByte$Encoder::canEncode;
	using ::sun::nio::cs::DoubleByte$Encoder::encode;
	void init$(::java::nio::charset::Charset* cs, $bytes* repl, $chars* c2b, $chars* c2bIndex, bool isASCIICompatible);
	virtual int32_t encodeChar(char16_t ch) override;
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_DoubleByte$Encoder_DBCSONLY_h_