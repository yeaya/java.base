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
};
$Class* AbstractSelectableChannel$$Lambda$lambda$forEach$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AbstractSelectableChannel$$Lambda$lambda$forEach$0, init$, void)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(AbstractSelectableChannel$$Lambda$lambda$forEach$0, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.nio.channels.spi.AbstractSelectableChannel$$Lambda$lambda$forEach$0",
		"java.lang.Object",
		"java.util.function.Predicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(AbstractSelectableChannel$$Lambda$lambda$forEach$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractSelectableChannel$$Lambda$lambda$forEach$0);
	});
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
	$Consumer* inst$ = nullptr;
};
$Class* AbstractSelectableChannel$$Lambda$accept$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(AbstractSelectableChannel$$Lambda$accept$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC, $method(AbstractSelectableChannel$$Lambda$accept$1, init$, void, $Consumer*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(AbstractSelectableChannel$$Lambda$accept$1, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.nio.channels.spi.AbstractSelectableChannel$$Lambda$accept$1",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AbstractSelectableChannel$$Lambda$accept$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractSelectableChannel$$Lambda$accept$1);
	});
	return class$;
}
$Class* AbstractSelectableChannel$$Lambda$accept$1::class$ = nullptr;

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
	if ((this->keys != nullptr) && (this->keyCount < this->keys->length)) {
		for (i = 0; i < this->keys->length; ++i) {
			if (this->keys->get(i) == nullptr) {
				break;
			}
		}
	} else if (this->keys == nullptr) {
		$set(this, keys, $new($SelectionKeyArray, 2));
	} else {
		int32_t n = this->keys->length * 2;
		$var($SelectionKeyArray, ks, $new($SelectionKeyArray, n));
		for (i = 0; i < this->keys->length; ++i) {
			ks->set(i, this->keys->get(i));
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
		if ((this->keys->get(i) != nullptr) && ($nc(this->keys->get(i))->selector() == sel)) {
			return this->keys->get(i);
		}
	}
	return nullptr;
}

void AbstractSelectableChannel::removeKey($SelectionKey* k) {
	$synchronized(this->keyLock) {
		for (int32_t i = 0; i < $nc(this->keys)->length; ++i) {
			if (this->keys->get(i) == k) {
				this->keys->set(i, nullptr);
				--this->keyCount;
			}
		}
		$nc($cast($AbstractSelectionKey, k))->invalidate();
	}
}

bool AbstractSelectableChannel::haveValidKeys() {
	$synchronized(this->keyLock) {
		if (this->keyCount == 0) {
			return false;
		}
		for (int32_t i = 0; i < $nc(this->keys)->length; ++i) {
			if ((this->keys->get(i) != nullptr) && $nc(this->keys->get(i))->isValid()) {
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
	$useLocalObjectStack();
	$synchronized(this->keyLock) {
		$var($SelectionKeyArray, keys, this->keys);
		if (keys != nullptr) {
			$$nc($$nc($Arrays::stream(keys))->filter($$new(AbstractSelectableChannel$$Lambda$lambda$forEach$0)))->forEach($$new(AbstractSelectableChannel$$Lambda$accept$1, $nc(action)));
		}
	}
}

$SelectionKey* AbstractSelectableChannel::register$($Selector* sel, int32_t ops, Object$* att) {
	if ((ops & ~validOps()) != 0) {
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
				$assign(k, $nc($cast($AbstractSelector, sel))->register$(this, ops, att));
				addKey(k);
			}
			return k;
		}
	}
}

void AbstractSelectableChannel::implCloseChannel() {
	$useLocalObjectStack();
	implCloseSelectableChannel();
	$var($SelectionKeyArray, copyOfKeys, nullptr);
	$synchronized(this->keyLock) {
		if (this->keys != nullptr) {
			$assign(copyOfKeys, $cast($SelectionKeyArray, this->keys->clone()));
		}
	}
	if (copyOfKeys != nullptr) {
		$var($SelectionKeyArray, arr$, copyOfKeys);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($SelectionKey, k, arr$->get(i$));
			if (k != nullptr) {
				k->cancel();
			}
		}
	}
}

bool AbstractSelectableChannel::isBlocking() {
	return !this->nonBlocking;
}

$Object* AbstractSelectableChannel::blockingLock() {
	return this->regLock;
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

void AbstractSelectableChannel::clinit$($Class* clazz) {
	AbstractSelectableChannel::$assertionsDisabled = !AbstractSelectableChannel::class$->desiredAssertionStatus();
}

AbstractSelectableChannel::AbstractSelectableChannel() {
}

$Class* AbstractSelectableChannel::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.nio.channels.spi.AbstractSelectableChannel$$Lambda$lambda$forEach$0")) {
			return AbstractSelectableChannel$$Lambda$lambda$forEach$0::load$(name, initialize);
		}
		if (name->equals("java.nio.channels.spi.AbstractSelectableChannel$$Lambda$accept$1")) {
			return AbstractSelectableChannel$$Lambda$accept$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(AbstractSelectableChannel, $assertionsDisabled)},
		{"provider", "Ljava/nio/channels/spi/SelectorProvider;", nullptr, $PRIVATE | $FINAL, $field(AbstractSelectableChannel, provider$)},
		{"keys", "[Ljava/nio/channels/SelectionKey;", nullptr, $PRIVATE, $field(AbstractSelectableChannel, keys)},
		{"keyCount", "I", nullptr, $PRIVATE, $field(AbstractSelectableChannel, keyCount)},
		{"keyLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(AbstractSelectableChannel, keyLock)},
		{"regLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(AbstractSelectableChannel, regLock)},
		{"nonBlocking", "Z", nullptr, $PRIVATE | $VOLATILE, $field(AbstractSelectableChannel, nonBlocking)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/channels/spi/SelectorProvider;)V", nullptr, $PROTECTED, $method(AbstractSelectableChannel, init$, void, $SelectorProvider*)},
		{"addKey", "(Ljava/nio/channels/SelectionKey;)V", nullptr, $PRIVATE, $method(AbstractSelectableChannel, addKey, void, $SelectionKey*)},
		{"blockingLock", "()Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $virtualMethod(AbstractSelectableChannel, blockingLock, $Object*)},
		{"configureBlocking", "(Z)Ljava/nio/channels/SelectableChannel;", nullptr, $PUBLIC | $FINAL, $virtualMethod(AbstractSelectableChannel, configureBlocking, $SelectableChannel*, bool), "java.io.IOException"},
		{"findKey", "(Ljava/nio/channels/Selector;)Ljava/nio/channels/SelectionKey;", nullptr, $PRIVATE, $method(AbstractSelectableChannel, findKey, $SelectionKey*, $Selector*)},
		{"forEach", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<Ljava/nio/channels/SelectionKey;>;)V", $PRIVATE, $method(AbstractSelectableChannel, forEach, void, $Consumer*)},
		{"haveValidKeys", "()Z", nullptr, $PRIVATE, $method(AbstractSelectableChannel, haveValidKeys, bool)},
		{"implCloseChannel", "()V", nullptr, $PROTECTED | $FINAL, $virtualMethod(AbstractSelectableChannel, implCloseChannel, void), "java.io.IOException"},
		{"implCloseSelectableChannel", "()V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(AbstractSelectableChannel, implCloseSelectableChannel, void), "java.io.IOException"},
		{"implConfigureBlocking", "(Z)V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(AbstractSelectableChannel, implConfigureBlocking, void, bool), "java.io.IOException"},
		{"isBlocking", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(AbstractSelectableChannel, isBlocking, bool)},
		{"isRegistered", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(AbstractSelectableChannel, isRegistered, bool)},
		{"keyFor", "(Ljava/nio/channels/Selector;)Ljava/nio/channels/SelectionKey;", nullptr, $PUBLIC | $FINAL, $virtualMethod(AbstractSelectableChannel, keyFor, $SelectionKey*, $Selector*)},
		{"lambda$forEach$0", "(Ljava/nio/channels/SelectionKey;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AbstractSelectableChannel, lambda$forEach$0, bool, $SelectionKey*)},
		{"provider", "()Ljava/nio/channels/spi/SelectorProvider;", nullptr, $PUBLIC | $FINAL, $virtualMethod(AbstractSelectableChannel, provider, $SelectorProvider*)},
		{"register", "(Ljava/nio/channels/Selector;ILjava/lang/Object;)Ljava/nio/channels/SelectionKey;", nullptr, $PUBLIC | $FINAL, $virtualMethod(AbstractSelectableChannel, register$, $SelectionKey*, $Selector*, int32_t, Object$*), "java.nio.channels.ClosedChannelException"},
		{"removeKey", "(Ljava/nio/channels/SelectionKey;)V", nullptr, 0, $virtualMethod(AbstractSelectableChannel, removeKey, void, $SelectionKey*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.nio.channels.spi.AbstractSelectableChannel",
		"java.nio.channels.SelectableChannel",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AbstractSelectableChannel, name, initialize, &classInfo$$, AbstractSelectableChannel::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractSelectableChannel);
	});
	return class$;
}

$Class* AbstractSelectableChannel::class$ = nullptr;

			} // spi
		} // channels
	} // nio
} // java