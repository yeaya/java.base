#include <AnInterface.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute AnInterface_Attribute_var$0[] = {
	{"value", 's', "abstract interface AnInterface"},
	{}
};
$CompoundAttribute _AnInterface_Annotations_[] = {
	{"LExpectedGenericString;", AnInterface_Attribute_var$0},
	{}
};


$ClassInfo _AnInterface_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"AnInterface",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_AnInterface_Annotations_
};

$Object* allocate$AnInterface($Class* clazz) {
	return $of($alloc(AnInterface));
}

$Class* AnInterface::load$($String* name, bool initialize) {
	$loadClass(AnInterface, name, initialize, &_AnInterface_ClassInfo_, allocate$AnInterface);
	return class$;
}

$Class* AnInterface::class$ = nullptr;