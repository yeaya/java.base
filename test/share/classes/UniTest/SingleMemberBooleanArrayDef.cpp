#include <UniTest/SingleMemberBooleanArrayDef.h>

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

namespace UniTest {

$NamedAttribute SingleMemberBooleanArrayDef_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};
$CompoundAttribute _SingleMemberBooleanArrayDef_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberBooleanArrayDef_Attribute_var$0},
	{}
};

$Attribute SingleMemberBooleanArrayDef_Attribute_var$1[] = {
	{'Z', "false"},
	{'-'}
};
$Attribute _SingleMemberBooleanArrayDef_DefaultValue_value0 = {
'[', SingleMemberBooleanArrayDef_Attribute_var$1};


$MethodInfo _SingleMemberBooleanArrayDef_MethodInfo_[] = {
	{"value", "()[Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_SingleMemberBooleanArrayDef_DefaultValue_value0},
	{}
};

$ClassInfo _SingleMemberBooleanArrayDef_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.SingleMemberBooleanArrayDef",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SingleMemberBooleanArrayDef_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberBooleanArrayDef_Annotations_
};

$Object* allocate$SingleMemberBooleanArrayDef($Class* clazz) {
	return $of($alloc(SingleMemberBooleanArrayDef));
}

$Class* SingleMemberBooleanArrayDef::load$($String* name, bool initialize) {
	$loadClass(SingleMemberBooleanArrayDef, name, initialize, &_SingleMemberBooleanArrayDef_ClassInfo_, allocate$SingleMemberBooleanArrayDef);
	return class$;
}

$Class* SingleMemberBooleanArrayDef::class$ = nullptr;

} // UniTest