#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>

#include <java/nio/channels/AsynchronousCloseException.h>
#include <java/nio/channels/ClosedByInterruptException.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel$1.h>
#include <jdk/internal/access/JavaLangAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <sun/nio/ch/Interruptible.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AsynchronousCloseException = ::java::nio::channels::AsynchronousCloseException;
using $ClosedByInterruptException = ::java::nio::channels::ClosedByInterruptException;
using $AbstractInterruptibleChannel$1 = ::java::nio::channels::spi::AbstractInterruptibleChannel$1;
using $JavaLangAccess = ::jdk::internal::access::JavaLangAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $Interruptible = ::sun::nio::ch::Interruptible;

namespace java {
	namespace nio {
		namespace channels {
			namespace spi {

$FieldInfo _AbstractInterruptibleChannel_FieldInfo_[] = {
	{"closeLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(AbstractInterruptibleChannel, closeLock)},
	{"closed", "Z", nullptr, $PRIVATE | $VOLATILE, $field(AbstractInterruptibleChannel, closed)},
	{"interruptor", "Lsun/nio/ch/Interruptible;", nullptr, $PRIVATE, $field(AbstractInterruptibleChannel, interruptor)},
	{"interrupted", "Ljava/lang/Thread;", nullptr, $PRIVATE | $VOLATILE, $field(AbstractInterruptibleChannel, interrupted)},
	{}
};

$MethodInfo _AbstractInterruptibleChannel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(AbstractInterruptibleChannel, init$, void)},
	{"begin", "()V", nullptr, $PROTECTED | $FINAL, $method(AbstractInterruptibleChannel, begin, void)},
	{"blockedOn", "(Lsun/nio/ch/Interruptible;)V", nullptr, $STATIC, $staticMethod(AbstractInterruptibleChannel, blockedOn, void, $Interruptible*)},
	{"close", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(AbstractInterruptibleChannel, close, void), "java.io.IOException"},
	{"end", "(Z)V", nullptr, $PROTECTED | $FINAL, $method(AbstractInterruptibleChannel, end, void, bool), "java.nio.channels.AsynchronousCloseException"},
	{"implCloseChannel", "()V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(AbstractInterruptibleChannel, implCloseChannel, void), "java.io.IOException"},
	{"isOpen", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(AbstractInterruptibleChannel, isOpen, bool)},
	{}
};

$InnerClassInfo _AbstractInterruptibleChannel_InnerClassesInfo_[] = {
	{"java.nio.channels.spi.AbstractInterruptibleChannel$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AbstractInterruptibleChannel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.nio.channels.spi.AbstractInterruptibleChannel",
	"java.lang.Object",
	"java.nio.channels.InterruptibleChannel",
	_AbstractInterruptibleChannel_FieldInfo_,
	_AbstractInterruptibleChannel_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractInterruptibleChannel_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.nio.channels.spi.AbstractInterruptibleChannel$1"
};

$Object* allocate$AbstractInterruptibleChannel($Class* clazz) {
	return $of($alloc(AbstractInterruptibleChannel));
}

void AbstractInterruptibleChannel::init$() {
	$set(this, closeLock, $new($Object));
}

void AbstractInterruptibleChannel::close() {
	$synchronized(this->closeLock) {
		if (this->closed) {
			return;
		}
		this->closed = true;
		implCloseChannel();
	}
}

bool AbstractInterruptibleChannel::isOpen() {
	return !this->closed;
}

void AbstractInterruptibleChannel::begin() {
	if (this->interruptor == nullptr) {
		$set(this, interruptor, $new($AbstractInterruptibleChannel$1, this));
	}
	blockedOn(this->interruptor);
	$var($Thread, me, $Thread::currentThread());
	if (me->isInterrupted()) {
		$nc(this->interruptor)->interrupt(me);
	}
}

void AbstractInterruptibleChannel::end(bool completed) {
	blockedOn(nullptr);
	$var($Thread, interrupted, this->interrupted);
	if (interrupted != nullptr && interrupted == $Thread::currentThread()) {
		$set(this, interrupted, nullptr);
		$throwNew($ClosedByInterruptException);
	}
	if (!completed && this->closed) {
		$throwNew($AsynchronousCloseException);
	}
}

void AbstractInterruptibleChannel::blockedOn($Interruptible* intr) {
	$init(AbstractInterruptibleChannel);
	$nc($($SharedSecrets::getJavaLangAccess()))->blockedOn(intr);
}

AbstractInterruptibleChannel::AbstractInterruptibleChannel() {
}

$Class* AbstractInterruptibleChannel::load$($String* name, bool initialize) {
	$loadClass(AbstractInterruptibleChannel, name, initialize, &_AbstractInterruptibleChannel_ClassInfo_, allocate$AbstractInterruptibleChannel);
	return class$;
}

$Class* AbstractInterruptibleChannel::class$ = nullptr;

			} // spi
		} // channels
	} // nio
} // java