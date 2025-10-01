#include <java/nio/channels/SelectableChannel.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/Selector.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <java/nio/channels/spi/SelectorProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $Selector = ::java::nio::channels::Selector;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $SelectorProvider = ::java::nio::channels::spi::SelectorProvider;

namespace java {
	namespace nio {
		namespace channels {

$MethodInfo _SelectableChannel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(SelectableChannel::*)()>(&SelectableChannel::init$))},
	{"blockingLock", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"configureBlocking", "(Z)Ljava/nio/channels/SelectableChannel;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"isBlocking", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isRegistered", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"keyFor", "(Ljava/nio/channels/Selector;)Ljava/nio/channels/SelectionKey;", nullptr, $PUBLIC | $ABSTRACT},
	{"provider", "()Ljava/nio/channels/spi/SelectorProvider;", nullptr, $PUBLIC | $ABSTRACT},
	{"register", "(Ljava/nio/channels/Selector;ILjava/lang/Object;)Ljava/nio/channels/SelectionKey;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.nio.channels.ClosedChannelException"},
	{"register", "(Ljava/nio/channels/Selector;I)Ljava/nio/channels/SelectionKey;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$SelectionKey*(SelectableChannel::*)($Selector*,int32_t)>(&SelectableChannel::register$)), "java.nio.channels.ClosedChannelException"},
	{"validOps", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SelectableChannel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.nio.channels.SelectableChannel",
	"java.nio.channels.spi.AbstractInterruptibleChannel",
	nullptr,
	nullptr,
	_SelectableChannel_MethodInfo_
};

$Object* allocate$SelectableChannel($Class* clazz) {
	return $of($alloc(SelectableChannel));
}

void SelectableChannel::init$() {
	$AbstractInterruptibleChannel::init$();
}

$SelectionKey* SelectableChannel::register$($Selector* sel, int32_t ops) {
	return register$(sel, ops, nullptr);
}

SelectableChannel::SelectableChannel() {
}

$Class* SelectableChannel::load$($String* name, bool initialize) {
	$loadClass(SelectableChannel, name, initialize, &_SelectableChannel_ClassInfo_, allocate$SelectableChannel);
	return class$;
}

$Class* SelectableChannel::class$ = nullptr;

		} // channels
	} // nio
} // java