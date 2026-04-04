#include <sun/security/ssl/SSLStringizer.h>
#include <java/nio/ByteBuffer.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

$Class* SSLStringizer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLStringizer, toString, $String*, $HandshakeContext*, $ByteBuffer*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.security.ssl.SSLStringizer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SSLStringizer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLStringizer);
	});
	return class$;
}

$Class* SSLStringizer::class$ = nullptr;

		} // ssl
	} // security
} // sun