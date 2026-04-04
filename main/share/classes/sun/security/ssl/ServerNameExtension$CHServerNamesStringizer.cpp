#include <sun/security/ssl/ServerNameExtension$CHServerNamesStringizer.h>
#include <java/io/IOException.h>
#include <java/nio/ByteBuffer.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/ServerNameExtension$CHServerNamesSpec.h>
#include <sun/security/ssl/ServerNameExtension.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $ServerNameExtension$CHServerNamesSpec = ::sun::security::ssl::ServerNameExtension$CHServerNamesSpec;

namespace sun {
	namespace security {
		namespace ssl {

void ServerNameExtension$CHServerNamesStringizer::init$() {
}

$String* ServerNameExtension$CHServerNamesStringizer::toString($HandshakeContext* hc, $ByteBuffer* buffer) {
	try {
		return ($$new($ServerNameExtension$CHServerNamesSpec, hc, buffer))->toString();
	} catch ($IOException& ioe) {
		return ioe->getMessage();
	}
	$shouldNotReachHere();
}

ServerNameExtension$CHServerNamesStringizer::ServerNameExtension$CHServerNamesStringizer() {
}

$Class* ServerNameExtension$CHServerNamesStringizer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ServerNameExtension$CHServerNamesStringizer, init$, void)},
		{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ServerNameExtension$CHServerNamesStringizer, toString, $String*, $HandshakeContext*, $ByteBuffer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.ServerNameExtension$CHServerNamesStringizer", "sun.security.ssl.ServerNameExtension", "CHServerNamesStringizer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.ServerNameExtension$CHServerNamesStringizer",
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
	$loadClass(ServerNameExtension$CHServerNamesStringizer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ServerNameExtension$CHServerNamesStringizer);
	});
	return class$;
}

$Class* ServerNameExtension$CHServerNamesStringizer::class$ = nullptr;

		} // ssl
	} // security
} // sun