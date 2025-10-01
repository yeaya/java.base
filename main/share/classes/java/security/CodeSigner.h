#ifndef _java_security_CodeSigner_h_
#define _java_security_CodeSigner_h_
//$ class java.security.CodeSigner
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace security {
		class Timestamp;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class CertPath;
		}
	}
}

namespace java {
	namespace security {

class $export CodeSigner : public ::java::io::Serializable {
	$class(CodeSigner, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	CodeSigner();
	void init$(::java::security::cert::CertPath* signerCertPath, ::java::security::Timestamp* timestamp);
	virtual bool equals(Object$* obj) override;
	::java::security::cert::CertPath* getSignerCertPath();
	::java::security::Timestamp* getTimestamp();
	virtual int32_t hashCode() override;
	void readObject(::java::io::ObjectInputStream* ois);
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x5EA2FA66CB219AAD;
	::java::security::cert::CertPath* signerCertPath = nullptr;
	::java::security::Timestamp* timestamp = nullptr;
	int32_t myhash = 0;
};

	} // security
} // java

#endif // _java_security_CodeSigner_h_