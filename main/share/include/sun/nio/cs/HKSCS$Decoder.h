#ifndef _sun_nio_cs_HKSCS$Decoder_h_
#define _sun_nio_cs_HKSCS$Decoder_h_
//$ class sun.nio.cs.HKSCS$Decoder
//$ extends sun.nio.cs.DoubleByte$Decoder

#include <java/lang/Array.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>

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

class $import HKSCS$Decoder : public ::sun::nio::cs::DoubleByte$Decoder {
	$class(HKSCS$Decoder, 0, ::sun::nio::cs::DoubleByte$Decoder)
public:
	HKSCS$Decoder();
	using ::sun::nio::cs::DoubleByte$Decoder::decode;
	void init$(::java::nio::charset::Charset* cs, ::sun::nio::cs::DoubleByte$Decoder* big5Dec, $Array<char16_t, 2>* b2cBmp, $Array<char16_t, 2>* b2cSupp);
	virtual int32_t decode($bytes* src, int32_t sp, int32_t len, $chars* dst) override;
	virtual ::java::nio::charset::CoderResult* decodeArrayLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst) override;
	virtual char16_t decodeBig5(int32_t b1, int32_t b2);
	virtual ::java::nio::charset::CoderResult* decodeBufferLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst) override;
	virtual char16_t decodeDouble(int32_t b1, int32_t b2) override;
	virtual char16_t decodeDoubleEx(int32_t b1, int32_t b2);
	virtual ::java::nio::charset::CoderResult* decodeLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst) override;
	virtual char16_t decodeSingle(int32_t b) override;
	static void initb2c($Array<char16_t, 2>* b2c, $StringArray* b2cStr);
	static int32_t b2Min;
	static int32_t b2Max;
	$Array<char16_t, 2>* b2cBmp = nullptr;
	$Array<char16_t, 2>* b2cSupp = nullptr;
	::sun::nio::cs::DoubleByte$Decoder* big5Dec = nullptr;
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_HKSCS$Decoder_h_