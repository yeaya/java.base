#include <javax/net/ssl/TrustManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace javax {
	namespace net {
		namespace ssl {

$Class* TrustManager::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.net.ssl.TrustManager"
	};
	$loadClass(TrustManager, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TrustManager);
	});
	return class$;
}

$Class* TrustManager::class$ = nullptr;

		} // ssl
	} // net
} // javax