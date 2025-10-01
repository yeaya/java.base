#include <UniTest/SingleMemberIntArrayDef.h>

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

$NamedAttribute SingleMemberIntArrayDef_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};
$CompoundAttribute _SingleMemberIntArrayDef_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberIntArrayDef_Attribute_var$0},
	{}
};

$Attribute SingleMemberIntArrayDef_Attribute_var$1[] = {
	{'I', "13"},
	{'-'}
};
$Attribute _SingleMemberIntArrayDef_DefaultValue_value0 = {
'[', SingleMemberIntArrayDef_Attribute_var$1};


$MethodInfo _SingleMemberIntArrayDef_MethodInfo_[] = {
	{"value", "()[I", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_SingleMemberIntArrayDef_DefaultValue_value0},
	{}
};

$ClassInfo _SingleMemberIntArrayDef_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.SingleMemberIntArrayDef",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SingleMemberIntArrayDef_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberIntArrayDef_Annotations_
};

$Object* allocate$SingleMemberIntArrayDef($Class* clazz) {
	return $of($alloc(SingleMemberIntArrayDef));
}

$Class* SingleMemberIntArrayDef::load$($String* name, bool initialize) {
	$loadClass(SingleMemberIntArrayDef, name, initialize, &_SingleMemberIntArrayDef_ClassInfo_, allocate$SingleMemberIntArrayDef);
	return class$;
}

$Class* SingleMemberIntArrayDef::class$ = nullptr;

} // UniTest