#include <java/nio/file/LinkPermission.h>
#include <java/security/BasicPermission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicPermission = ::java::security::BasicPermission;

namespace java {
	namespace nio {
		namespace file {

void LinkPermission::checkName($String* name) {
	bool var$0 = !$nc(name)->equals("hard"_s);
	if (var$0 && !name->equals("symbolic"_s)) {
		$throwNew($IllegalArgumentException, $$str({"name: "_s, name}));
	}
}

void LinkPermission::init$($String* name) {
	$BasicPermission::init$(name);
	checkName(name);
}

void LinkPermission::init$($String* name, $String* actions) {
	$BasicPermission::init$(name);
	checkName(name);
	if (actions != nullptr && !actions->isEmpty()) {
		$throwNew($IllegalArgumentException, $$str({"actions: "_s, actions}));
	}
}

LinkPermission::LinkPermission() {
}

$Class* LinkPermission::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(LinkPermission, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(LinkPermission, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(LinkPermission, init$, void, $String*, $String*)},
		{"checkName", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(LinkPermission, checkName, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.nio.file.LinkPermission",
		"java.security.BasicPermission",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LinkPermission, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(LinkPermission));
	});
	return class$;
}

$Class* LinkPermission::class$ = nullptr;

		} // file
	} // nio
} // java