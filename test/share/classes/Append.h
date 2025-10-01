#ifndef _Append_h_
#define _Append_h_
//$ class Append
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}

class $export Append : public ::java::lang::Object {
	$class(Append, 0, ::java::lang::Object)
public:
	Append();
	void init$();
	static void main($StringArray* args);
	static void test($Class* c, bool io);
	static void test(::java::lang::reflect::Method* m, bool io);
	static $ClassArray* io;
	static $ClassArray* nio;
};

#endif // _Append_h_