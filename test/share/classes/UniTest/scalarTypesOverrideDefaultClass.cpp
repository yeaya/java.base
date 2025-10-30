#include <UniTest/scalarTypesOverrideDefaultClass.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$NamedAttribute scalarTypesOverrideDefaultClass_Attribute_var$0[] = {
	{"b", 'B', "1"},
	{"s", 'S', "2"},
	{"i", 'I', "3"},
	{"l", 'J', "4"},
	{"c", 'C', "5"},
	{"f", 'F', "6.0"},
	{"d", 'D', "7.0"},
	{"bool", 'Z', "true"},
	{"str", 's', "custom"},
	{"cls", 'c', "Ljava/util/Map;"},
	{"e", 'e', "LUniTest/Stooge; MOE"},
	{}
};

$CompoundAttribute _scalarTypesOverrideDefaultClass_Annotations_[] = {
	{"LUniTest/ScalarTypesWithDefault;", scalarTypesOverrideDefaultClass_Attribute_var$0},
	{}
};

$MethodInfo _scalarTypesOverrideDefaultClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(scalarTypesOverrideDefaultClass::*)()>(&scalarTypesOverrideDefaultClass::init$))},
	{}
};

$ClassInfo _scalarTypesOverrideDefaultClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.scalarTypesOverrideDefaultClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_scalarTypesOverrideDefaultClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_scalarTypesOverrideDefaultClass_Annotations_
};

$Object* allocate$scalarTypesOverrideDefaultClass($Class* clazz) {
	return $of($alloc(scalarTypesOverrideDefaultClass));
}

void scalarTypesOverrideDefaultClass::init$() {
}

scalarTypesOverrideDefaultClass::scalarTypesOverrideDefaultClass() {
}

$Class* scalarTypesOverrideDefaultClass::load$($String* name, bool initialize) {
	$loadClass(scalarTypesOverrideDefaultClass, name, initialize, &_scalarTypesOverrideDefaultClass_ClassInfo_, allocate$scalarTypesOverrideDefaultClass);
	return class$;
}

$Class* scalarTypesOverrideDefaultClass::class$ = nullptr;

} // UniTest