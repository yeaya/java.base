#include <GetObject.h>

#include <jcpp.h>

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