#ifndef _sun_nio_cs_US_ASCII$Encoder_h_
#define _sun_nio_cs_US_ASCII$Encoder_h_
//$ class sun.nio.cs.US_ASCII$Encoder
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

class US_ASCII$Encoder : public ::java::nio::charset::CharsetEncoder {
	$class(US_ASCII$Encoder, 0, ::java::nio::charset::CharsetEncoder)
public:
	US_ASCII$Encoder();
	using ::java::nio::charset::CharsetEncoder::canEncode;
	void init$(::java::nio::charset::Charset* cs);
	virtual bool canEncode(char16_t c) override;
	::java::nio::charset::CoderResult* encodeArrayLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst);
	::java::nio::charset::CoderResult* encodeBufferLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst);
	virtual ::java::nio::charset::CoderResult* encodeLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst) override;
	virtual bool isLegalReplacement($bytes* repl) override;
	static bool $assertionsDisabled;
	::sun::nio::cs::Surrogate$Parser* sgp = nullptr;
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_US_ASCII$Encoder_h_