#include <sun/security/ssl/CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer.h>
#include <java/io/IOException.h>
#include <java/nio/ByteBuffer.h>
#include <sun/security/ssl/CertificateAuthoritiesExtension$CertificateAuthoritiesSpec.h>
#include <sun/security/ssl/CertificateAuthoritiesExtension.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CertificateAuthoritiesExtension$CertificateAuthoritiesSpec = ::sun::security::ssl::CertificateAuthoritiesExtension$CertificateAuthoritiesSpec;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

void CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer::init$() {
}

$String* CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer::toString($HandshakeContext* hc, $ByteBuffer* buffer) {
	try {
		return ($$new($CertificateAuthoritiesExtension$CertificateAuthoritiesSpec, hc, buffer))->toString();
	} catch ($IOException& ioe) {
		return ioe->getMessage();
	}
	$shouldNotReachHere();
}

CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer::CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer() {
}

$Class* CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer, init$, void)},
		{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer, toString, $String*, $HandshakeContext*, $ByteBuffer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer", "sun.security.ssl.CertificateAuthoritiesExtension", "CertificateAuthoritiesStringizer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer",
		"java.lang.Object",
		"sun.security.ssl.SSLStringizer",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.CertificateAuthoritiesExtension"
	};
	$loadClass(CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer);
	});
	return class$;
}

$Class* CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer::class$ = nullptr;

		} // ssl
	} // security
} // sun