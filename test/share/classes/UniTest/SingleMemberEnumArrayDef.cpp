#include <UniTest/SingleMemberEnumArrayDef.h>

#include <UniTest/Stooge.h>
#include <jcpp.h>

using $StoogeArray = $Array<::UniTest::Stooge>;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

namespace UniTest {

$NamedAttribute SingleMemberEnumArrayDef_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _SingleMemberEnumArrayDef_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberEnumArrayDef_Attribute_var$0},
	{}
};

$Attribute SingleMemberEnumArrayDef_Attribute_var$1[] = {
	{'e', "LUniTest/Stooge; LARRY"},
	{'-'}
};

$Attribute _SingleMemberEnumArrayDef_DefaultValue_value0 = {
	'[', SingleMemberEnumArrayDef_Attribute_var$1
};

$MethodInfo _SingleMemberEnumArrayDef_MethodInfo_[] = {
	{"value", "()[LUniTest/Stooge;", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_SingleMemberEnumArrayDef_DefaultValue_value0},
	{}
};

$ClassInfo _SingleMemberEnumArrayDef_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.SingleMemberEnumArrayDef",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SingleMemberEnumArrayDef_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberEnumArrayDef_Annotations_
};

$Object* allocate$SingleMemberEnumArrayDef($Class* clazz) {
	return $of($alloc(SingleMemberEnumArrayDef));
}

$Class* SingleMemberEnumArrayDef::load$($String* name, bool initialize) {
	$loadClass(SingleMemberEnumArrayDef, name, initialize, &_SingleMemberEnumArrayDef_ClassInfo_, allocate$SingleMemberEnumArrayDef);
	return class$;
}

$Class* SingleMemberEnumArrayDef::class$ = nullptr;

} // UniTest