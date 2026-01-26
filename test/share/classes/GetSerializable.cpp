#include <GetSerializable.h>

#include <java/io/Serializable.h>
#include <jcpp.h>

using $doubleArray3 = $Array<double, 3>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _GetSerializable_MethodInfo_[] = {
	{"get", "([[[D)Ljava/io/Serializable;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GetSerializable, get, $Serializable*, $doubleArray3*)},
	{}
};

$ClassInfo _GetSerializable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"GetSerializable",
	nullptr,
	nullptr,
	nullptr,
	_GetSerializable_MethodInfo_
};

$Object* allocate$GetSerializable($Class* clazz) {
	return $of($alloc(GetSerializable));
}

$Class* GetSerializable::load$($String* name, bool initialize) {
	$loadClass(GetSerializable, name, initialize, &_GetSerializable_ClassInfo_, allocate$GetSerializable);
	return class$;
}

$Class* GetSerializable::class$ = nullptr;