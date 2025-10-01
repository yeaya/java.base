#ifndef _java_lang_reflect_Proxy$1_h_
#define _java_lang_reflect_Proxy$1_h_
//$ class java.lang.reflect.Proxy$1
//$ extends java.lang.ClassValue

#include <java/lang/ClassValue.h>

namespace java {
	namespace lang {
		namespace reflect {

class Proxy$1 : public ::java::lang::ClassValue {
	$class(Proxy$1, $NO_CLASS_INIT, ::java::lang::ClassValue)
public:
	Proxy$1();
	void init$();
	virtual $Object* computeValue($Class* type) override;
};

		} // reflect
	} // lang
} // java

#endif // _java_lang_reflect_Proxy$1_h_