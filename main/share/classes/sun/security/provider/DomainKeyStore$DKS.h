#ifndef _sun_security_provider_DomainKeyStore$DKS_h_
#define _sun_security_provider_DomainKeyStore$DKS_h_
//$ class sun.security.provider.DomainKeyStore$DKS
//$ extends sun.security.provider.DomainKeyStore

#include <java/lang/Array.h>
#include <sun/security/provider/DomainKeyStore.h>

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace security {
		class Key;
		class KeyStore$LoadStoreParameter;
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
		class Date;
		class Enumeration;
	}
}

namespace sun {
	namespace security {
		namespace provider {

class DomainKeyStore$DKS : public ::sun::security::provider::DomainKeyStore {
	$class(DomainKeyStore$DKS, $NO_CLASS_INIT, ::sun::security::provider::DomainKeyStore)
public:
	DomainKeyStore$DKS();
	using ::sun::security::provider::DomainKeyStore::engineLoad;
	void init$();
	virtual $String* convertAlias($String* alias) override;
	virtual ::java::util::Enumeration* engineAliases() override;
	virtual bool engineContainsAlias($String* alias) override;
	virtual void engineDeleteEntry($String* alias) override;
	virtual ::java::security::cert::Certificate* engineGetCertificate($String* alias) override;
	virtual $String* engineGetCertificateAlias(::java::security::cert::Certificate* cert) override;
	virtual $Array<::java::security::cert::Certificate>* engineGetCertificateChain($String* alias) override;
	virtual ::java::util::Date* engineGetCreationDate($String* alias) override;
	virtual ::java::security::Key* engineGetKey($String* alias, $chars* password) override;
	virtual bool engineIsCertificateEntry($String* alias) override;
	virtual bool engineIsKeyEntry($String* alias) override;
	virtual void engineLoad(::java::security::KeyStore$LoadStoreParameter* param) override;
	virtual void engineLoad(::java::io::InputStream* stream, $chars* password) override;
	virtual void engineSetCertificateEntry($String* alias, ::java::security::cert::Certificate* cert) override;
	virtual void engineSetKeyEntry($String* alias, $bytes* key, $Array<::java::security::cert::Certificate>* chain) override;
	virtual void engineSetKeyEntry($String* alias, ::java::security::Key* key, $chars* password, $Array<::java::security::cert::Certificate>* chain) override;
	virtual int32_t engineSize() override;
	virtual void engineStore(::java::security::KeyStore$LoadStoreParameter* param) override;
	virtual void engineStore(::java::io::OutputStream* stream, $chars* password) override;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_DomainKeyStore$DKS_h_