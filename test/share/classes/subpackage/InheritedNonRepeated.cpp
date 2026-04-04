#include <subpackage/InheritedNonRepeated.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace subpackage {

$Class* InheritedNonRepeated::load$($String* name, bool initialize) {

	$Attribute valuedefaultValue$$ = {
		'I', "20"
	};
	$MethodInfo methodInfos$$[] = {
		{"value", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InheritedNonRepeated, value, int32_t), nullptr, &valuedefaultValue$$},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/annotation/Inherited;", nullptr},
		{"Ljava/lang/annotation/Retention;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
		"subpackage.InheritedNonRepeated",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(InheritedNonRepeated, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InheritedNonRepeated);
	});
	return class$;
}

$Class* InheritedNonRepeated::class$ = nullptr;

} // subpackage