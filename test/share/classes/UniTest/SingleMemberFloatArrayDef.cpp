#include <UniTest/SingleMemberFloatArrayDef.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

namespace UniTest {

$NamedAttribute SingleMemberFloatArrayDef_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _SingleMemberFloatArrayDef_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberFloatArrayDef_Attribute_var$0},
	{}
};

$Attribute SingleMemberFloatArrayDef_Attribute_var$1[] = {
	{'F', "16.0"},
	{'-'}
};

$Attribute _SingleMemberFloatArrayDef_DefaultValue_value0 = {
	'[', SingleMemberFloatArrayDef_Attribute_var$1
};

$MethodInfo _SingleMemberFloatArrayDef_MethodInfo_[] = {
	{"value", "()[F", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_SingleMemberFloatArrayDef_DefaultValue_value0},
	{}
};

$ClassInfo _SingleMemberFloatArrayDef_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.SingleMemberFloatArrayDef",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SingleMemberFloatArrayDef_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberFloatArrayDef_Annotations_
};

$Object* allocate$SingleMemberFloatArrayDef($Class* clazz) {
	return $of($alloc(SingleMemberFloatArrayDef));
}

$Class* SingleMemberFloatArrayDef::load$($String* name, bool initialize) {
	$loadClass(SingleMemberFloatArrayDef, name, initialize, &_SingleMemberFloatArrayDef_ClassInfo_, allocate$SingleMemberFloatArrayDef);
	return class$;
}

$Class* SingleMemberFloatArrayDef::class$ = nullptr;

} // UniTest