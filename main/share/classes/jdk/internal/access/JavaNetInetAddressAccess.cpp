#include <jdk/internal/access/JavaNetInetAddressAccess.h>

#include <java/net/Inet4Address.h>
#include <java/net/Inet6Address.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace access {

$MethodInfo _JavaNetInetAddressAccess_MethodInfo_[] = {
	{"addressBytes", "(Ljava/net/Inet6Address;)[B", nullptr, $PUBLIC | $ABSTRACT},
	{"addressValue", "(Ljava/net/Inet4Address;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getByName", "(Ljava/lang/String;Ljava/net/InetAddress;)Ljava/net/InetAddress;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.net.UnknownHostException"},
	{"getOriginalHostName", "(Ljava/net/InetAddress;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _JavaNetInetAddressAccess_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.access.JavaNetInetAddressAccess",
	nullptr,
	nullptr,
	nullptr,
	_JavaNetInetAddressAccess_MethodInfo_
};

$Object* allocate$JavaNetInetAddressAccess($Class* clazz) {
	return $of($alloc(JavaNetInetAddressAccess));
}

$Class* JavaNetInetAddressAccess::load$($String* name, bool initialize) {
	$loadClass(JavaNetInetAddressAccess, name, initialize, &_JavaNetInetAddressAccess_ClassInfo_, allocate$JavaNetInetAddressAccess);
	return class$;
}

$Class* JavaNetInetAddressAccess::class$ = nullptr;

		} // access
	} // internal
} // jdk