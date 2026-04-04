#include <common/TestMe.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace common {

$Class* TestMe::load$($String* name, bool initialize) {

	$Attribute canonicaldefaultValue$$ = {
		's', ""
	};

	$Attribute hasCanonicaldefaultValue$$ = {
		'Z', "true"
	};
	$MethodInfo methodInfos$$[] = {
		{"canonical", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TestMe, canonical, $String*), nullptr, &canonicaldefaultValue$$},
		{"desc", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TestMe, desc, $String*)},
		{"encl", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TestMe, encl, $String*)},
		{"hasCanonical", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TestMe, hasCanonical, bool), nullptr, &hasCanonicaldefaultValue$$},
		{"simple", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TestMe, simple, $String*)},
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
		"common.TestMe",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(TestMe, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestMe);
	});
	return class$;
}

$Class* TestMe::class$ = nullptr;

} // common