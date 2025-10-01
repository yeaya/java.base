#ifndef _java_util_jar_JarVerifier$VerifierCodeSource_h_
#define _java_util_jar_JarVerifier$VerifierCodeSource_h_
//$ class java.util.jar.JarVerifier$VerifierCodeSource
//$ extends java.security.CodeSource

#include <java/lang/Array.h>
#include <java/security/CodeSource.h>

namespace java {
	namespace net {
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
		}
	}
}

namespace java {
	namespace util {
		namespace jar {

class JarVerifier$VerifierCodeSource : public ::java::security::CodeSource {
	$class(JarVerifier$VerifierCodeSource, $NO_CLASS_INIT, ::java::security::CodeSource)
public:
	JarVerifier$VerifierCodeSource();
	void init$(Object$* csdomain, ::java::net::URL* location, $Array<::java::security::CodeSigner>* signers);
	void init$(Object$* csdomain, ::java::net::URL* location, $Array<::java::security::cert::Certificate>* certs);
	virtual bool equals(Object$* obj) override;
	$Array<::java::security::cert::Certificate>* getPrivateCertificates();
	$Array<::java::security::CodeSigner>* getPrivateSigners();
	virtual bool isSameDomain(Object$* csdomain);
	static const int64_t serialVersionUID = (int64_t)0x82714C6CDCB23B07;
	::java::net::URL* vlocation = nullptr;
	$Array<::java::security::CodeSigner>* vsigners = nullptr;
	$Array<::java::security::cert::Certificate>* vcerts = nullptr;
	$Object* csdomain = nullptr;
};

		} // jar
	} // util
} // java

#endif // _java_util_jar_JarVerifier$VerifierCodeSource_h_