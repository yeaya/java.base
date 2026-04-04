#include <testPkg/Host$Member.h>
#include <testPkg/Host.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace testPkg {

void Host$Member::init$() {
}

Host$Member::Host$Member() {
}

$Class* Host$Member::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Host$Member, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"testPkg.Host$Member", "testPkg.Host", "Member", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"testPkg.Host$Member",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"testPkg.Host"
	};
	$loadClass(Host$Member, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Host$Member);
	});
	return class$;
}

$Class* Host$Member::class$ = nullptr;

} // testPkg