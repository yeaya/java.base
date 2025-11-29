#include <UniTest/SingleMemberClassWithDef.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$NamedAttribute SingleMemberClassWithDef_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _SingleMemberClassWithDef_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberClassWithDef_Attribute_var$0},
	{}
};

$Attribute _SingleMemberClassWithDef_DefaultValue_value0 = {
	'c', "Ljava/lang/Class;"
};

$MethodInfo _SingleMemberClassWithDef_MethodInfo_[] = {
	{"value", "()Ljava/lang/Class;", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_SingleMemberClassWithDef_DefaultValue_value0},
	{}
};

$ClassInfo _SingleMemberClassWithDef_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.SingleMemberClassWithDef",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SingleMemberClassWithDef_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberClassWithDef_Annotations_
};

$Object* allocate$SingleMemberClassWithDef($Class* clazz) {
	return $of($alloc(SingleMemberClassWithDef));
}

$Class* SingleMemberClassWithDef::load$($String* name, bool initialize) {
	$loadClass(SingleMemberClassWithDef, name, initialize, &_SingleMemberClassWithDef_ClassInfo_, allocate$SingleMemberClassWithDef);
	return class$;
}

$Class* SingleMemberClassWithDef::class$ = nullptr;

} // UniTest