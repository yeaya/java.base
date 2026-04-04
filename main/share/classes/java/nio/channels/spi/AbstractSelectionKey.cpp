#include <java/nio/channels/spi/AbstractSelectionKey.h>
#include <java/lang/InternalError.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/Selector.h>
#include <java/nio/channels/spi/AbstractSelector.h>
#include <sun/nio/ch/SelectionKeyImpl.h>
#include <sun/nio/ch/SelectorImpl.h>
#include <jcpp.h>

#undef INVALID
#undef TYPE

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $Selector = ::java::nio::channels::Selector;
using $AbstractSelector = ::java::nio::channels::spi::AbstractSelector;
using $SelectionKeyImpl = ::sun::nio::ch::SelectionKeyImpl;
using $SelectorImpl = ::sun::nio::ch::SelectorImpl;

namespace java {
	namespace nio {
		namespace channels {
			namespace spi {

$VarHandle* AbstractSelectionKey::INVALID = nullptr;

void AbstractSelectionKey::init$() {
	$SelectionKey::init$();
}

bool AbstractSelectionKey::isValid() {
	return !this->invalid;
}

void AbstractSelectionKey::invalidate() {
	this->invalid = true;
}

void AbstractSelectionKey::cancel() {
	$useLocalObjectStack();
	bool changed = $nc(AbstractSelectionKey::INVALID)->compareAndSet($$new($ObjectArray, {this, $$of(false), $$of(true)}));
	if (changed) {
		$var($Selector, sel, selector());
		if ($instanceOf($SelectorImpl, sel)) {
			$cast($SelectorImpl, sel)->cancel($cast($SelectionKeyImpl, this));
		} else {
			$nc($cast($AbstractSelector, sel))->cancel(this);
		}
	}
}

void AbstractSelectionKey::clinit$($Class* clazz) {
	$beforeCallerSensitive();
	{
		try {
			$var($MethodHandles$Lookup, l, $MethodHandles::lookup());
			$assignStatic(AbstractSelectionKey::INVALID, $nc(l)->findVarHandle(AbstractSelectionKey::class$, "invalid"_s, $Boolean::TYPE));
		} catch ($Exception& e) {
			$throwNew($InternalError, e);
		}
	}
}

AbstractSelectionKey::AbstractSelectionKey() {
}

$Class* AbstractSelectionKey::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INVALID", "Ljava/lang/invoke/VarHandle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractSelectionKey, INVALID)},
		{"invalid", "Z", nullptr, $PRIVATE | $VOLATILE, $field(AbstractSelectionKey, invalid)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(AbstractSelectionKey, init$, void)},
		{"cancel", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(AbstractSelectionKey, cancel, void)},
		{"invalidate", "()V", nullptr, 0, $virtualMethod(AbstractSelectionKey, invalidate, void)},
		{"isValid", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(AbstractSelectionKey, isValid, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.nio.channels.spi.AbstractSelectionKey",
		"java.nio.channels.SelectionKey",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AbstractSelectionKey, name, initialize, &classInfo$$, AbstractSelectionKey::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractSelectionKey);
	});
	return class$;
}

$Class* AbstractSelectionKey::class$ = nullptr;

			} // spi
		} // channels
	} // nio
} // java