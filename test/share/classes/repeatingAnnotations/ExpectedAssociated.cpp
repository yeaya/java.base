#include <repeatingAnnotations/ExpectedAssociated.h>
#include <repeatingAnnotations/Ann.h>
#include <jcpp.h>

using $AnnArray = $Array<::repeatingAnnotations::Ann>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace repeatingAnnotations {

$Class* ExpectedAssociated::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"value", "()[LrepeatingAnnotations/Ann;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExpectedAssociated, value, $AnnArray*)},
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
		"repeatingAnnotations.ExpectedAssociated",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(ExpectedAssociated, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExpectedAssociated);
	});
	return class$;
}

$Class* ExpectedAssociated::class$ = nullptr;

} // repeatingAnnotations