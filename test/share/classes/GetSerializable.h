#ifndef _GetSerializable_h_
#define _GetSerializable_h_
//$ interface GetSerializable
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class Serializable;
	}
}

class $export GetSerializable : public ::java::lang::Object {
	$interface(GetSerializable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::io::Serializable* get($Array<double, 3>* x) {return nullptr;}
};

#endif // _GetSerializable_h_