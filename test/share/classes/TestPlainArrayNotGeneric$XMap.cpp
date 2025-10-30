#include <TestPlainArrayNotGeneric$XMap.h>

#include <TestPlainArrayNotGeneric.h>
#include <jcpp.h>

using $TestPlainArrayNotGeneric = ::TestPlainArrayNotGeneric;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Map = ::java::util::Map;

$InnerClassInfo _TestPlainArrayNotGeneric$XMap_InnerClassesInfo_[] = {
	{"TestPlainArrayNotGeneric$XMap", "TestPlainArrayNotGeneric", "XMap", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TestPlainArrayNotGeneric$XMap_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"TestPlainArrayNotGeneric$XMap",
	nullptr,
	"java.util.Map",
	nullptr,
	nullptr,
	"Ljava/lang/Object;Ljava/util/Map<Ljava/util/List<[Ljava/lang/String;>;[Ljava/lang/String;>;",
	nullptr,
	_TestPlainArrayNotGeneric$XMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestPlainArrayNotGeneric"
};

$Object* allocate$TestPlainArrayNotGeneric$XMap($Class* clazz) {
	return $of($alloc(TestPlainArrayNotGeneric$XMap));
}

$Class* TestPlainArrayNotGeneric$XMap::load$($String* name, bool initialize) {
	$loadClass(TestPlainArrayNotGeneric$XMap, name, initialize, &_TestPlainArrayNotGeneric$XMap_ClassInfo_, allocate$TestPlainArrayNotGeneric$XMap);
	return class$;
}

$Class* TestPlainArrayNotGeneric$XMap::class$ = nullptr;