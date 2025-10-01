#include <UniTest/ScalarTypesWithDefault.h>

#include <UniTest/Point.h>
#include <UniTest/Stooge.h>
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

using $Point = ::UniTest::Point;
using $Stooge = ::UniTest::Stooge;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

namespace UniTest {

$NamedAttribute ScalarTypesWithDefault_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};
$CompoundAttribute _ScalarTypesWithDefault_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", ScalarTypesWithDefault_Attribute_var$0},
	{}
};

$NamedAttribute ScalarTypesWithDefault_Attribute_var$2[] = {
	{"x", 'I', "11"},
	{"y", 'I', "12"},
	{}
};

$CompoundAttribute ScalarTypesWithDefault_CompoundAttribute_var$1 = {
	"LUniTest/Point;", ScalarTypesWithDefault_Attribute_var$2
};
$Attribute _ScalarTypesWithDefault_DefaultValue_a0 = {
'@', &ScalarTypesWithDefault_CompoundAttribute_var$1};
$Attribute _ScalarTypesWithDefault_DefaultValue_b1 = {
'B', "11"};
$Attribute _ScalarTypesWithDefault_DefaultValue_bool$2 = {
'Z', "false"};
$Attribute _ScalarTypesWithDefault_DefaultValue_c3 = {
'C', "V"};
$Attribute _ScalarTypesWithDefault_DefaultValue_cls4 = {
'c', "Ljava/lang/Class;"};
$Attribute _ScalarTypesWithDefault_DefaultValue_d5 = {
'D', "17.0"};
$Attribute _ScalarTypesWithDefault_DefaultValue_e6 = {
'e', "LUniTest/Stooge; LARRY"};
$Attribute _ScalarTypesWithDefault_DefaultValue_f7 = {
'F', "16.0"};
$Attribute _ScalarTypesWithDefault_DefaultValue_i8 = {
'I', "13"};
$Attribute _ScalarTypesWithDefault_DefaultValue_l9 = {
'J', "14"};
$Attribute _ScalarTypesWithDefault_DefaultValue_s10 = {
'S', "12"};
$Attribute _ScalarTypesWithDefault_DefaultValue_str11 = {
's', "default"};


$MethodInfo _ScalarTypesWithDefault_MethodInfo_[] = {
	{"a", "()LUniTest/Point;", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_ScalarTypesWithDefault_DefaultValue_a0},
	{"b", "()B", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_ScalarTypesWithDefault_DefaultValue_b1},
	{"bool", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_ScalarTypesWithDefault_DefaultValue_bool$2},
	{"c", "()C", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_ScalarTypesWithDefault_DefaultValue_c3},
	{"cls", "()Ljava/lang/Class;", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_ScalarTypesWithDefault_DefaultValue_cls4},
	{"d", "()D", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_ScalarTypesWithDefault_DefaultValue_d5},
	{"e", "()LUniTest/Stooge;", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_ScalarTypesWithDefault_DefaultValue_e6},
	{"f", "()F", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_ScalarTypesWithDefault_DefaultValue_f7},
	{"i", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_ScalarTypesWithDefault_DefaultValue_i8},
	{"l", "()J", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_ScalarTypesWithDefault_DefaultValue_l9},
	{"s", "()S", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_ScalarTypesWithDefault_DefaultValue_s10},
	{"str", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_ScalarTypesWithDefault_DefaultValue_str11},
	{}
};

$ClassInfo _ScalarTypesWithDefault_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.ScalarTypesWithDefault",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_ScalarTypesWithDefault_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_ScalarTypesWithDefault_Annotations_
};

$Object* allocate$ScalarTypesWithDefault($Class* clazz) {
	return $of($alloc(ScalarTypesWithDefault));
}

$Class* ScalarTypesWithDefault::load$($String* name, bool initialize) {
	$loadClass(ScalarTypesWithDefault, name, initialize, &_ScalarTypesWithDefault_ClassInfo_, allocate$ScalarTypesWithDefault);
	return class$;
}

$Class* ScalarTypesWithDefault::class$ = nullptr;

} // UniTest