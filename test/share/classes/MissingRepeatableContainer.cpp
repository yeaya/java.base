#include <MissingRepeatableContainer.h>
#include <MissingRepeatable.h>
#include <jcpp.h>

using $MissingRepeatableArray = $Array<MissingRepeatable>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$Class* MissingRepeatableContainer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"value", "()[LMissingRepeatable;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MissingRepeatableContainer, value, $MissingRepeatableArray*)},
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
		"MissingRepeatableContainer",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(MissingRepeatableContainer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MissingRepeatableContainer);
	});
	return class$;
}

$Class* MissingRepeatableContainer::class$ = nullptr;