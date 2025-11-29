#include <java/nio/channels/spi/AbstractSelectableChannel.h>

#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/channels/ClosedChannelException.h>
#include <java/nio/channels/IllegalBlockingModeException.h>
#include <java/nio/channels/SelectableChannel.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/Selector.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <java/nio/channels/spi/AbstractSelectionKey.h>
#include <java/nio/channels/spi/AbstractSelector.h>
#include <java/nio/channels/spi/SelectorProvider.h>
#include <java/util/Arrays.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $SelectionKeyArray = $Array<::java::nio::channels::SelectionKey>;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ClosedChannelException = ::java::nio::channels::ClosedChannelException;
using $IllegalBlockingModeException = ::java::nio::channels::IllegalBlockingModeException;
using $SelectableChannel = ::java::nio::channels::SelectableChannel;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $Selector = ::java::nio::channels::Selector;
using $AbstractSelectionKey = ::java::nio::channels::spi::AbstractSelectionKey;
using $AbstractSelector = ::java::nio::channels::spi::AbstractSelector;
using $SelectorProvider = ::java::nio::channels::spi::SelectorProvider;
using $Arrays = ::java::util::Arrays;
using $Consumer = ::java::util::function::Consumer;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace nio {
		namespace channels {
			namespace spi {

class AbstractSelectableChannel$$Lambda$lambda$forEach$0 : public $Predicate {
	$class(AbstractSelectableChannel$$Lambda$lambda$forEach$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* k) override {
		 return AbstractSelectableChannel::lambda$forEach$0($cast($SelectionKey, k));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AbstractSelectableChannel$$Lambda$lambda$forEach$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AbstractSelectableChannel$$Lambda$lambda$forEach$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AbstractSelectableChannel$$Lambda$lambda$forEach$0::*)()>(&AbstractSelectableChannel$$Lambda$lambda$forEach$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo AbstractSelectableChannel$$Lambda$lambda$forEach$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.nio.channels.spi.AbstractSelectableChannel$$Lambda$lambda$forEach$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* AbstractSelectableChannel$$Lambda$lambda$forEach$0::load$($String* name, bool initialize) {
	$loadClass(AbstractSelectableChannel$$Lambda$lambda$forEach$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AbstractSelectableChannel$$Lambda$lambda$forEach$0::class$ = nullptr;

class AbstractSelectableChannel$$Lambda$accept$1 : public $Consumer {
	$class(AbstractSelectableChannel$$Lambda$accept$1, $NO_CLASS_INIT, $Consumer)
public:
	void init$($Consumer* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* t) override {
		$nc(inst$)->accept(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AbstractSelectableChannel$$Lambda$accept$1>());
	}
	$Consumer* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo AbstractSelectableChannel$$Lambda$accept$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(AbstractSelectableChannel$$Lambda$accept$1, inst$)},
	{}
};
$MethodInfo AbstractSelectableChannel$$Lambda$accept$1::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC, $method(static_cast<void(AbstractSelectableChannel$$Lambda$accept$1::*)($Consumer*)>(&AbstractSelectableChannel$$Lambda$accept$1::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo AbstractSelectableChannel$$Lambda$accept$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.nio.channels.spi.AbstractSelectableChannel$$Lambda$accept$1",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* AbstractSelectableChannel$$Lambda$accept$1::load$($String* name, bool initialize) {
	$loadClass(AbstractSelectableChannel$$Lambda$accept$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AbstractSelectableChannel$$Lambda$accept$1::class$ = nullptr;

$FieldInfo _AbstractSelectableChannel_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(AbstractSelectableChannel, $assertionsDisabled)},
	{"provider", "Ljava/nio/channels/spi/SelectorProvider;", nullptr, $PRIVATE | $FINAL, $field(AbstractSelectableChannel, provider$)},
	{"keys", "[Ljava/nio/channels/SelectionKey;", nullptr, $PRIVATE, $field(AbstractSelectableChannel, keys)},
	{"keyCount", "I", nullptr, $PRIVATE, $field(AbstractSelectableChannel, keyCount)},
	{"keyLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(AbstractSelectableChannel, keyLock)},
	{"regLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(AbstractSelectableChannel, regLock)},
	{"nonBlocking", "Z", nullptr, $PRIVATE | $VOLATILE, $field(AbstractSelectableChannel, nonBlocking)},
	{}
};

$MethodInfo _AbstractSelectableChannel_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/spi/SelectorProvider;)V", nullptr, $PROTECTED, $method(static_cast<void(AbstractSelectableChannel::*)($SelectorProvider*)>(&AbstractSelectableChannel::init$))},
	{"addKey", "(Ljava/nio/channels/SelectionKey;)V", nullptr, $PRIVATE, $method(static_cast<void(AbstractSelectableChannel::*)($SelectionKey*)>(&AbstractSelectableChannel::addKey))},
	{"blockingLock", "()Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL},
	{"configureBlocking", "(Z)Ljava/nio/channels/SelectableChannel;", nullptr, $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{"findKey", "(Ljava/nio/channels/Selector;)Ljava/nio/channels/SelectionKey;", nullptr, $PRIVATE, $method(static_cast<$SelectionKey*(AbstractSelectableChannel::*)($Selector*)>(&AbstractSelectableChannel::findKey))},
	{"forEach", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<Ljava/nio/channels/SelectionKey;>;)V", $PRIVATE, $method(static_cast<void(AbstractSelectableChannel::*)($Consumer*)>(&AbstractSelectableChannel::forEach))},
	{"haveValidKeys", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(AbstractSelectableChannel::*)()>(&AbstractSelectableChannel::haveValidKeys))},
	{"implCloseChannel", "()V", nullptr, $PROTECTED | $FINAL, nullptr, "java.io.IOException"},
	{"implCloseSelectableChannel", "()V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.io.IOException"},
	{"implConfigureBlocking", "(Z)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.io.IOException"},
	{"isBlocking", "()Z", nullptr, $PUBLIC | $FINAL},
	{"isRegistered", "()Z", nullptr, $PUBLIC | $FINAL},
	{"keyFor", "(Ljava/nio/channels/Selector;)Ljava/nio/channels/SelectionKey;", nullptr, $PUBLIC | $FINAL},
	{"lambda$forEach$0", "(Ljava/nio/channels/SelectionKey;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($SelectionKey*)>(&AbstractSelectableChannel::lambda$forEach$0))},
	{"provider", "()Ljava/nio/channels/spi/SelectorProvider;", nullptr, $PUBLIC | $FINAL},
	{"register", "(Ljava/nio/channels/Selector;ILjava/lang/Object;)Ljava/nio/channels/SelectionKey;", nullptr, $PUBLIC | $FINAL, nullptr, "java.nio.channels.ClosedChannelException"},
	{"removeKey", "(Ljava/nio/channels/SelectionKey;)V", nullptr, 0},
	{}
};

$ClassInfo _AbstractSelectableChannel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.nio.channels.spi.AbstractSelectableChannel",
	"java.nio.channels.SelectableChannel",
	nullptr,
	_AbstractSelectableChannel_FieldInfo_,
	_AbstractSelectableChannel_MethodInfo_
};

$Object* allocate$AbstractSelectableChannel($Class* clazz) {
	return $of($alloc(AbstractSelectableChannel));
}

bool AbstractSelectableChannel::$assertionsDisabled = false;

void AbstractSelectableChannel::init$($SelectorProvider* provider) {
	$SelectableChannel::init$();
	$set(this, keys, nullptr);
	this->keyCount = 0;
	$set(this, keyLock, $new($Object));
	$set(this, regLock, $new($Object));
	$set(this, provider$, provider);
}

$SelectorProvider* AbstractSelectableChannel::provider() {
	return this->provider$;
}

void AbstractSelectableChannel::addKey($SelectionKey* k) {
	if (!AbstractSelectableChannel::$assertionsDisabled && !$Thread::holdsLock(this->keyLock)) {
		$throwNew($AssertionError);
	}
	int32_t i = 0;
	if ((this->keys != nullptr) && (this->keyCount < $nc(this->keys)->length)) {
		for (i = 0; i < $nc(this->keys)->length; ++i) {
			if ($nc(this->keys)->get(i) == nullptr) {
				break;
			}
		}
	} else if (this->keys == nullptr) {
		$set(this, keys, $new($SelectionKeyArray, 2));
	} else {
		int32_t n = $nc(this->keys)->length * 2;
		$var($SelectionKeyArray, ks, $new($SelectionKeyArray, n));
		for (i = 0; i < $nc(this->keys)->length; ++i) {
			ks->set(i, $nc(this->keys)->get(i));
		}
		$set(this, keys, ks);
		i = this->keyCount;
	}
	$nc(this->keys)->set(i, k);
	++this->keyCount;
}

$SelectionKey* AbstractSelectableChannel::findKey($Selector* sel) {
	if (!AbstractSelectableChannel::$assertionsDisabled && !$Thread::holdsLock(this->keyLock)) {
		$throwNew($AssertionError);
	}
	if (this->keys == nullptr) {
		return nullptr;
	}
	for (int32_t i = 0; i < $nc(this->keys)->length; ++i) {
		if (($nc(this->keys)->get(i) != nullptr) && ($nc($nc(this->keys)->get(i))->selector() == sel)) {
			return $nc(this->keys)->get(i);
		}
	}
	return nullptr;
}

void AbstractSelectableChannel::removeKey($SelectionKey* k) {
	$synchronized(this->keyLock) {
		for (int32_t i = 0; i < $nc(this->keys)->length; ++i) {
			if ($nc(this->keys)->get(i) == k) {
				$nc(this->keys)->set(i, nullptr);
				--this->keyCount;
			}
		}
		$nc(($cast($AbstractSelectionKey, k)))->invalidate();
	}
}

bool AbstractSelectableChannel::haveValidKeys() {
	$synchronized(this->keyLock) {
		if (this->keyCount == 0) {
			return false;
		}
		for (int32_t i = 0; i < $nc(this->keys)->length; ++i) {
			if (($nc(this->keys)->get(i) != nullptr) && $nc($nc(this->keys)->get(i))->isValid()) {
				return true;
			}
		}
		return false;
	}
}

bool AbstractSelectableChannel::isRegistered() {
	$synchronized(this->keyLock) {
		return this->keyCount != 0;
	}
}

$SelectionKey* AbstractSelectableChannel::keyFor($Selector* sel) {
	$synchronized(this->keyLock) {
		return findKey(sel);
	}
}

void AbstractSelectableChannel::forEach($Consumer* action) {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->keyLock) {
		$var($SelectionKeyArray, keys, this->keys);
		if (keys != nullptr) {
			$nc($($nc($($Arrays::stream(keys)))->filter(static_cast<$Predicate*>($$new(AbstractSelectableChannel$$Lambda$lambda$forEach$0)))))->forEach(static_cast<$Consumer*>($$new(AbstractSelectableChannel$$Lambda$accept$1, static_cast<$Consumer*>($nc(action)))));
		}
	}
}

$SelectionKey* AbstractSelectableChannel::register$($Selector* sel, int32_t ops, Object$* att) {
	if (((int32_t)(ops & (uint32_t)~validOps())) != 0) {
		$throwNew($IllegalArgumentException);
	}
	if (!isOpen()) {
		$throwNew($ClosedChannelException);
	}
	$synchronized(this->regLock) {
		if (isBlocking()) {
			$throwNew($IllegalBlockingModeException);
		}
		$synchronized(this->keyLock) {
			if (!isOpen()) {
				$throwNew($ClosedChannelException);
			}
			$var($SelectionKey, k, findKey(sel));
			if (k != nullptr) {
				k->attach(att);
				k->interestOps(ops);
			} else {
				$assign(k, $nc(($cast($AbstractSelector, sel)))->register$(this, ops, att));
				addKey(k);
			}
			return k;
		}
	}
}

void AbstractSelectableChannel::implCloseChannel() {
	$useLocalCurrentObjectStackCache();
	implCloseSelectableChannel();
	$var($SelectionKeyArray, copyOfKeys, nullptr);
	$synchronized(this->keyLock) {
		if (this->keys != nullptr) {
			$assign(copyOfKeys, $cast($SelectionKeyArray, $nc(this->keys)->clone()));
		}
	}
	if (copyOfKeys != nullptr) {
		{
			$var($SelectionKeyArray, arr$, copyOfKeys);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($SelectionKey, k, arr$->get(i$));
				{
					if (k != nullptr) {
						k->cancel();
					}
				}
			}
		}
	}
}

bool AbstractSelectableChannel::isBlocking() {
	return !this->nonBlocking;
}

$Object* AbstractSelectableChannel::blockingLock() {
	return $of(this->regLock);
}

$SelectableChannel* AbstractSelectableChannel::configureBlocking(bool block) {
	$synchronized(this->regLock) {
		if (!isOpen()) {
			$throwNew($ClosedChannelException);
		}
		bool blocking = !this->nonBlocking;
		if (block != blocking) {
			if (block && haveValidKeys()) {
				$throwNew($IllegalBlockingModeException);
			}
			implConfigureBlocking(block);
			this->nonBlocking = !block;
		}
	}
	return this;
}

bool AbstractSelectableChannel::lambda$forEach$0($SelectionKey* k) {
	$init(AbstractSelectableChannel);
	return k != nullptr;
}

void clinit$AbstractSelectableChannel($Class* class$) {
	AbstractSelectableChannel::$assertionsDisabled = !AbstractSelectableChannel::class$->desiredAssertionStatus();
}

AbstractSelectableChannel::AbstractSelectableChannel() {
}

$Class* AbstractSelectableChannel::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(AbstractSelectableChannel$$Lambda$lambda$forEach$0::classInfo$.name)) {
			return AbstractSelectableChannel$$Lambda$lambda$forEach$0::load$(name, initialize);
		}
		if (name->equals(AbstractSelectableChannel$$Lambda$accept$1::classInfo$.name)) {
			return AbstractSelectableChannel$$Lambda$accept$1::load$(name, initialize);
		}
	}
	$loadClass(AbstractSelectableChannel, name, initialize, &_AbstractSelectableChannel_ClassInfo_, clinit$AbstractSelectableChannel, allocate$AbstractSelectableChannel);
	return class$;
}

$Class* AbstractSelectableChannel::class$ = nullptr;

			} // spi
		} // channels
	} // nio
} // java