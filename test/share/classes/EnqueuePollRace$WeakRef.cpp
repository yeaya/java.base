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
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $WeakReference = ::java::lang::ref::WeakReference;

$FieldInfo _EnqueuePollRace$WeakRef_FieldInfo_[] = {
	{"queue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;", 0, $field(EnqueuePollRace$WeakRef, queue)},
	{"numReferences", "I", nullptr, $STATIC | $FINAL, $constField(EnqueuePollRace$WeakRef, numReferences)},
	{"refs", "[Ljava/lang/ref/Reference;", nullptr, $FINAL, $field(EnqueuePollRace$WeakRef, refs)},
	{"iterations", "I", nullptr, $STATIC | $FINAL, $constField(EnqueuePollRace$WeakRef, iterations)},
	{}
};

$MethodInfo _EnqueuePollRace$WeakRef_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(EnqueuePollRace$WeakRef::*)()>(&EnqueuePollRace$WeakRef::init$))},
	{"run", "()V", nullptr, 0, nullptr, "java.lang.InterruptedException"},
	{}
};

$InnerClassInfo _EnqueuePollRace$WeakRef_InnerClassesInfo_[] = {
	{"EnqueuePollRace$WeakRef", "EnqueuePollRace", "WeakRef", $STATIC},
	{}
};

$ClassInfo _EnqueuePollRace$WeakRef_ClassInfo_ = {
	$ACC_SUPER,
	"EnqueuePollRace$WeakRef",
	"java.lang.Object",
	nullptr,
	_EnqueuePollRace$WeakRef_FieldInfo_,
	_EnqueuePollRace$WeakRef_MethodInfo_,
	nullptr,
	nullptr,
	_EnqueuePollRace$WeakRef_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"EnqueuePollRace"
};

$Object* allocate$EnqueuePollRace$WeakRef($Class* clazz) {
	return $of($alloc(EnqueuePollRace$WeakRef));
}

void EnqueuePollRace$WeakRef::init$() {
	$set(this, queue, $new($ReferenceQueue));
	$set(this, refs, $new($ReferenceArray, EnqueuePollRace$WeakRef::numReferences));
}

void EnqueuePollRace$WeakRef::run() {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < EnqueuePollRace$WeakRef::iterations; ++i) {
		$set(this, queue, $new($ReferenceQueue));
		for (int32_t j = 0; j < $nc(this->refs)->length; ++j) {
			$nc(this->refs)->set(j, $$new($WeakReference, $$new($Object), this->queue));
		}
		$System::gc();
		for (int32_t j = 0; j < $nc(this->refs)->length; ++j) {
			$nc($nc(this->refs)->get(j))->enqueue();
		}
		int32_t foundReferences = 0;
		while ($nc(this->queue)->poll() != nullptr) {
			++foundReferences;
		}
		if (foundReferences != $nc(this->refs)->length) {
			$throwNew($RuntimeException, $$str({"Got "_s, $$str(foundReferences), " references in the queue, but expected "_s, $$str($nc(this->refs)->length)}));
		}
	}
}

EnqueuePollRace$WeakRef::EnqueuePollRace$WeakRef() {
}

$Class* EnqueuePollRace$WeakRef::load$($String* name, bool initialize) {
	$loadClass(EnqueuePollRace$WeakRef, name, initialize, &_EnqueuePollRace$WeakRef_ClassInfo_, allocate$EnqueuePollRace$WeakRef);
	return class$;
}

$Class* EnqueuePollRace$WeakRef::class$ = nullptr;