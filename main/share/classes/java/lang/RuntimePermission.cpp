#include <java/lang/RuntimePermission.h>
#include <java/security/BasicPermission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicPermission = ::java::security::BasicPermission;

namespace java {
	namespace lang {

void RuntimePermission::init$($String* name) {
	$BasicPermission::init$(name);
}

void RuntimePermission::init$($String* name, $String* actions) {
	$BasicPermission::init$(name, actions);
}

RuntimePermission::RuntimePermission() {
}

$Class* RuntimePermission::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RuntimePermission, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(RuntimePermission, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(RuntimePermission, init$, void, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.lang.RuntimePermission",
		"java.security.BasicPermission",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RuntimePermission, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(RuntimePermission));
	});
	return class$;
}

$Class* RuntimePermission::class$ = nullptr;

	} // lang
} // java