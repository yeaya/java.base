#ifndef _java_security_DomainCombiner_h_
#define _java_security_DomainCombiner_h_
//$ interface java.security.DomainCombiner
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace security {
		class ProtectionDomain;
	}
}

namespace java {
	namespace security {

class $export DomainCombiner : public ::java::lang::Object {
	$interface(DomainCombiner, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Array<::java::security::ProtectionDomain>* combine($Array<::java::security::ProtectionDomain>* currentDomains, $Array<::java::security::ProtectionDomain>* assignedDomains) {return nullptr;}
};

	} // security
} // java

#endif // _java_security_DomainCombiner_h_