#ifndef _sun_nio_cs_GB18030$Encoder_h_
#define _sun_nio_cs_GB18030$Encoder_h_
//$ class sun.nio.cs.GB18030$Encoder
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

class GB18030$Encoder : public ::java::nio::charset::CharsetEncoder {
	$class(GB18030$Encoder, 0, ::java::nio::charset::CharsetEncoder)
public:
	GB18030$Encoder();
	using ::java::nio::charset::CharsetEncoder::canEncode;
	void init$(::java::nio::charset::Charset* cs);
	virtual bool canEncode(char16_t c) override;
	::java::nio::charset::CoderResult* encodeArrayLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst);
	::java::nio::charset::CoderResult* encodeBufferLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst);
	virtual ::java::nio::charset::CoderResult* encodeLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst) override;
	int32_t getGB18030($shorts* outerIndex, $StringArray* innerEncoderIndex, char16_t ch);
	virtual void implReset() override;
	static bool $assertionsDisabled;
	int32_t currentState = 0;
	::sun::nio::cs::Surrogate$Parser* sgp = nullptr;
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_GB18030$Encoder_h_