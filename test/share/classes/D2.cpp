#include <D2.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _D2_MethodInfo_[] = {
	{"m", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _D2_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"D2",
	nullptr,
	nullptr,
	nullptr,
	_D2_MethodInfo_
};

$Object* allocate$D2($Class* clazz) {
	return $of($alloc(D2));
}

$Class* D2::load$($String* name, bool initialize) {
	$loadClass(D2, name, initialize, &_D2_ClassInfo_, allocate$D2);
	return class$;
}

$Class* D2::class$ = nullptr;