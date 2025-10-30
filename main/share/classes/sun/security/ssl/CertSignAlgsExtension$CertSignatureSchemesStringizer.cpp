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
using $CertSignAlgsExtension = ::sun::security::ssl::CertSignAlgsExtension;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLStringizer = ::sun::security::ssl::SSLStringizer;
using $SignatureAlgorithmsExtension$SignatureSchemesSpec = ::sun::security::ssl::SignatureAlgorithmsExtension$SignatureSchemesSpec;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _CertSignAlgsExtension$CertSignatureSchemesStringizer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CertSignAlgsExtension$CertSignatureSchemesStringizer::*)()>(&CertSignAlgsExtension$CertSignatureSchemesStringizer::init$))},
	{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CertSignAlgsExtension$CertSignatureSchemesStringizer_InnerClassesInfo_[] = {
	{"sun.security.ssl.CertSignAlgsExtension$CertSignatureSchemesStringizer", "sun.security.ssl.CertSignAlgsExtension", "CertSignatureSchemesStringizer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _CertSignAlgsExtension$CertSignatureSchemesStringizer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CertSignAlgsExtension$CertSignatureSchemesStringizer",
	"java.lang.Object",
	"sun.security.ssl.SSLStringizer",
	nullptr,
	_CertSignAlgsExtension$CertSignatureSchemesStringizer_MethodInfo_,
	nullptr,
	nullptr,
	_CertSignAlgsExtension$CertSignatureSchemesStringizer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CertSignAlgsExtension"
};

$Object* allocate$CertSignAlgsExtension$CertSignatureSchemesStringizer($Class* clazz) {
	return $of($alloc(CertSignAlgsExtension$CertSignatureSchemesStringizer));
}

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
	$loadClass(CertSignAlgsExtension$CertSignatureSchemesStringizer, name, initialize, &_CertSignAlgsExtension$CertSignatureSchemesStringizer_ClassInfo_, allocate$CertSignAlgsExtension$CertSignatureSchemesStringizer);
	return class$;
}

$Class* CertSignAlgsExtension$CertSignatureSchemesStringizer::class$ = nullptr;

		} // ssl
	} // security
} // sun