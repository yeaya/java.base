#include <sun/security/ssl/CertSignAlgsExtension$CertSignatureSchemesStringizer.h>
#include <java/io/IOException.h>
#include <java/nio/ByteBuffer.h>
#include <sun/security/ssl/CertSignAlgsExtension.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/SignatureAlgorithmsExtension$SignatureSchemesSpec.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SignatureAlgorithmsExtension$SignatureSchemesSpec = ::sun::security::ssl::SignatureAlgorithmsExtension$SignatureSchemesSpec;

namespace sun {
	namespace security {
		namespace ssl {

void CertSignAlgsExtension$CertSignatureSchemesStringizer::init$() {
}

$String* CertSignAlgsExtension$CertSignatureSchemesStringizer::toString($HandshakeContext* hc, $ByteBuffer* buffer) {
	try {
		return ($$new($SignatureAlgorithmsExtension$SignatureSchemesSpec, hc, buffer))->toString();
	} catch ($IOException& ioe) {
		return ioe->getMessage();
	}
	$shouldNotReachHere();
}

CertSignAlgsExtension$CertSignatureSchemesStringizer::CertSignAlgsExtension$CertSignatureSchemesStringizer() {
}

$Class* CertSignAlgsExtension$CertSignatureSchemesStringizer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(CertSignAlgsExtension$CertSignatureSchemesStringizer, init$, void)},
		{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CertSignAlgsExtension$CertSignatureSchemesStringizer, toString, $String*, $HandshakeContext*, $ByteBuffer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.CertSignAlgsExtension$CertSignatureSchemesStringizer", "sun.security.ssl.CertSignAlgsExtension", "CertSignatureSchemesStringizer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.CertSignAlgsExtension$CertSignatureSchemesStringizer",
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
		"sun.security.ssl.CertSignAlgsExtension"
	};
	$loadClass(CertSignAlgsExtension$CertSignatureSchemesStringizer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertSignAlgsExtension$CertSignatureSchemesStringizer);
	});
	return class$;
}

$Class* CertSignAlgsExtension$CertSignatureSchemesStringizer::class$ = nullptr;

		} // ssl
	} // security
} // sun