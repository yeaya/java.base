#ifndef _java_lang_Process$CharsetHolder_h_
#define _java_lang_Process$CharsetHolder_h_
//$ class java.lang.Process$CharsetHolder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		namespace charset {
			class Charset;
		}
	}
}

namespace java {
	namespace lang {

class Process$CharsetHolder : public ::java::lang::Object {
	$class(Process$CharsetHolder, 0, ::java::lang::Object)
public:
	Process$CharsetHolder();
	void init$();
	static ::java::nio::charset::Charset* nativeCharset();
	static ::java::nio::charset::Charset* nativeCharset$;
};

	} // lang
} // java

#endif // _java_lang_Process$CharsetHolder_h_