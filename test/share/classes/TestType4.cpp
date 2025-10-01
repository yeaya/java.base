#include <TestType4.h>

#include <java/lang/Attribute.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

$NamedAttribute TestType4_Attribute_var$0[] = {
	{"value", 'Z', "false"},
	{}
};

$CompoundAttribute _TestType4_MethodAnnotations_anotherValue0[] = {
	{"LExpectedIsDefault;", TestType4_Attribute_var$0},
	{}
};
$Attribute _TestType4_DefaultValue_anotherValue0 = {
's', ""};

$NamedAttribute TestType4_Attribute_var$1[] = {
	{"value", 'Z', "false"},
	{}
};

$CompoundAttribute _TestType4_MethodAnnotations_value1[] = {
	{"LExpectedIsDefault;", TestType4_Attribute_var$1},
	{}
};

$MethodInfo _TestType4_MethodInfo_[] = {
	{"anotherValue", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_TestType4_DefaultValue_anotherValue0, _TestType4_MethodAnnotations_anotherValue0},
	{"value", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, nullptr, _TestType4_MethodAnnotations_value1},
	{}
};

$ClassInfo _TestType4_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"TestType4",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_TestType4_MethodInfo_
};

$Object* allocate$TestType4($Class* clazz) {
	return $of($alloc(TestType4));
}

$Class* TestType4::load$($String* name, bool initialize) {
	$loadClass(TestType4, name, initialize, &_TestType4_ClassInfo_, allocate$TestType4);
	return class$;
}

$Class* TestType4::class$ = nullptr;