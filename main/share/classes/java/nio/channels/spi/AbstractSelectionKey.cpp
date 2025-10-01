#include <java/nio/channels/spi/AbstractSelectionKey.h>

#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _AbstractSelectionKey_FieldInfo_[] = {
	{"INVALID", "Ljava/lang/invoke/VarHandle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractSelectionKey, INVALID)},
	{"invalid", "Z", nullptr, $PRIVATE | $VOLATILE, $field(AbstractSelectionKey, invalid)},
	{}
};

$MethodInfo _AbstractSelectionKey_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(AbstractSelectionKey::*)()>(&AbstractSelectionKey::init$))},
	{"cancel", "()V", nullptr, $PUBLIC | $FINAL},
	{"invalidate", "()V", nullptr, 0},
	{"isValid", "()Z", nullptr, $PUBLIC | $FINAL},
	{}
};

$ClassInfo _AbstractSelectionKey_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.nio.channels.spi.AbstractSelectionKey",
	"java.nio.channels.SelectionKey",
	nullptr,
	_AbstractSelectionKey_FieldInfo_,
	_AbstractSelectionKey_MethodInfo_
};

$Object* allocate$AbstractSelectionKey($Class* clazz) {
	return $of($alloc(AbstractSelectionKey));
}

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
	bool changed = $nc(AbstractSelectionKey::INVALID)->compareAndSet($$new($ObjectArray, {$of(this), $$of(false), $$of(true)}));
	if (changed) {
		$var($Selector, sel, selector());
		if ($instanceOf($SelectorImpl, sel)) {
			$nc(($cast($SelectorImpl, sel)))->cancel($cast($SelectionKeyImpl, this));
		} else {
			$nc(($cast($AbstractSelector, sel)))->cancel(this);
		}
	}
}

void clinit$AbstractSelectionKey($Class* class$) {
	$beforeCallerSensitive();
	{
		try {
			$var($MethodHandles$Lookup, l, $MethodHandles::lookup());
			$init($Boolean);
			$assignStatic(AbstractSelectionKey::INVALID, $nc(l)->findVarHandle(AbstractSelectionKey::class$, "invalid"_s, $Boolean::TYPE));
		} catch ($Exception&) {
			$var($Exception, e, $catch());
			$throwNew($InternalError, static_cast<$Throwable*>(e));
		}
	}
}

AbstractSelectionKey::AbstractSelectionKey() {
}

$Class* AbstractSelectionKey::load$($String* name, bool initialize) {
	$loadClass(AbstractSelectionKey, name, initialize, &_AbstractSelectionKey_ClassInfo_, clinit$AbstractSelectionKey, allocate$AbstractSelectionKey);
	return class$;
}

$Class* AbstractSelectionKey::class$ = nullptr;

			} // spi
		} // channels
	} // nio
} // java