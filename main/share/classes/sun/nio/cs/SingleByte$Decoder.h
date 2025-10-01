#ifndef _sun_nio_cs_SingleByte$Decoder_h_
#define _sun_nio_cs_SingleByte$Decoder_h_
//$ class sun.nio.cs.SingleByte$Decoder
//$ extends java.nio.charset.CharsetDecoder
//$ implements sun.nio.cs.ArrayDecoder

#include <java/lang/Array.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <sun/nio/cs/ArrayDecoder.h>

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

class $export SingleByte$Decoder : public ::java::nio::charset::CharsetDecoder, public ::sun::nio::cs::ArrayDecoder {
	$class(SingleByte$Decoder, 0, ::java::nio::charset::CharsetDecoder, ::sun::nio::cs::ArrayDecoder)
public:
	SingleByte$Decoder();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::nio::charset::CharsetDecoder::decode;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::nio::charset::Charset* cs, $chars* b2c);
	void init$(::java::nio::charset::Charset* cs, $chars* b2c, bool isASCIICompatible);
	void init$(::java::nio::charset::Charset* cs, $chars* b2c, bool isASCIICompatible, bool isLatin1Decodable);
	char16_t decode(int32_t b);
	virtual int32_t decode($bytes* src, int32_t sp, int32_t len, $chars* dst) override;
	::java::nio::charset::CoderResult* decodeArrayLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst);
	::java::nio::charset::CoderResult* decodeBufferLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst);
	virtual ::java::nio::charset::CoderResult* decodeLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst) override;
	virtual int32_t decodeToLatin1($bytes* src, int32_t sp, int32_t len, $bytes* dst) override;
	virtual void implReplaceWith($String* newReplacement) override;
	virtual bool isASCIICompatible() override;
	virtual bool isLatin1Decodable() override;
	virtual $String* toString() override;
	static ::jdk::internal::access::JavaLangAccess* JLA;
	$chars* b2c = nullptr;
	bool isASCIICompatible$ = false;
	bool isLatin1Decodable$ = false;
	char16_t repl = 0;
};

		} // cs
	} // nio
} // sun

#pragma pop_macro("JLA")

#endif // _sun_nio_cs_SingleByte$Decoder_h_