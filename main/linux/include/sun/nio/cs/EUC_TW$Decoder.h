#ifndef _sun_nio_cs_EUC_TW$Decoder_h_
#define _sun_nio_cs_EUC_TW$Decoder_h_
//$ class sun.nio.cs.EUC_TW$Decoder
//$ extends java.nio.charset.CharsetDecoder

#include <java/lang/Array.h>
#include <java/nio/charset/CharsetDecoder.h>

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

class $import EUC_TW$Decoder : public ::java::nio::charset::CharsetDecoder {
	$class(EUC_TW$Decoder, 0, ::java::nio::charset::CharsetDecoder)
public:
	EUC_TW$Decoder();
	using ::java::nio::charset::CharsetDecoder::decode;
	void init$(::java::nio::charset::Charset* cs);
	static $chars* decode(int32_t b1, int32_t b2, int32_t p, $chars* c1, $chars* c2);
	::java::nio::charset::CoderResult* decodeArrayLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst);
	::java::nio::charset::CoderResult* decodeBufferLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst);
	virtual ::java::nio::charset::CoderResult* decodeLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst) override;
	static char16_t decodeSingleOrReplace(int32_t b1, int32_t b2, int32_t p, char16_t replace);
	static bool isLegalDB(int32_t b);
	virtual $chars* toUnicode(int32_t b1, int32_t b2, int32_t p);
	$chars* c1 = nullptr;
	$chars* c2 = nullptr;
	static $StringArray* b2c;
	static const int32_t b1Min = 161; // EUC_TWMapping.b1Min
	static const int32_t b1Max = 254; // EUC_TWMapping.b1Max
	static const int32_t b2Min = 161; // EUC_TWMapping.b2Min
	static const int32_t b2Max = 254; // EUC_TWMapping.b2Max
	static const int32_t dbSegSize = 94; // b2Max - b2Min + 1
	static $bytes* b2cIsSupp;
	static $bytes* cnspToIndex;
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_EUC_TW$Decoder_h_