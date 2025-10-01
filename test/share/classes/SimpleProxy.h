#ifndef _SimpleProxy_h_
#define _SimpleProxy_h_
//$ class SimpleProxy
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class ClassLoader;
	}
}

class $export SimpleProxy : public ::java::lang::Object {
	$class(SimpleProxy, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SimpleProxy();
	void init$();
	static void main($StringArray* args);
	static void makeProxy(::java::lang::ClassLoader* loader, $Class* cls);
};

#endif // _SimpleProxy_h_