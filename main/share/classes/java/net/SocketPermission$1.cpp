#include <java/net/SocketPermission$1.h>
#include <java/net/SocketPermission.h>
#include <sun/net/PortConfig.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $PortConfig = ::sun::net::PortConfig;

namespace java {
	namespace net {

void SocketPermission$1::init$($String* val$suffix) {
	$set(this, val$suffix, val$suffix);
}

$Object* SocketPermission$1::run() {
	$useLocalObjectStack();
	int32_t val = $$nc($Integer::getInteger($$str({"jdk.net.ephemeralPortRange."_s, this->val$suffix}), -1))->intValue();
	if (val != -1) {
		return $of($Integer::valueOf(val));
	} else {
		return $of($Integer::valueOf($nc(this->val$suffix)->equals("low"_s) ? $PortConfig::getLower() : $PortConfig::getUpper()));
	}
}

SocketPermission$1::SocketPermission$1() {
}

$Class* SocketPermission$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$suffix", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(SocketPermission$1, val$suffix)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(SocketPermission$1, init$, void, $String*)},
		{"run", "()Ljava/lang/Integer;", nullptr, $PUBLIC, $virtualMethod(SocketPermission$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.net.SocketPermission",
		"initEphemeralPorts",
		"(Ljava/lang/String;I)I"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.SocketPermission$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.net.SocketPermission$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Integer;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.net.SocketPermission"
	};
	$loadClass(SocketPermission$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SocketPermission$1);
	});
	return class$;
}

$Class* SocketPermission$1::class$ = nullptr;

	} // net
} // java