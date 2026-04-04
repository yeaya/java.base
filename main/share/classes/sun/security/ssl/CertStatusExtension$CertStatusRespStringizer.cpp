#include <sun/security/ssl/CertStatusExtension$CertStatusRespStringizer.h>
#include <java/io/IOException.h>
#include <java/nio/ByteBuffer.h>
#include <sun/security/ssl/CertStatusExtension$CertStatusResponseSpec.h>
#include <sun/security/ssl/CertStatusExtension.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CertStatusExtension$CertStatusResponseSpec = ::sun::security::ssl::CertStatusExtension$CertStatusResponseSpec;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

void CertStatusExtension$CertStatusRespStringizer::init$() {
}

$String* CertStatusExtension$CertStatusRespStringizer::toString($HandshakeContext* hc, $ByteBuffer* buffer) {
	try {
		return ($$new($CertStatusExtension$CertStatusResponseSpec, hc, buffer))->toString();
	} catch ($IOException& ioe) {
		return ioe->getMessage();
	}
	$shouldNotReachHere();
}

CertStatusExtension$CertStatusRespStringizer::CertStatusExtension$CertStatusRespStringizer() {
}

$Class* CertStatusExtension$CertStatusRespStringizer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(CertStatusExtension$CertStatusRespStringizer, init$, void)},
		{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CertStatusExtension$CertStatusRespStringizer, toString, $String*, $HandshakeContext*, $ByteBuffer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.CertStatusExtension$CertStatusRespStringizer", "sun.security.ssl.CertStatusExtension", "CertStatusRespStringizer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.CertStatusExtension$CertStatusRespStringizer",
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
		"sun.security.ssl.CertStatusExtension"
	};
	$loadClass(CertStatusExtension$CertStatusRespStringizer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertStatusExtension$CertStatusRespStringizer);
	});
	return class$;
}

$Class* CertStatusExtension$CertStatusRespStringizer::class$ = nullptr;

		} // ssl
	} // security
} // sun