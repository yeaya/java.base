#include <java/net/InetAddressContainer.h>
#include <java/net/InetAddress.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace net {

void InetAddressContainer::init$() {
}

InetAddressContainer::InetAddressContainer() {
}

$Class* InetAddressContainer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"addr", "Ljava/net/InetAddress;", nullptr, 0, $field(InetAddressContainer, addr)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(InetAddressContainer, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.net.InetAddressContainer",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InetAddressContainer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InetAddressContainer);
	});
	return class$;
}

$Class* InetAddressContainer::class$ = nullptr;

	} // net
} // java