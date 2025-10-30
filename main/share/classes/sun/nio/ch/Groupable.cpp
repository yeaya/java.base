#include <sun/nio/ch/Groupable.h>

#include <sun/nio/ch/AsynchronousChannelGroupImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AsynchronousChannelGroupImpl = ::sun::nio::ch::AsynchronousChannelGroupImpl;

namespace sun {
	namespace nio {
		namespace ch {

$MethodInfo _Groupable_MethodInfo_[] = {
	{"group", "()Lsun/nio/ch/AsynchronousChannelGroupImpl;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Groupable_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.nio.ch.Groupable",
	nullptr,
	nullptr,
	nullptr,
	_Groupable_MethodInfo_
};

$Object* allocate$Groupable($Class* clazz) {
	return $of($alloc(Groupable));
}

$Class* Groupable::load$($String* name, bool initialize) {
	$loadClass(Groupable, name, initialize, &_Groupable_ClassInfo_, allocate$Groupable);
	return class$;
}

$Class* Groupable::class$ = nullptr;

		} // ch
	} // nio
} // sun