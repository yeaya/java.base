#include <UniTest/SingleMemberClassArrayDef.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$NamedAttribute SingleMemberClassArrayDef_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _SingleMemberClassArrayDef_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberClassArrayDef_Attribute_var$0},
	{}
};

$Attribute SingleMemberClassArrayDef_Attribute_var$1[] = {
	{'c', "Ljava/lang/Class;"},
	{'-'}
};

$Attribute _SingleMemberClassArrayDef_DefaultValue_value0 = {
	'[', SingleMemberClassArrayDef_Attribute_var$1
};

$MethodInfo _SingleMemberClassArrayDef_MethodInfo_[] = {
	{"value", "()[Ljava/lang/Class;", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_SingleMemberClassArrayDef_DefaultValue_value0},
	{}
};

$ClassInfo _SingleMemberClassArrayDef_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.SingleMemberClassArrayDef",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SingleMemberClassArrayDef_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberClassArrayDef_Annotations_
};

$Object* allocate$SingleMemberClassArrayDef($Class* clazz) {
	return $of($alloc(SingleMemberClassArrayDef));
}

$Class* SingleMemberClassArrayDef::load$($String* name, bool initialize) {
	$loadClass(SingleMemberClassArrayDef, name, initialize, &_SingleMemberClassArrayDef_ClassInfo_, allocate$SingleMemberClassArrayDef);
	return class$;
}

$Class* SingleMemberClassArrayDef::class$ = nullptr;

} // UniTest