#include <B4.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _B4_MethodInfo_[] = {
	{"m", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _B4_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"B4",
	nullptr,
	"D4",
	nullptr,
	_B4_MethodInfo_
};

$Object* allocate$B4($Class* clazz) {
	return $of($alloc(B4));
}

$Class* B4::load$($String* name, bool initialize) {
	$loadClass(B4, name, initialize, &_B4_ClassInfo_, allocate$B4);
	return class$;
}

$Class* B4::class$ = nullptr;