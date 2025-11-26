#ifndef _sun_nio_cs_EUC_JP$Encoder_h_
#define _sun_nio_cs_EUC_JP$Encoder_h_
//$ class sun.nio.cs.EUC_JP$Encoder
//$ extends java.nio.charset.CharsetEncoder

#include <java/lang/Array.h>
#include <java/nio/charset/CharsetEncoder.h>

namespace java {
	namespace nio {
		class ByteBuffer;
		class CharBuffer;
	}
}
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
			class DoubleByte$Encoder;
			class SingleByte$Encoder;
			class Surrogate$Parser;
		}
	}
}

namespace sun {
	namespace nio {
		namespace cs {

class $export EUC_JP$Encoder : public ::java::nio::charset::CharsetEncoder {
	$class(EUC_JP$Encoder, 0, ::java::nio::charset::CharsetEncoder)
public:
	EUC_JP$Encoder();
	using ::java::nio::charset::CharsetEncoder::canEncode;
	void init$(::java::nio::charset::Charset* cs);
	void init$(::java::nio::charset::Charset* cs, float avgBpc, float maxBpc, ::sun::nio::cs::SingleByte$Encoder* enc0201, ::sun::nio::cs::DoubleByte$Encoder* enc0208, ::sun::nio::cs::DoubleByte$Encoder* enc0212);
	virtual bool canEncode(char16_t c) override;
	::java::nio::charset::CoderResult* encodeArrayLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst);
	::java::nio::charset::CoderResult* encodeBufferLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst);
	virtual int32_t encodeDouble(char16_t ch);
	virtual ::java::nio::charset::CoderResult* encodeLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst) override;
	virtual int32_t encodeSingle(char16_t inputChar, $bytes* outputByte);
	static ::sun::nio::cs::SingleByte$Encoder* ENC0201;
	static ::sun::nio::cs::DoubleByte$Encoder* ENC0208;
	static ::sun::nio::cs::DoubleByte$Encoder* ENC0212;
	::sun::nio::cs::Surrogate$Parser* sgp = nullptr;
	::sun::nio::cs::SingleByte$Encoder* enc0201 = nullptr;
	::sun::nio::cs::DoubleByte$Encoder* enc0208 = nullptr;
	::sun::nio::cs::DoubleByte$Encoder* enc0212 = nullptr;
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_EUC_JP$Encoder_h_