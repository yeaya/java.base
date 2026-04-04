#include <AssociatedIndirectOnSuperClassContainer.h>
#include <AssociatedIndirectOnSuperClass.h>
#include <jcpp.h>

using $AssociatedIndirectOnSuperClassArray = $Array<AssociatedIndirectOnSuperClass>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$Class* AssociatedIndirectOnSuperClassContainer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"value", "()[LAssociatedIndirectOnSuperClass;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AssociatedIndirectOnSuperClassContainer, value, $AssociatedIndirectOnSuperClassArray*)},
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
		"AssociatedIndirectOnSuperClassContainer",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(AssociatedIndirectOnSuperClassContainer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AssociatedIndirectOnSuperClassContainer);
	});
	return class$;
}

$Class* AssociatedIndirectOnSuperClassContainer::class$ = nullptr;