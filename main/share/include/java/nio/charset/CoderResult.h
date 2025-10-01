#ifndef _java_nio_charset_CoderResult_h_
#define _java_nio_charset_CoderResult_h_
//$ class java.nio.charset.CoderResult
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CR_UNMAPPABLE")
#undef CR_UNMAPPABLE
#pragma push_macro("CR_MALFORMED")
#undef CR_MALFORMED
#pragma push_macro("OVERFLOW")
#undef OVERFLOW
#pragma push_macro("CR_UNDERFLOW")
#undef CR_UNDERFLOW
#pragma push_macro("UNDERFLOW")
#undef UNDERFLOW
#pragma push_macro("CR_ERROR_MIN")
#undef CR_ERROR_MIN
#pragma push_macro("CR_OVERFLOW")
#undef CR_OVERFLOW

namespace java {
	namespace lang {
		class Integer;
	}
}

namespace java {
	namespace nio {
		namespace charset {

class $import CoderResult : public ::java::lang::Object {
	$class(CoderResult, 0, ::java::lang::Object)
public:
	CoderResult();
	void init$(int32_t type, int32_t length);
	virtual bool isError();
	virtual bool isMalformed();
	virtual bool isOverflow();
	virtual bool isUnderflow();
	virtual bool isUnmappable();
	static ::java::nio::charset::CoderResult* lambda$malformedForLength$0(::java::lang::Integer* n);
	static ::java::nio::charset::CoderResult* lambda$unmappableForLength$1(::java::lang::Integer* n);
	virtual int32_t length();
	static ::java::nio::charset::CoderResult* malformedForLength(int32_t length);
	virtual void throwException();
	virtual $String* toString() override;
	static ::java::nio::charset::CoderResult* unmappableForLength(int32_t length);
	static bool $assertionsDisabled;
	static const int32_t CR_UNDERFLOW = 0;
	static const int32_t CR_OVERFLOW = 1;
	static const int32_t CR_ERROR_MIN = 2;
	static const int32_t CR_MALFORMED = 2;
	static const int32_t CR_UNMAPPABLE = 3;
	static $StringArray* names;
	int32_t type = 0;
	int32_t length$ = 0;
	static ::java::nio::charset::CoderResult* UNDERFLOW;
	static ::java::nio::charset::CoderResult* OVERFLOW;
	static $Array<::java::nio::charset::CoderResult>* malformed4;
	static $Array<::java::nio::charset::CoderResult>* unmappable4;
};

		} // charset
	} // nio
} // java

#pragma pop_macro("CR_UNMAPPABLE")
#pragma pop_macro("CR_MALFORMED")
#pragma pop_macro("OVERFLOW")
#pragma pop_macro("CR_UNDERFLOW")
#pragma pop_macro("UNDERFLOW")
#pragma pop_macro("CR_ERROR_MIN")
#pragma pop_macro("CR_OVERFLOW")

#endif // _java_nio_charset_CoderResult_h_