#include <UniTest/SingleMemberShortArrayDef.h>

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

$NamedAttribute SingleMemberShortArrayDef_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};
$CompoundAttribute _SingleMemberShortArrayDef_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberShortArrayDef_Attribute_var$0},
	{}
};

$Attribute SingleMemberShortArrayDef_Attribute_var$1[] = {
	{'S', "12"},
	{'-'}
};
$Attribute _SingleMemberShortArrayDef_DefaultValue_value0 = {
'[', SingleMemberShortArrayDef_Attribute_var$1};


$MethodInfo _SingleMemberShortArrayDef_MethodInfo_[] = {
	{"value", "()[S", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_SingleMemberShortArrayDef_DefaultValue_value0},
	{}
};

$ClassInfo _SingleMemberShortArrayDef_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.SingleMemberShortArrayDef",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SingleMemberShortArrayDef_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberShortArrayDef_Annotations_
};

$Object* allocate$SingleMemberShortArrayDef($Class* clazz) {
	return $of($alloc(SingleMemberShortArrayDef));
}

$Class* SingleMemberShortArrayDef::load$($String* name, bool initialize) {
	$loadClass(SingleMemberShortArrayDef, name, initialize, &_SingleMemberShortArrayDef_ClassInfo_, allocate$SingleMemberShortArrayDef);
	return class$;
}

$Class* SingleMemberShortArrayDef::class$ = nullptr;

} // UniTest