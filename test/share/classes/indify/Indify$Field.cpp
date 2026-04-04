#include <indify/Indify$Field.h>
#include <indify/Indify$Member.h>
#include <indify/Indify.h>
#include <jcpp.h>

using $Indify$Member = ::indify::Indify$Member;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace indify {

void Indify$Field::init$() {
	$Indify$Member::init$();
}

Indify$Field::Indify$Field() {
}

$Class* Indify$Field::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Indify$Field, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"indify.Indify$Field", "indify.Indify", "Field", $PUBLIC | $STATIC},
		{"indify.Indify$Member", "indify.Indify", "Member", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"indify.Indify$Field",
		"indify.Indify$Member",
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
	$loadClass(Indify$Field, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Indify$Field));
	});
	return class$;
}

$Class* Indify$Field::class$ = nullptr;

} // indify