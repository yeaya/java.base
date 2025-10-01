#ifndef _q_J_h_
#define _q_J_h_
//$ class q.J
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class Function;
		}
	}
}

namespace q {

class $export J : public ::java::lang::Object {
	$class(J, $NO_CLASS_INIT, ::java::lang::Object)
public:
	J();
	void init$(::java::util::function::Function* fileReader);
	virtual void check(::java::nio::file::Path* file);
	::java::util::function::Function* fileReader = nullptr;
};

} // q

#endif // _q_J_h_