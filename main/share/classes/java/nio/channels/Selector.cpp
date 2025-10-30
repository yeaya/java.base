#include <java/nio/channels/Selector.h>

#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/channels/ClosedSelectorException.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/spi/AbstractSelector.h>
#include <java/nio/channels/spi/SelectorProvider.h>
#include <java/util/Collection.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

using $Closeable = ::java::io::Closeable;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $ClosedSelectorException = ::java::nio::channels::ClosedSelectorException;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $AbstractSelector = ::java::nio::channels::spi::AbstractSelector;
using $SelectorProvider = ::java::nio::channels::spi::SelectorProvider;
using $Collection = ::java::util::Collection;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace nio {
		namespace channels {

class Selector$$Lambda$lambda$doSelect$0 : public $Consumer {
	$class(Selector$$Lambda$lambda$doSelect$0, $NO_CLASS_INIT, $Consumer)
public:
	void init$(Selector* inst, $Consumer* action) {
		$set(this, inst$, inst);
		$set(this, action, action);
	}
	virtual void accept(Object$* k) override {
		$nc(inst$)->lambda$doSelect$0(action, $cast($SelectionKey, k));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Selector$$Lambda$lambda$doSelect$0>());
	}
	Selector* inst$ = nullptr;
	$Consumer* action = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Selector$$Lambda$lambda$doSelect$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Selector$$Lambda$lambda$doSelect$0, inst$)},
	{"action", "Ljava/util/function/Consumer;", nullptr, $PUBLIC, $field(Selector$$Lambda$lambda$doSelect$0, action)},
	{}
};
$MethodInfo Selector$$Lambda$lambda$doSelect$0::methodInfos[3] = {
	{"<init>", "(Ljava/nio/channels/Selector;Ljava/util/function/Consumer;)V", nullptr, $PUBLIC, $method(static_cast<void(Selector$$Lambda$lambda$doSelect$0::*)(Selector*,$Consumer*)>(&Selector$$Lambda$lambda$doSelect$0::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Selector$$Lambda$lambda$doSelect$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.nio.channels.Selector$$Lambda$lambda$doSelect$0",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Selector$$Lambda$lambda$doSelect$0::load$($String* name, bool initialize) {
	$loadClass(Selector$$Lambda$lambda$doSelect$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Selector$$Lambda$lambda$doSelect$0::class$ = nullptr;

$FieldInfo _Selector_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Selector, $assertionsDisabled)},
	{}
};

$MethodInfo _Selector_MethodInfo_[] = {
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(Selector::*)()>(&Selector::init$))},
	{"doSelect", "(Ljava/util/function/Consumer;J)I", "(Ljava/util/function/Consumer<Ljava/nio/channels/SelectionKey;>;J)I", $PRIVATE, $method(static_cast<int32_t(Selector::*)($Consumer*,int64_t)>(&Selector::doSelect)), "java.io.IOException"},
	{"isOpen", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"keys", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/nio/channels/SelectionKey;>;", $PUBLIC | $ABSTRACT},
	{"lambda$doSelect$0", "(Ljava/util/function/Consumer;Ljava/nio/channels/SelectionKey;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Selector::*)($Consumer*,$SelectionKey*)>(&Selector::lambda$doSelect$0))},
	{"open", "()Ljava/nio/channels/Selector;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Selector*(*)()>(&Selector::open)), "java.io.IOException"},
	{"provider", "()Ljava/nio/channels/spi/SelectorProvider;", nullptr, $PUBLIC | $ABSTRACT},
	{"select", "(J)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"select", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"select", "(Ljava/util/function/Consumer;J)I", "(Ljava/util/function/Consumer<Ljava/nio/channels/SelectionKey;>;J)I", $PUBLIC, nullptr, "java.io.IOException"},
	{"select", "(Ljava/util/function/Consumer;)I", "(Ljava/util/function/Consumer<Ljava/nio/channels/SelectionKey;>;)I", $PUBLIC, nullptr, "java.io.IOException"},
	{"selectNow", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"selectNow", "(Ljava/util/function/Consumer;)I", "(Ljava/util/function/Consumer<Ljava/nio/channels/SelectionKey;>;)I", $PUBLIC, nullptr, "java.io.IOException"},
	{"selectedKeys", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/nio/channels/SelectionKey;>;", $PUBLIC | $ABSTRACT},
	{"wakeup", "()Ljava/nio/channels/Selector;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Selector_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.nio.channels.Selector",
	"java.lang.Object",
	"java.io.Closeable",
	_Selector_FieldInfo_,
	_Selector_MethodInfo_
};

$Object* allocate$Selector($Class* clazz) {
	return $of($alloc(Selector));
}

bool Selector::$assertionsDisabled = false;

void Selector::init$() {
}

Selector* Selector::open() {
	$init(Selector);
	return $nc($($SelectorProvider::provider()))->openSelector();
}

int32_t Selector::select($Consumer* action, int64_t timeout) {
	if (timeout < 0) {
		$throwNew($IllegalArgumentException, "Negative timeout"_s);
	}
	return doSelect($cast($Consumer, $Objects::requireNonNull(action)), timeout);
}

int32_t Selector::select($Consumer* action) {
	return select(action, 0);
}

int32_t Selector::selectNow($Consumer* action) {
	return doSelect($cast($Consumer, $Objects::requireNonNull(action)), -1);
}

int32_t Selector::doSelect($Consumer* action, int64_t timeout) {
	$useLocalCurrentObjectStackCache();
	$synchronized(this) {
		$var($Set, selectedKeys, this->selectedKeys());
		$synchronized(selectedKeys) {
			$nc(selectedKeys)->clear();
			int32_t numKeySelected = 0;
			if (timeout < 0) {
				numKeySelected = selectNow();
			} else {
				numKeySelected = select(timeout);
			}
			$var($Set, keysToConsume, $Set::copyOf(selectedKeys));
			if (!Selector::$assertionsDisabled && !($nc(keysToConsume)->size() == numKeySelected)) {
				$throwNew($AssertionError);
			}
			selectedKeys->clear();
			$nc(keysToConsume)->forEach(static_cast<$Consumer*>($$new(Selector$$Lambda$lambda$doSelect$0, this, action)));
			return numKeySelected;
		}
	}
}

void Selector::lambda$doSelect$0($Consumer* action, $SelectionKey* k) {
	$nc(action)->accept(k);
	if (!isOpen()) {
		$throwNew($ClosedSelectorException);
	}
}

void clinit$Selector($Class* class$) {
	Selector::$assertionsDisabled = !Selector::class$->desiredAssertionStatus();
}

Selector::Selector() {
}

$Class* Selector::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Selector$$Lambda$lambda$doSelect$0::classInfo$.name)) {
			return Selector$$Lambda$lambda$doSelect$0::load$(name, initialize);
		}
	}
	$loadClass(Selector, name, initialize, &_Selector_ClassInfo_, clinit$Selector, allocate$Selector);
	return class$;
}

$Class* Selector::class$ = nullptr;

		} // channels
	} // nio
} // java