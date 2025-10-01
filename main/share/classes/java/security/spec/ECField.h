#ifndef _java_security_spec_ECField_h_
#define _java_security_spec_ECField_h_
//$ interface java.security.spec.ECField
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		namespace spec {

class $export ECField : public ::java::lang::Object {
	$interface(ECField, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t getFieldSize() {return 0;}
};

		} // spec
	} // security
} // java

#endif // _java_security_spec_ECField_h_