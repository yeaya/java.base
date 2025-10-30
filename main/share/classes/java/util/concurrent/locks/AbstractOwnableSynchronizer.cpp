#include <java/util/concurrent/locks/AbstractOwnableSynchronizer.h>

#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

$FieldInfo _AbstractOwnableSynchronizer_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AbstractOwnableSynchronizer, serialVersionUID)},
	{"exclusiveOwnerThread", "Ljava/lang/Thread;", nullptr, $PRIVATE | $TRANSIENT, $field(AbstractOwnableSynchronizer, exclusiveOwnerThread)},
	{}
};

$MethodInfo _AbstractOwnableSynchronizer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(AbstractOwnableSynchronizer::*)()>(&AbstractOwnableSynchronizer::init$))},
	{"getExclusiveOwnerThread", "()Ljava/lang/Thread;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$Thread*(AbstractOwnableSynchronizer::*)()>(&AbstractOwnableSynchronizer::getExclusiveOwnerThread))},
	{"setExclusiveOwnerThread", "(Ljava/lang/Thread;)V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(AbstractOwnableSynchronizer::*)($Thread*)>(&AbstractOwnableSynchronizer::setExclusiveOwnerThread))},
	{}
};

$ClassInfo _AbstractOwnableSynchronizer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.util.concurrent.locks.AbstractOwnableSynchronizer",
	"java.lang.Object",
	"java.io.Serializable",
	_AbstractOwnableSynchronizer_FieldInfo_,
	_AbstractOwnableSynchronizer_MethodInfo_
};

$Object* allocate$AbstractOwnableSynchronizer($Class* clazz) {
	return $of($alloc(AbstractOwnableSynchronizer));
}

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
	$loadClass(AbstractOwnableSynchronizer, name, initialize, &_AbstractOwnableSynchronizer_ClassInfo_, allocate$AbstractOwnableSynchronizer);
	return class$;
}

$Class* AbstractOwnableSynchronizer::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java