#include <java/util/concurrent/atomic/AtomicStampedReference$Pair.h>
#include <java/util/concurrent/atomic/AtomicStampedReference.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

void AtomicStampedReference$Pair::init$(Object$* reference, int32_t stamp) {
	$set(this, reference, reference);
	this->stamp = stamp;
}

AtomicStampedReference$Pair* AtomicStampedReference$Pair::of(Object$* reference, int32_t stamp) {
	return $new(AtomicStampedReference$Pair, reference, stamp);
}

AtomicStampedReference$Pair::AtomicStampedReference$Pair() {
}

$Class* AtomicStampedReference$Pair::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"reference", "Ljava/lang/Object;", "TT;", $FINAL, $field(AtomicStampedReference$Pair, reference)},
		{"stamp", "I", nullptr, $FINAL, $field(AtomicStampedReference$Pair, stamp)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;I)V", "(TT;I)V", $PRIVATE, $method(AtomicStampedReference$Pair, init$, void, Object$*, int32_t)},
		{"of", "(Ljava/lang/Object;I)Ljava/util/concurrent/atomic/AtomicStampedReference$Pair;", "<T:Ljava/lang/Object;>(TT;I)Ljava/util/concurrent/atomic/AtomicStampedReference$Pair<TT;>;", $STATIC, $staticMethod(AtomicStampedReference$Pair, of, AtomicStampedReference$Pair*, Object$*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.atomic.AtomicStampedReference$Pair", "java.util.concurrent.atomic.AtomicStampedReference", "Pair", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.concurrent.atomic.AtomicStampedReference$Pair",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.atomic.AtomicStampedReference"
	};
	$loadClass(AtomicStampedReference$Pair, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AtomicStampedReference$Pair);
	});
	return class$;
}

$Class* AtomicStampedReference$Pair::class$ = nullptr;

			} // atomic
		} // concurrent
	} // util
} // java