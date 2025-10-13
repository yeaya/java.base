#ifndef _java_nio_charset_CharsetEncoder_h_
#define _java_nio_charset_CharsetEncoder_h_
//$ class java.nio.charset.CharsetEncoder
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
	namespace lang {
		class CharSequence;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class WeakReference;
		}
	}
}
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

class $export CharsetEncoder : public ::java::lang::Object {
	$class(CharsetEncoder, $PRELOAD, ::java::lang::Object)
public:
	CharsetEncoder();
	void init$(::java::nio::charset::Charset* cs, float averageBytesPerChar, float maxBytesPerChar, $bytes* replacement);
	void init$(::java::nio::charset::Charset* cs, float averageBytesPerChar, float maxBytesPerChar);
	float averageBytesPerChar();
	bool canEncode(::java::nio::CharBuffer* cb);
	virtual bool canEncode(char16_t c);
	virtual bool canEncode(::java::lang::CharSequence* cs);
	::java::nio::charset::Charset* charset();
	::java::nio::charset::CoderResult* encode(::java::nio::CharBuffer* in, ::java::nio::ByteBuffer* out, bool endOfInput);
	::java::nio::ByteBuffer* encode(::java::nio::CharBuffer* in);
	virtual ::java::nio::charset::CoderResult* encodeLoop(::java::nio::CharBuffer* in, ::java::nio::ByteBuffer* out) {return nullptr;}
	::java::nio::charset::CoderResult* flush(::java::nio::ByteBuffer* out);
	virtual ::java::nio::charset::CoderResult* implFlush(::java::nio::ByteBuffer* out);
	virtual void implOnMalformedInput(::java::nio::charset::CodingErrorAction* newAction);
	virtual void implOnUnmappableCharacter(::java::nio::charset::CodingErrorAction* newAction);
	virtual void implReplaceWith($bytes* newReplacement);
	virtual void implReset();
	virtual bool isLegalReplacement($bytes* repl);
	virtual ::java::nio::charset::CodingErrorAction* malformedInputAction();
	float maxBytesPerChar();
	::java::nio::charset::CharsetEncoder* onMalformedInput(::java::nio::charset::CodingErrorAction* newAction);
	::java::nio::charset::CharsetEncoder* onUnmappableCharacter(::java::nio::charset::CodingErrorAction* newAction);
	::java::nio::charset::CharsetEncoder* replaceWith($bytes* newReplacement);
	$bytes* replacement();
	::java::nio::charset::CharsetEncoder* reset();
	void throwIllegalStateException(int32_t from, int32_t to);
	virtual ::java::nio::charset::CodingErrorAction* unmappableCharacterAction();
	static bool $assertionsDisabled;
	::java::nio::charset::Charset* charset$ = nullptr;
	float averageBytesPerChar$ = 0.0;
	float maxBytesPerChar$ = 0.0;
	$bytes* replacement$ = nullptr;
	::java::nio::charset::CodingErrorAction* malformedInputAction$ = nullptr;
	::java::nio::charset::CodingErrorAction* unmappableCharacterAction$ = nullptr;
	static const int32_t ST_RESET = 0;
	static const int32_t ST_CODING = 1;
	static const int32_t ST_END = 2;
	static const int32_t ST_FLUSHED = 3;
	int32_t state = 0;
	static $StringArray* stateNames;
	::java::lang::ref::WeakReference* cachedDecoder = nullptr;
};

		} // charset
	} // nio
} // java

#pragma pop_macro("ST_CODING")
#pragma pop_macro("ST_END")
#pragma pop_macro("ST_FLUSHED")
#pragma pop_macro("ST_RESET")

#endif // _java_nio_charset_CharsetEncoder_h_