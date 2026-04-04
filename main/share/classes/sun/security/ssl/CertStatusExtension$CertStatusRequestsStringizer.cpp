#include <sun/security/ssl/CertStatusExtension$CertStatusRequestsStringizer.h>
#include <java/io/IOException.h>
#include <java/nio/ByteBuffer.h>
#include <sun/security/ssl/CertStatusExtension$CertStatusRequestV2Spec.h>
#include <sun/security/ssl/CertStatusExtension.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CertStatusExtension$CertStatusRequestV2Spec = ::sun::security::ssl::CertStatusExtension$CertStatusRequestV2Spec;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

void CertStatusExtension$CertStatusRequestsStringizer::init$() {
}

$String* CertStatusExtension$CertStatusRequestsStringizer::toString($HandshakeContext* hc, $ByteBuffer* buffer) {
	try {
		return ($$new($CertStatusExtension$CertStatusRequestV2Spec, hc, buffer))->toString();
	} catch ($IOException& ioe) {
		return ioe->getMessage();
	}
	$shouldNotReachHere();
}

CertStatusExtension$CertStatusRequestsStringizer::CertStatusExtension$CertStatusRequestsStringizer() {
}

$Class* CertStatusExtension$CertStatusRequestsStringizer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(CertStatusExtension$CertStatusRequestsStringizer, init$, void)},
		{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CertStatusExtension$CertStatusRequestsStringizer, toString, $String*, $HandshakeContext*, $ByteBuffer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.CertStatusExtension$CertStatusRequestsStringizer", "sun.security.ssl.CertStatusExtension", "CertStatusRequestsStringizer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.CertStatusExtension$CertStatusRequestsStringizer",
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
	$loadClass(CertStatusExtension$CertStatusRequestsStringizer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertStatusExtension$CertStatusRequestsStringizer);
	});
	return class$;
}

$Class* CertStatusExtension$CertStatusRequestsStringizer::class$ = nullptr;

		} // ssl
	} // security
} // sun