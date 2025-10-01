#ifndef _GetCloneable_h_
#define _GetCloneable_h_
//$ interface GetCloneable
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Cloneable;
	}
}

class $export GetCloneable : public ::java::lang::Object {
	$interface(GetCloneable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::lang::Cloneable* get($Array<double, 3>* x) {return nullptr;}
};

#endif // _GetCloneable_h_