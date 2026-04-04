#include <java/util/concurrent/Exchanger$Participant.h>
#include <java/lang/ThreadLocal.h>
#include <java/util/concurrent/Exchanger$Node.h>
#include <java/util/concurrent/Exchanger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $Exchanger$Node = ::java::util::concurrent::Exchanger$Node;

namespace java {
	namespace util {
		namespace concurrent {

void Exchanger$Participant::init$() {
	$ThreadLocal::init$();
}

$Object* Exchanger$Participant::initialValue() {
	return $new($Exchanger$Node);
}

Exchanger$Participant::Exchanger$Participant() {
}

$Class* Exchanger$Participant::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Exchanger$Participant, init$, void)},
		{"initialValue", "()Ljava/util/concurrent/Exchanger$Node;", nullptr, $PUBLIC, $virtualMethod(Exchanger$Participant, initialValue, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.Exchanger$Participant", "java.util.concurrent.Exchanger", "Participant", $STATIC | $FINAL},
		{"java.util.concurrent.Exchanger$Node", "java.util.concurrent.Exchanger", "Node", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.Exchanger$Participant",
		"java.lang.ThreadLocal",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljava/lang/ThreadLocal<Ljava/util/concurrent/Exchanger$Node;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.Exchanger"
	};
	$loadClass(Exchanger$Participant, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Exchanger$Participant);
	});
	return class$;
}

$Class* Exchanger$Participant::class$ = nullptr;

		} // concurrent
	} // util
} // java