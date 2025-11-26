#ifndef _sun_nio_cs_EUC_TW$Encoder_h_
#define _sun_nio_cs_EUC_TW$Encoder_h_
//$ class sun.nio.cs.EUC_TW$Encoder
//$ extends java.nio.charset.CharsetEncoder

#include <java/lang/Array.h>
#include <java/nio/charset/CharsetEncoder.h>

namespace java {
	namespace lang {
		class CharSequence;
	}
}
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

class $import EUC_TW$Encoder : public ::java::nio::charset::CharsetEncoder {
	$class(EUC_TW$Encoder, 0, ::java::nio::charset::CharsetEncoder)
public:
	EUC_TW$Encoder();
	using ::java::nio::charset::CharsetEncoder::encode;
	void init$(::java::nio::charset::Charset* cs);
	virtual bool canEncode(char16_t c) override;
	virtual bool canEncode(::java::lang::CharSequence* cs) override;
	static int32_t encode(char16_t hi, char16_t low, $bytes* bb);
	static int32_t encode(char16_t c, $bytes* bb);
	::java::nio::charset::CoderResult* encodeArrayLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst);
	::java::nio::charset::CoderResult* encodeBufferLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst);
	virtual ::java::nio::charset::CoderResult* encodeLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst) override;
	virtual int32_t toEUC(char16_t hi, char16_t low, $bytes* bb);
	virtual int32_t toEUC(char16_t c, $bytes* bb);
	$bytes* bb = nullptr;
	static $chars* c2b;
	static $chars* c2bIndex;
	static $chars* c2bSupp;
	static $chars* c2bSuppIndex;
	static $bytes* c2bPlane;
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_EUC_TW$Encoder_h_