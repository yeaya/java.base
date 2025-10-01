#ifndef _NativeMethod_h_
#define _NativeMethod_h_
//$ class NativeMethod
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class StackWalker;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}

class $export NativeMethod : public ::java::lang::Object {
	$class(NativeMethod, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NativeMethod();
	void init$();
	static void assertTrue(bool value, $String* msg);
	static ::java::util::List* lambda$walk$0(::java::util::stream::Stream* s);
	static void main($StringArray* args);
	virtual void test();
	virtual void walk();
	::java::lang::StackWalker* walker = nullptr;
};

#endif // _NativeMethod_h_