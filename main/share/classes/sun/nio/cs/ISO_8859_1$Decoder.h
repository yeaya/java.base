#ifndef _sun_nio_cs_ISO_8859_1$Decoder_h_
#define _sun_nio_cs_ISO_8859_1$Decoder_h_
//$ class sun.nio.cs.ISO_8859_1$Decoder
//$ extends java.nio.charset.CharsetDecoder

#include <java/nio/charset/CharsetDecoder.h>

#pragma push_macro("JLA")
#undef JLA

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
namespace jdk {
	namespace internal {
		namespace access {
			class JavaLangAccess;
		}
	}
}

namespace sun {
	namespace nio {
		namespace cs {

class ISO_8859_1$Decoder : public ::java::nio::charset::CharsetDecoder {
	$class(ISO_8859_1$Decoder, 0, ::java::nio::charset::CharsetDecoder)
public:
	ISO_8859_1$Decoder();
	void init$(::java::nio::charset::Charset* cs);
	::java::nio::charset::CoderResult* decodeArrayLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst);
	::java::nio::charset::CoderResult* decodeBufferLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst);
	virtual ::java::nio::charset::CoderResult* decodeLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst) override;
	static ::jdk::internal::access::JavaLangAccess* JLA;
};

		} // cs
	} // nio
} // sun

#pragma pop_macro("JLA")

#endif // _sun_nio_cs_ISO_8859_1$Decoder_h_