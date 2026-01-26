#include <GetCloneable.h>

#include <java/lang/Cloneable.h>
#include <jcpp.h>

using $doubleArray3 = $Array<double, 3>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _GetCloneable_MethodInfo_[] = {
	{"get", "([[[D)Ljava/lang/Cloneable;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GetCloneable, get, $Cloneable*, $doubleArray3*)},
	{}
};

$ClassInfo _GetCloneable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"GetCloneable",
	nullptr,
	nullptr,
	nullptr,
	_GetCloneable_MethodInfo_
};

$Object* allocate$GetCloneable($Class* clazz) {
	return $of($alloc(GetCloneable));
}

$Class* GetCloneable::load$($String* name, bool initialize) {
	$loadClass(GetCloneable, name, initialize, &_GetCloneable_ClassInfo_, allocate$GetCloneable);
	return class$;
}

$Class* GetCloneable::class$ = nullptr;