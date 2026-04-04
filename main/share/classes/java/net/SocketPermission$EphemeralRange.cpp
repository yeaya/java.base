#include <java/net/SocketPermission$EphemeralRange.h>
#include <java/net/SocketPermission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketPermission = ::java::net::SocketPermission;

namespace java {
	namespace net {

int32_t SocketPermission$EphemeralRange::low = 0;
int32_t SocketPermission$EphemeralRange::high = 0;

void SocketPermission$EphemeralRange::init$() {
}

void SocketPermission$EphemeralRange::clinit$($Class* clazz) {
	SocketPermission$EphemeralRange::low = $SocketPermission::initEphemeralPorts("low"_s, 0x0000c000);
	SocketPermission$EphemeralRange::high = $SocketPermission::initEphemeralPorts("high"_s, 0x0000ffff);
}

SocketPermission$EphemeralRange::SocketPermission$EphemeralRange() {
}

$Class* SocketPermission$EphemeralRange::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"low", "I", nullptr, $STATIC | $FINAL, $staticField(SocketPermission$EphemeralRange, low)},
		{"high", "I", nullptr, $STATIC | $FINAL, $staticField(SocketPermission$EphemeralRange, high)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SocketPermission$EphemeralRange, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.SocketPermission$EphemeralRange", "java.net.SocketPermission", "EphemeralRange", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.net.SocketPermission$EphemeralRange",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.net.SocketPermission"
	};
	$loadClass(SocketPermission$EphemeralRange, name, initialize, &classInfo$$, SocketPermission$EphemeralRange::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SocketPermission$EphemeralRange);
	});
	return class$;
}

$Class* SocketPermission$EphemeralRange::class$ = nullptr;

	} // net
} // java