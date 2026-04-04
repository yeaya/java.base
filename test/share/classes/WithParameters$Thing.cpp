#include <WithParameters$Thing.h>
#include <WithParameters.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$Class* WithParameters$Thing::load$($String* name, bool initialize) {
	$InnerClassInfo innerClassesInfo$$[] = {
		{"WithParameters$Thing", "WithParameters", "Thing", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
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
		"WithParameters$Thing",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		nullptr,
		"WithParameters"
	};
	$loadClass(WithParameters$Thing, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WithParameters$Thing);
	});
	return class$;
}

$Class* WithParameters$Thing::class$ = nullptr;