#include <UniTest/SingleMemberCharWithDef.h>

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

$NamedAttribute SingleMemberCharWithDef_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};
$CompoundAttribute _SingleMemberCharWithDef_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberCharWithDef_Attribute_var$0},
	{}
};
$Attribute _SingleMemberCharWithDef_DefaultValue_value0 = {
'C', "V"};


$MethodInfo _SingleMemberCharWithDef_MethodInfo_[] = {
	{"value", "()C", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_SingleMemberCharWithDef_DefaultValue_value0},
	{}
};

$ClassInfo _SingleMemberCharWithDef_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.SingleMemberCharWithDef",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SingleMemberCharWithDef_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberCharWithDef_Annotations_
};

$Object* allocate$SingleMemberCharWithDef($Class* clazz) {
	return $of($alloc(SingleMemberCharWithDef));
}

$Class* SingleMemberCharWithDef::load$($String* name, bool initialize) {
	$loadClass(SingleMemberCharWithDef, name, initialize, &_SingleMemberCharWithDef_ClassInfo_, allocate$SingleMemberCharWithDef);
	return class$;
}

$Class* SingleMemberCharWithDef::class$ = nullptr;

} // UniTest