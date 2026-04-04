#include <java/util/Collections$EmptyIterator.h>
#include <java/lang/IllegalStateException.h>
#include <java/util/Collections.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Objects.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

#undef EMPTY_ITERATOR

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Objects = ::java::util::Objects;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

Collections$EmptyIterator* Collections$EmptyIterator::EMPTY_ITERATOR = nullptr;

void Collections$EmptyIterator::init$() {
}

bool Collections$EmptyIterator::hasNext() {
	return false;
}

$Object* Collections$EmptyIterator::next() {
	$throwNew($NoSuchElementException);
	$shouldNotReachHere();
}

void Collections$EmptyIterator::remove() {
	$throwNew($IllegalStateException);
}

void Collections$EmptyIterator::forEachRemaining($Consumer* action) {
	$Objects::requireNonNull(action);
}

void Collections$EmptyIterator::clinit$($Class* clazz) {
	$assignStatic(Collections$EmptyIterator::EMPTY_ITERATOR, $new(Collections$EmptyIterator));
}

Collections$EmptyIterator::Collections$EmptyIterator() {
}

$Class* Collections$EmptyIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"EMPTY_ITERATOR", "Ljava/util/Collections$EmptyIterator;", "Ljava/util/Collections$EmptyIterator<Ljava/lang/Object;>;", $STATIC | $FINAL, $staticField(Collections$EmptyIterator, EMPTY_ITERATOR)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Collections$EmptyIterator, init$, void)},
		{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC, $virtualMethod(Collections$EmptyIterator, forEachRemaining, void, $Consumer*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(Collections$EmptyIterator, hasNext, bool)},
		{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(Collections$EmptyIterator, next, $Object*)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(Collections$EmptyIterator, remove, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Collections$EmptyIterator", "java.util.Collections", "EmptyIterator", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.Collections$EmptyIterator",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"<E:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Iterator<TE;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.Collections"
	};
	$loadClass(Collections$EmptyIterator, name, initialize, &classInfo$$, Collections$EmptyIterator::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Collections$EmptyIterator);
	});
	return class$;
}

$Class* Collections$EmptyIterator::class$ = nullptr;

	} // util
} // java