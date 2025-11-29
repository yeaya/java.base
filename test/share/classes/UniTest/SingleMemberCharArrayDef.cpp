#include <UniTest/SingleMemberCharArrayDef.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$NamedAttribute SingleMemberCharArrayDef_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _SingleMemberCharArrayDef_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberCharArrayDef_Attribute_var$0},
	{}
};

$Attribute SingleMemberCharArrayDef_Attribute_var$1[] = {
	{'C', "V"},
	{'-'}
};

$Attribute _SingleMemberCharArrayDef_DefaultValue_value0 = {
	'[', SingleMemberCharArrayDef_Attribute_var$1
};

$MethodInfo _SingleMemberCharArrayDef_MethodInfo_[] = {
	{"value", "()[C", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_SingleMemberCharArrayDef_DefaultValue_value0},
	{}
};

$ClassInfo _SingleMemberCharArrayDef_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.SingleMemberCharArrayDef",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SingleMemberCharArrayDef_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberCharArrayDef_Annotations_
};

$Object* allocate$SingleMemberCharArrayDef($Class* clazz) {
	return $of($alloc(SingleMemberCharArrayDef));
}

$Class* SingleMemberCharArrayDef::load$($String* name, bool initialize) {
	$loadClass(SingleMemberCharArrayDef, name, initialize, &_SingleMemberCharArrayDef_ClassInfo_, allocate$SingleMemberCharArrayDef);
	return class$;
}

$Class* SingleMemberCharArrayDef::class$ = nullptr;

} // UniTest