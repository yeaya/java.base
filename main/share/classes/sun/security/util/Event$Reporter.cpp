#include <sun/security/util/Event$Reporter.h>
#include <sun/security/util/Event.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace util {

$Class* Event$Reporter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"handle", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT | $ABSTRACT, $virtualMethod(Event$Reporter, handle, void, $String*, $ObjectArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.util.Event$Reporter", "sun.security.util.Event", "Reporter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.security.util.Event$Reporter",
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
		"sun.security.util.Event"
	};
	$loadClass(Event$Reporter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Event$Reporter);
	});
	return class$;
}

$Class* Event$Reporter::class$ = nullptr;

		} // util
	} // security
} // sun