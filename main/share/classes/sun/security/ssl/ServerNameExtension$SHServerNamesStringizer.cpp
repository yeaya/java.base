#include <sun/security/ssl/ServerNameExtension$SHServerNamesStringizer.h>
#include <java/io/IOException.h>
#include <java/nio/ByteBuffer.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/ServerNameExtension$SHServerNamesSpec.h>
#include <sun/security/ssl/ServerNameExtension.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $ServerNameExtension$SHServerNamesSpec = ::sun::security::ssl::ServerNameExtension$SHServerNamesSpec;

namespace sun {
	namespace security {
		namespace ssl {

void ServerNameExtension$SHServerNamesStringizer::init$() {
}

$String* ServerNameExtension$SHServerNamesStringizer::toString($HandshakeContext* hc, $ByteBuffer* buffer) {
	try {
		return ($$new($ServerNameExtension$SHServerNamesSpec, hc, buffer))->toString();
	} catch ($IOException& ioe) {
		return ioe->getMessage();
	}
	$shouldNotReachHere();
}

ServerNameExtension$SHServerNamesStringizer::ServerNameExtension$SHServerNamesStringizer() {
}

$Class* ServerNameExtension$SHServerNamesStringizer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ServerNameExtension$SHServerNamesStringizer, init$, void)},
		{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ServerNameExtension$SHServerNamesStringizer, toString, $String*, $HandshakeContext*, $ByteBuffer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.ServerNameExtension$SHServerNamesStringizer", "sun.security.ssl.ServerNameExtension", "SHServerNamesStringizer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.ServerNameExtension$SHServerNamesStringizer",
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
		"sun.security.ssl.ServerNameExtension"
	};
	$loadClass(ServerNameExtension$SHServerNamesStringizer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ServerNameExtension$SHServerNamesStringizer);
	});
	return class$;
}

$Class* ServerNameExtension$SHServerNamesStringizer::class$ = nullptr;

		} // ssl
	} // security
} // sun