#include <B2.h>

#include <jcpp.h>

using $D2 = ::D2;
using $ClassInfo = ::java::lang::ClassInfo;

$ClassInfo _B2_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"B2",
	nullptr,
	"D2"
};

$Object* allocate$B2($Class* clazz) {
	return $of($alloc(B2));
}

$Class* B2::load$($String* name, bool initialize) {
	$loadClass(B2, name, initialize, &_B2_ClassInfo_, allocate$B2);
	return class$;
}

$Class* B2::class$ = nullptr;