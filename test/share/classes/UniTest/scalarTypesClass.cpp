#include <UniTest/scalarTypesClass.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$NamedAttribute scalarTypesClass_Attribute_var$2[] = {
	{"x", 'I', "1"},
	{"y", 'I', "2"},
	{}
};

$CompoundAttribute scalarTypesClass_CompoundAttribute_var$1 = {
"LUniTest/Point;", scalarTypesClass_Attribute_var$2
};

$NamedAttribute scalarTypesClass_Attribute_var$0[] = {
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
	{"a", '@', &scalarTypesClass_CompoundAttribute_var$1},
	{}
};

$CompoundAttribute _scalarTypesClass_Annotations_[] = {
	{"LUniTest/ScalarTypes;", scalarTypesClass_Attribute_var$0},
	{}
};

$MethodInfo _scalarTypesClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(scalarTypesClass, init$, void)},
	{}
};

$ClassInfo _scalarTypesClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.scalarTypesClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_scalarTypesClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_scalarTypesClass_Annotations_
};

$Object* allocate$scalarTypesClass($Class* clazz) {
	return $of($alloc(scalarTypesClass));
}

void scalarTypesClass::init$() {
}

scalarTypesClass::scalarTypesClass() {
}

$Class* scalarTypesClass::load$($String* name, bool initialize) {
	$loadClass(scalarTypesClass, name, initialize, &_scalarTypesClass_ClassInfo_, allocate$scalarTypesClass);
	return class$;
}

$Class* scalarTypesClass::class$ = nullptr;

} // UniTest