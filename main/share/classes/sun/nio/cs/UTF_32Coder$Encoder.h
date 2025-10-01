#ifndef _sun_nio_cs_UTF_32Coder$Encoder_h_
#define _sun_nio_cs_UTF_32Coder$Encoder_h_
//$ class sun.nio.cs.UTF_32Coder$Encoder
//$ extends java.nio.charset.CharsetEncoder

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

class UTF_32Coder$Encoder : public ::java::nio::charset::CharsetEncoder {
	$class(UTF_32Coder$Encoder, $NO_CLASS_INIT, ::java::nio::charset::CharsetEncoder)
public:
	UTF_32Coder$Encoder();
	void init$(::java::nio::charset::Charset* cs, int32_t byteOrder, bool doBOM);
	virtual ::java::nio::charset::CoderResult* encodeLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst) override;
	virtual void implReset() override;
	virtual void put(int32_t cp, ::java::nio::ByteBuffer* dst);
	bool doBOM = false;
	bool doneBOM = false;
	int32_t byteOrder = 0;
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_UTF_32Coder$Encoder_h_