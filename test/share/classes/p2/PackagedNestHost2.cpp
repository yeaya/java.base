#include <p2/PackagedNestHost2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p2 {

void PackagedNestHost2::init$() {
}

PackagedNestHost2::PackagedNestHost2() {
}

$Class* PackagedNestHost2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PackagedNestHost2, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"p2.PackagedNestHost2$Member", "p2.PackagedNestHost2", "Member", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"p2.PackagedNestHost2",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"p2.PackagedNestHost2$Member"
	};
	$loadClass(PackagedNestHost2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PackagedNestHost2);
	});
	return class$;
}

$Class* PackagedNestHost2::class$ = nullptr;

} // p2