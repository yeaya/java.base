#ifndef _sun_security_provider_PolicyFile_h_
#define _sun_security_provider_PolicyFile_h_
//$ class sun.security.provider.PolicyFile
//$ extends java.security.Policy

#include <java/lang/Array.h>
#include <java/security/Policy.h>

#pragma push_macro("DEFAULT_CACHE_SIZE")
#undef DEFAULT_CACHE_SIZE
#pragma push_macro("PARAMS0")
#undef PARAMS0
#pragma push_macro("PARAMS1")
#undef PARAMS1
#pragma push_macro("PARAMS2")
#undef PARAMS2
#pragma push_macro("POLICY")
#undef POLICY
#pragma push_macro("POLICY_URL")
#undef POLICY_URL
#pragma push_macro("SELF")
#undef SELF
#pragma push_macro("X500PRINCIPAL")
#undef X500PRINCIPAL

namespace java {
	namespace io {
		class InputStream;
		class InputStreamReader;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace nio {
		namespace file {
			class FileSystem;
		}
	}
}
namespace java {
	namespace security {
		class CodeSource;
		class KeyStore;
		class Permission;
		class PermissionCollection;
		class Permissions;
		class Principal;
		class ProtectionDomain;
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
		class List;
		class Set;
	}
}
namespace sun {
	namespace security {
		namespace provider {
			class PolicyFile$PolicyEntry;
			class PolicyFile$PolicyInfo;
			class PolicyFile$SelfPermission;
			class PolicyParser$GrantEntry;
			class PolicyParser$PermissionEntry;
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

class $export PolicyFile : public ::java::security::Policy {
	$class(PolicyFile, 0, ::java::security::Policy)
public:
	PolicyFile();
	void init$();
	void init$(::java::net::URL* url);
	void addGrantEntry(::sun::security::provider::PolicyParser$GrantEntry* ge, ::java::security::KeyStore* keyStore, ::sun::security::provider::PolicyFile$PolicyInfo* newInfo);
	void addPermissions(::java::security::Permissions* perms, ::java::security::CodeSource* cs, $Array<::java::security::Principal>* principals, ::sun::security::provider::PolicyFile$PolicyEntry* entry);
	void addPerms(::java::security::Permissions* perms, $Array<::java::security::Principal>* accPs, ::sun::security::provider::PolicyFile$PolicyEntry* entry);
	static $String* canonPath($String* path);
	::java::security::CodeSource* canonicalizeCodebase(::java::security::CodeSource* cs, bool extractSignerCerts);
	void expandPermissionName(::sun::security::provider::PolicyParser$PermissionEntry* pe, ::java::security::KeyStore* keystore);
	void expandSelf(::sun::security::provider::PolicyFile$SelfPermission* sp, ::java::util::List* entryPs, $Array<::java::security::Principal>* pdp, ::java::security::Permissions* perms);
	$Array<::java::security::cert::Certificate>* getCertificates(::java::security::KeyStore* keyStore, $String* aliases, ::sun::security::provider::PolicyFile$PolicyInfo* newInfo);
	::java::security::CodeSource* getCodeSource(::sun::security::provider::PolicyParser$GrantEntry* ge, ::java::security::KeyStore* keyStore, ::sun::security::provider::PolicyFile$PolicyInfo* newInfo);
	$String* getDN($String* alias, ::java::security::KeyStore* keystore);
	::java::io::InputStreamReader* getInputStreamReader(::java::io::InputStream* is);
	static ::java::security::Permission* getInstance($String* type, $String* name, $String* actions);
	static ::java::security::Permission* getKnownPermission($Class* claz, $String* name, $String* actions);
	static ::java::security::Principal* getKnownPrincipal($Class* claz, $String* name);
	virtual ::java::security::PermissionCollection* getPermissions(::java::security::ProtectionDomain* domain) override;
	virtual ::java::security::PermissionCollection* getPermissions(::java::security::CodeSource* codesource) override;
	::java::security::PermissionCollection* getPermissions(::java::security::Permissions* perms, ::java::security::ProtectionDomain* pd);
	::java::security::PermissionCollection* getPermissions(::java::security::Permissions* perms, ::java::security::CodeSource* cs);
	::java::security::Permissions* getPermissions(::java::security::Permissions* perms, ::java::security::CodeSource* cs, $Array<::java::security::Principal>* principals);
	$Array<::java::lang::String, 2>* getPrincipalInfo(::sun::security::provider::PolicyParser$PrincipalEntry* pe, $Array<::java::security::Principal>* pdp);
	virtual $Array<::java::security::cert::Certificate>* getSignerCertificates(::java::security::CodeSource* cs);
	virtual bool implies(::java::security::ProtectionDomain* pd, ::java::security::Permission* p) override;
	void init(::java::net::URL* url);
	bool init(::java::net::URL* policy, ::sun::security::provider::PolicyFile$PolicyInfo* newInfo);
	void initDefaultPolicy(::sun::security::provider::PolicyFile$PolicyInfo* newInfo);
	void initPolicyFile(::sun::security::provider::PolicyFile$PolicyInfo* newInfo, ::java::net::URL* url);
	bool initPolicyFile($String* propname, $String* urlname, ::sun::security::provider::PolicyFile$PolicyInfo* newInfo);
	void initStaticPolicy(::sun::security::provider::PolicyFile$PolicyInfo* newInfo);
	$String* printPD(::java::security::ProtectionDomain* pd);
	virtual void refresh() override;
	bool replacePrincipals(::java::util::List* principals, ::java::security::KeyStore* keystore);
	static bool wildcardPrincipalNameImplies($String* principalClass, $Array<::java::security::Principal>* principals);
	static ::sun::security::util::Debug* debug;
	static $String* SELF;
	static $String* X500PRINCIPAL;
	static $String* POLICY;
	static $String* POLICY_URL;
	static const int32_t DEFAULT_CACHE_SIZE = 1;
	$volatile(::sun::security::provider::PolicyFile$PolicyInfo*) policyInfo = nullptr;
	bool expandProperties = false;
	bool allowSystemProperties = false;
	bool notUtf8 = false;
	::java::net::URL* url = nullptr;
	static $ClassArray* PARAMS0;
	static $ClassArray* PARAMS1;
	static $ClassArray* PARAMS2;
	static ::java::util::Set* badPolicyURLs;
	static ::java::nio::file::FileSystem* builtInFS;
};

		} // provider
	} // security
} // sun

#pragma pop_macro("DEFAULT_CACHE_SIZE")
#pragma pop_macro("PARAMS0")
#pragma pop_macro("PARAMS1")
#pragma pop_macro("PARAMS2")
#pragma pop_macro("POLICY")
#pragma pop_macro("POLICY_URL")
#pragma pop_macro("SELF")
#pragma pop_macro("X500PRINCIPAL")

#endif // _sun_security_provider_PolicyFile_h_