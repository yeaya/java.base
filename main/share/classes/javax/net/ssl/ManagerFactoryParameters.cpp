#include <javax/net/ssl/ManagerFactoryParameters.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace javax {
	namespace net {
		namespace ssl {

$Class* ManagerFactoryParameters::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.net.ssl.ManagerFactoryParameters"
	};
	$loadClass(ManagerFactoryParameters, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ManagerFactoryParameters);
	});
	return class$;
}

$Class* ManagerFactoryParameters::class$ = nullptr;

		} // ssl
	} // net
} // javax