#include <sun/nio/ch/MembershipRegistry$ThrowingConsumer.h>
#include <sun/nio/ch/MembershipRegistry.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace ch {

$Class* MembershipRegistry$ThrowingConsumer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"accept", "(Ljava/lang/Object;)V", "(TT;)V^TX;", $PUBLIC | $ABSTRACT, $virtualMethod(MembershipRegistry$ThrowingConsumer, accept, void, Object$*), "java.lang.Throwable"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.MembershipRegistry$ThrowingConsumer", "sun.nio.ch.MembershipRegistry", "ThrowingConsumer", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.nio.ch.MembershipRegistry$ThrowingConsumer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;X:Ljava/lang/Throwable;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		nullptr,
		"sun.nio.ch.MembershipRegistry"
	};
	$loadClass(MembershipRegistry$ThrowingConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MembershipRegistry$ThrowingConsumer);
	});
	return class$;
}

$Class* MembershipRegistry$ThrowingConsumer::class$ = nullptr;

		} // ch
	} // nio
} // sun