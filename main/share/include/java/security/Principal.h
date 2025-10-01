#ifndef _java_security_Principal_h_
#define _java_security_Principal_h_
//$ interface java.security.Principal
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace security {
		namespace auth {
			class Subject;
		}
	}
}

namespace java {
	namespace security {

class $import Principal : public ::java::lang::Object {
	$interface(Principal, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool equals(Object$* another) override;
	virtual $String* getName() {return nullptr;}
	virtual int32_t hashCode() override;
	virtual bool implies(::javax::security::auth::Subject* subject);
	virtual $String* toString() override;
};

	} // security
} // java

#endif // _java_security_Principal_h_