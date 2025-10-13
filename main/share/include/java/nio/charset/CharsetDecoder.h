#ifndef _java_nio_charset_CharsetDecoder_h_
#define _java_nio_charset_CharsetDecoder_h_
//$ class java.nio.charset.CharsetDecoder
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ST_CODING")
#undef ST_CODING
#pragma push_macro("ST_END")
#undef ST_END
#pragma push_macro("ST_FLUSHED")
#undef ST_FLUSHED
#pragma push_macro("ST_RESET")
#undef ST_RESET

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
			class CodingErrorAction;
		}
	}
}

namespace java {
	namespace nio {
		namespace charset {

class $import CharsetDecoder : public ::java::lang::Object {
	$class(CharsetDecoder, 0, ::java::lang::Object)
public:
	CharsetDecoder();
	void init$(::java::nio::charset::Charset* cs, float averageCharsPerByte, float maxCharsPerByte, $String* replacement);
	void init$(::java::nio::charset::Charset* cs, float averageCharsPerByte, float maxCharsPerByte);
	float averageCharsPerByte();
	::java::nio::charset::Charset* charset();
	::java::nio::charset::CoderResult* decode(::java::nio::ByteBuffer* in, ::java::nio::CharBuffer* out, bool endOfInput);
	::java::nio::CharBuffer* decode(::java::nio::ByteBuffer* in);
	virtual ::java::nio::charset::CoderResult* decodeLoop(::java::nio::ByteBuffer* in, ::java::nio::CharBuffer* out) {return nullptr;}
	virtual ::java::nio::charset::Charset* detectedCharset();
	::java::nio::charset::CoderResult* flush(::java::nio::CharBuffer* out);
	virtual ::java::nio::charset::CoderResult* implFlush(::java::nio::CharBuffer* out);
	virtual void implOnMalformedInput(::java::nio::charset::CodingErrorAction* newAction);
	virtual void implOnUnmappableCharacter(::java::nio::charset::CodingErrorAction* newAction);
	virtual void implReplaceWith($String* newReplacement);
	virtual void implReset();
	virtual bool isAutoDetecting();
	virtual bool isCharsetDetected();
	virtual ::java::nio::charset::CodingErrorAction* malformedInputAction();
	float maxCharsPerByte();
	::java::nio::charset::CharsetDecoder* onMalformedInput(::java::nio::charset::CodingErrorAction* newAction);
	::java::nio::charset::CharsetDecoder* onUnmappableCharacter(::java::nio::charset::CodingErrorAction* newAction);
	::java::nio::charset::CharsetDecoder* replaceWith($String* newReplacement);
	$String* replacement();
	::java::nio::charset::CharsetDecoder* reset();
	void throwIllegalStateException(int32_t from, int32_t to);
	virtual ::java::nio::charset::CodingErrorAction* unmappableCharacterAction();
	static bool $assertionsDisabled;
	::java::nio::charset::Charset* charset$ = nullptr;
	float averageCharsPerByte$ = 0.0;
	float maxCharsPerByte$ = 0.0;
	$String* replacement$ = nullptr;
	::java::nio::charset::CodingErrorAction* malformedInputAction$ = nullptr;
	::java::nio::charset::CodingErrorAction* unmappableCharacterAction$ = nullptr;
	static const int32_t ST_RESET = 0;
	static const int32_t ST_CODING = 1;
	static const int32_t ST_END = 2;
	static const int32_t ST_FLUSHED = 3;
	int32_t state = 0;
	static $StringArray* stateNames;
};

		} // charset
	} // nio
} // java

#pragma pop_macro("ST_CODING")
#pragma pop_macro("ST_END")
#pragma pop_macro("ST_FLUSHED")
#pragma pop_macro("ST_RESET")

#endif // _java_nio_charset_CharsetDecoder_h_