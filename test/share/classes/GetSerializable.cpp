#include <GetSerializable.h>
#include <java/io/Serializable.h>
#include <jcpp.h>

using $doubleArray3 = $Array<double, 3>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* GetSerializable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"get", "([[[D)Ljava/io/Serializable;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GetSerializable, get, $Serializable*, $doubleArray3*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"GetSerializable",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(GetSerializable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetSerializable);
	});
	return class$;
}

$Class* GetSerializable::class$ = nullptr;