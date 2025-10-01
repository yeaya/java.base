#ifndef _sun_nio_cs_HKSCS$Encoder_h_
#define _sun_nio_cs_HKSCS$Encoder_h_
//$ class sun.nio.cs.HKSCS$Encoder
//$ extends sun.nio.cs.DoubleByte$Encoder

#include <java/lang/Array.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>

#pragma push_macro("C2B_UNMAPPABLE")
#undef C2B_UNMAPPABLE

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

class $import HKSCS$Encoder : public ::sun::nio::cs::DoubleByte$Encoder {
	$class(HKSCS$Encoder, 0, ::sun::nio::cs::DoubleByte$Encoder)
public:
	HKSCS$Encoder();
	using ::sun::nio::cs::DoubleByte$Encoder::encode;
	using ::sun::nio::cs::DoubleByte$Encoder::canEncode;
	void init$(::java::nio::charset::Charset* cs, ::sun::nio::cs::DoubleByte$Encoder* big5Enc, $Array<char16_t, 2>* c2bBmp, $Array<char16_t, 2>* c2bSupp);
	virtual bool canEncode(char16_t c) override;
	virtual int32_t encode($chars* src, int32_t sp, int32_t len, $bytes* dst) override;
	virtual ::java::nio::charset::CoderResult* encodeArrayLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst) override;
	virtual int32_t encodeBig5(char16_t ch);
	virtual ::java::nio::charset::CoderResult* encodeBufferLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst) override;
	virtual int32_t encodeChar(char16_t ch) override;
	virtual int32_t encodeFromUTF16($bytes* src, int32_t sp, int32_t len, $bytes* dst) override;
	virtual ::java::nio::charset::CoderResult* encodeLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst) override;
	virtual int32_t encodeSupp(int32_t cp);
	virtual void implReplaceWith($bytes* newReplacement) override;
	static void initc2b($Array<char16_t, 2>* c2b, $StringArray* b2cStr, $String* pua);
	::sun::nio::cs::DoubleByte$Encoder* big5Enc = nullptr;
	$Array<char16_t, 2>* c2bBmp = nullptr;
	$Array<char16_t, 2>* c2bSupp = nullptr;
	$bytes* repl = nullptr;
	static $chars* C2B_UNMAPPABLE;
};

		} // cs
	} // nio
} // sun

#pragma pop_macro("C2B_UNMAPPABLE")

#endif // _sun_nio_cs_HKSCS$Encoder_h_