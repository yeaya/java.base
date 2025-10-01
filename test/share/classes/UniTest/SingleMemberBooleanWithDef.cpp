#include <UniTest/SingleMemberBooleanWithDef.h>

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

$NamedAttribute SingleMemberBooleanWithDef_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};
$CompoundAttribute _SingleMemberBooleanWithDef_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberBooleanWithDef_Attribute_var$0},
	{}
};
$Attribute _SingleMemberBooleanWithDef_DefaultValue_value0 = {
'Z', "false"};


$MethodInfo _SingleMemberBooleanWithDef_MethodInfo_[] = {
	{"value", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_SingleMemberBooleanWithDef_DefaultValue_value0},
	{}
};

$ClassInfo _SingleMemberBooleanWithDef_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.SingleMemberBooleanWithDef",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SingleMemberBooleanWithDef_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberBooleanWithDef_Annotations_
};

$Object* allocate$SingleMemberBooleanWithDef($Class* clazz) {
	return $of($alloc(SingleMemberBooleanWithDef));
}

$Class* SingleMemberBooleanWithDef::load$($String* name, bool initialize) {
	$loadClass(SingleMemberBooleanWithDef, name, initialize, &_SingleMemberBooleanWithDef_ClassInfo_, allocate$SingleMemberBooleanWithDef);
	return class$;
}

$Class* SingleMemberBooleanWithDef::class$ = nullptr;

} // UniTest