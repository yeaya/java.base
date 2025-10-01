#ifndef _javax_security_auth_SubjectDomainCombiner_h_
#define _javax_security_auth_SubjectDomainCombiner_h_
//$ class javax.security.auth.SubjectDomainCombiner
//$ extends java.security.DomainCombiner

#include <java/lang/Array.h>
#include <java/security/DomainCombiner.h>

namespace java {
	namespace security {
		class Principal;
		class ProtectionDomain;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}
namespace javax {
	namespace security {
		namespace auth {
			class Subject;
			class SubjectDomainCombiner$WeakKeyValueMap;
		}
	}
}
namespace sun {
	namespace security {
		namespace util {
			class Debug;
		}
	}
}

namespace javax {
	namespace security {
		namespace auth {

class $export SubjectDomainCombiner : public ::java::security::DomainCombiner {
	$class(SubjectDomainCombiner, 0, ::java::security::DomainCombiner)
public:
	SubjectDomainCombiner();
	void init$(::javax::security::auth::Subject* subject);
	virtual $Array<::java::security::ProtectionDomain>* combine($Array<::java::security::ProtectionDomain>* currentDomains, $Array<::java::security::ProtectionDomain>* assignedDomains) override;
	virtual ::javax::security::auth::Subject* getSubject();
	static $Array<::java::security::ProtectionDomain>* optimize($Array<::java::security::ProtectionDomain>* domains);
	static $String* printDomain(::java::security::ProtectionDomain* pd);
	static void printInputDomains($Array<::java::security::ProtectionDomain>* currentDomains, $Array<::java::security::ProtectionDomain>* assignedDomains);
	::javax::security::auth::Subject* subject = nullptr;
	::javax::security::auth::SubjectDomainCombiner$WeakKeyValueMap* cachedPDs = nullptr;
	::java::util::Set* principalSet = nullptr;
	$Array<::java::security::Principal>* principals = nullptr;
	static ::sun::security::util::Debug* debug;
};

		} // auth
	} // security
} // javax

#endif // _javax_security_auth_SubjectDomainCombiner_h_