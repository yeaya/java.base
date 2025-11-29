#include <UniTest/SingleMemberStringWithDef.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$NamedAttribute SingleMemberStringWithDef_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _SingleMemberStringWithDef_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberStringWithDef_Attribute_var$0},
	{}
};

$Attribute _SingleMemberStringWithDef_DefaultValue_value0 = {
	's', "default"
};

$MethodInfo _SingleMemberStringWithDef_MethodInfo_[] = {
	{"value", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_SingleMemberStringWithDef_DefaultValue_value0},
	{}
};

$ClassInfo _SingleMemberStringWithDef_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.SingleMemberStringWithDef",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SingleMemberStringWithDef_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberStringWithDef_Annotations_
};

$Object* allocate$SingleMemberStringWithDef($Class* clazz) {
	return $of($alloc(SingleMemberStringWithDef));
}

$Class* SingleMemberStringWithDef::load$($String* name, bool initialize) {
	$loadClass(SingleMemberStringWithDef, name, initialize, &_SingleMemberStringWithDef_ClassInfo_, allocate$SingleMemberStringWithDef);
	return class$;
}

$Class* SingleMemberStringWithDef::class$ = nullptr;

} // UniTest