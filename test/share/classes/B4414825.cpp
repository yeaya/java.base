#include <B4414825.h>
#include <java/net/SocketPermission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SocketPermission = ::java::net::SocketPermission;

void B4414825::init$() {
}

void B4414825::main($StringArray* args) {
	$useLocalObjectStack();
	$var($SocketPermission, p, $new($SocketPermission, "invlidhost"_s, "connect"_s));
	if (!p->implies(p)) {
		$throwNew($RuntimeException, "Test failed: SocketPermission instance should imply itself."_s);
	}
	$var($SocketPermission, p1, $new($SocketPermission, "invlidhost"_s, "connect"_s));
	if (!p->implies(p1)) {
		$throwNew($RuntimeException, "Test failed: Equaled SocketPermission instances should imply each other."_s);
	}
}

B4414825::B4414825() {
}

$Class* B4414825::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(B4414825, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(B4414825, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"B4414825",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(B4414825, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(B4414825);
	});
	return class$;
}

$Class* B4414825::class$ = nullptr;