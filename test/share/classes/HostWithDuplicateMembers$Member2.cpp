#include <HostWithDuplicateMembers$Member2.h>
#include <HostWithDuplicateMembers.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

$Class* HostWithDuplicateMembers$Member2::load$($String* name, bool initialize) {
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HostWithDuplicateMembers$Member2", "HostWithDuplicateMembers", "Member2", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"HostWithDuplicateMembers$Member2",
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"HostWithDuplicateMembers"
	};
	$loadClass(HostWithDuplicateMembers$Member2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HostWithDuplicateMembers$Member2);
	});
	return class$;
}

$Class* HostWithDuplicateMembers$Member2::class$ = nullptr;