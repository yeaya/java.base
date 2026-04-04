#include <UniTest/SingleMemberEnumArray.h>
#include <UniTest/Stooge.h>
#include <jcpp.h>

using $StoogeArray = $Array<::UniTest::Stooge>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Class* SingleMemberEnumArray::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"value", "()[LUniTest/Stooge;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SingleMemberEnumArray, value, $StoogeArray*)},
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
		"UniTest.SingleMemberEnumArray",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SingleMemberEnumArray, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SingleMemberEnumArray);
	});
	return class$;
}

$Class* SingleMemberEnumArray::class$ = nullptr;

} // UniTest