#include <AssociatedDirectOnSuperClass.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$Class* AssociatedDirectOnSuperClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"value", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AssociatedDirectOnSuperClass, value, int32_t)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute$1[] = {
		{"value", 'c', "LAssociatedDirectOnSuperClassContainer;"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/annotation/Retention;", annotations$$$namedAttribute},
		{"Ljava/lang/annotation/Repeatable;", annotations$$$namedAttribute$1},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
		"AssociatedDirectOnSuperClass",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(AssociatedDirectOnSuperClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AssociatedDirectOnSuperClass);
	});
	return class$;
}

$Class* AssociatedDirectOnSuperClass::class$ = nullptr;