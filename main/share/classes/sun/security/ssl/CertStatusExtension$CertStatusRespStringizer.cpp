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
using $CertStatusExtension = ::sun::security::ssl::CertStatusExtension;
using $CertStatusExtension$CertStatusResponseSpec = ::sun::security::ssl::CertStatusExtension$CertStatusResponseSpec;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLStringizer = ::sun::security::ssl::SSLStringizer;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _CertStatusExtension$CertStatusRespStringizer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CertStatusExtension$CertStatusRespStringizer::*)()>(&CertStatusExtension$CertStatusRespStringizer::init$))},
	{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CertStatusExtension$CertStatusRespStringizer_InnerClassesInfo_[] = {
	{"sun.security.ssl.CertStatusExtension$CertStatusRespStringizer", "sun.security.ssl.CertStatusExtension", "CertStatusRespStringizer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _CertStatusExtension$CertStatusRespStringizer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CertStatusExtension$CertStatusRespStringizer",
	"java.lang.Object",
	"sun.security.ssl.SSLStringizer",
	nullptr,
	_CertStatusExtension$CertStatusRespStringizer_MethodInfo_,
	nullptr,
	nullptr,
	_CertStatusExtension$CertStatusRespStringizer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CertStatusExtension"
};

$Object* allocate$CertStatusExtension$CertStatusRespStringizer($Class* clazz) {
	return $of($alloc(CertStatusExtension$CertStatusRespStringizer));
}

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
	$loadClass(CertStatusExtension$CertStatusRespStringizer, name, initialize, &_CertStatusExtension$CertStatusRespStringizer_ClassInfo_, allocate$CertStatusExtension$CertStatusRespStringizer);
	return class$;
}

$Class* CertStatusExtension$CertStatusRespStringizer::class$ = nullptr;

		} // ssl
	} // security
} // sun