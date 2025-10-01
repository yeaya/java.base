#include <UniTest/ArrayTypesWithDefault.h>

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

using $PointArray = $Array<::UniTest::Point>;
using $StoogeArray = $Array<::UniTest::Stooge>;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

namespace UniTest {

$NamedAttribute ArrayTypesWithDefault_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};
$CompoundAttribute _ArrayTypesWithDefault_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", ArrayTypesWithDefault_Attribute_var$0},
	{}
};

$NamedAttribute ArrayTypesWithDefault_Attribute_var$3[] = {
	{"x", 'I', "11"},
	{"y", 'I', "12"},
	{}
};

$CompoundAttribute ArrayTypesWithDefault_CompoundAttribute_var$2 = {
	"LUniTest/Point;", ArrayTypesWithDefault_Attribute_var$3
};

$Attribute ArrayTypesWithDefault_Attribute_var$1[] = {
	{'@', &ArrayTypesWithDefault_CompoundAttribute_var$2},
	{'-'}
};
$Attribute _ArrayTypesWithDefault_DefaultValue_a0 = {
'[', ArrayTypesWithDefault_Attribute_var$1};

$Attribute ArrayTypesWithDefault_Attribute_var$4[] = {
	{'B', "11"},
	{'-'}
};
$Attribute _ArrayTypesWithDefault_DefaultValue_b1 = {
'[', ArrayTypesWithDefault_Attribute_var$4};

$Attribute ArrayTypesWithDefault_Attribute_var$5[] = {
	{'Z', "false"},
	{'-'}
};
$Attribute _ArrayTypesWithDefault_DefaultValue_bool$2 = {
'[', ArrayTypesWithDefault_Attribute_var$5};

$Attribute ArrayTypesWithDefault_Attribute_var$6[] = {
	{'C', "V"},
	{'-'}
};
$Attribute _ArrayTypesWithDefault_DefaultValue_c3 = {
'[', ArrayTypesWithDefault_Attribute_var$6};

$Attribute ArrayTypesWithDefault_Attribute_var$7[] = {
	{'c', "Ljava/lang/Class;"},
	{'-'}
};
$Attribute _ArrayTypesWithDefault_DefaultValue_cls4 = {
'[', ArrayTypesWithDefault_Attribute_var$7};

$Attribute ArrayTypesWithDefault_Attribute_var$8[] = {
	{'D', "17.0"},
	{'-'}
};
$Attribute _ArrayTypesWithDefault_DefaultValue_d5 = {
'[', ArrayTypesWithDefault_Attribute_var$8};

$Attribute ArrayTypesWithDefault_Attribute_var$9[] = {
	{'e', "LUniTest/Stooge; LARRY"},
	{'-'}
};
$Attribute _ArrayTypesWithDefault_DefaultValue_e6 = {
'[', ArrayTypesWithDefault_Attribute_var$9};

$Attribute ArrayTypesWithDefault_Attribute_var$10[] = {
	{'F', "16.0"},
	{'-'}
};
$Attribute _ArrayTypesWithDefault_DefaultValue_f7 = {
'[', ArrayTypesWithDefault_Attribute_var$10};

$Attribute ArrayTypesWithDefault_Attribute_var$11[] = {
	{'I', "13"},
	{'-'}
};
$Attribute _ArrayTypesWithDefault_DefaultValue_i8 = {
'[', ArrayTypesWithDefault_Attribute_var$11};

$Attribute ArrayTypesWithDefault_Attribute_var$12[] = {
	{'J', "14"},
	{'-'}
};
$Attribute _ArrayTypesWithDefault_DefaultValue_l9 = {
'[', ArrayTypesWithDefault_Attribute_var$12};

$Attribute ArrayTypesWithDefault_Attribute_var$13[] = {
	{'S', "12"},
	{'-'}
};
$Attribute _ArrayTypesWithDefault_DefaultValue_s10 = {
'[', ArrayTypesWithDefault_Attribute_var$13};

$Attribute ArrayTypesWithDefault_Attribute_var$14[] = {
	{'s', "default"},
	{'-'}
};
$Attribute _ArrayTypesWithDefault_DefaultValue_str11 = {
'[', ArrayTypesWithDefault_Attribute_var$14};


$MethodInfo _ArrayTypesWithDefault_MethodInfo_[] = {
	{"a", "()[LUniTest/Point;", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_ArrayTypesWithDefault_DefaultValue_a0},
	{"b", "()[B", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_ArrayTypesWithDefault_DefaultValue_b1},
	{"bool", "()[Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_ArrayTypesWithDefault_DefaultValue_bool$2},
	{"c", "()[C", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_ArrayTypesWithDefault_DefaultValue_c3},
	{"cls", "()[Ljava/lang/Class;", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_ArrayTypesWithDefault_DefaultValue_cls4},
	{"d", "()[D", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_ArrayTypesWithDefault_DefaultValue_d5},
	{"e", "()[LUniTest/Stooge;", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_ArrayTypesWithDefault_DefaultValue_e6},
	{"f", "()[F", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_ArrayTypesWithDefault_DefaultValue_f7},
	{"i", "()[I", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_ArrayTypesWithDefault_DefaultValue_i8},
	{"l", "()[J", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_ArrayTypesWithDefault_DefaultValue_l9},
	{"s", "()[S", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_ArrayTypesWithDefault_DefaultValue_s10},
	{"str", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_ArrayTypesWithDefault_DefaultValue_str11},
	{}
};

$ClassInfo _ArrayTypesWithDefault_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.ArrayTypesWithDefault",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_ArrayTypesWithDefault_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_ArrayTypesWithDefault_Annotations_
};

$Object* allocate$ArrayTypesWithDefault($Class* clazz) {
	return $of($alloc(ArrayTypesWithDefault));
}

$Class* ArrayTypesWithDefault::load$($String* name, bool initialize) {
	$loadClass(ArrayTypesWithDefault, name, initialize, &_ArrayTypesWithDefault_ClassInfo_, allocate$ArrayTypesWithDefault);
	return class$;
}

$Class* ArrayTypesWithDefault::class$ = nullptr;

} // UniTest