#include <sun/security/ssl/SSLProducer.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;

namespace sun {
	namespace security {
		namespace ssl {

$Class* SSLProducer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"produce", "(Lsun/security/ssl/ConnectionContext;)[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLProducer, produce, $bytes*, $ConnectionContext*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.security.ssl.SSLProducer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SSLProducer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLProducer);
	});
	return class$;
}

$Class* SSLProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun