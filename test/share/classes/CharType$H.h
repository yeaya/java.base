#ifndef _CharType$H_h_
#define _CharType$H_h_
//$ class CharType$H
//$ extends java.lang.reflect.InvocationHandler

#include <java/lang/Array.h>
#include <java/lang/reflect/InvocationHandler.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}

class $export CharType$H : public ::java::lang::reflect::InvocationHandler {
	$class(CharType$H, $NO_CLASS_INIT, ::java::lang::reflect::InvocationHandler)
public:
	CharType$H();
	void init$();
	virtual $Object* invoke(Object$* o, ::java::lang::reflect::Method* m, $ObjectArray* arr) override;
};

#endif // _CharType$H_h_