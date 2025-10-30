#include <sun/net/PlatformSocketImpl.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace sun {
	namespace net {

$ClassInfo _PlatformSocketImpl_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.net.PlatformSocketImpl"
};

$Object* allocate$PlatformSocketImpl($Class* clazz) {
	return $of($alloc(PlatformSocketImpl));
}

$Class* PlatformSocketImpl::load$($String* name, bool initialize) {
	$loadClass(PlatformSocketImpl, name, initialize, &_PlatformSocketImpl_ClassInfo_, allocate$PlatformSocketImpl);
	return class$;
}

$Class* PlatformSocketImpl::class$ = nullptr;

	} // net
} // sun