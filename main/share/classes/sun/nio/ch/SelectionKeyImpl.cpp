#include <sun/nio/ch/SelectionKeyImpl.h>

#include <java/io/FileDescriptor.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/Thread.h>
#include <java/lang/invoke/ConstantBootstraps.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/channels/CancelledKeyException.h>
#include <java/nio/channels/SelectableChannel.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/Selector.h>
#include <java/nio/channels/spi/AbstractSelectionKey.h>
#include <java/nio/channels/spi/AbstractSelector.h>
#include <sun/nio/ch/SelChImpl.h>
#include <sun/nio/ch/SelectorImpl.h>
#include <jcpp.h>

#undef INTERESTOPS
#undef TYPE

using $FileDescriptor = ::java::io::FileDescriptor;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConstantBootstraps = ::java::lang::invoke::ConstantBootstraps;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $CancelledKeyException = ::java::nio::channels::CancelledKeyException;
using $SelectableChannel = ::java::nio::channels::SelectableChannel;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $Selector = ::java::nio::channels::Selector;
using $AbstractSelectionKey = ::java::nio::channels::spi::AbstractSelectionKey;
using $AbstractSelector = ::java::nio::channels::spi::AbstractSelector;
using $SelChImpl = ::sun::nio::ch::SelChImpl;
using $SelectorImpl = ::sun::nio::ch::SelectorImpl;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _SelectionKeyImpl_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SelectionKeyImpl, $assertionsDisabled)},
	{"INTERESTOPS", "Ljava/lang/invoke/VarHandle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SelectionKeyImpl, INTERESTOPS)},
	{"channel", "Lsun/nio/ch/SelChImpl;", nullptr, $PRIVATE | $FINAL, $field(SelectionKeyImpl, channel$)},
	{"selector", "Lsun/nio/ch/SelectorImpl;", nullptr, $PRIVATE | $FINAL, $field(SelectionKeyImpl, selector$)},
	{"interestOps", "I", nullptr, $PRIVATE | $VOLATILE, $field(SelectionKeyImpl, interestOps$)},
	{"readyOps", "I", nullptr, $PRIVATE | $VOLATILE, $field(SelectionKeyImpl, readyOps$)},
	{"registeredEvents", "I", nullptr, $PRIVATE, $field(SelectionKeyImpl, registeredEvents$)},
	{"reset", "Z", nullptr, $PRIVATE | $VOLATILE, $field(SelectionKeyImpl, reset$)},
	{"index", "I", nullptr, $PRIVATE, $field(SelectionKeyImpl, index)},
	{"lastPolled", "I", nullptr, 0, $field(SelectionKeyImpl, lastPolled)},
	{}
};

$MethodInfo _SelectionKeyImpl_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/ch/SelChImpl;Lsun/nio/ch/SelectorImpl;)V", nullptr, 0, $method(static_cast<void(SelectionKeyImpl::*)($SelChImpl*,$SelectorImpl*)>(&SelectionKeyImpl::init$))},
	{"channel", "()Ljava/nio/channels/SelectableChannel;", nullptr, $PUBLIC},
	{"ensureValid", "()V", nullptr, $PRIVATE, $method(static_cast<void(SelectionKeyImpl::*)()>(&SelectionKeyImpl::ensureValid))},
	{"getAndClearReset", "()Z", nullptr, 0, $method(static_cast<bool(SelectionKeyImpl::*)()>(&SelectionKeyImpl::getAndClearReset))},
	{"getFD", "()Ljava/io/FileDescriptor;", nullptr, 0, $method(static_cast<$FileDescriptor*(SelectionKeyImpl::*)()>(&SelectionKeyImpl::getFD))},
	{"getFDVal", "()I", nullptr, 0, $method(static_cast<int32_t(SelectionKeyImpl::*)()>(&SelectionKeyImpl::getFDVal))},
	{"getIndex", "()I", nullptr, 0, $method(static_cast<int32_t(SelectionKeyImpl::*)()>(&SelectionKeyImpl::getIndex))},
	{"interestOps", "()I", nullptr, $PUBLIC},
	{"interestOps", "(I)Ljava/nio/channels/SelectionKey;", nullptr, $PUBLIC},
	{"interestOpsAnd", "(I)I", nullptr, $PUBLIC},
	{"interestOpsOr", "(I)I", nullptr, $PUBLIC},
	{"nioInterestOps", "(I)Ljava/nio/channels/SelectionKey;", nullptr, $PUBLIC, $method(static_cast<$SelectionKey*(SelectionKeyImpl::*)(int32_t)>(&SelectionKeyImpl::nioInterestOps))},
	{"nioInterestOps", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(SelectionKeyImpl::*)()>(&SelectionKeyImpl::nioInterestOps))},
	{"nioReadyOps", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(SelectionKeyImpl::*)(int32_t)>(&SelectionKeyImpl::nioReadyOps))},
	{"nioReadyOps", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(SelectionKeyImpl::*)()>(&SelectionKeyImpl::nioReadyOps))},
	{"readyOps", "()I", nullptr, $PUBLIC},
	{"registeredEvents", "(I)V", nullptr, 0, $method(static_cast<void(SelectionKeyImpl::*)(int32_t)>(&SelectionKeyImpl::registeredEvents))},
	{"registeredEvents", "()I", nullptr, 0, $method(static_cast<int32_t(SelectionKeyImpl::*)()>(&SelectionKeyImpl::registeredEvents))},
	{"reset", "()V", nullptr, 0, $method(static_cast<void(SelectionKeyImpl::*)()>(&SelectionKeyImpl::reset))},
	{"selector", "()Ljava/nio/channels/Selector;", nullptr, $PUBLIC},
	{"setIndex", "(I)V", nullptr, 0, $method(static_cast<void(SelectionKeyImpl::*)(int32_t)>(&SelectionKeyImpl::setIndex))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"translateAndSetReadyOps", "(I)Z", nullptr, 0, $method(static_cast<bool(SelectionKeyImpl::*)(int32_t)>(&SelectionKeyImpl::translateAndSetReadyOps))},
	{"translateAndUpdateReadyOps", "(I)Z", nullptr, 0, $method(static_cast<bool(SelectionKeyImpl::*)(int32_t)>(&SelectionKeyImpl::translateAndUpdateReadyOps))},
	{"translateInterestOps", "()I", nullptr, 0, $method(static_cast<int32_t(SelectionKeyImpl::*)()>(&SelectionKeyImpl::translateInterestOps))},
	{}
};

$ClassInfo _SelectionKeyImpl_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.nio.ch.SelectionKeyImpl",
	"java.nio.channels.spi.AbstractSelectionKey",
	nullptr,
	_SelectionKeyImpl_FieldInfo_,
	_SelectionKeyImpl_MethodInfo_
};

$Object* allocate$SelectionKeyImpl($Class* clazz) {
	return $of($alloc(SelectionKeyImpl));
}

bool SelectionKeyImpl::$assertionsDisabled = false;
$VarHandle* SelectionKeyImpl::INTERESTOPS = nullptr;

void SelectionKeyImpl::init$($SelChImpl* ch, $SelectorImpl* sel) {
	$AbstractSelectionKey::init$();
	$set(this, channel$, ch);
	$set(this, selector$, sel);
}

void SelectionKeyImpl::ensureValid() {
	if (!isValid()) {
		$throwNew($CancelledKeyException);
	}
}

$FileDescriptor* SelectionKeyImpl::getFD() {
	return $nc(this->channel$)->getFD();
}

int32_t SelectionKeyImpl::getFDVal() {
	return $nc(this->channel$)->getFDVal();
}

$SelectableChannel* SelectionKeyImpl::channel() {
	return $cast($SelectableChannel, this->channel$);
}

$Selector* SelectionKeyImpl::selector() {
	return this->selector$;
}

int32_t SelectionKeyImpl::interestOps() {
	ensureValid();
	return this->interestOps$;
}

$SelectionKey* SelectionKeyImpl::interestOps(int32_t ops) {
	ensureValid();
	if (((int32_t)(ops & (uint32_t)~$nc($(channel()))->validOps())) != 0) {
		$throwNew($IllegalArgumentException);
	}
	int32_t oldOps = $intValue($nc(SelectionKeyImpl::INTERESTOPS)->getAndSet($$new($ObjectArray, {$of(this), $$of(ops)})));
	if (ops != oldOps) {
		$nc(this->selector$)->setEventOps(this);
	}
	return this;
}

int32_t SelectionKeyImpl::interestOpsOr(int32_t ops) {
	ensureValid();
	if (((int32_t)(ops & (uint32_t)~$nc($(channel()))->validOps())) != 0) {
		$throwNew($IllegalArgumentException);
	}
	int32_t oldVal = $intValue($nc(SelectionKeyImpl::INTERESTOPS)->getAndBitwiseOr($$new($ObjectArray, {$of(this), $$of(ops)})));
	if (oldVal != (oldVal | ops)) {
		$nc(this->selector$)->setEventOps(this);
	}
	return oldVal;
}

int32_t SelectionKeyImpl::interestOpsAnd(int32_t ops) {
	ensureValid();
	int32_t oldVal = $intValue($nc(SelectionKeyImpl::INTERESTOPS)->getAndBitwiseAnd($$new($ObjectArray, {$of(this), $$of(ops)})));
	if (oldVal != ((int32_t)(oldVal & (uint32_t)ops))) {
		$nc(this->selector$)->setEventOps(this);
	}
	return oldVal;
}

int32_t SelectionKeyImpl::readyOps() {
	ensureValid();
	return this->readyOps$;
}

void SelectionKeyImpl::nioReadyOps(int32_t ops) {
	this->readyOps$ = ops;
}

int32_t SelectionKeyImpl::nioReadyOps() {
	return this->readyOps$;
}

$SelectionKey* SelectionKeyImpl::nioInterestOps(int32_t ops) {
	if (((int32_t)(ops & (uint32_t)~$nc($(channel()))->validOps())) != 0) {
		$throwNew($IllegalArgumentException);
	}
	this->interestOps$ = ops;
	$nc(this->selector$)->setEventOps(this);
	return this;
}

int32_t SelectionKeyImpl::nioInterestOps() {
	return this->interestOps$;
}

int32_t SelectionKeyImpl::translateInterestOps() {
	return $nc(this->channel$)->translateInterestOps(this->interestOps$);
}

bool SelectionKeyImpl::translateAndSetReadyOps(int32_t ops) {
	return $nc(this->channel$)->translateAndSetReadyOps(ops, this);
}

bool SelectionKeyImpl::translateAndUpdateReadyOps(int32_t ops) {
	return $nc(this->channel$)->translateAndUpdateReadyOps(ops, this);
}

void SelectionKeyImpl::registeredEvents(int32_t events) {
	this->registeredEvents$ = events;
}

int32_t SelectionKeyImpl::registeredEvents() {
	return this->registeredEvents$;
}

int32_t SelectionKeyImpl::getIndex() {
	return this->index;
}

void SelectionKeyImpl::setIndex(int32_t i) {
	this->index = i;
}

void SelectionKeyImpl::reset() {
	this->reset$ = true;
	$nc(this->selector$)->setEventOps(this);
	$nc(this->selector$)->wakeup();
}

bool SelectionKeyImpl::getAndClearReset() {
	if (!SelectionKeyImpl::$assertionsDisabled && !$Thread::holdsLock(this->selector$)) {
		$throwNew($AssertionError);
	}
	bool r = this->reset$;
	if (r) {
		this->reset$ = false;
	}
	return r;
}

$String* SelectionKeyImpl::toString() {
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append("channel="_s)->append($of(this->channel$))->append(", selector="_s)->append($of(this->selector$));
	if (isValid()) {
		sb->append(", interestOps="_s)->append(this->interestOps$)->append(", readyOps="_s)->append(this->readyOps$);
	} else {
		sb->append(", invalid"_s);
	}
	return sb->toString();
}

void clinit$SelectionKeyImpl($Class* class$) {
	$beforeCallerSensitive();
	SelectionKeyImpl::$assertionsDisabled = !SelectionKeyImpl::class$->desiredAssertionStatus();
	$load($VarHandle);
	$init($Integer);
	$assignStatic(SelectionKeyImpl::INTERESTOPS, $ConstantBootstraps::fieldVarHandle($($MethodHandles::lookup()), "interestOps"_s, $VarHandle::class$, SelectionKeyImpl::class$, $Integer::TYPE));
}

SelectionKeyImpl::SelectionKeyImpl() {
}

$Class* SelectionKeyImpl::load$($String* name, bool initialize) {
	$loadClass(SelectionKeyImpl, name, initialize, &_SelectionKeyImpl_ClassInfo_, clinit$SelectionKeyImpl, allocate$SelectionKeyImpl);
	return class$;
}

$Class* SelectionKeyImpl::class$ = nullptr;

		} // ch
	} // nio
} // sun