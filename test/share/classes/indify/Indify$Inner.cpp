#include <indify/Indify$Inner.h>
#include <indify/Indify$Outer.h>
#include <indify/Indify.h>
#include <jcpp.h>

using $Indify$Outer = ::indify::Indify$Outer;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace indify {

$Class* Indify$Inner::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"linkOuter", "(Lindify/Indify$Outer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Indify$Inner, linkOuter, void, $Indify$Outer*)},
		{"outer", "()Lindify/Indify$Outer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Indify$Inner, outer, $Indify$Outer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"indify.Indify$Inner", "indify.Indify", "Inner", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"indify.Indify$Inner",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"indify.Indify"
	};
	$loadClass(Indify$Inner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Indify$Inner);
	});
	return class$;
}

$Class* Indify$Inner::class$ = nullptr;

} // indify