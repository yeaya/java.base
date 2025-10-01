#include <sun/security/ssl/CertStatusExtension$CertStatusRequestStringizer.h>

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
#include <sun/security/ssl/CertStatusExtension$CertStatusRequestSpec.h>
#include <sun/security/ssl/CertStatusExtension.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CertStatusExtension = ::sun::security::ssl::CertStatusExtension;
using $CertStatusExtension$CertStatusRequestSpec = ::sun::security::ssl::CertStatusExtension$CertStatusRequestSpec;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLStringizer = ::sun::security::ssl::SSLStringizer;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _CertStatusExtension$CertStatusRequestStringizer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CertStatusExtension$CertStatusRequestStringizer::*)()>(&CertStatusExtension$CertStatusRequestStringizer::init$))},
	{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CertStatusExtension$CertStatusRequestStringizer_InnerClassesInfo_[] = {
	{"sun.security.ssl.CertStatusExtension$CertStatusRequestStringizer", "sun.security.ssl.CertStatusExtension", "CertStatusRequestStringizer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _CertStatusExtension$CertStatusRequestStringizer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CertStatusExtension$CertStatusRequestStringizer",
	"java.lang.Object",
	"sun.security.ssl.SSLStringizer",
	nullptr,
	_CertStatusExtension$CertStatusRequestStringizer_MethodInfo_,
	nullptr,
	nullptr,
	_CertStatusExtension$CertStatusRequestStringizer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CertStatusExtension"
};

$Object* allocate$CertStatusExtension$CertStatusRequestStringizer($Class* clazz) {
	return $of($alloc(CertStatusExtension$CertStatusRequestStringizer));
}

void CertStatusExtension$CertStatusRequestStringizer::init$() {
}

$String* CertStatusExtension$CertStatusRequestStringizer::toString($HandshakeContext* hc, $ByteBuffer* buffer) {
	try {
		return ($$new($CertStatusExtension$CertStatusRequestSpec, hc, buffer))->toString();
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		return ioe->getMessage();
	}
	$shouldNotReachHere();
}

CertStatusExtension$CertStatusRequestStringizer::CertStatusExtension$CertStatusRequestStringizer() {
}

$Class* CertStatusExtension$CertStatusRequestStringizer::load$($String* name, bool initialize) {
	$loadClass(CertStatusExtension$CertStatusRequestStringizer, name, initialize, &_CertStatusExtension$CertStatusRequestStringizer_ClassInfo_, allocate$CertStatusExtension$CertStatusRequestStringizer);
	return class$;
}

$Class* CertStatusExtension$CertStatusRequestStringizer::class$ = nullptr;

		} // ssl
	} // security
} // sun