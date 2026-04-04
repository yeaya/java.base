#include <AssociatedDirectOnSuperClassIndirectOnSubclassContainer.h>
#include <AssociatedDirectOnSuperClassIndirectOnSubclass.h>
#include <jcpp.h>

using $AssociatedDirectOnSuperClassIndirectOnSubclassArray = $Array<AssociatedDirectOnSuperClassIndirectOnSubclass>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$Class* AssociatedDirectOnSuperClassIndirectOnSubclassContainer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"value", "()[LAssociatedDirectOnSuperClassIndirectOnSubclass;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AssociatedDirectOnSuperClassIndirectOnSubclassContainer, value, $AssociatedDirectOnSuperClassIndirectOnSubclassArray*)},
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
		"AssociatedDirectOnSuperClassIndirectOnSubclassContainer",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(AssociatedDirectOnSuperClassIndirectOnSubclassContainer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AssociatedDirectOnSuperClassIndirectOnSubclassContainer);
	});
	return class$;
}

$Class* AssociatedDirectOnSuperClassIndirectOnSubclassContainer::class$ = nullptr;