#include <p2/PackagedNestHost2$Member.h>
#include <p2/PackagedNestHost2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p2 {

void PackagedNestHost2$Member::init$() {
}

PackagedNestHost2$Member::PackagedNestHost2$Member() {
}

$Class* PackagedNestHost2$Member::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PackagedNestHost2$Member, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"p2.PackagedNestHost2$Member", "p2.PackagedNestHost2", "Member", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"p2.PackagedNestHost2$Member",
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
		"p2.PackagedNestHost2"
	};
	$loadClass(PackagedNestHost2$Member, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PackagedNestHost2$Member);
	});
	return class$;
}

$Class* PackagedNestHost2$Member::class$ = nullptr;

} // p2