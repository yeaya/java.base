#include <sun/security/ssl/ExtendedMasterSecretExtension$ExtendedMasterSecretStringizer.h>
#include <java/io/IOException.h>
#include <java/nio/ByteBuffer.h>
#include <sun/security/ssl/ExtendedMasterSecretExtension$ExtendedMasterSecretSpec.h>
#include <sun/security/ssl/ExtendedMasterSecretExtension.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ExtendedMasterSecretExtension$ExtendedMasterSecretSpec = ::sun::security::ssl::ExtendedMasterSecretExtension$ExtendedMasterSecretSpec;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

void ExtendedMasterSecretExtension$ExtendedMasterSecretStringizer::init$() {
}

$String* ExtendedMasterSecretExtension$ExtendedMasterSecretStringizer::toString($HandshakeContext* hc, $ByteBuffer* buffer) {
	try {
		return ($$new($ExtendedMasterSecretExtension$ExtendedMasterSecretSpec, hc, buffer))->toString();
	} catch ($IOException& ioe) {
		return ioe->getMessage();
	}
	$shouldNotReachHere();
}

ExtendedMasterSecretExtension$ExtendedMasterSecretStringizer::ExtendedMasterSecretExtension$ExtendedMasterSecretStringizer() {
}

$Class* ExtendedMasterSecretExtension$ExtendedMasterSecretStringizer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ExtendedMasterSecretExtension$ExtendedMasterSecretStringizer, init$, void)},
		{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ExtendedMasterSecretExtension$ExtendedMasterSecretStringizer, toString, $String*, $HandshakeContext*, $ByteBuffer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.ExtendedMasterSecretExtension$ExtendedMasterSecretStringizer", "sun.security.ssl.ExtendedMasterSecretExtension", "ExtendedMasterSecretStringizer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.ExtendedMasterSecretExtension$ExtendedMasterSecretStringizer",
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
		"sun.security.ssl.ExtendedMasterSecretExtension"
	};
	$loadClass(ExtendedMasterSecretExtension$ExtendedMasterSecretStringizer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExtendedMasterSecretExtension$ExtendedMasterSecretStringizer);
	});
	return class$;
}

$Class* ExtendedMasterSecretExtension$ExtendedMasterSecretStringizer::class$ = nullptr;

		} // ssl
	} // security
} // sun