#include <sun/nio/ch/SinkChannelImpl.h>

#include <java/io/FileDescriptor.h>
#include <java/lang/Error.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/net/SocketOption.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/AsynchronousCloseException.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/nio/channels/Pipe$SinkChannel.h>
#include <java/nio/channels/SelectableChannel.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/nio/channels/spi/SelectorProvider.h>
#include <sun/nio/ch/Net.h>
#include <sun/nio/ch/SelectionKeyImpl.h>
#include <sun/nio/ch/SocketChannelImpl.h>
#include <sun/nio/ch/Util.h>
#include <jcpp.h>

#undef OP_WRITE
#undef POLLERR
#undef POLLHUP
#undef POLLNVAL
#undef POLLOUT

using $ByteBufferArray = $Array<::java::nio::ByteBuffer>;
using $FileDescriptor = ::java::io::FileDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketOption = ::java::net::SocketOption;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AsynchronousCloseException = ::java::nio::channels::AsynchronousCloseException;
using $Pipe$SinkChannel = ::java::nio::channels::Pipe$SinkChannel;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $SelectorProvider = ::java::nio::channels::spi::SelectorProvider;
using $Net = ::sun::nio::ch::Net;
using $SelectionKeyImpl = ::sun::nio::ch::SelectionKeyImpl;
using $SocketChannelImpl = ::sun::nio::ch::SocketChannelImpl;
using $Util = ::sun::nio::ch::Util;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _SinkChannelImpl_FieldInfo_[] = {
	{"sc", "Lsun/nio/ch/SocketChannelImpl;", nullptr, $PRIVATE | $FINAL, $field(SinkChannelImpl, sc)},
	{}
};

$MethodInfo _SinkChannelImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*close", "()V", nullptr, $PUBLIC | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/nio/channels/spi/SelectorProvider;Ljava/nio/channels/SocketChannel;)V", nullptr, 0, $method(static_cast<void(SinkChannelImpl::*)($SelectorProvider*,$SocketChannel*)>(&SinkChannelImpl::init$))},
	{"getFD", "()Ljava/io/FileDescriptor;", nullptr, $PUBLIC},
	{"getFDVal", "()I", nullptr, $PUBLIC},
	{"implCloseSelectableChannel", "()V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"implConfigureBlocking", "(Z)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"isNetSocket", "()Z", nullptr, 0},
	{"*isOpen", "()Z", nullptr, $PUBLIC | $FINAL},
	{"kill", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"setOption", "(Ljava/net/SocketOption;Ljava/lang/Object;)V", "<T:Ljava/lang/Object;>(Ljava/net/SocketOption<TT;>;TT;)V", 0, nullptr, "java.io.IOException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"translateAndSetReadyOps", "(ILsun/nio/ch/SelectionKeyImpl;)Z", nullptr, $PUBLIC},
	{"translateAndUpdateReadyOps", "(ILsun/nio/ch/SelectionKeyImpl;)Z", nullptr, $PUBLIC},
	{"translateInterestOps", "(I)I", nullptr, $PUBLIC},
	{"translateReadyOps", "(IILsun/nio/ch/SelectionKeyImpl;)Z", nullptr, $PUBLIC},
	{"write", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([Ljava/nio/ByteBuffer;)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([Ljava/nio/ByteBuffer;II)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _SinkChannelImpl_InnerClassesInfo_[] = {
	{"java.nio.channels.Pipe$SinkChannel", "java.nio.channels.Pipe", "SinkChannel", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SinkChannelImpl_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.SinkChannelImpl",
	"java.nio.channels.Pipe$SinkChannel",
	"sun.nio.ch.SelChImpl",
	_SinkChannelImpl_FieldInfo_,
	_SinkChannelImpl_MethodInfo_,
	nullptr,
	nullptr,
	_SinkChannelImpl_InnerClassesInfo_
};

$Object* allocate$SinkChannelImpl($Class* clazz) {
	return $of($alloc(SinkChannelImpl));
}

void SinkChannelImpl::close() {
	this->$Pipe$SinkChannel::close();
}

bool SinkChannelImpl::isOpen() {
	 return this->$Pipe$SinkChannel::isOpen();
}

int32_t SinkChannelImpl::hashCode() {
	 return this->$Pipe$SinkChannel::hashCode();
}

bool SinkChannelImpl::equals(Object$* obj) {
	 return this->$Pipe$SinkChannel::equals(obj);
}

$Object* SinkChannelImpl::clone() {
	 return this->$Pipe$SinkChannel::clone();
}

$String* SinkChannelImpl::toString() {
	 return this->$Pipe$SinkChannel::toString();
}

void SinkChannelImpl::finalize() {
	this->$Pipe$SinkChannel::finalize();
}

$FileDescriptor* SinkChannelImpl::getFD() {
	return $nc(this->sc)->getFD();
}

int32_t SinkChannelImpl::getFDVal() {
	return $nc(this->sc)->getFDVal();
}

void SinkChannelImpl::init$($SelectorProvider* sp, $SocketChannel* sc) {
	$Pipe$SinkChannel::init$(sp);
	$set(this, sc, $cast($SocketChannelImpl, sc));
}

bool SinkChannelImpl::isNetSocket() {
	return $nc(this->sc)->isNetSocket();
}

void SinkChannelImpl::setOption($SocketOption* name, Object$* value) {
	$nc(this->sc)->setOption(name, value);
}

void SinkChannelImpl::implCloseSelectableChannel() {
	if (!isRegistered()) {
		kill();
	}
}

void SinkChannelImpl::kill() {
	$nc(this->sc)->close();
}

void SinkChannelImpl::implConfigureBlocking(bool block) {
	$nc(this->sc)->configureBlocking(block);
}

bool SinkChannelImpl::translateReadyOps(int32_t ops, int32_t initialOps, $SelectionKeyImpl* ski) {
	int32_t intOps = $nc(ski)->nioInterestOps();
	int32_t oldOps = ski->nioReadyOps();
	int32_t newOps = initialOps;
	$init($Net);
	if (((int32_t)(ops & (uint32_t)(int32_t)$Net::POLLNVAL)) != 0) {
		$throwNew($Error, "POLLNVAL detected"_s);
	}
	if (((int32_t)(ops & (uint32_t)($Net::POLLERR | $Net::POLLHUP))) != 0) {
		newOps = intOps;
		ski->nioReadyOps(newOps);
		return ((int32_t)(newOps & (uint32_t)~oldOps)) != 0;
	}
	if ((((int32_t)(ops & (uint32_t)(int32_t)$Net::POLLOUT)) != 0) && (((int32_t)(intOps & (uint32_t)$SelectionKey::OP_WRITE)) != 0)) {
		newOps |= $SelectionKey::OP_WRITE;
	}
	ski->nioReadyOps(newOps);
	return ((int32_t)(newOps & (uint32_t)~oldOps)) != 0;
}

bool SinkChannelImpl::translateAndUpdateReadyOps(int32_t ops, $SelectionKeyImpl* ski) {
	return translateReadyOps(ops, $nc(ski)->nioReadyOps(), ski);
}

bool SinkChannelImpl::translateAndSetReadyOps(int32_t ops, $SelectionKeyImpl* ski) {
	return translateReadyOps(ops, 0, ski);
}

int32_t SinkChannelImpl::translateInterestOps(int32_t ops) {
	int32_t newOps = 0;
	if (((int32_t)(ops & (uint32_t)$SelectionKey::OP_WRITE)) != 0) {
		$init($Net);
		newOps |= $Net::POLLOUT;
	}
	return newOps;
}

int32_t SinkChannelImpl::write($ByteBuffer* src) {
	try {
		return $nc(this->sc)->write(src);
	} catch ($AsynchronousCloseException& x) {
		close();
		$throw(x);
	}
	$shouldNotReachHere();
}

int64_t SinkChannelImpl::write($ByteBufferArray* srcs) {
	try {
		return $nc(this->sc)->write(srcs);
	} catch ($AsynchronousCloseException& x) {
		close();
		$throw(x);
	}
	$shouldNotReachHere();
}

int64_t SinkChannelImpl::write($ByteBufferArray* srcs, int32_t offset, int32_t length) {
	if ((offset < 0) || (length < 0) || (offset > $nc(srcs)->length - length)) {
		$throwNew($IndexOutOfBoundsException);
	}
	try {
		return write($($Util::subsequence(srcs, offset, length)));
	} catch ($AsynchronousCloseException& x) {
		close();
		$throw(x);
	}
	$shouldNotReachHere();
}

SinkChannelImpl::SinkChannelImpl() {
}

$Class* SinkChannelImpl::load$($String* name, bool initialize) {
	$loadClass(SinkChannelImpl, name, initialize, &_SinkChannelImpl_ClassInfo_, allocate$SinkChannelImpl);
	return class$;
}

$Class* SinkChannelImpl::class$ = nullptr;

		} // ch
	} // nio
} // sun