#include <UniTest/SingleMemberEnumArrayDef.h>
#include <UniTest/Stooge.h>
#include <jcpp.h>

using $StoogeArray = $Array<::UniTest::Stooge>;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Class* SingleMemberEnumArrayDef::load$($String* name, bool initialize) {
	$Attribute $attribute[] = {
		{'e', "LUniTest/Stooge; LARRY"},
		{'-'}
	};

	$Attribute valuedefaultValue$$ = {
		'[', $attribute
	};
	$MethodInfo methodInfos$$[] = {
		{"value", "()[LUniTest/Stooge;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SingleMemberEnumArrayDef, value, $StoogeArray*), nullptr, &valuedefaultValue$$},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/annotation/Retention;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
		"UniTest.SingleMemberEnumArrayDef",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SingleMemberEnumArrayDef, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SingleMemberEnumArrayDef);
	});
	return class$;
}

$Class* SingleMemberEnumArrayDef::class$ = nullptr;

} // UniTest