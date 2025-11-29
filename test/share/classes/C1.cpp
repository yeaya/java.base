#include <C1.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

$ClassInfo _C1_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"C1",
	nullptr,
	"D1"
};

$Object* allocate$C1($Class* clazz) {
	return $of($alloc(C1));
}

$Class* C1::load$($String* name, bool initialize) {
	$loadClass(C1, name, initialize, &_C1_ClassInfo_, allocate$C1);
	return class$;
}

$Class* C1::class$ = nullptr;