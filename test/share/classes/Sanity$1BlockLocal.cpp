#include <Sanity$1BlockLocal.h>
#include <Sanity.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Sanity$1BlockLocal::init$() {
}

Sanity$1BlockLocal::Sanity$1BlockLocal() {
}

$Class* Sanity$1BlockLocal::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Sanity$1BlockLocal, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Sanity",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Sanity$1BlockLocal", nullptr, "BlockLocal", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Sanity$1BlockLocal",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Sanity"
	};
	$loadClass(Sanity$1BlockLocal, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Sanity$1BlockLocal);
	});
	return class$;
}

$Class* Sanity$1BlockLocal::class$ = nullptr;