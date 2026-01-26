#include <sun/security/ssl/CertStatusExtension$CertStatusRequestStringizer.h>

#include <java/io/IOException.h>
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
using $CertStatusExtension$CertStatusRequestSpec = ::sun::security::ssl::CertStatusExtension$CertStatusRequestSpec;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _CertStatusExtension$CertStatusRequestStringizer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(CertStatusExtension$CertStatusRequestStringizer, init$, void)},
	{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CertStatusExtension$CertStatusRequestStringizer, toString, $String*, $HandshakeContext*, $ByteBuffer*)},
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
	} catch ($IOException& ioe) {
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