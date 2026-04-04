#include <UniTest/SingleMemberEnumWithDef.h>
#include <UniTest/Stooge.h>
#include <jcpp.h>

using $Stooge = ::UniTest::Stooge;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Class* SingleMemberEnumWithDef::load$($String* name, bool initialize) {

	$Attribute valuedefaultValue$$ = {
		'e', "LUniTest/Stooge; LARRY"
	};
	$MethodInfo methodInfos$$[] = {
		{"value", "()LUniTest/Stooge;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SingleMemberEnumWithDef, value, $Stooge*), nullptr, &valuedefaultValue$$},
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
		"UniTest.SingleMemberEnumWithDef",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SingleMemberEnumWithDef, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SingleMemberEnumWithDef);
	});
	return class$;
}

$Class* SingleMemberEnumWithDef::class$ = nullptr;

} // UniTest