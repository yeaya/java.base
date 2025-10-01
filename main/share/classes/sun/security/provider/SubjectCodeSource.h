#ifndef _sun_security_provider_SubjectCodeSource_h_
#define _sun_security_provider_SubjectCodeSource_h_
//$ class sun.security.provider.SubjectCodeSource
//$ extends java.security.CodeSource

#include <java/lang/Array.h>
#include <java/security/CodeSource.h>

#pragma push_macro("PARAMS")
#undef PARAMS

namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class Certificate;
		}
	}
}
namespace java {
	namespace util {
		class LinkedList;
	}
}
namespace javax {
	namespace security {
		namespace auth {
			class Subject;
		}
	}
}
namespace sun {
	namespace security {
		namespace provider {
			class PolicyParser$PrincipalEntry;
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

namespace sun {
	namespace security {
		namespace provider {

class SubjectCodeSource : public ::java::security::CodeSource {
	$class(SubjectCodeSource, 0, ::java::security::CodeSource)
public:
	SubjectCodeSource();
	void init$(::javax::security::auth::Subject* subject, ::java::util::LinkedList* principals, ::java::net::URL* url, $Array<::java::security::cert::Certificate>* certs);
	virtual bool equals(Object$* obj) override;
	virtual ::java::util::LinkedList* getPrincipals();
	virtual ::javax::security::auth::Subject* getSubject();
	virtual int32_t hashCode() override;
	virtual bool implies(::java::security::CodeSource* codesource) override;
	bool subjectListImpliesPrincipalEntry(::java::util::LinkedList* subjectList, ::sun::security::provider::PolicyParser$PrincipalEntry* pppe);
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x53D052C02A89EB0B;
	::javax::security::auth::Subject* subject = nullptr;
	::java::util::LinkedList* principals = nullptr;
	static $ClassArray* PARAMS;
	static ::sun::security::util::Debug* debug;
	::java::lang::ClassLoader* sysClassLoader = nullptr;
};

		} // provider
	} // security
} // sun

#pragma pop_macro("PARAMS")

#endif // _sun_security_provider_SubjectCodeSource_h_