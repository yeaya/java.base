#include <java/security/SecurityPermission.h>
#include <java/security/BasicPermission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicPermission = ::java::security::BasicPermission;

namespace java {
	namespace security {

void SecurityPermission::init$($String* name) {
	$BasicPermission::init$(name);
}

void SecurityPermission::init$($String* name, $String* actions) {
	$BasicPermission::init$(name, actions);
}

SecurityPermission::SecurityPermission() {
}

$Class* SecurityPermission::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SecurityPermission, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SecurityPermission, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SecurityPermission, init$, void, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.security.SecurityPermission",
		"java.security.BasicPermission",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SecurityPermission, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SecurityPermission));
	});
	return class$;
}

$Class* SecurityPermission::class$ = nullptr;

	} // security
} // java