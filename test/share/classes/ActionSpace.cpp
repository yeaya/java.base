#include <ActionSpace.h>
#include <java/net/SocketPermission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketPermission = ::java::net::SocketPermission;

void ActionSpace::init$() {
}

void ActionSpace::main($StringArray* args) {
	try {
		$var($SocketPermission, sp, $new($SocketPermission, "*"_s, "connect , accept"_s));
	} catch ($Exception& e) {
		$throwNew($Exception, "should not have caught an exception"_s);
	}
}

ActionSpace::ActionSpace() {
}

$Class* ActionSpace::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ActionSpace, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ActionSpace, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ActionSpace",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ActionSpace, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ActionSpace);
	});
	return class$;
}

$Class* ActionSpace::class$ = nullptr;