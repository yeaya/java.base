#include <java/util/concurrent/locks/AbstractOwnableSynchronizer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

void AbstractOwnableSynchronizer::init$() {
}

void AbstractOwnableSynchronizer::setExclusiveOwnerThread($Thread* thread) {
	$set(this, exclusiveOwnerThread, thread);
}

$Thread* AbstractOwnableSynchronizer::getExclusiveOwnerThread() {
	return this->exclusiveOwnerThread;
}

AbstractOwnableSynchronizer::AbstractOwnableSynchronizer() {
}

$Class* AbstractOwnableSynchronizer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AbstractOwnableSynchronizer, serialVersionUID)},
		{"exclusiveOwnerThread", "Ljava/lang/Thread;", nullptr, $PRIVATE | $TRANSIENT, $field(AbstractOwnableSynchronizer, exclusiveOwnerThread)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(AbstractOwnableSynchronizer, init$, void)},
		{"getExclusiveOwnerThread", "()Ljava/lang/Thread;", nullptr, $PROTECTED | $FINAL, $method(AbstractOwnableSynchronizer, getExclusiveOwnerThread, $Thread*)},
		{"setExclusiveOwnerThread", "(Ljava/lang/Thread;)V", nullptr, $PROTECTED | $FINAL, $method(AbstractOwnableSynchronizer, setExclusiveOwnerThread, void, $Thread*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.util.concurrent.locks.AbstractOwnableSynchronizer",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AbstractOwnableSynchronizer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractOwnableSynchronizer);
	});
	return class$;
}

$Class* AbstractOwnableSynchronizer::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java