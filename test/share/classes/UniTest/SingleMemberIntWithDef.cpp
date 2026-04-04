#include <UniTest/SingleMemberIntWithDef.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Class* SingleMemberIntWithDef::load$($String* name, bool initialize) {

	$Attribute valuedefaultValue$$ = {
		'I', "13"
	};
	$MethodInfo methodInfos$$[] = {
		{"value", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SingleMemberIntWithDef, value, int32_t), nullptr, &valuedefaultValue$$},
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
		"UniTest.SingleMemberIntWithDef",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SingleMemberIntWithDef, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SingleMemberIntWithDef);
	});
	return class$;
}

$Class* SingleMemberIntWithDef::class$ = nullptr;

} // UniTest