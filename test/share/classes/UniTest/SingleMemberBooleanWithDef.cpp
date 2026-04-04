#include <UniTest/SingleMemberBooleanWithDef.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Class* SingleMemberBooleanWithDef::load$($String* name, bool initialize) {

	$Attribute valuedefaultValue$$ = {
		'Z', "false"
	};
	$MethodInfo methodInfos$$[] = {
		{"value", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SingleMemberBooleanWithDef, value, bool), nullptr, &valuedefaultValue$$},
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
		"UniTest.SingleMemberBooleanWithDef",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SingleMemberBooleanWithDef, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SingleMemberBooleanWithDef);
	});
	return class$;
}

$Class* SingleMemberBooleanWithDef::class$ = nullptr;

} // UniTest