#include <java/util/concurrent/ConcurrentHashMap$CounterCell.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace concurrent {

void ConcurrentHashMap$CounterCell::init$(int64_t x) {
	this->value = x;
}

ConcurrentHashMap$CounterCell::ConcurrentHashMap$CounterCell() {
}

$Class* ConcurrentHashMap$CounterCell::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"value", "J", nullptr, $VOLATILE, $field(ConcurrentHashMap$CounterCell, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(J)V", nullptr, 0, $method(ConcurrentHashMap$CounterCell, init$, void, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.ConcurrentHashMap$CounterCell", "java.util.concurrent.ConcurrentHashMap", "CounterCell", $STATIC | $FINAL},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljdk/internal/vm/annotation/Contended;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.ConcurrentHashMap$CounterCell",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		nullptr,
		"java.util.concurrent.ConcurrentHashMap"
	};
	$loadClass(ConcurrentHashMap$CounterCell, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ConcurrentHashMap$CounterCell);
	});
	return class$;
}

$Class* ConcurrentHashMap$CounterCell::class$ = nullptr;

		} // concurrent
	} // util
} // java