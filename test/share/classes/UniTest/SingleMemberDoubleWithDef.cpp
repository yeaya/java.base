#include <UniTest/SingleMemberDoubleWithDef.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

namespace UniTest {

$NamedAttribute SingleMemberDoubleWithDef_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _SingleMemberDoubleWithDef_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberDoubleWithDef_Attribute_var$0},
	{}
};

$Attribute _SingleMemberDoubleWithDef_DefaultValue_value0 = {
	'D', "17.0"
};

$MethodInfo _SingleMemberDoubleWithDef_MethodInfo_[] = {
	{"value", "()D", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_SingleMemberDoubleWithDef_DefaultValue_value0},
	{}
};

$ClassInfo _SingleMemberDoubleWithDef_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.SingleMemberDoubleWithDef",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SingleMemberDoubleWithDef_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberDoubleWithDef_Annotations_
};

$Object* allocate$SingleMemberDoubleWithDef($Class* clazz) {
	return $of($alloc(SingleMemberDoubleWithDef));
}

$Class* SingleMemberDoubleWithDef::load$($String* name, bool initialize) {
	$loadClass(SingleMemberDoubleWithDef, name, initialize, &_SingleMemberDoubleWithDef_ClassInfo_, allocate$SingleMemberDoubleWithDef);
	return class$;
}

$Class* SingleMemberDoubleWithDef::class$ = nullptr;

} // UniTest