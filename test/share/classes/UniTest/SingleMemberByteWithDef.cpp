#include <UniTest/SingleMemberByteWithDef.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$NamedAttribute SingleMemberByteWithDef_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _SingleMemberByteWithDef_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberByteWithDef_Attribute_var$0},
	{}
};

$Attribute _SingleMemberByteWithDef_DefaultValue_value0 = {
	'B', "11"
};

$MethodInfo _SingleMemberByteWithDef_MethodInfo_[] = {
	{"value", "()B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SingleMemberByteWithDef, value, int8_t), nullptr, &_SingleMemberByteWithDef_DefaultValue_value0},
	{}
};

$ClassInfo _SingleMemberByteWithDef_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.SingleMemberByteWithDef",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SingleMemberByteWithDef_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberByteWithDef_Annotations_
};

$Object* allocate$SingleMemberByteWithDef($Class* clazz) {
	return $of($alloc(SingleMemberByteWithDef));
}

$Class* SingleMemberByteWithDef::load$($String* name, bool initialize) {
	$loadClass(SingleMemberByteWithDef, name, initialize, &_SingleMemberByteWithDef_ClassInfo_, allocate$SingleMemberByteWithDef);
	return class$;
}

$Class* SingleMemberByteWithDef::class$ = nullptr;

} // UniTest