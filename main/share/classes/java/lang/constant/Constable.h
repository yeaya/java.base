#ifndef _java_lang_constant_Constable_h_
#define _java_lang_constant_Constable_h_
//$ interface java.lang.constant.Constable
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Optional;
	}
}

namespace java {
	namespace lang {
		namespace constant {

class $export Constable : public ::java::lang::Object {
	$interface(Constable, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::Optional* describeConstable() {return nullptr;}
};

		} // constant
	} // lang
} // java

#endif // _java_lang_constant_Constable_h_