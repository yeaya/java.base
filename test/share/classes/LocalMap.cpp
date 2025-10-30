#include <LocalMap.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute LocalMap_Attribute_var$0[] = {
	{"value", 's', "abstract interface LocalMap<K,V>"},
	{}
};

$CompoundAttribute _LocalMap_Annotations_[] = {
	{"LExpectedGenericString;", LocalMap_Attribute_var$0},
	{}
};

$ClassInfo _LocalMap_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"LocalMap",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	nullptr,
	_LocalMap_Annotations_
};

$Object* allocate$LocalMap($Class* clazz) {
	return $of($alloc(LocalMap));
}

$Class* LocalMap::load$($String* name, bool initialize) {
	$loadClass(LocalMap, name, initialize, &_LocalMap_ClassInfo_, allocate$LocalMap);
	return class$;
}

$Class* LocalMap::class$ = nullptr;