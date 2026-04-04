#include <sun/security/ssl/ConnectionContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace sun {
	namespace security {
		namespace ssl {

$Class* ConnectionContext::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.security.ssl.ConnectionContext"
	};
	$loadClass(ConnectionContext, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ConnectionContext);
	});
	return class$;
}

$Class* ConnectionContext::class$ = nullptr;

		} // ssl
	} // security
} // sun