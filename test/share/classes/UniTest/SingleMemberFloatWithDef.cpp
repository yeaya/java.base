#include <UniTest/SingleMemberFloatWithDef.h>

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

$NamedAttribute SingleMemberFloatWithDef_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};
$CompoundAttribute _SingleMemberFloatWithDef_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberFloatWithDef_Attribute_var$0},
	{}
};
$Attribute _SingleMemberFloatWithDef_DefaultValue_value0 = {
'F', "16.0"};


$MethodInfo _SingleMemberFloatWithDef_MethodInfo_[] = {
	{"value", "()F", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_SingleMemberFloatWithDef_DefaultValue_value0},
	{}
};

$ClassInfo _SingleMemberFloatWithDef_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.SingleMemberFloatWithDef",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SingleMemberFloatWithDef_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberFloatWithDef_Annotations_
};

$Object* allocate$SingleMemberFloatWithDef($Class* clazz) {
	return $of($alloc(SingleMemberFloatWithDef));
}

$Class* SingleMemberFloatWithDef::load$($String* name, bool initialize) {
	$loadClass(SingleMemberFloatWithDef, name, initialize, &_SingleMemberFloatWithDef_ClassInfo_, allocate$SingleMemberFloatWithDef);
	return class$;
}

$Class* SingleMemberFloatWithDef::class$ = nullptr;

} // UniTest