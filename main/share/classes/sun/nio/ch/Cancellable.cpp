#include <sun/nio/ch/Cancellable.h>
#include <sun/nio/ch/PendingFuture.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PendingFuture = ::sun::nio::ch::PendingFuture;

namespace sun {
	namespace nio {
		namespace ch {

$Class* Cancellable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"onCancel", "(Lsun/nio/ch/PendingFuture;)V", "(Lsun/nio/ch/PendingFuture<**>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(Cancellable, onCancel, void, $PendingFuture*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.nio.ch.Cancellable",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Cancellable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Cancellable);
	});
	return class$;
}

$Class* Cancellable::class$ = nullptr;

		} // ch
	} // nio
} // sun