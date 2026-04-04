#include <sun/security/ssl/SSLConsumer.h>
#include <java/nio/ByteBuffer.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;

namespace sun {
	namespace security {
		namespace ssl {

$Class* SSLConsumer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"consume", "(Lsun/security/ssl/ConnectionContext;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLConsumer, consume, void, $ConnectionContext*, $ByteBuffer*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.security.ssl.SSLConsumer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SSLConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLConsumer);
	});
	return class$;
}

$Class* SSLConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun