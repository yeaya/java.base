#include <C1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $D1 = ::D1;
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