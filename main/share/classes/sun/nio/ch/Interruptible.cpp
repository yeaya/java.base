#include <sun/nio/ch/Interruptible.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace ch {

$MethodInfo _Interruptible_MethodInfo_[] = {
	{"interrupt", "(Ljava/lang/Thread;)V", nullptr, $PUBLIC | $ABSTRACT},
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