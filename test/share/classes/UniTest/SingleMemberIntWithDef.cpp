#include <UniTest/SingleMemberIntWithDef.h>

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

$NamedAttribute SingleMemberIntWithDef_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};
$CompoundAttribute _SingleMemberIntWithDef_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberIntWithDef_Attribute_var$0},
	{}
};
$Attribute _SingleMemberIntWithDef_DefaultValue_value0 = {
'I', "13"};


$MethodInfo _SingleMemberIntWithDef_MethodInfo_[] = {
	{"value", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_SingleMemberIntWithDef_DefaultValue_value0},
	{}
};

$ClassInfo _SingleMemberIntWithDef_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.SingleMemberIntWithDef",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SingleMemberIntWithDef_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberIntWithDef_Annotations_
};

$Object* allocate$SingleMemberIntWithDef($Class* clazz) {
	return $of($alloc(SingleMemberIntWithDef));
}

$Class* SingleMemberIntWithDef::load$($String* name, bool initialize) {
	$loadClass(SingleMemberIntWithDef, name, initialize, &_SingleMemberIntWithDef_ClassInfo_, allocate$SingleMemberIntWithDef);
	return class$;
}

$Class* SingleMemberIntWithDef::class$ = nullptr;

} // UniTest