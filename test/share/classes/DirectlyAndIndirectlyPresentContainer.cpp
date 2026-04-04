#include <DirectlyAndIndirectlyPresentContainer.h>
#include <DirectlyAndIndirectlyPresent.h>
#include <jcpp.h>

using $DirectlyAndIndirectlyPresentArray = $Array<DirectlyAndIndirectlyPresent>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$Class* DirectlyAndIndirectlyPresentContainer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"value", "()[LDirectlyAndIndirectlyPresent;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DirectlyAndIndirectlyPresentContainer, value, $DirectlyAndIndirectlyPresentArray*)},
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
		"DirectlyAndIndirectlyPresentContainer",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(DirectlyAndIndirectlyPresentContainer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DirectlyAndIndirectlyPresentContainer);
	});
	return class$;
}

$Class* DirectlyAndIndirectlyPresentContainer::class$ = nullptr;