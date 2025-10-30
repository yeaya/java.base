#include <D4.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _D4_MethodInfo_[] = {
	{"m", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _D4_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"D4",
	nullptr,
	nullptr,
	nullptr,
	_D4_MethodInfo_
};

$Object* allocate$D4($Class* clazz) {
	return $of($alloc(D4));
}

$Class* D4::load$($String* name, bool initialize) {
	$loadClass(D4, name, initialize, &_D4_ClassInfo_, allocate$D4);
	return class$;
}

$Class* D4::class$ = nullptr;