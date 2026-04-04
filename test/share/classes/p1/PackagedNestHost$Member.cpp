#include <p1/PackagedNestHost$Member.h>
#include <p1/PackagedNestHost.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p1 {

void PackagedNestHost$Member::init$() {
}

PackagedNestHost$Member::PackagedNestHost$Member() {
}

$Class* PackagedNestHost$Member::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PackagedNestHost$Member, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"p1.PackagedNestHost$Member", "p1.PackagedNestHost", "Member", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"p1.PackagedNestHost$Member",
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
		"p1.PackagedNestHost"
	};
	$loadClass(PackagedNestHost$Member, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PackagedNestHost$Member);
	});
	return class$;
}

$Class* PackagedNestHost$Member::class$ = nullptr;

} // p1