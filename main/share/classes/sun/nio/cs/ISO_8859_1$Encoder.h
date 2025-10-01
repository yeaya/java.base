#ifndef _sun_nio_cs_ISO_8859_1$Encoder_h_
#define _sun_nio_cs_ISO_8859_1$Encoder_h_
//$ class sun.nio.cs.ISO_8859_1$Encoder
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

class ISO_8859_1$Encoder : public ::java::nio::charset::CharsetEncoder {
	$class(ISO_8859_1$Encoder, 0, ::java::nio::charset::CharsetEncoder)
public:
	ISO_8859_1$Encoder();
	using ::java::nio::charset::CharsetEncoder::canEncode;
	void init$(::java::nio::charset::Charset* cs);
	virtual bool canEncode(char16_t c) override;
	::java::nio::charset::CoderResult* encodeArrayLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst);
	::java::nio::charset::CoderResult* encodeBufferLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst);
	static int32_t encodeISOArray($chars* sa, int32_t sp, $bytes* da, int32_t dp, int32_t len);
	static void encodeISOArrayCheck($chars* sa, int32_t sp, $bytes* da, int32_t dp, int32_t len);
	virtual ::java::nio::charset::CoderResult* encodeLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst) override;
	static int32_t implEncodeISOArray($chars* sa, int32_t sp, $bytes* da, int32_t dp, int32_t len);
	virtual bool isLegalReplacement($bytes* repl) override;
	static bool $assertionsDisabled;
	::sun::nio::cs::Surrogate$Parser* sgp = nullptr;
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_ISO_8859_1$Encoder_h_