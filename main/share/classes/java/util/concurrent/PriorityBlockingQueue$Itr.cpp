#include <java/util/concurrent/PriorityBlockingQueue$Itr.h>
#include <java/lang/IllegalStateException.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Objects.h>
#include <java/util/concurrent/PriorityBlockingQueue.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Objects = ::java::util::Objects;
using $PriorityBlockingQueue = ::java::util::concurrent::PriorityBlockingQueue;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {
		namespace concurrent {

void PriorityBlockingQueue$Itr::init$($PriorityBlockingQueue* this$0, $ObjectArray* array) {
	$set(this, this$0, this$0);
	this->lastRet = -1;
	$set(this, array, array);
}

bool PriorityBlockingQueue$Itr::hasNext() {
	return this->cursor < $nc(this->array)->length;
}

$Object* PriorityBlockingQueue$Itr::next() {
	if (this->cursor >= $nc(this->array)->length) {
		$throwNew($NoSuchElementException);
	}
	return this->array->get(this->lastRet = this->cursor++);
}

void PriorityBlockingQueue$Itr::remove() {
	if (this->lastRet < 0) {
		$throwNew($IllegalStateException);
	}
	this->this$0->removeEq($nc(this->array)->get(this->lastRet));
	this->lastRet = -1;
}

void PriorityBlockingQueue$Itr::forEachRemaining($Consumer* action) {
	$Objects::requireNonNull(action);
	$var($ObjectArray, es, this->array);
	int32_t i = 0;
	if ((i = this->cursor) < $nc(es)->length) {
		this->lastRet = -1;
		this->cursor = es->length;
		for (; i < es->length; ++i) {
			action->accept(es->get(i));
		}
		this->lastRet = es->length - 1;
	}
}

PriorityBlockingQueue$Itr::PriorityBlockingQueue$Itr() {
}

$Class* PriorityBlockingQueue$Itr::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/concurrent/PriorityBlockingQueue;", nullptr, $FINAL | $SYNTHETIC, $field(PriorityBlockingQueue$Itr, this$0)},
		{"array", "[Ljava/lang/Object;", nullptr, $FINAL, $field(PriorityBlockingQueue$Itr, array)},
		{"cursor", "I", nullptr, 0, $field(PriorityBlockingQueue$Itr, cursor)},
		{"lastRet", "I", nullptr, 0, $field(PriorityBlockingQueue$Itr, lastRet)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/PriorityBlockingQueue;[Ljava/lang/Object;)V", nullptr, 0, $method(PriorityBlockingQueue$Itr, init$, void, $PriorityBlockingQueue*, $ObjectArray*)},
		{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC, $virtualMethod(PriorityBlockingQueue$Itr, forEachRemaining, void, $Consumer*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(PriorityBlockingQueue$Itr, hasNext, bool)},
		{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(PriorityBlockingQueue$Itr, next, $Object*)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(PriorityBlockingQueue$Itr, remove, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.PriorityBlockingQueue$Itr", "java.util.concurrent.PriorityBlockingQueue", "Itr", $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.PriorityBlockingQueue$Itr",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<TE;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.PriorityBlockingQueue"
	};
	$loadClass(PriorityBlockingQueue$Itr, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PriorityBlockingQueue$Itr);
	});
	return class$;
}

$Class* PriorityBlockingQueue$Itr::class$ = nullptr;

		} // concurrent
	} // util
} // java