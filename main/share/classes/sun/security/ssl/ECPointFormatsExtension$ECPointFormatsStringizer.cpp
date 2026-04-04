#include <sun/security/ssl/ECPointFormatsExtension$ECPointFormatsStringizer.h>
#include <java/io/IOException.h>
#include <java/nio/ByteBuffer.h>
#include <sun/security/ssl/ECPointFormatsExtension$ECPointFormatsSpec.h>
#include <sun/security/ssl/ECPointFormatsExtension.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ECPointFormatsExtension$ECPointFormatsSpec = ::sun::security::ssl::ECPointFormatsExtension$ECPointFormatsSpec;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

void ECPointFormatsExtension$ECPointFormatsStringizer::init$() {
}

$String* ECPointFormatsExtension$ECPointFormatsStringizer::toString($HandshakeContext* hc, $ByteBuffer* buffer) {
	try {
		return ($$new($ECPointFormatsExtension$ECPointFormatsSpec, hc, buffer))->toString();
	} catch ($IOException& ioe) {
		return ioe->getMessage();
	}
	$shouldNotReachHere();
}

ECPointFormatsExtension$ECPointFormatsStringizer::ECPointFormatsExtension$ECPointFormatsStringizer() {
}

$Class* ECPointFormatsExtension$ECPointFormatsStringizer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ECPointFormatsExtension$ECPointFormatsStringizer, init$, void)},
		{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ECPointFormatsExtension$ECPointFormatsStringizer, toString, $String*, $HandshakeContext*, $ByteBuffer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.ECPointFormatsExtension$ECPointFormatsStringizer", "sun.security.ssl.ECPointFormatsExtension", "ECPointFormatsStringizer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.ECPointFormatsExtension$ECPointFormatsStringizer",
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
		"sun.security.ssl.ECPointFormatsExtension"
	};
	$loadClass(ECPointFormatsExtension$ECPointFormatsStringizer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ECPointFormatsExtension$ECPointFormatsStringizer);
	});
	return class$;
}

$Class* ECPointFormatsExtension$ECPointFormatsStringizer::class$ = nullptr;

		} // ssl
	} // security
} // sun