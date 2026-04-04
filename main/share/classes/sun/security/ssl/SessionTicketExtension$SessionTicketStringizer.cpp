#include <sun/security/ssl/SessionTicketExtension$SessionTicketStringizer.h>
#include <java/io/IOException.h>
#include <java/nio/ByteBuffer.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/SessionTicketExtension$SessionTicketSpec.h>
#include <sun/security/ssl/SessionTicketExtension.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SessionTicketExtension$SessionTicketSpec = ::sun::security::ssl::SessionTicketExtension$SessionTicketSpec;

namespace sun {
	namespace security {
		namespace ssl {

void SessionTicketExtension$SessionTicketStringizer::init$() {
}

$String* SessionTicketExtension$SessionTicketStringizer::toString($HandshakeContext* hc, $ByteBuffer* buffer) {
	try {
		return $$new($SessionTicketExtension$SessionTicketSpec, hc, buffer)->toString();
	} catch ($IOException& e) {
		return e->getMessage();
	}
	$shouldNotReachHere();
}

SessionTicketExtension$SessionTicketStringizer::SessionTicketExtension$SessionTicketStringizer() {
}

$Class* SessionTicketExtension$SessionTicketStringizer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SessionTicketExtension$SessionTicketStringizer, init$, void)},
		{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SessionTicketExtension$SessionTicketStringizer, toString, $String*, $HandshakeContext*, $ByteBuffer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SessionTicketExtension$SessionTicketStringizer", "sun.security.ssl.SessionTicketExtension", "SessionTicketStringizer", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.SessionTicketExtension$SessionTicketStringizer",
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
		"sun.security.ssl.SessionTicketExtension"
	};
	$loadClass(SessionTicketExtension$SessionTicketStringizer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SessionTicketExtension$SessionTicketStringizer);
	});
	return class$;
}

$Class* SessionTicketExtension$SessionTicketStringizer::class$ = nullptr;

		} // ssl
	} // security
} // sun