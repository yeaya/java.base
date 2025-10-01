#ifndef _sun_security_provider_certpath_ResponderId_h_
#define _sun_security_provider_certpath_ResponderId_h_
//$ class sun.security.provider.certpath.ResponderId
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace security {
		class PublicKey;
	}
}
namespace javax {
	namespace security {
		namespace auth {
			namespace x500 {
				class X500Principal;
			}
		}
	}
}
namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {
				class ResponderId$Type;
			}
		}
	}
}
namespace sun {
	namespace security {
		namespace x509 {
			class KeyIdentifier;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

class $import ResponderId : public ::java::lang::Object {
	$class(ResponderId, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ResponderId();
	void init$(::javax::security::auth::x500::X500Principal* subjectName);
	void init$(::java::security::PublicKey* pubKey);
	void init$($bytes* encodedData);
	virtual bool equals(Object$* obj) override;
	$bytes* getEncoded();
	::sun::security::x509::KeyIdentifier* getKeyIdentifier();
	::javax::security::auth::x500::X500Principal* getResponderName();
	::sun::security::provider::certpath::ResponderId$Type* getType();
	virtual int32_t hashCode() override;
	$bytes* keyIdToBytes();
	int32_t length();
	$bytes* principalToBytes();
	virtual $String* toString() override;
	::sun::security::provider::certpath::ResponderId$Type* type = nullptr;
	::javax::security::auth::x500::X500Principal* responderName = nullptr;
	::sun::security::x509::KeyIdentifier* responderKeyId = nullptr;
	$bytes* encodedRid = nullptr;
};

			} // certpath
		} // provider
	} // security
} // sun

#endif // _sun_security_provider_certpath_ResponderId_h_