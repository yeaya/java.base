#include <B1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $D1 = ::D1;
using $ClassInfo = ::java::lang::ClassInfo;

$ClassInfo _B1_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"B1",
	nullptr,
	"D1"
};

$Object* allocate$B1($Class* clazz) {
	return $of($alloc(B1));
}

$Class* B1::load$($String* name, bool initialize) {
	$loadClass(B1, name, initialize, &_B1_ClassInfo_, allocate$B1);
	return class$;
}

$Class* B1::class$ = nullptr;