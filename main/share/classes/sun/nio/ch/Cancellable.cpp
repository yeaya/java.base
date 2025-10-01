#include <sun/nio/ch/Cancellable.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/nio/ch/PendingFuture.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PendingFuture = ::sun::nio::ch::PendingFuture;

namespace sun {
	namespace nio {
		namespace ch {

$MethodInfo _Cancellable_MethodInfo_[] = {
	{"onCancel", "(Lsun/nio/ch/PendingFuture;)V", "(Lsun/nio/ch/PendingFuture<**>;)V", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Cancellable_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.nio.ch.Cancellable",
	nullptr,
	nullptr,
	nullptr,
	_Cancellable_MethodInfo_
};

$Object* allocate$Cancellable($Class* clazz) {
	return $of($alloc(Cancellable));
}

$Class* Cancellable::load$($String* name, bool initialize) {
	$loadClass(Cancellable, name, initialize, &_Cancellable_ClassInfo_, allocate$Cancellable);
	return class$;
}

$Class* Cancellable::class$ = nullptr;

		} // ch
	} // nio
} // sun