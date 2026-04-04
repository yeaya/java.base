#include <java/net/NetPermission.h>
#include <java/security/BasicPermission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicPermission = ::java::security::BasicPermission;

namespace java {
	namespace net {

void NetPermission::init$($String* name) {
	$BasicPermission::init$(name);
}

void NetPermission::init$($String* name, $String* actions) {
	$BasicPermission::init$(name, actions);
}

NetPermission::NetPermission() {
}

$Class* NetPermission::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NetPermission, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NetPermission, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NetPermission, init$, void, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.net.NetPermission",
		"java.security.BasicPermission",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NetPermission, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(NetPermission));
	});
	return class$;
}

$Class* NetPermission::class$ = nullptr;

	} // net
} // java