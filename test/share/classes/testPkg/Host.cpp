#include <testPkg/Host.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace testPkg {

void Host::init$() {
}

Host::Host() {
}

$Class* Host::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Host, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"testPkg.Host$Member", "testPkg.Host", "Member", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"testPkg.Host",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"testPkg.Host$Member"
	};
	$loadClass(Host, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Host);
	});
	return class$;
}

$Class* Host::class$ = nullptr;

} // testPkg