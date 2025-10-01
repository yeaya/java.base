#ifndef _java_io_ObjectInputValidation_h_
#define _java_io_ObjectInputValidation_h_
//$ interface java.io.ObjectInputValidation
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {

class $import ObjectInputValidation : public ::java::lang::Object {
	$interface(ObjectInputValidation, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void validateObject() {}
};

	} // io
} // java

#endif // _java_io_ObjectInputValidation_h_