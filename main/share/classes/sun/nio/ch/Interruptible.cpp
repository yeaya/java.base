#include <sun/nio/ch/Interruptible.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace ch {

$MethodInfo _Interruptible_MethodInfo_[] = {
	{"interrupt", "(Ljava/lang/Thread;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Interruptible, interrupt, void, $Thread*)},
	{}
};

$ClassInfo _Interruptible_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.nio.ch.Interruptible",
	nullptr,
	nullptr,
	nullptr,
	_Interruptible_MethodInfo_
};

$Object* allocate$Interruptible($Class* clazz) {
	return $of($alloc(Interruptible));
}

$Class* Interruptible::load$($String* name, bool initialize) {
	$loadClass(Interruptible, name, initialize, &_Interruptible_ClassInfo_, allocate$Interruptible);
	return class$;
}

$Class* Interruptible::class$ = nullptr;

		} // ch
	} // nio
} // sun