#include <TestPlainArrayNotGeneric$YMap.h>

#include <TestPlainArrayNotGeneric.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $TestPlainArrayNotGeneric = ::TestPlainArrayNotGeneric;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Map = ::java::util::Map;

$InnerClassInfo _TestPlainArrayNotGeneric$YMap_InnerClassesInfo_[] = {
	{"TestPlainArrayNotGeneric$YMap", "TestPlainArrayNotGeneric", "YMap", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TestPlainArrayNotGeneric$YMap_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"TestPlainArrayNotGeneric$YMap",
	nullptr,
	"java.util.Map",
	nullptr,
	nullptr,
	"<K::Ljava/util/List<[Ljava/lang/String;>;V:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Map<[TK;[TV;>;",
	nullptr,
	_TestPlainArrayNotGeneric$YMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestPlainArrayNotGeneric"
};

$Object* allocate$TestPlainArrayNotGeneric$YMap($Class* clazz) {
	return $of($alloc(TestPlainArrayNotGeneric$YMap));
}

$Class* TestPlainArrayNotGeneric$YMap::load$($String* name, bool initialize) {
	$loadClass(TestPlainArrayNotGeneric$YMap, name, initialize, &_TestPlainArrayNotGeneric$YMap_ClassInfo_, allocate$TestPlainArrayNotGeneric$YMap);
	return class$;
}

$Class* TestPlainArrayNotGeneric$YMap::class$ = nullptr;