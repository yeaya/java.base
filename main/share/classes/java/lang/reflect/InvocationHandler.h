#ifndef _java_lang_reflect_InvocationHandler_h_
#define _java_lang_reflect_InvocationHandler_h_
//$ interface java.lang.reflect.InvocationHandler
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}

namespace java {
	namespace lang {
		namespace reflect {

class $export InvocationHandler : public ::java::lang::Object {
	$interface(InvocationHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* invoke(Object$* proxy, ::java::lang::reflect::Method* method, $ObjectArray* args) {return nullptr;}
	static $Object* invokeDefault(Object$* proxy, ::java::lang::reflect::Method* method, $ObjectArray* args);
};

		} // reflect
	} // lang
} // java

#endif // _java_lang_reflect_InvocationHandler_h_