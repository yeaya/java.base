#include <sun/security/ssl/CookieExtension$CookieStringizer.h>
#include <java/io/IOException.h>
#include <java/nio/ByteBuffer.h>
#include <sun/security/ssl/CookieExtension$CookieSpec.h>
#include <sun/security/ssl/CookieExtension.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CookieExtension$CookieSpec = ::sun::security::ssl::CookieExtension$CookieSpec;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

void CookieExtension$CookieStringizer::init$() {
}

$String* CookieExtension$CookieStringizer::toString($HandshakeContext* hc, $ByteBuffer* buffer) {
	try {
		return ($$new($CookieExtension$CookieSpec, hc, buffer))->toString();
	} catch ($IOException& ioe) {
		return ioe->getMessage();
	}
	$shouldNotReachHere();
}

CookieExtension$CookieStringizer::CookieExtension$CookieStringizer() {
}

$Class* CookieExtension$CookieStringizer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(CookieExtension$CookieStringizer, init$, void)},
		{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CookieExtension$CookieStringizer, toString, $String*, $HandshakeContext*, $ByteBuffer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.CookieExtension$CookieStringizer", "sun.security.ssl.CookieExtension", "CookieStringizer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.CookieExtension$CookieStringizer",
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
		"sun.security.ssl.CookieExtension"
	};
	$loadClass(CookieExtension$CookieStringizer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CookieExtension$CookieStringizer);
	});
	return class$;
}

$Class* CookieExtension$CookieStringizer::class$ = nullptr;

		} // ssl
	} // security
} // sun