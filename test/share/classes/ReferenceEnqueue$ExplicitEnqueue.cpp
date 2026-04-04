#include <ReferenceEnqueue$ExplicitEnqueue.h>
#include <ReferenceEnqueue.h>
#include <java/lang/ref/PhantomReference.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/SoftReference.h>
#include <java/lang/ref/WeakReference.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $PhantomReference = ::java::lang::ref::PhantomReference;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $SoftReference = ::java::lang::ref::SoftReference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;

void ReferenceEnqueue$ExplicitEnqueue::init$() {
	$useLocalObjectStack();
	$set(this, queue, $new($ReferenceQueue));
	$set(this, refs, $new($ArrayList));
	$nc(this->refs)->add($$new($SoftReference, $$new($Object), this->queue));
	this->refs->add($$new($WeakReference, $$new($Object), this->queue));
	this->refs->add($$new($PhantomReference, $$new($Object), this->queue));
}

void ReferenceEnqueue$ExplicitEnqueue::run() {
	$useLocalObjectStack();
	{
		$var($Iterator, i$, this->refs->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Reference, ref, $cast($Reference, i$->next()));
			{
				if ($nc(ref)->enqueue() == false) {
					$throwNew($RuntimeException, "Error: enqueue failed"_s);
				}
				if (!ref->refersTo(nullptr)) {
					$throwNew($RuntimeException, "Error: referent must be cleared"_s);
				}
			}
		}
	}
	$System::gc();
	for (int32_t i = 0; this->refs->size() > 0 && i < ReferenceEnqueue$ExplicitEnqueue::iterations; ++i) {
		$var($Reference, ref, this->queue->poll());
		if (ref == nullptr) {
			$System::gc();
			$Thread::sleep(100);
			continue;
		}
		if (this->refs->remove(ref) == false) {
			$throwNew($RuntimeException, $$str({"Error: unknown reference "_s, ref}));
		}
	}
	if (!this->refs->isEmpty()) {
		$throwNew($RuntimeException, "Error: not all references are removed"_s);
	}
}

ReferenceEnqueue$ExplicitEnqueue::ReferenceEnqueue$ExplicitEnqueue() {
}

$Class* ReferenceEnqueue$ExplicitEnqueue::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"queue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;", $FINAL, $field(ReferenceEnqueue$ExplicitEnqueue, queue)},
		{"refs", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/ref/Reference<Ljava/lang/Object;>;>;", $FINAL, $field(ReferenceEnqueue$ExplicitEnqueue, refs)},
		{"iterations", "I", nullptr, $STATIC | $FINAL, $constField(ReferenceEnqueue$ExplicitEnqueue, iterations)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ReferenceEnqueue$ExplicitEnqueue, init$, void)},
		{"run", "()V", nullptr, 0, $virtualMethod(ReferenceEnqueue$ExplicitEnqueue, run, void), "java.lang.InterruptedException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ReferenceEnqueue$ExplicitEnqueue", "ReferenceEnqueue", "ExplicitEnqueue", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ReferenceEnqueue$ExplicitEnqueue",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ReferenceEnqueue"
	};
	$loadClass(ReferenceEnqueue$ExplicitEnqueue, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReferenceEnqueue$ExplicitEnqueue);
	});
	return class$;
}

$Class* ReferenceEnqueue$ExplicitEnqueue::class$ = nullptr;