#include <java/nio/channels/SelectionKey.h>

#include <java/lang/Array.h>
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
#include <java/nio/channels/SelectableChannel.h>
#include <java/nio/channels/Selector.h>
#include <jcpp.h>

#undef OP_CONNECT
#undef OP_ACCEPT
#undef ATTACHMENT
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
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(SelectionKey::*)()>(&SelectionKey::init$))},
	{"attach", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Object*(SelectionKey::*)(Object$*)>(&SelectionKey::attach))},
	{"attachment", "()Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Object*(SelectionKey::*)()>(&SelectionKey::attachment))},
	{"cancel", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"channel", "()Ljava/nio/channels/SelectableChannel;", nullptr, $PUBLIC | $ABSTRACT},
	{"interestOps", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"interestOps", "(I)Ljava/nio/channels/SelectionKey;", nullptr, $PUBLIC | $ABSTRACT},
	{"interestOpsAnd", "(I)I", nullptr, $PUBLIC},
	{"interestOpsOr", "(I)I", nullptr, $PUBLIC},
	{"isAcceptable", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(SelectionKey::*)()>(&SelectionKey::isAcceptable))},
	{"isConnectable", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(SelectionKey::*)()>(&SelectionKey::isConnectable))},
	{"isReadable", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(SelectionKey::*)()>(&SelectionKey::isReadable))},
	{"isValid", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isWritable", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(SelectionKey::*)()>(&SelectionKey::isWritable))},
	{"readyOps", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"selector", "()Ljava/nio/channels/Selector;", nullptr, $PUBLIC | $ABSTRACT},
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
			$load($Object);
			$assignStatic(SelectionKey::ATTACHMENT, $nc(l)->findVarHandle(SelectionKey::class$, "attachment"_s, $Object::class$));
		} catch ($Exception&) {
			$var($Exception, e, $catch());
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