#ifndef _sun_nio_cs_UTF_32Coder$Decoder_h_
#define _sun_nio_cs_UTF_32Coder$Decoder_h_
//$ class sun.nio.cs.UTF_32Coder$Decoder
//$ extends java.nio.charset.CharsetDecoder

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

class UTF_32Coder$Decoder : public ::java::nio::charset::CharsetDecoder {
	$class(UTF_32Coder$Decoder, $NO_CLASS_INIT, ::java::nio::charset::CharsetDecoder)
public:
	UTF_32Coder$Decoder();
	void init$(::java::nio::charset::Charset* cs, int32_t bo);
	virtual ::java::nio::charset::CoderResult* decodeLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst) override;
	int32_t getCP(::java::nio::ByteBuffer* src);
	virtual void implReset() override;
	int32_t currentBO = 0;
	int32_t expectedBO = 0;
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_UTF_32Coder$Decoder_h_