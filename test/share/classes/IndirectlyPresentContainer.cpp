#include <IndirectlyPresentContainer.h>
#include <IndirectlyPresent.h>
#include <jcpp.h>

using $IndirectlyPresentArray = $Array<IndirectlyPresent>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$Class* IndirectlyPresentContainer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"value", "()[LIndirectlyPresent;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IndirectlyPresentContainer, value, $IndirectlyPresentArray*)},
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
		"IndirectlyPresentContainer",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(IndirectlyPresentContainer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IndirectlyPresentContainer);
	});
	return class$;
}

$Class* IndirectlyPresentContainer::class$ = nullptr;