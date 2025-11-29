#include <C4.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

$ClassInfo _C4_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"C4",
	nullptr,
	"D4"
};

$Object* allocate$C4($Class* clazz) {
	return $of($alloc(C4));
}

$Class* C4::load$($String* name, bool initialize) {
	$loadClass(C4, name, initialize, &_C4_ClassInfo_, allocate$C4);
	return class$;
}

$Class* C4::class$ = nullptr;