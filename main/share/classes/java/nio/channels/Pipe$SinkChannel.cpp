#include <java/nio/channels/Pipe$SinkChannel.h>
#include <java/nio/channels/Pipe.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/spi/AbstractSelectableChannel.h>
#include <java/nio/channels/spi/SelectorProvider.h>
#include <jcpp.h>

#undef OP_WRITE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $AbstractSelectableChannel = ::java::nio::channels::spi::AbstractSelectableChannel;
using $SelectorProvider = ::java::nio::channels::spi::SelectorProvider;

namespace java {
	namespace nio {
		namespace channels {

void Pipe$SinkChannel::close() {
	this->$AbstractSelectableChannel::close();
}

bool Pipe$SinkChannel::isOpen() {
	 return this->$AbstractSelectableChannel::isOpen();
}

int32_t Pipe$SinkChannel::hashCode() {
	 return this->$AbstractSelectableChannel::hashCode();
}

bool Pipe$SinkChannel::equals(Object$* obj) {
	 return this->$AbstractSelectableChannel::equals(obj);
}

$Object* Pipe$SinkChannel::clone() {
	 return this->$AbstractSelectableChannel::clone();
}

$String* Pipe$SinkChannel::toString() {
	 return this->$AbstractSelectableChannel::toString();
}

void Pipe$SinkChannel::finalize() {
	this->$AbstractSelectableChannel::finalize();
}

void Pipe$SinkChannel::init$($SelectorProvider* provider) {
	$AbstractSelectableChannel::init$(provider);
}

int32_t Pipe$SinkChannel::validOps() {
	return $SelectionKey::OP_WRITE;
}

Pipe$SinkChannel::Pipe$SinkChannel() {
}

$Class* Pipe$SinkChannel::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*close", "()V", nullptr, $PUBLIC | $FINAL},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/nio/channels/spi/SelectorProvider;)V", nullptr, $PROTECTED, $method(Pipe$SinkChannel, init$, void, $SelectorProvider*)},
		{"*isOpen", "()Z", nullptr, $PUBLIC | $FINAL},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"validOps", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(Pipe$SinkChannel, validOps, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.nio.channels.Pipe$SinkChannel", "java.nio.channels.Pipe", "SinkChannel", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.nio.channels.Pipe$SinkChannel",
		"java.nio.channels.spi.AbstractSelectableChannel",
		"java.nio.channels.GatheringByteChannel",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.nio.channels.Pipe"
	};
	$loadClass(Pipe$SinkChannel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Pipe$SinkChannel));
	});
	return class$;
}

$Class* Pipe$SinkChannel::class$ = nullptr;

		} // channels
	} // nio
} // java