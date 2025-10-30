#include <GetArray.h>

#include <jcpp.h>

using $doubleArray3 = $Array<double, 3>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _GetArray_MethodInfo_[] = {
	{"get", "([[[D)[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _GetArray_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"GetArray",
	nullptr,
	nullptr,
	nullptr,
	_GetArray_MethodInfo_
};

$Object* allocate$GetArray($Class* clazz) {
	return $of($alloc(GetArray));
}

$Class* GetArray::load$($String* name, bool initialize) {
	$loadClass(GetArray, name, initialize, &_GetArray_ClassInfo_, allocate$GetArray);
	return class$;
}

$Class* GetArray::class$ = nullptr;