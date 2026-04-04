#include <EnqueuePollRace$WeakRef.h>
#include <EnqueuePollRace.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <jcpp.h>

using $ReferenceArray = $Array<::java::lang::ref::Reference>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $WeakReference = ::java::lang::ref::WeakReference;

void EnqueuePollRace$WeakRef::init$() {
	$set(this, queue, $new($ReferenceQueue));
	$set(this, refs, $new($ReferenceArray, EnqueuePollRace$WeakRef::numReferences));
}

void EnqueuePollRace$WeakRef::run() {
	$useLocalObjectStack();
	for (int32_t i = 0; i < EnqueuePollRace$WeakRef::iterations; ++i) {
		$set(this, queue, $new($ReferenceQueue));
		for (int32_t j = 0; j < this->refs->length; ++j) {
			this->refs->set(j, $$new($WeakReference, $$new($Object), this->queue));
		}
		$System::gc();
		for (int32_t j = 0; j < this->refs->length; ++j) {
			$nc(this->refs->get(j))->enqueue();
		}
		int32_t foundReferences = 0;
		while ($nc(this->queue)->poll() != nullptr) {
			++foundReferences;
		}
		if (foundReferences != this->refs->length) {
			$throwNew($RuntimeException, $$str({"Got "_s, $$str(foundReferences), " references in the queue, but expected "_s, $$str(this->refs->length)}));
		}
	}
}

EnqueuePollRace$WeakRef::EnqueuePollRace$WeakRef() {
}

$Class* EnqueuePollRace$WeakRef::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"queue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;", 0, $field(EnqueuePollRace$WeakRef, queue)},
		{"numReferences", "I", nullptr, $STATIC | $FINAL, $constField(EnqueuePollRace$WeakRef, numReferences)},
		{"refs", "[Ljava/lang/ref/Reference;", nullptr, $FINAL, $field(EnqueuePollRace$WeakRef, refs)},
		{"iterations", "I", nullptr, $STATIC | $FINAL, $constField(EnqueuePollRace$WeakRef, iterations)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(EnqueuePollRace$WeakRef, init$, void)},
		{"run", "()V", nullptr, 0, $virtualMethod(EnqueuePollRace$WeakRef, run, void), "java.lang.InterruptedException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"EnqueuePollRace$WeakRef", "EnqueuePollRace", "WeakRef", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"EnqueuePollRace$WeakRef",
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
		"EnqueuePollRace"
	};
	$loadClass(EnqueuePollRace$WeakRef, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EnqueuePollRace$WeakRef);
	});
	return class$;
}

$Class* EnqueuePollRace$WeakRef::class$ = nullptr;