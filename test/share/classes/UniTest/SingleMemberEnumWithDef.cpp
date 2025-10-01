#include <UniTest/SingleMemberEnumWithDef.h>

#include <UniTest/Stooge.h>
#include <java/lang/Attribute.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Stooge = ::UniTest::Stooge;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

namespace UniTest {

$NamedAttribute SingleMemberEnumWithDef_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};
$CompoundAttribute _SingleMemberEnumWithDef_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberEnumWithDef_Attribute_var$0},
	{}
};
$Attribute _SingleMemberEnumWithDef_DefaultValue_value0 = {
'e', "LUniTest/Stooge; LARRY"};


$MethodInfo _SingleMemberEnumWithDef_MethodInfo_[] = {
	{"value", "()LUniTest/Stooge;", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_SingleMemberEnumWithDef_DefaultValue_value0},
	{}
};

$ClassInfo _SingleMemberEnumWithDef_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.SingleMemberEnumWithDef",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SingleMemberEnumWithDef_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberEnumWithDef_Annotations_
};

$Object* allocate$SingleMemberEnumWithDef($Class* clazz) {
	return $of($alloc(SingleMemberEnumWithDef));
}

$Class* SingleMemberEnumWithDef::load$($String* name, bool initialize) {
	$loadClass(SingleMemberEnumWithDef, name, initialize, &_SingleMemberEnumWithDef_ClassInfo_, allocate$SingleMemberEnumWithDef);
	return class$;
}

$Class* SingleMemberEnumWithDef::class$ = nullptr;

} // UniTest