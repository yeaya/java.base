#include <java/nio/channels/SelectionKey.h>

#include <java/lang/InternalError.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/nio/channels/SelectableChannel.h>
#include <java/nio/channels/Selector.h>
#include <jcpp.h>

#undef ATTACHMENT
#undef OP_ACCEPT
#undef OP_CONNECT
#undef OP_READ
#undef OP_WRITE

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $SelectableChannel = ::java::nio::channels::SelectableChannel;
using $Selector = ::java::nio::channels::Selector;

namespace java {
	namespace nio {
		namespace channels {

$FieldInfo _SelectionKey_FieldInfo_[] = {
	{"OP_READ", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SelectionKey, OP_READ)},
	{"OP_WRITE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SelectionKey, OP_WRITE)},
	{"OP_CONNECT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SelectionKey, OP_CONNECT)},
	{"OP_ACCEPT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SelectionKey, OP_ACCEPT)},
	{"ATTACHMENT", "Ljava/lang/invoke/VarHandle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SelectionKey, ATTACHMENT)},
	{"attachment", "Ljava/lang/Object;", nullptr, $PRIVATE | $VOLATILE, $field(SelectionKey, attachment$)},
	{}
};

$MethodInfo _SelectionKey_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(SelectionKey, init$, void)},
	{"attach", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $method(SelectionKey, attach, $Object*, Object$*)},
	{"attachment", "()Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $method(SelectionKey, attachment, $Object*)},
	{"cancel", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SelectionKey, cancel, void)},
	{"channel", "()Ljava/nio/channels/SelectableChannel;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SelectionKey, channel, $SelectableChannel*)},
	{"interestOps", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SelectionKey, interestOps, int32_t)},
	{"interestOps", "(I)Ljava/nio/channels/SelectionKey;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SelectionKey, interestOps, SelectionKey*, int32_t)},
	{"interestOpsAnd", "(I)I", nullptr, $PUBLIC, $virtualMethod(SelectionKey, interestOpsAnd, int32_t, int32_t)},
	{"interestOpsOr", "(I)I", nullptr, $PUBLIC, $virtualMethod(SelectionKey, interestOpsOr, int32_t, int32_t)},
	{"isAcceptable", "()Z", nullptr, $PUBLIC | $FINAL, $method(SelectionKey, isAcceptable, bool)},
	{"isConnectable", "()Z", nullptr, $PUBLIC | $FINAL, $method(SelectionKey, isConnectable, bool)},
	{"isReadable", "()Z", nullptr, $PUBLIC | $FINAL, $method(SelectionKey, isReadable, bool)},
	{"isValid", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SelectionKey, isValid, bool)},
	{"isWritable", "()Z", nullptr, $PUBLIC | $FINAL, $method(SelectionKey, isWritable, bool)},
	{"readyOps", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SelectionKey, readyOps, int32_t)},
	{"selector", "()Ljava/nio/channels/Selector;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SelectionKey, selector, $Selector*)},
	{}
};

$ClassInfo _SelectionKey_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.nio.channels.SelectionKey",
	"java.lang.Object",
	nullptr,
	_SelectionKey_FieldInfo_,
	_SelectionKey_MethodInfo_
};

$Object* allocate$SelectionKey($Class* clazz) {
	return $of($alloc(SelectionKey));
}

$VarHandle* SelectionKey::ATTACHMENT = nullptr;

void SelectionKey::init$() {
}

int32_t SelectionKey::interestOpsOr(int32_t ops) {
	$synchronized(this) {
		int32_t oldVal = interestOps();
		interestOps(oldVal | ops);
		return oldVal;
	}
}

int32_t SelectionKey::interestOpsAnd(int32_t ops) {
	$synchronized(this) {
		int32_t oldVal = interestOps();
		interestOps((int32_t)(oldVal & (uint32_t)ops));
		return oldVal;
	}
}

bool SelectionKey::isReadable() {
	return ((int32_t)(readyOps() & (uint32_t)SelectionKey::OP_READ)) != 0;
}

bool SelectionKey::isWritable() {
	return ((int32_t)(readyOps() & (uint32_t)SelectionKey::OP_WRITE)) != 0;
}

bool SelectionKey::isConnectable() {
	return ((int32_t)(readyOps() & (uint32_t)SelectionKey::OP_CONNECT)) != 0;
}

bool SelectionKey::isAcceptable() {
	return ((int32_t)(readyOps() & (uint32_t)SelectionKey::OP_ACCEPT)) != 0;
}

$Object* SelectionKey::attach(Object$* ob) {
	return $of($nc(SelectionKey::ATTACHMENT)->getAndSet($$new($ObjectArray, {$of(this), ob})));
}

$Object* SelectionKey::attachment() {
	return $of(this->attachment$);
}

void clinit$SelectionKey($Class* class$) {
	$beforeCallerSensitive();
	{
		try {
			$var($MethodHandles$Lookup, l, $MethodHandles::lookup());
			$assignStatic(SelectionKey::ATTACHMENT, $nc(l)->findVarHandle(SelectionKey::class$, "attachment"_s, $Object::class$));
		} catch ($Exception& e) {
			$throwNew($InternalError, static_cast<$Throwable*>(e));
		}
	}
}

SelectionKey::SelectionKey() {
}

$Class* SelectionKey::load$($String* name, bool initialize) {
	$loadClass(SelectionKey, name, initialize, &_SelectionKey_ClassInfo_, clinit$SelectionKey, allocate$SelectionKey);
	return class$;
}

$Class* SelectionKey::class$ = nullptr;

		} // channels
	} // nio
} // java