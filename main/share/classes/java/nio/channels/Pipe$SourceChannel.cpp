#include <java/nio/channels/Pipe$SourceChannel.h>

#include <java/nio/channels/Pipe.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/spi/AbstractSelectableChannel.h>
#include <java/nio/channels/spi/SelectorProvider.h>
#include <jcpp.h>

#undef OP_READ

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Pipe = ::java::nio::channels::Pipe;
using $ScatteringByteChannel = ::java::nio::channels::ScatteringByteChannel;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $AbstractSelectableChannel = ::java::nio::channels::spi::AbstractSelectableChannel;
using $SelectorProvider = ::java::nio::channels::spi::SelectorProvider;

namespace java {
	namespace nio {
		namespace channels {

$MethodInfo _Pipe$SourceChannel_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*close", "()V", nullptr, $PUBLIC | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/nio/channels/spi/SelectorProvider;)V", nullptr, $PROTECTED, $method(static_cast<void(Pipe$SourceChannel::*)($SelectorProvider*)>(&Pipe$SourceChannel::init$))},
	{"*isOpen", "()Z", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"validOps", "()I", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _Pipe$SourceChannel_InnerClassesInfo_[] = {
	{"java.nio.channels.Pipe$SourceChannel", "java.nio.channels.Pipe", "SourceChannel", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Pipe$SourceChannel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.nio.channels.Pipe$SourceChannel",
	"java.nio.channels.spi.AbstractSelectableChannel",
	"java.nio.channels.ScatteringByteChannel",
	nullptr,
	_Pipe$SourceChannel_MethodInfo_,
	nullptr,
	nullptr,
	_Pipe$SourceChannel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.nio.channels.Pipe"
};

$Object* allocate$Pipe$SourceChannel($Class* clazz) {
	return $of($alloc(Pipe$SourceChannel));
}

void Pipe$SourceChannel::close() {
	this->$AbstractSelectableChannel::close();
}

bool Pipe$SourceChannel::isOpen() {
	 return this->$AbstractSelectableChannel::isOpen();
}

int32_t Pipe$SourceChannel::hashCode() {
	 return this->$AbstractSelectableChannel::hashCode();
}

bool Pipe$SourceChannel::equals(Object$* obj) {
	 return this->$AbstractSelectableChannel::equals(obj);
}

$Object* Pipe$SourceChannel::clone() {
	 return this->$AbstractSelectableChannel::clone();
}

$String* Pipe$SourceChannel::toString() {
	 return this->$AbstractSelectableChannel::toString();
}

void Pipe$SourceChannel::finalize() {
	this->$AbstractSelectableChannel::finalize();
}

void Pipe$SourceChannel::init$($SelectorProvider* provider) {
	$AbstractSelectableChannel::init$(provider);
}

int32_t Pipe$SourceChannel::validOps() {
	return $SelectionKey::OP_READ;
}

Pipe$SourceChannel::Pipe$SourceChannel() {
}

$Class* Pipe$SourceChannel::load$($String* name, bool initialize) {
	$loadClass(Pipe$SourceChannel, name, initialize, &_Pipe$SourceChannel_ClassInfo_, allocate$Pipe$SourceChannel);
	return class$;
}

$Class* Pipe$SourceChannel::class$ = nullptr;

		} // channels
	} // nio
} // java