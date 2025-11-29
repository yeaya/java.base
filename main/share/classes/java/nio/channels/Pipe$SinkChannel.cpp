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

$MethodInfo _Pipe$SinkChannel_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*close", "()V", nullptr, $PUBLIC | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/nio/channels/spi/SelectorProvider;)V", nullptr, $PROTECTED, $method(static_cast<void(Pipe$SinkChannel::*)($SelectorProvider*)>(&Pipe$SinkChannel::init$))},
	{"*isOpen", "()Z", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"validOps", "()I", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _Pipe$SinkChannel_InnerClassesInfo_[] = {
	{"java.nio.channels.Pipe$SinkChannel", "java.nio.channels.Pipe", "SinkChannel", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Pipe$SinkChannel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.nio.channels.Pipe$SinkChannel",
	"java.nio.channels.spi.AbstractSelectableChannel",
	"java.nio.channels.GatheringByteChannel",
	nullptr,
	_Pipe$SinkChannel_MethodInfo_,
	nullptr,
	nullptr,
	_Pipe$SinkChannel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.nio.channels.Pipe"
};

$Object* allocate$Pipe$SinkChannel($Class* clazz) {
	return $of($alloc(Pipe$SinkChannel));
}

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
	$loadClass(Pipe$SinkChannel, name, initialize, &_Pipe$SinkChannel_ClassInfo_, allocate$Pipe$SinkChannel);
	return class$;
}

$Class* Pipe$SinkChannel::class$ = nullptr;

		} // channels
	} // nio
} // java