#include <sun/security/ssl/AlpnExtension$AlpnStringizer.h>
#include <java/io/IOException.h>
#include <java/nio/ByteBuffer.h>
#include <sun/security/ssl/AlpnExtension$AlpnSpec.h>
#include <sun/security/ssl/AlpnExtension.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AlpnExtension$AlpnSpec = ::sun::security::ssl::AlpnExtension$AlpnSpec;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

void AlpnExtension$AlpnStringizer::init$() {
}

$String* AlpnExtension$AlpnStringizer::toString($HandshakeContext* hc, $ByteBuffer* buffer) {
	try {
		return ($$new($AlpnExtension$AlpnSpec, hc, buffer))->toString();
	} catch ($IOException& ioe) {
		return ioe->getMessage();
	}
	$shouldNotReachHere();
}

AlpnExtension$AlpnStringizer::AlpnExtension$AlpnStringizer() {
}

$Class* AlpnExtension$AlpnStringizer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(AlpnExtension$AlpnStringizer, init$, void)},
		{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AlpnExtension$AlpnStringizer, toString, $String*, $HandshakeContext*, $ByteBuffer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.AlpnExtension$AlpnStringizer", "sun.security.ssl.AlpnExtension", "AlpnStringizer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.AlpnExtension$AlpnStringizer",
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
		"sun.security.ssl.AlpnExtension"
	};
	$loadClass(AlpnExtension$AlpnStringizer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AlpnExtension$AlpnStringizer);
	});
	return class$;
}

$Class* AlpnExtension$AlpnStringizer::class$ = nullptr;

		} // ssl
	} // security
} // sun