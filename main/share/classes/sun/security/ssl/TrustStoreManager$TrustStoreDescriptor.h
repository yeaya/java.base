#ifndef _sun_security_ssl_TrustStoreManager$TrustStoreDescriptor_h_
#define _sun_security_ssl_TrustStoreManager$TrustStoreDescriptor_h_
//$ class sun.security.ssl.TrustStoreManager$TrustStoreDescriptor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class File;
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class TrustStoreManager$TrustStoreDescriptor : public ::java::lang::Object {
	$class(TrustStoreManager$TrustStoreDescriptor, 0, ::java::lang::Object)
public:
	TrustStoreManager$TrustStoreDescriptor();
	void init$($String* storeName, $String* storeType, $String* storeProvider, $String* storePassword, ::java::io::File* storeFile, int64_t lastModified);
	static ::sun::security::ssl::TrustStoreManager$TrustStoreDescriptor* createInstance();
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	static $String* fileSep;
	static $String* defaultStorePath;
	static $String* defaultStore;
	static $String* jsseDefaultStore;
	$String* storeName = nullptr;
	$String* storeType = nullptr;
	$String* storeProvider = nullptr;
	$String* storePassword = nullptr;
	::java::io::File* storeFile = nullptr;
	int64_t lastModified = 0;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_TrustStoreManager$TrustStoreDescriptor_h_