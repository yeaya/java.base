#include <UniTest/SingleMemberShortWithDef.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$NamedAttribute SingleMemberShortWithDef_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _SingleMemberShortWithDef_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberShortWithDef_Attribute_var$0},
	{}
};

$Attribute _SingleMemberShortWithDef_DefaultValue_value0 = {
	'S', "12"
};

$MethodInfo _SingleMemberShortWithDef_MethodInfo_[] = {
	{"value", "()S", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_SingleMemberShortWithDef_DefaultValue_value0},
	{}
};

$ClassInfo _SingleMemberShortWithDef_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.SingleMemberShortWithDef",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SingleMemberShortWithDef_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberShortWithDef_Annotations_
};

$Object* allocate$SingleMemberShortWithDef($Class* clazz) {
	return $of($alloc(SingleMemberShortWithDef));
}

$Class* SingleMemberShortWithDef::load$($String* name, bool initialize) {
	$loadClass(SingleMemberShortWithDef, name, initialize, &_SingleMemberShortWithDef_ClassInfo_, allocate$SingleMemberShortWithDef);
	return class$;
}

$Class* SingleMemberShortWithDef::class$ = nullptr;

} // UniTest