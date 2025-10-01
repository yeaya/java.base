#ifndef _sun_security_provider_PolicySpiFile_h_
#define _sun_security_provider_PolicySpiFile_h_
//$ class sun.security.provider.PolicySpiFile
//$ extends java.security.PolicySpi

#include <java/security/PolicySpi.h>

namespace java {
	namespace security {
		class CodeSource;
		class Permission;
		class PermissionCollection;
		class Policy$Parameters;
		class ProtectionDomain;
	}
}
namespace sun {
	namespace security {
		namespace provider {
			class PolicyFile;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {

class $export PolicySpiFile : public ::java::security::PolicySpi {
	$class(PolicySpiFile, $NO_CLASS_INIT, ::java::security::PolicySpi)
public:
	PolicySpiFile();
	void init$(::java::security::Policy$Parameters* params);
	virtual ::java::security::PermissionCollection* engineGetPermissions(::java::security::CodeSource* codesource) override;
	virtual ::java::security::PermissionCollection* engineGetPermissions(::java::security::ProtectionDomain* d) override;
	virtual bool engineImplies(::java::security::ProtectionDomain* d, ::java::security::Permission* p) override;
	virtual void engineRefresh() override;
	::sun::security::provider::PolicyFile* pf = nullptr;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_PolicySpiFile_h_