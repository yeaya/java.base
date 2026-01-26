#include <UniTest/SingleMemberStringArrayDef.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$NamedAttribute SingleMemberStringArrayDef_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _SingleMemberStringArrayDef_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberStringArrayDef_Attribute_var$0},
	{}
};

$Attribute SingleMemberStringArrayDef_Attribute_var$1[] = {
	{'s', "default"},
	{'-'}
};

$Attribute _SingleMemberStringArrayDef_DefaultValue_value0 = {
	'[', SingleMemberStringArrayDef_Attribute_var$1
};

$MethodInfo _SingleMemberStringArrayDef_MethodInfo_[] = {
	{"value", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SingleMemberStringArrayDef, value, $StringArray*), nullptr, &_SingleMemberStringArrayDef_DefaultValue_value0},
	{}
};

$ClassInfo _SingleMemberStringArrayDef_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.SingleMemberStringArrayDef",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SingleMemberStringArrayDef_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberStringArrayDef_Annotations_
};

$Object* allocate$SingleMemberStringArrayDef($Class* clazz) {
	return $of($alloc(SingleMemberStringArrayDef));
}

$Class* SingleMemberStringArrayDef::load$($String* name, bool initialize) {
	$loadClass(SingleMemberStringArrayDef, name, initialize, &_SingleMemberStringArrayDef_ClassInfo_, allocate$SingleMemberStringArrayDef);
	return class$;
}

$Class* SingleMemberStringArrayDef::class$ = nullptr;

} // UniTest