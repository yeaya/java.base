#ifndef _sun_security_util_KeyStoreDelegator_h_
#define _sun_security_util_KeyStoreDelegator_h_
//$ class sun.security.util.KeyStoreDelegator
//$ extends java.security.KeyStoreSpi

#include <java/lang/Array.h>
#include <java/security/KeyStoreSpi.h>

#pragma push_macro("KEYSTORE_TYPE_COMPAT")
#undef KEYSTORE_TYPE_COMPAT

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace security {
		class Key;
		class KeyStore$Entry;
		class KeyStore$ProtectionParameter;
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
		namespace util {
			class Debug;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class $import KeyStoreDelegator : public ::java::security::KeyStoreSpi {
	$class(KeyStoreDelegator, 0, ::java::security::KeyStoreSpi)
public:
	KeyStoreDelegator();
	using ::java::security::KeyStoreSpi::engineStore;
	using ::java::security::KeyStoreSpi::engineLoad;
	void init$($String* primaryType, $Class* primaryKeyStore, $String* secondaryType, $Class* secondaryKeyStore);
	virtual ::java::util::Enumeration* engineAliases() override;
	virtual bool engineContainsAlias($String* alias) override;
	virtual void engineDeleteEntry($String* alias) override;
	virtual bool engineEntryInstanceOf($String* alias, $Class* entryClass) override;
	virtual ::java::security::cert::Certificate* engineGetCertificate($String* alias) override;
	virtual $String* engineGetCertificateAlias(::java::security::cert::Certificate* cert) override;
	virtual $Array<::java::security::cert::Certificate>* engineGetCertificateChain($String* alias) override;
	virtual ::java::util::Date* engineGetCreationDate($String* alias) override;
	virtual ::java::security::KeyStore$Entry* engineGetEntry($String* alias, ::java::security::KeyStore$ProtectionParameter* protParam) override;
	virtual ::java::security::Key* engineGetKey($String* alias, $chars* password) override;
	virtual bool engineIsCertificateEntry($String* alias) override;
	virtual bool engineIsKeyEntry($String* alias) override;
	virtual void engineLoad(::java::io::InputStream* stream, $chars* password) override;
	virtual bool engineProbe(::java::io::InputStream* stream) override;
	virtual void engineSetCertificateEntry($String* alias, ::java::security::cert::Certificate* cert) override;
	virtual void engineSetEntry($String* alias, ::java::security::KeyStore$Entry* entry, ::java::security::KeyStore$ProtectionParameter* protParam) override;
	virtual void engineSetKeyEntry($String* alias, ::java::security::Key* key, $chars* password, $Array<::java::security::cert::Certificate>* chain) override;
	virtual void engineSetKeyEntry($String* alias, $bytes* key, $Array<::java::security::cert::Certificate>* chain) override;
	virtual int32_t engineSize() override;
	virtual void engineStore(::java::io::OutputStream* stream, $chars* password) override;
	static $String* lambda$new$0();
	static $String* KEYSTORE_TYPE_COMPAT;
	static ::sun::security::util::Debug* debug;
	$String* primaryType = nullptr;
	$String* secondaryType = nullptr;
	$Class* primaryKeyStore = nullptr;
	$Class* secondaryKeyStore = nullptr;
	$String* type = nullptr;
	::java::security::KeyStoreSpi* keystore = nullptr;
	bool compatModeEnabled = false;
};

		} // util
	} // security
} // sun

#pragma pop_macro("KEYSTORE_TYPE_COMPAT")

#endif // _sun_security_util_KeyStoreDelegator_h_