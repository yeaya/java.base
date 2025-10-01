#ifndef _sun_security_provider_DomainKeyStore_h_
#define _sun_security_provider_DomainKeyStore_h_
//$ class sun.security.provider.DomainKeyStore
//$ extends java.security.KeyStoreSpi

#include <java/lang/Array.h>
#include <java/security/KeyStoreSpi.h>

#pragma push_macro("KEYSTORE_TYPE")
#undef KEYSTORE_TYPE
#pragma push_macro("DEFAULT_KEYSTORE_TYPE")
#undef DEFAULT_KEYSTORE_TYPE
#pragma push_macro("ENTRY_NAME_SEPARATOR")
#undef ENTRY_NAME_SEPARATOR
#pragma push_macro("KEYSTORE_URI")
#undef KEYSTORE_URI
#pragma push_macro("KEYSTORE_PASSWORD_ENV")
#undef KEYSTORE_PASSWORD_ENV
#pragma push_macro("DEFAULT_STREAM_PREFIX")
#undef DEFAULT_STREAM_PREFIX
#pragma push_macro("KEYSTORE_PROVIDER_NAME")
#undef KEYSTORE_PROVIDER_NAME
#pragma push_macro("REGEX_META")
#undef REGEX_META

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace net {
		class URI;
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
		class AbstractMap$SimpleEntry;
		class Date;
		class Enumeration;
		class List;
		class Map;
	}
}

namespace sun {
	namespace security {
		namespace provider {

class DomainKeyStore : public ::java::security::KeyStoreSpi {
	$class(DomainKeyStore, 0, ::java::security::KeyStoreSpi)
public:
	DomainKeyStore();
	using ::java::security::KeyStoreSpi::engineLoad;
	void init$();
	virtual $String* convertAlias($String* alias) {return nullptr;}
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
	virtual void engineLoad(::java::io::InputStream* stream, $chars* password) override;
	virtual void engineLoad(::java::security::KeyStore$LoadStoreParameter* param) override;
	virtual void engineSetCertificateEntry($String* alias, ::java::security::cert::Certificate* cert) override;
	virtual void engineSetKeyEntry($String* alias, ::java::security::Key* key, $chars* password, $Array<::java::security::cert::Certificate>* chain) override;
	virtual void engineSetKeyEntry($String* alias, $bytes* key, $Array<::java::security::cert::Certificate>* chain) override;
	virtual int32_t engineSize() override;
	virtual void engineStore(::java::io::OutputStream* stream, $chars* password) override;
	virtual void engineStore(::java::security::KeyStore$LoadStoreParameter* param) override;
	::java::util::List* getBuilders(::java::net::URI* configuration, ::java::util::Map* passwords);
	::java::util::AbstractMap$SimpleEntry* getKeystoreForWriting($String* alias);
	::java::util::AbstractMap$SimpleEntry* getKeystoresForReading($String* alias);
	static $String* ENTRY_NAME_SEPARATOR;
	static $String* KEYSTORE_PROVIDER_NAME;
	static $String* KEYSTORE_TYPE;
	static $String* KEYSTORE_URI;
	static $String* KEYSTORE_PASSWORD_ENV;
	static $String* REGEX_META;
	static $String* DEFAULT_STREAM_PREFIX;
	int32_t streamCounter = 0;
	$String* entryNameSeparator = nullptr;
	$String* entryNameSeparatorRegEx = nullptr;
	static $String* DEFAULT_KEYSTORE_TYPE;
	::java::util::Map* keystores = nullptr;
};

		} // provider
	} // security
} // sun

#pragma pop_macro("KEYSTORE_TYPE")
#pragma pop_macro("DEFAULT_KEYSTORE_TYPE")
#pragma pop_macro("ENTRY_NAME_SEPARATOR")
#pragma pop_macro("KEYSTORE_URI")
#pragma pop_macro("KEYSTORE_PASSWORD_ENV")
#pragma pop_macro("DEFAULT_STREAM_PREFIX")
#pragma pop_macro("KEYSTORE_PROVIDER_NAME")
#pragma pop_macro("REGEX_META")

#endif // _sun_security_provider_DomainKeyStore_h_