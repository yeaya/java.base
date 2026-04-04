#include <UniTest/SingleMemberEnum.h>
#include <UniTest/Stooge.h>
#include <jcpp.h>

using $Stooge = ::UniTest::Stooge;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Class* SingleMemberEnum::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"value", "()LUniTest/Stooge;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SingleMemberEnum, value, $Stooge*)},
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
		"UniTest.SingleMemberEnum",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SingleMemberEnum, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SingleMemberEnum);
	});
	return class$;
}

$Class* SingleMemberEnum::class$ = nullptr;

} // UniTest