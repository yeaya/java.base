#include <sun/invoke/empty/Empty.h>
#include <java/lang/InternalError.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace invoke {
		namespace empty {

void Empty::init$() {
	$throwNew($InternalError);
}

Empty::Empty() {
}

$Class* Empty::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Empty, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.invoke.empty.Empty",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Empty, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Empty);
	});
	return class$;
}

$Class* Empty::class$ = nullptr;

		} // empty
	} // invoke
} // sun