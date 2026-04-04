#include <javax/net/ssl/KeyManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace javax {
	namespace net {
		namespace ssl {

$Class* KeyManager::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.net.ssl.KeyManager"
	};
	$loadClass(KeyManager, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyManager);
	});
	return class$;
}

$Class* KeyManager::class$ = nullptr;

		} // ssl
	} // net
} // javax