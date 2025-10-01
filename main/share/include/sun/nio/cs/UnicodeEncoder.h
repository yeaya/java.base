#ifndef _sun_nio_cs_UnicodeEncoder_h_
#define _sun_nio_cs_UnicodeEncoder_h_
//$ class sun.nio.cs.UnicodeEncoder
//$ extends java.nio.charset.CharsetEncoder

#include <java/nio/charset/CharsetEncoder.h>

#pragma push_macro("BIG")
#undef BIG
#pragma push_macro("REVERSED_MARK")
#undef REVERSED_MARK
#pragma push_macro("LITTLE")
#undef LITTLE
#pragma push_macro("BYTE_ORDER_MARK")
#undef BYTE_ORDER_MARK

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

class $import UnicodeEncoder : public ::java::nio::charset::CharsetEncoder {
	$class(UnicodeEncoder, $NO_CLASS_INIT, ::java::nio::charset::CharsetEncoder)
public:
	UnicodeEncoder();
	using ::java::nio::charset::CharsetEncoder::canEncode;
	void init$(::java::nio::charset::Charset* cs, int32_t bo, bool m);
	virtual bool canEncode(char16_t c) override;
	virtual ::java::nio::charset::CoderResult* encodeLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst) override;
	virtual void implReset() override;
	void put(char16_t c, ::java::nio::ByteBuffer* dst);
	static const char16_t BYTE_ORDER_MARK = ((char16_t)65279);
	static const char16_t REVERSED_MARK = ((char16_t)65534);
	static const int32_t BIG = 0;
	static const int32_t LITTLE = 1;
	int32_t byteOrder = 0;
	bool usesMark = false;
	bool needsMark = false;
	::sun::nio::cs::Surrogate$Parser* sgp = nullptr;
};

		} // cs
	} // nio
} // sun

#pragma pop_macro("BIG")
#pragma pop_macro("REVERSED_MARK")
#pragma pop_macro("LITTLE")
#pragma pop_macro("BYTE_ORDER_MARK")

#endif // _sun_nio_cs_UnicodeEncoder_h_