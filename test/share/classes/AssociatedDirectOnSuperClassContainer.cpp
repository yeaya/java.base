#include <AssociatedDirectOnSuperClassContainer.h>
#include <AssociatedDirectOnSuperClass.h>
#include <jcpp.h>

using $AssociatedDirectOnSuperClassArray = $Array<AssociatedDirectOnSuperClass>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$Class* AssociatedDirectOnSuperClassContainer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"value", "()[LAssociatedDirectOnSuperClass;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AssociatedDirectOnSuperClassContainer, value, $AssociatedDirectOnSuperClassArray*)},
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
		"AssociatedDirectOnSuperClassContainer",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(AssociatedDirectOnSuperClassContainer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AssociatedDirectOnSuperClassContainer);
	});
	return class$;
}

$Class* AssociatedDirectOnSuperClassContainer::class$ = nullptr;