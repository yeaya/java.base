#ifndef _sun_nio_cs_GB18030$Decoder_h_
#define _sun_nio_cs_GB18030$Decoder_h_
//$ class sun.nio.cs.GB18030$Decoder
//$ extends java.nio.charset.CharsetDecoder

#include <java/nio/charset/CharsetDecoder.h>

#pragma push_macro("REPLACE_CHAR")
#undef REPLACE_CHAR

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

class GB18030$Decoder : public ::java::nio::charset::CharsetDecoder {
	$class(GB18030$Decoder, $NO_CLASS_INIT, ::java::nio::charset::CharsetDecoder)
public:
	GB18030$Decoder();
	void init$(::java::nio::charset::Charset* cs);
	::java::nio::charset::CoderResult* decodeArrayLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst);
	::java::nio::charset::CoderResult* decodeBufferLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst);
	virtual char16_t decodeDouble(int32_t byte1, int32_t byte2);
	virtual ::java::nio::charset::CoderResult* decodeLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst) override;
	char16_t getChar(int32_t offset);
	virtual void implReset() override;
	static const char16_t REPLACE_CHAR = ((char16_t)65533);
	int32_t currentState = 0;
};

		} // cs
	} // nio
} // sun

#pragma pop_macro("REPLACE_CHAR")

#endif // _sun_nio_cs_GB18030$Decoder_h_