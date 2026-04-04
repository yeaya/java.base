#include <AssociatedDirectOnSuperClassIndirectOnSubclass.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$Class* AssociatedDirectOnSuperClassIndirectOnSubclass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"value", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AssociatedDirectOnSuperClassIndirectOnSubclass, value, int32_t)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute$1[] = {
		{"value", 'c', "LAssociatedDirectOnSuperClassIndirectOnSubclassContainer;"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/annotation/Retention;", annotations$$$namedAttribute},
		{"Ljava/lang/annotation/Repeatable;", annotations$$$namedAttribute$1},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
		"AssociatedDirectOnSuperClassIndirectOnSubclass",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(AssociatedDirectOnSuperClassIndirectOnSubclass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AssociatedDirectOnSuperClassIndirectOnSubclass);
	});
	return class$;
}

$Class* AssociatedDirectOnSuperClassIndirectOnSubclass::class$ = nullptr;