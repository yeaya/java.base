#include <sun/net/PlatformSocketImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace sun {
	namespace net {

$Class* PlatformSocketImpl::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.net.PlatformSocketImpl"
	};
	$loadClass(PlatformSocketImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PlatformSocketImpl);
	});
	return class$;
}

$Class* PlatformSocketImpl::class$ = nullptr;

	} // net
} // sun