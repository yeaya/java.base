#ifndef _sun_security_provider_PolicyFile$PolicyEntry_h_
#define _sun_security_provider_PolicyFile$PolicyEntry_h_
//$ class sun.security.provider.PolicyFile$PolicyEntry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		class CodeSource;
		class Permission;
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace sun {
	namespace security {
		namespace provider {

class PolicyFile$PolicyEntry : public ::java::lang::Object {
	$class(PolicyFile$PolicyEntry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PolicyFile$PolicyEntry();
	void init$(::java::security::CodeSource* cs, ::java::util::List* principals);
	void init$(::java::security::CodeSource* cs);
	virtual void add(::java::security::Permission* p);
	virtual ::java::security::CodeSource* getCodeSource();
	virtual ::java::util::List* getPrincipals();
	virtual $String* toString() override;
	::java::security::CodeSource* codesource = nullptr;
	::java::util::List* permissions = nullptr;
	::java::util::List* principals = nullptr;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_PolicyFile$PolicyEntry_h_