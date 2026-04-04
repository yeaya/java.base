#include <AssociatedIndirectOnSuperClassDirectOnSubclassContainer.h>
#include <AssociatedIndirectOnSuperClassDirectOnSubclass.h>
#include <jcpp.h>

using $AssociatedIndirectOnSuperClassDirectOnSubclassArray = $Array<AssociatedIndirectOnSuperClassDirectOnSubclass>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$Class* AssociatedIndirectOnSuperClassDirectOnSubclassContainer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"value", "()[LAssociatedIndirectOnSuperClassDirectOnSubclass;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AssociatedIndirectOnSuperClassDirectOnSubclassContainer, value, $AssociatedIndirectOnSuperClassDirectOnSubclassArray*)},
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
		"AssociatedIndirectOnSuperClassDirectOnSubclassContainer",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(AssociatedIndirectOnSuperClassDirectOnSubclassContainer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AssociatedIndirectOnSuperClassDirectOnSubclassContainer);
	});
	return class$;
}

$Class* AssociatedIndirectOnSuperClassDirectOnSubclassContainer::class$ = nullptr;