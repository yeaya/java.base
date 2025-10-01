#include <C2.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $D2 = ::D2;
using $ClassInfo = ::java::lang::ClassInfo;

$ClassInfo _C2_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"C2",
	nullptr,
	"D2"
};

$Object* allocate$C2($Class* clazz) {
	return $of($alloc(C2));
}

$Class* C2::load$($String* name, bool initialize) {
	$loadClass(C2, name, initialize, &_C2_ClassInfo_, allocate$C2);
	return class$;
}

$Class* C2::class$ = nullptr;