#ifndef _Basic4InheritableThreadLocal_h_
#define _Basic4InheritableThreadLocal_h_
//$ class Basic4InheritableThreadLocal
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class InheritableThreadLocal;
	}
}

class $export Basic4InheritableThreadLocal : public ::java::lang::Object {
	$class(Basic4InheritableThreadLocal, 0, ::java::lang::Object)
public:
	Basic4InheritableThreadLocal();
	void init$();
	static void main($StringArray* args);
	static ::java::lang::InheritableThreadLocal* n;
	static int32_t threadCount;
	static $ints* x;
};

#endif // _Basic4InheritableThreadLocal_h_