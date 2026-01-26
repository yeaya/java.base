#include <UniTest/SingleMemberLongArrayDef.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$NamedAttribute SingleMemberLongArrayDef_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _SingleMemberLongArrayDef_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberLongArrayDef_Attribute_var$0},
	{}
};

$Attribute SingleMemberLongArrayDef_Attribute_var$1[] = {
	{'J', "14"},
	{'-'}
};

$Attribute _SingleMemberLongArrayDef_DefaultValue_value0 = {
	'[', SingleMemberLongArrayDef_Attribute_var$1
};

$MethodInfo _SingleMemberLongArrayDef_MethodInfo_[] = {
	{"value", "()[J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SingleMemberLongArrayDef, value, $longs*), nullptr, &_SingleMemberLongArrayDef_DefaultValue_value0},
	{}
};

$ClassInfo _SingleMemberLongArrayDef_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.SingleMemberLongArrayDef",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SingleMemberLongArrayDef_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberLongArrayDef_Annotations_
};

$Object* allocate$SingleMemberLongArrayDef($Class* clazz) {
	return $of($alloc(SingleMemberLongArrayDef));
}

$Class* SingleMemberLongArrayDef::load$($String* name, bool initialize) {
	$loadClass(SingleMemberLongArrayDef, name, initialize, &_SingleMemberLongArrayDef_ClassInfo_, allocate$SingleMemberLongArrayDef);
	return class$;
}

$Class* SingleMemberLongArrayDef::class$ = nullptr;

} // UniTest