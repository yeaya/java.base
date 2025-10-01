#ifndef _sun_security_provider_JavaKeyStore$CaseExactJKS_h_
#define _sun_security_provider_JavaKeyStore$CaseExactJKS_h_
//$ class sun.security.provider.JavaKeyStore$CaseExactJKS
//$ extends sun.security.provider.JavaKeyStore

#include <sun/security/provider/JavaKeyStore.h>

namespace sun {
	namespace security {
		namespace provider {

class $export JavaKeyStore$CaseExactJKS : public ::sun::security::provider::JavaKeyStore {
	$class(JavaKeyStore$CaseExactJKS, $NO_CLASS_INIT, ::sun::security::provider::JavaKeyStore)
public:
	JavaKeyStore$CaseExactJKS();
	using ::sun::security::provider::JavaKeyStore::engineStore;
	using ::sun::security::provider::JavaKeyStore::engineLoad;
	void init$();
	virtual $String* convertAlias($String* alias) override;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_JavaKeyStore$CaseExactJKS_h_