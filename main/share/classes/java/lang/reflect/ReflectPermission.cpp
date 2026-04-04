#include <java/lang/reflect/ReflectPermission.h>
#include <java/security/BasicPermission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicPermission = ::java::security::BasicPermission;

namespace java {
	namespace lang {
		namespace reflect {

void ReflectPermission::init$($String* name) {
	$BasicPermission::init$(name);
}

void ReflectPermission::init$($String* name, $String* actions) {
	$BasicPermission::init$(name, actions);
}

ReflectPermission::ReflectPermission() {
}

$Class* ReflectPermission::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ReflectPermission, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ReflectPermission, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ReflectPermission, init$, void, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.lang.reflect.ReflectPermission",
		"java.security.BasicPermission",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ReflectPermission, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ReflectPermission));
	});
	return class$;
}

$Class* ReflectPermission::class$ = nullptr;

		} // reflect
	} // lang
} // java