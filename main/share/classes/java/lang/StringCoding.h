#ifndef _java_lang_StringCoding_h_
#define _java_lang_StringCoding_h_
//$ class java.lang.StringCoding
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {

class StringCoding : public ::java::lang::Object {
	$class(StringCoding, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StringCoding();
	void init$();
	static bool hasNegatives($bytes* ba, int32_t off, int32_t len);
	static int32_t implEncodeISOArray($bytes* sa, int32_t sp, $bytes* da, int32_t dp, int32_t len);
};

	} // lang
} // java

#endif // _java_lang_StringCoding_h_