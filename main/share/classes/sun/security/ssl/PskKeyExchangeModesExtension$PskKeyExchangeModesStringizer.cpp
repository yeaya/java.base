#include <sun/security/ssl/PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer.h>
#include <java/io/IOException.h>
#include <java/nio/ByteBuffer.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/PskKeyExchangeModesExtension$PskKeyExchangeModesSpec.h>
#include <sun/security/ssl/PskKeyExchangeModesExtension.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $PskKeyExchangeModesExtension$PskKeyExchangeModesSpec = ::sun::security::ssl::PskKeyExchangeModesExtension$PskKeyExchangeModesSpec;

namespace sun {
	namespace security {
		namespace ssl {

void PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer::init$() {
}

$String* PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer::toString($HandshakeContext* hc, $ByteBuffer* buffer) {
	try {
		return ($$new($PskKeyExchangeModesExtension$PskKeyExchangeModesSpec, hc, buffer))->toString();
	} catch ($IOException& ioe) {
		return ioe->getMessage();
	}
	$shouldNotReachHere();
}

PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer::PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer() {
}

$Class* PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer, init$, void)},
		{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer, toString, $String*, $HandshakeContext*, $ByteBuffer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer", "sun.security.ssl.PskKeyExchangeModesExtension", "PskKeyExchangeModesStringizer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer",
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
		"sun.security.ssl.PskKeyExchangeModesExtension"
	};
	$loadClass(PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer);
	});
	return class$;
}

$Class* PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer::class$ = nullptr;

		} // ssl
	} // security
} // sun