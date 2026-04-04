#include <java/io/SerializablePermission.h>
#include <java/security/BasicPermission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicPermission = ::java::security::BasicPermission;

namespace java {
	namespace io {

void SerializablePermission::init$($String* name) {
	$BasicPermission::init$(name);
}

void SerializablePermission::init$($String* name, $String* actions) {
	$BasicPermission::init$(name, actions);
}

SerializablePermission::SerializablePermission() {
}

$Class* SerializablePermission::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SerializablePermission, serialVersionUID)},
		{"actions", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SerializablePermission, actions)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SerializablePermission, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SerializablePermission, init$, void, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.io.SerializablePermission",
		"java.security.BasicPermission",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SerializablePermission, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SerializablePermission));
	});
	return class$;
}

$Class* SerializablePermission::class$ = nullptr;

	} // io
} // java