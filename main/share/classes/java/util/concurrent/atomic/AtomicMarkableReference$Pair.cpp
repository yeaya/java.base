#include <java/util/concurrent/atomic/AtomicMarkableReference$Pair.h>
#include <java/util/concurrent/atomic/AtomicMarkableReference.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

void AtomicMarkableReference$Pair::init$(Object$* reference, bool mark) {
	$set(this, reference, reference);
	this->mark = mark;
}

AtomicMarkableReference$Pair* AtomicMarkableReference$Pair::of(Object$* reference, bool mark) {
	return $new(AtomicMarkableReference$Pair, reference, mark);
}

AtomicMarkableReference$Pair::AtomicMarkableReference$Pair() {
}

$Class* AtomicMarkableReference$Pair::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"reference", "Ljava/lang/Object;", "TT;", $FINAL, $field(AtomicMarkableReference$Pair, reference)},
		{"mark", "Z", nullptr, $FINAL, $field(AtomicMarkableReference$Pair, mark)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;Z)V", "(TT;Z)V", $PRIVATE, $method(AtomicMarkableReference$Pair, init$, void, Object$*, bool)},
		{"of", "(Ljava/lang/Object;Z)Ljava/util/concurrent/atomic/AtomicMarkableReference$Pair;", "<T:Ljava/lang/Object;>(TT;Z)Ljava/util/concurrent/atomic/AtomicMarkableReference$Pair<TT;>;", $STATIC, $staticMethod(AtomicMarkableReference$Pair, of, AtomicMarkableReference$Pair*, Object$*, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.atomic.AtomicMarkableReference$Pair", "java.util.concurrent.atomic.AtomicMarkableReference", "Pair", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.concurrent.atomic.AtomicMarkableReference$Pair",
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
		"java.util.concurrent.atomic.AtomicMarkableReference"
	};
	$loadClass(AtomicMarkableReference$Pair, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AtomicMarkableReference$Pair);
	});
	return class$;
}

$Class* AtomicMarkableReference$Pair::class$ = nullptr;

			} // atomic
		} // concurrent
	} // util
} // java