#ifndef _sun_nio_cs_UTF_8$Encoder_h_
#define _sun_nio_cs_UTF_8$Encoder_h_
//$ class sun.nio.cs.UTF_8$Encoder
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
			class Surrogate$Parser;
		}
	}
}

namespace sun {
	namespace nio {
		namespace cs {

class UTF_8$Encoder : public ::java::nio::charset::CharsetEncoder {
	$class(UTF_8$Encoder, $PRELOAD | $NO_CLASS_INIT, ::java::nio::charset::CharsetEncoder)
public:
	UTF_8$Encoder();
	using ::java::nio::charset::CharsetEncoder::canEncode;
	void init$(::java::nio::charset::Charset* cs);
	virtual bool canEncode(char16_t c) override;
	::java::nio::charset::CoderResult* encodeArrayLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst);
	::java::nio::charset::CoderResult* encodeBufferLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst);
	virtual ::java::nio::charset::CoderResult* encodeLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst) override;
	virtual bool isLegalReplacement($bytes* repl) override;
	static ::java::nio::charset::CoderResult* overflow(::java::nio::CharBuffer* src, int32_t sp, ::java::nio::ByteBuffer* dst, int32_t dp);
	static ::java::nio::charset::CoderResult* overflow(::java::nio::CharBuffer* src, int32_t mark);
	::sun::nio::cs::Surrogate$Parser* sgp = nullptr;
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_UTF_8$Encoder_h_