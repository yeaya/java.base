#include <UniTest/SingleMemberLongWithDef.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Class* SingleMemberLongWithDef::load$($String* name, bool initialize) {

	$Attribute valuedefaultValue$$ = {
		'J', "14"
	};
	$MethodInfo methodInfos$$[] = {
		{"value", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SingleMemberLongWithDef, value, int64_t), nullptr, &valuedefaultValue$$},
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
		"UniTest.SingleMemberLongWithDef",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SingleMemberLongWithDef, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SingleMemberLongWithDef);
	});
	return class$;
}

$Class* SingleMemberLongWithDef::class$ = nullptr;

} // UniTest