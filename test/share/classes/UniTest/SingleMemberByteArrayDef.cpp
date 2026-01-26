#include <UniTest/SingleMemberByteArrayDef.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$NamedAttribute SingleMemberByteArrayDef_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _SingleMemberByteArrayDef_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberByteArrayDef_Attribute_var$0},
	{}
};

$Attribute SingleMemberByteArrayDef_Attribute_var$1[] = {
	{'B', "11"},
	{'-'}
};

$Attribute _SingleMemberByteArrayDef_DefaultValue_value0 = {
	'[', SingleMemberByteArrayDef_Attribute_var$1
};

$MethodInfo _SingleMemberByteArrayDef_MethodInfo_[] = {
	{"value", "()[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SingleMemberByteArrayDef, value, $bytes*), nullptr, &_SingleMemberByteArrayDef_DefaultValue_value0},
	{}
};

$ClassInfo _SingleMemberByteArrayDef_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.SingleMemberByteArrayDef",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SingleMemberByteArrayDef_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberByteArrayDef_Annotations_
};

$Object* allocate$SingleMemberByteArrayDef($Class* clazz) {
	return $of($alloc(SingleMemberByteArrayDef));
}

$Class* SingleMemberByteArrayDef::load$($String* name, bool initialize) {
	$loadClass(SingleMemberByteArrayDef, name, initialize, &_SingleMemberByteArrayDef_ClassInfo_, allocate$SingleMemberByteArrayDef);
	return class$;
}

$Class* SingleMemberByteArrayDef::class$ = nullptr;

} // UniTest