#include <jdk/internal/event/Event.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace event {

void Event::init$() {
}

void Event::begin() {
}

void Event::end() {
}

void Event::commit() {
}

bool Event::isEnabled() {
	return false;
}

bool Event::shouldCommit() {
	return false;
}

void Event::set(int32_t index, Object$* value) {
}

Event::Event() {
}

$Class* Event::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(Event, init$, void)},
		{"begin", "()V", nullptr, $PUBLIC, $virtualMethod(Event, begin, void)},
		{"commit", "()V", nullptr, $PUBLIC, $virtualMethod(Event, commit, void)},
		{"end", "()V", nullptr, $PUBLIC, $virtualMethod(Event, end, void)},
		{"isEnabled", "()Z", nullptr, $PUBLIC, $virtualMethod(Event, isEnabled, bool)},
		{"set", "(ILjava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Event, set, void, int32_t, Object$*)},
		{"shouldCommit", "()Z", nullptr, $PUBLIC, $virtualMethod(Event, shouldCommit, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"jdk.internal.event.Event",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Event, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Event);
	});
	return class$;
}

$Class* Event::class$ = nullptr;

		} // event
	} // internal
} // jdk