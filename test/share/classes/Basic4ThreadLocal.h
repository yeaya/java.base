#ifndef _Basic4ThreadLocal_h_
#define _Basic4ThreadLocal_h_
//$ class Basic4ThreadLocal
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class ThreadLocal;
	}
}

class $export Basic4ThreadLocal : public ::java::lang::Object {
	$class(Basic4ThreadLocal, 0, ::java::lang::Object)
public:
	Basic4ThreadLocal();
	void init$();
	static void main($StringArray* args);
	static ::java::lang::ThreadLocal* n;
};

#endif // _Basic4ThreadLocal_h_