#include <UniTest/SingleMemberDoubleArrayDef.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$NamedAttribute SingleMemberDoubleArrayDef_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _SingleMemberDoubleArrayDef_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberDoubleArrayDef_Attribute_var$0},
	{}
};

$Attribute SingleMemberDoubleArrayDef_Attribute_var$1[] = {
	{'D', "17.0"},
	{'-'}
};

$Attribute _SingleMemberDoubleArrayDef_DefaultValue_value0 = {
	'[', SingleMemberDoubleArrayDef_Attribute_var$1
};

$MethodInfo _SingleMemberDoubleArrayDef_MethodInfo_[] = {
	{"value", "()[D", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SingleMemberDoubleArrayDef, value, $doubles*), nullptr, &_SingleMemberDoubleArrayDef_DefaultValue_value0},
	{}
};

$ClassInfo _SingleMemberDoubleArrayDef_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.SingleMemberDoubleArrayDef",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SingleMemberDoubleArrayDef_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberDoubleArrayDef_Annotations_
};

$Object* allocate$SingleMemberDoubleArrayDef($Class* clazz) {
	return $of($alloc(SingleMemberDoubleArrayDef));
}

$Class* SingleMemberDoubleArrayDef::load$($String* name, bool initialize) {
	$loadClass(SingleMemberDoubleArrayDef, name, initialize, &_SingleMemberDoubleArrayDef_ClassInfo_, allocate$SingleMemberDoubleArrayDef);
	return class$;
}

$Class* SingleMemberDoubleArrayDef::class$ = nullptr;

} // UniTest