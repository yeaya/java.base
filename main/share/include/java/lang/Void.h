#ifndef _java_lang_Void_h_
#define _java_lang_Void_h_
//$ class java.lang.Void
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("TYPE")
#undef TYPE

namespace java {
	namespace lang {

class $import Void : public ::java::lang::Object {
	$class(Void, $PRELOAD, ::java::lang::Object)
public:
	Void();
	void init$();
	static $Class* TYPE;
	static ::java::lang::Void* VOID$;
};

	} // lang
} // java

#pragma pop_macro("TYPE")

#endif // _java_lang_Void_h_