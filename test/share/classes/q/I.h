#ifndef _q_I_h_
#define _q_I_h_
//$ class q.I
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("I")
#undef I

namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}

namespace q {

class $export I : public ::java::lang::Object {
	$class(I, $NO_CLASS_INIT, ::java::lang::Object)
public:
	I();
	void init$();
	virtual $String* filename(::java::nio::file::Path* file);
};

} // q

#pragma pop_macro("I")

#endif // _q_I_h_