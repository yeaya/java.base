#include <sun/security/ssl/SignatureAlgorithmsExtension$SignatureSchemesStringizer.h>

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
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/SignatureAlgorithmsExtension$SignatureSchemesSpec.h>
#include <sun/security/ssl/SignatureAlgorithmsExtension.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLStringizer = ::sun::security::ssl::SSLStringizer;
using $SignatureAlgorithmsExtension = ::sun::security::ssl::SignatureAlgorithmsExtension;
using $SignatureAlgorithmsExtension$SignatureSchemesSpec = ::sun::security::ssl::SignatureAlgorithmsExtension$SignatureSchemesSpec;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SignatureAlgorithmsExtension$SignatureSchemesStringizer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SignatureAlgorithmsExtension$SignatureSchemesStringizer::*)()>(&SignatureAlgorithmsExtension$SignatureSchemesStringizer::init$))},
	{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SignatureAlgorithmsExtension$SignatureSchemesStringizer_InnerClassesInfo_[] = {
	{"sun.security.ssl.SignatureAlgorithmsExtension$SignatureSchemesStringizer", "sun.security.ssl.SignatureAlgorithmsExtension", "SignatureSchemesStringizer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _SignatureAlgorithmsExtension$SignatureSchemesStringizer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SignatureAlgorithmsExtension$SignatureSchemesStringizer",
	"java.lang.Object",
	"sun.security.ssl.SSLStringizer",
	nullptr,
	_SignatureAlgorithmsExtension$SignatureSchemesStringizer_MethodInfo_,
	nullptr,
	nullptr,
	_SignatureAlgorithmsExtension$SignatureSchemesStringizer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SignatureAlgorithmsExtension"
};

$Object* allocate$SignatureAlgorithmsExtension$SignatureSchemesStringizer($Class* clazz) {
	return $of($alloc(SignatureAlgorithmsExtension$SignatureSchemesStringizer));
}

void SignatureAlgorithmsExtension$SignatureSchemesStringizer::init$() {
}

$String* SignatureAlgorithmsExtension$SignatureSchemesStringizer::toString($HandshakeContext* hc, $ByteBuffer* buffer) {
	$useLocalCurrentObjectStackCache();
	try {
		return ($$new($SignatureAlgorithmsExtension$SignatureSchemesSpec, hc, buffer))->toString();
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		return ioe->getMessage();
	}
	$shouldNotReachHere();
}

SignatureAlgorithmsExtension$SignatureSchemesStringizer::SignatureAlgorithmsExtension$SignatureSchemesStringizer() {
}

$Class* SignatureAlgorithmsExtension$SignatureSchemesStringizer::load$($String* name, bool initialize) {
	$loadClass(SignatureAlgorithmsExtension$SignatureSchemesStringizer, name, initialize, &_SignatureAlgorithmsExtension$SignatureSchemesStringizer_ClassInfo_, allocate$SignatureAlgorithmsExtension$SignatureSchemesStringizer);
	return class$;
}

$Class* SignatureAlgorithmsExtension$SignatureSchemesStringizer::class$ = nullptr;

		} // ssl
	} // security
} // sun