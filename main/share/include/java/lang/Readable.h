#ifndef _java_lang_Readable_h_
#define _java_lang_Readable_h_
//$ interface java.lang.Readable
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		class CharBuffer;
	}
}

namespace java {
	namespace lang {

class $import Readable : public ::java::lang::Object {
	$interface(Readable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t read(::java::nio::CharBuffer* cb) {return 0;}
};

	} // lang
} // java

#endif // _java_lang_Readable_h_