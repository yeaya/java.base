#include <sun/security/ssl/SignatureAlgorithmsExtension$SignatureSchemesStringizer.h>
#include <java/io/IOException.h>
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
using $SignatureAlgorithmsExtension$SignatureSchemesSpec = ::sun::security::ssl::SignatureAlgorithmsExtension$SignatureSchemesSpec;

namespace sun {
	namespace security {
		namespace ssl {

void SignatureAlgorithmsExtension$SignatureSchemesStringizer::init$() {
}

$String* SignatureAlgorithmsExtension$SignatureSchemesStringizer::toString($HandshakeContext* hc, $ByteBuffer* buffer) {
	try {
		return ($$new($SignatureAlgorithmsExtension$SignatureSchemesSpec, hc, buffer))->toString();
	} catch ($IOException& ioe) {
		return ioe->getMessage();
	}
	$shouldNotReachHere();
}

SignatureAlgorithmsExtension$SignatureSchemesStringizer::SignatureAlgorithmsExtension$SignatureSchemesStringizer() {
}

$Class* SignatureAlgorithmsExtension$SignatureSchemesStringizer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SignatureAlgorithmsExtension$SignatureSchemesStringizer, init$, void)},
		{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SignatureAlgorithmsExtension$SignatureSchemesStringizer, toString, $String*, $HandshakeContext*, $ByteBuffer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SignatureAlgorithmsExtension$SignatureSchemesStringizer", "sun.security.ssl.SignatureAlgorithmsExtension", "SignatureSchemesStringizer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.SignatureAlgorithmsExtension$SignatureSchemesStringizer",
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
		"sun.security.ssl.SignatureAlgorithmsExtension"
	};
	$loadClass(SignatureAlgorithmsExtension$SignatureSchemesStringizer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SignatureAlgorithmsExtension$SignatureSchemesStringizer);
	});
	return class$;
}

$Class* SignatureAlgorithmsExtension$SignatureSchemesStringizer::class$ = nullptr;

		} // ssl
	} // security
} // sun