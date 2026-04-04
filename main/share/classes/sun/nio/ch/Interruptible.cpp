#include <sun/nio/ch/Interruptible.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace ch {

$Class* Interruptible::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"interrupt", "(Ljava/lang/Thread;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Interruptible, interrupt, void, $Thread*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.nio.ch.Interruptible",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Interruptible, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Interruptible);
	});
	return class$;
}

$Class* Interruptible::class$ = nullptr;

		} // ch
	} // nio
} // sun