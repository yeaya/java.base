#include <sun/security/ssl/CertStatusExtension$CertStatusRequestsStringizer.h>

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
#include <sun/security/ssl/CertStatusExtension$CertStatusRequestV2Spec.h>
#include <sun/security/ssl/CertStatusExtension.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CertStatusExtension = ::sun::security::ssl::CertStatusExtension;
using $CertStatusExtension$CertStatusRequestV2Spec = ::sun::security::ssl::CertStatusExtension$CertStatusRequestV2Spec;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLStringizer = ::sun::security::ssl::SSLStringizer;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _CertStatusExtension$CertStatusRequestsStringizer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CertStatusExtension$CertStatusRequestsStringizer::*)()>(&CertStatusExtension$CertStatusRequestsStringizer::init$))},
	{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CertStatusExtension$CertStatusRequestsStringizer_InnerClassesInfo_[] = {
	{"sun.security.ssl.CertStatusExtension$CertStatusRequestsStringizer", "sun.security.ssl.CertStatusExtension", "CertStatusRequestsStringizer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _CertStatusExtension$CertStatusRequestsStringizer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CertStatusExtension$CertStatusRequestsStringizer",
	"java.lang.Object",
	"sun.security.ssl.SSLStringizer",
	nullptr,
	_CertStatusExtension$CertStatusRequestsStringizer_MethodInfo_,
	nullptr,
	nullptr,
	_CertStatusExtension$CertStatusRequestsStringizer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CertStatusExtension"
};

$Object* allocate$CertStatusExtension$CertStatusRequestsStringizer($Class* clazz) {
	return $of($alloc(CertStatusExtension$CertStatusRequestsStringizer));
}

void CertStatusExtension$CertStatusRequestsStringizer::init$() {
}

$String* CertStatusExtension$CertStatusRequestsStringizer::toString($HandshakeContext* hc, $ByteBuffer* buffer) {
	try {
		return ($$new($CertStatusExtension$CertStatusRequestV2Spec, hc, buffer))->toString();
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		return ioe->getMessage();
	}
	$shouldNotReachHere();
}

CertStatusExtension$CertStatusRequestsStringizer::CertStatusExtension$CertStatusRequestsStringizer() {
}

$Class* CertStatusExtension$CertStatusRequestsStringizer::load$($String* name, bool initialize) {
	$loadClass(CertStatusExtension$CertStatusRequestsStringizer, name, initialize, &_CertStatusExtension$CertStatusRequestsStringizer_ClassInfo_, allocate$CertStatusExtension$CertStatusRequestsStringizer);
	return class$;
}

$Class* CertStatusExtension$CertStatusRequestsStringizer::class$ = nullptr;

		} // ssl
	} // security
} // sun