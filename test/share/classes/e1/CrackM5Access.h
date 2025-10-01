#ifndef _e1_CrackM5Access_h_
#define _e1_CrackM5Access_h_
//$ class e1.CrackM5Access
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Module;
	}
}

namespace e1 {

class $export CrackM5Access : public ::java::lang::Object {
	$class(CrackM5Access, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CrackM5Access();
	void init$();
	static void addReads(::java::lang::Module* m);
	static void packageMethod();
	static void privateMethod();
};

} // e1

#endif // _e1_CrackM5Access_h_