#ifndef _java_nio_charset_StandardCharsets_h_
#define _java_nio_charset_StandardCharsets_h_
//$ class java.nio.charset.StandardCharsets
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("US_ASCII")
#undef US_ASCII
#pragma push_macro("UTF_16")
#undef UTF_16
#pragma push_macro("UTF_16BE")
#undef UTF_16BE
#pragma push_macro("UTF_16LE")
#undef UTF_16LE
#pragma push_macro("UTF_8")
#undef UTF_8

namespace java {
	namespace nio {
		namespace charset {
			class Charset;
		}
	}
}

namespace java {
	namespace nio {
		namespace charset {

class $import StandardCharsets : public ::java::lang::Object {
	$class(StandardCharsets, 0, ::java::lang::Object)
public:
	StandardCharsets();
	void init$();
	static ::java::nio::charset::Charset* US_ASCII;
	static ::java::nio::charset::Charset* ISO_8859_1;
	static ::java::nio::charset::Charset* UTF_8;
	static ::java::nio::charset::Charset* UTF_16BE;
	static ::java::nio::charset::Charset* UTF_16LE;
	static ::java::nio::charset::Charset* UTF_16;
};

		} // charset
	} // nio
} // java

#pragma pop_macro("US_ASCII")
#pragma pop_macro("UTF_16")
#pragma pop_macro("UTF_16BE")
#pragma pop_macro("UTF_16LE")
#pragma pop_macro("UTF_8")

#endif // _java_nio_charset_StandardCharsets_h_