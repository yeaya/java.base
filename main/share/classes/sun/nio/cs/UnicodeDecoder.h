#ifndef _sun_nio_cs_UnicodeDecoder_h_
#define _sun_nio_cs_UnicodeDecoder_h_
//$ class sun.nio.cs.UnicodeDecoder
//$ extends java.nio.charset.CharsetDecoder

#include <java/nio/charset/CharsetDecoder.h>

#pragma push_macro("BIG")
#undef BIG
#pragma push_macro("BYTE_ORDER_MARK")
#undef BYTE_ORDER_MARK
#pragma push_macro("LITTLE")
#undef LITTLE
#pragma push_macro("NONE")
#undef NONE
#pragma push_macro("REVERSED_MARK")
#undef REVERSED_MARK

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

class UnicodeDecoder : public ::java::nio::charset::CharsetDecoder {
	$class(UnicodeDecoder, $NO_CLASS_INIT, ::java::nio::charset::CharsetDecoder)
public:
	UnicodeDecoder();
	using ::java::nio::charset::CharsetDecoder::decode;
	void init$(::java::nio::charset::Charset* cs, int32_t bo);
	void init$(::java::nio::charset::Charset* cs, int32_t bo, int32_t defaultBO);
	char16_t decode(int32_t b1, int32_t b2);
	virtual ::java::nio::charset::CoderResult* decodeLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst) override;
	virtual void implReset() override;
	static const char16_t BYTE_ORDER_MARK = (char16_t)0x0000FEFF;
	static const char16_t REVERSED_MARK = (char16_t)0x0000FFFE;
	static const int32_t NONE = 0;
	static const int32_t BIG = 1;
	static const int32_t LITTLE = 2;
	int32_t expectedByteOrder = 0;
	int32_t currentByteOrder = 0;
	int32_t defaultByteOrder = 0;
};

		} // cs
	} // nio
} // sun

#pragma pop_macro("BIG")
#pragma pop_macro("BYTE_ORDER_MARK")
#pragma pop_macro("LITTLE")
#pragma pop_macro("NONE")
#pragma pop_macro("REVERSED_MARK")

#endif // _sun_nio_cs_UnicodeDecoder_h_