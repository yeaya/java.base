#ifndef _java_security_CodeSource_h_
#define _java_security_CodeSource_h_
//$ class java.security.CodeSource
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace net {
		class SocketPermission;
		class URL;
	}
}
namespace java {
	namespace security {
		class CodeSigner;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class Certificate;
			class CertificateFactory;
		}
	}
}

namespace java {
	namespace security {

class $import CodeSource : public ::java::io::Serializable {
	$class(CodeSource, $PRELOAD | $NO_CLASS_INIT, ::java::io::Serializable)
public:
	CodeSource();
	void init$(::java::net::URL* url, $Array<::java::security::cert::Certificate>* certs);
	void init$(::java::net::URL* url, $Array<::java::security::CodeSigner>* signers);
	$Array<::java::security::CodeSigner>* convertCertArrayToSignerArray($Array<::java::security::cert::Certificate>* certs);
	virtual bool equals(Object$* obj) override;
	$Array<::java::security::cert::Certificate>* getCertificates();
	$Array<::java::security::CodeSigner>* getCodeSigners();
	::java::net::URL* getLocation();
	virtual $String* getLocationNoFragString();
	virtual int32_t hashCode() override;
	virtual bool implies(::java::security::CodeSource* codesource);
	virtual bool matchCerts(::java::security::CodeSource* that, bool strict);
	bool matchLocation(::java::security::CodeSource* that);
	void readObject(::java::io::ObjectInputStream* ois);
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* oos);
	static const int64_t serialVersionUID = (int64_t)0x4513C7E9C252587F;
	::java::net::URL* location = nullptr;
	$Array<::java::security::CodeSigner>* signers = nullptr;
	$Array<::java::security::cert::Certificate>* certs = nullptr;
	::java::net::SocketPermission* sp = nullptr;
	::java::security::cert::CertificateFactory* factory = nullptr;
	$String* locationNoFragString = nullptr;
};

	} // security
} // java

#endif // _java_security_CodeSource_h_