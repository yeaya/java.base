#include <UniTest/SingleMemberLongWithDef.h>

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

$NamedAttribute SingleMemberLongWithDef_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};
$CompoundAttribute _SingleMemberLongWithDef_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberLongWithDef_Attribute_var$0},
	{}
};
$Attribute _SingleMemberLongWithDef_DefaultValue_value0 = {
'J', "14"};


$MethodInfo _SingleMemberLongWithDef_MethodInfo_[] = {
	{"value", "()J", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_SingleMemberLongWithDef_DefaultValue_value0},
	{}
};

$ClassInfo _SingleMemberLongWithDef_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.SingleMemberLongWithDef",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SingleMemberLongWithDef_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberLongWithDef_Annotations_
};

$Object* allocate$SingleMemberLongWithDef($Class* clazz) {
	return $of($alloc(SingleMemberLongWithDef));
}

$Class* SingleMemberLongWithDef::load$($String* name, bool initialize) {
	$loadClass(SingleMemberLongWithDef, name, initialize, &_SingleMemberLongWithDef_ClassInfo_, allocate$SingleMemberLongWithDef);
	return class$;
}

$Class* SingleMemberLongWithDef::class$ = nullptr;

} // UniTest