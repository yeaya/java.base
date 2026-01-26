#include <java/nio/channels/SelectableChannel.h>

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
	{"<init>", "()V", nullptr, $PROTECTED, $method(SelectableChannel, init$, void)},
	{"blockingLock", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SelectableChannel, blockingLock, $Object*)},
	{"configureBlocking", "(Z)Ljava/nio/channels/SelectableChannel;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SelectableChannel, configureBlocking, SelectableChannel*, bool), "java.io.IOException"},
	{"isBlocking", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SelectableChannel, isBlocking, bool)},
	{"isRegistered", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SelectableChannel, isRegistered, bool)},
	{"keyFor", "(Ljava/nio/channels/Selector;)Ljava/nio/channels/SelectionKey;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SelectableChannel, keyFor, $SelectionKey*, $Selector*)},
	{"provider", "()Ljava/nio/channels/spi/SelectorProvider;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SelectableChannel, provider, $SelectorProvider*)},
	{"register", "(Ljava/nio/channels/Selector;ILjava/lang/Object;)Ljava/nio/channels/SelectionKey;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SelectableChannel, register$, $SelectionKey*, $Selector*, int32_t, Object$*), "java.nio.channels.ClosedChannelException"},
	{"register", "(Ljava/nio/channels/Selector;I)Ljava/nio/channels/SelectionKey;", nullptr, $PUBLIC | $FINAL, $method(SelectableChannel, register$, $SelectionKey*, $Selector*, int32_t), "java.nio.channels.ClosedChannelException"},
	{"validOps", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SelectableChannel, validOps, int32_t)},
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