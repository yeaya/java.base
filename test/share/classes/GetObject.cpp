#include <GetObject.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $doubleArray3 = $Array<double, 3>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _GetObject_MethodInfo_[] = {
	{"get", "([[[D)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _GetObject_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"GetObject",
	nullptr,
	nullptr,
	nullptr,
	_GetObject_MethodInfo_
};

$Object* allocate$GetObject($Class* clazz) {
	return $of($alloc(GetObject));
}

$Class* GetObject::load$($String* name, bool initialize) {
	$loadClass(GetObject, name, initialize, &_GetObject_ClassInfo_, allocate$GetObject);
	return class$;
}

$Class* GetObject::class$ = nullptr;