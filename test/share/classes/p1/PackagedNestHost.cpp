#include <p1/PackagedNestHost.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p1 {

void PackagedNestHost::init$() {
}

PackagedNestHost::PackagedNestHost() {
}

$Class* PackagedNestHost::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PackagedNestHost, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"p1.PackagedNestHost$Member", "p1.PackagedNestHost", "Member", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"p1.PackagedNestHost",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"p1.PackagedNestHost$Member"
	};
	$loadClass(PackagedNestHost, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PackagedNestHost);
	});
	return class$;
}

$Class* PackagedNestHost::class$ = nullptr;

} // p1