#include <Wildcard.h>
#include <java/net/SocketPermission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SocketPermission = ::java::net::SocketPermission;

void Wildcard::init$() {
}

void Wildcard::main($StringArray* args) {
	$useLocalObjectStack();
	$var($SocketPermission, star_All, $new($SocketPermission, "*.blabla.bla"_s, "listen,accept,connect"_s));
	$var($SocketPermission, www_All, $new($SocketPermission, "bla.blabla.bla"_s, "listen,accept,connect"_s));
	if (!star_All->implies(www_All)) {
		$throwNew($RuntimeException, $$str({"Failed: "_s, star_All, " does not imply "_s, www_All}));
	}
}

Wildcard::Wildcard() {
}

$Class* Wildcard::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Wildcard, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Wildcard, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Wildcard",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Wildcard, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Wildcard);
	});
	return class$;
}

$Class* Wildcard::class$ = nullptr;