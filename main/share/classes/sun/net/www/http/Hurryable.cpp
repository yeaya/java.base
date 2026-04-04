#include <sun/net/www/http/Hurryable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace net {
		namespace www {
			namespace http {

$Class* Hurryable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"hurry", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Hurryable, hurry, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.net.www.http.Hurryable",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Hurryable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Hurryable);
	});
	return class$;
}

$Class* Hurryable::class$ = nullptr;

			} // http
		} // www
	} // net
} // sun