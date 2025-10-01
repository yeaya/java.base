#include <sun/security/ssl/CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer.h>

#include <java/io/IOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $CertificateAuthoritiesExtension = ::sun::security::ssl::CertificateAuthoritiesExtension;
using $CertificateAuthoritiesExtension$CertificateAuthoritiesSpec = ::sun::security::ssl::CertificateAuthoritiesExtension$CertificateAuthoritiesSpec;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLStringizer = ::sun::security::ssl::SSLStringizer;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer::*)()>(&CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer::init$))},
	{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer_InnerClassesInfo_[] = {
	{"sun.security.ssl.CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer", "sun.security.ssl.CertificateAuthoritiesExtension", "CertificateAuthoritiesStringizer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer",
	"java.lang.Object",
	"sun.security.ssl.SSLStringizer",
	nullptr,
	_CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer_MethodInfo_,
	nullptr,
	nullptr,
	_CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CertificateAuthoritiesExtension"
};

$Object* allocate$CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer($Class* clazz) {
	return $of($alloc(CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer));
}

void CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer::init$() {
}

$String* CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer::toString($HandshakeContext* hc, $ByteBuffer* buffer) {
	try {
		return ($$new($CertificateAuthoritiesExtension$CertificateAuthoritiesSpec, hc, buffer))->toString();
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		return ioe->getMessage();
	}
	$shouldNotReachHere();
}

CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer::CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer() {
}

$Class* CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer::load$($String* name, bool initialize) {
	$loadClass(CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer, name, initialize, &_CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer_ClassInfo_, allocate$CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer);
	return class$;
}

$Class* CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer::class$ = nullptr;

		} // ssl
	} // security
} // sun