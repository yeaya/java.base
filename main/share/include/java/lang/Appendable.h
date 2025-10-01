#ifndef _java_lang_Appendable_h_
#define _java_lang_Appendable_h_
//$ interface java.lang.Appendable
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class CharSequence;
	}
}

namespace java {
	namespace lang {

class $import Appendable : public ::java::lang::Object {
	$interface(Appendable, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::lang::Appendable* append(::java::lang::CharSequence* csq) {return nullptr;}
	virtual ::java::lang::Appendable* append(::java::lang::CharSequence* csq, int32_t start, int32_t end) {return nullptr;}
	virtual ::java::lang::Appendable* append(char16_t c) {return nullptr;}
};

	} // lang
} // java

#endif // _java_lang_Appendable_h_