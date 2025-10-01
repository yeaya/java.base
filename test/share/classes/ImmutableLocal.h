#ifndef _ImmutableLocal_h_
#define _ImmutableLocal_h_
//$ class ImmutableLocal
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class ThreadLocal;
	}
}

class $export ImmutableLocal : public ::java::lang::Object {
	$class(ImmutableLocal, 0, ::java::lang::Object)
public:
	ImmutableLocal();
	void init$();
	static void main($StringArray* args);
	static ::java::lang::ThreadLocal* cache;
};

#endif // _ImmutableLocal_h_