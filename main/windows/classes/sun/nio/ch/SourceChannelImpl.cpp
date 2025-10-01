#include <sun/nio/ch/SourceChannelImpl.h>

#include <java/io/FileDescriptor.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/AsynchronousCloseException.h>
#include <java/nio/channels/Pipe$SourceChannel.h>
#include <java/nio/channels/SelectableChannel.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/nio/channels/spi/SelectorProvider.h>
#include <sun/nio/ch/Net.h>
#include <sun/nio/ch/SelectionKeyImpl.h>
#include <sun/nio/ch/SocketChannelImpl.h>
#include <sun/nio/ch/Util.h>
#include <jcpp.h>

#undef POLLIN
#undef POLLERR
#undef OP_READ
#undef POLLHUP
#undef POLLNVAL

using $ByteBufferArray = $Array<::java::nio::ByteBuffer>;
using $FileDescriptor = ::java::io::FileDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AsynchronousCloseException = ::java::nio::channels::AsynchronousCloseException;
using $Pipe$SourceChannel = ::java::nio::channels::Pipe$SourceChannel;
using $SelectableChannel = ::java::nio::channels::SelectableChannel;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $AbstractSelectableChannel = ::java::nio::channels::spi::AbstractSelectableChannel;
using $SelectorProvider = ::java::nio::channels::spi::SelectorProvider;
using $Net = ::sun::nio::ch::Net;
using $SelChImpl = ::sun::nio::ch::SelChImpl;
using $SelectionKeyImpl = ::sun::nio::ch::SelectionKeyImpl;
using $SocketChannelImpl = ::sun::nio::ch::SocketChannelImpl;
using $Util = ::sun::nio::ch::Util;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _SourceChannelImpl_FieldInfo_[] = {
	{"sc", "Ljava/nio/channels/SocketChannel;", nullptr, $PRIVATE | $FINAL, $field(SourceChannelImpl, sc)},
	{}
};

$MethodInfo _SourceChannelImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*close", "()V", nullptr, $PUBLIC | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/nio/channels/spi/SelectorProvider;Ljava/nio/channels/SocketChannel;)V", nullptr, 0, $method(static_cast<void(SourceChannelImpl::*)($SelectorProvider*,$SocketChannel*)>(&SourceChannelImpl::init$))},
	{"getFD", "()Ljava/io/FileDescriptor;", nullptr, $PUBLIC},
	{"getFDVal", "()I", nullptr, $PUBLIC},
	{"implCloseSelectableChannel", "()V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"implConfigureBlocking", "(Z)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"*isOpen", "()Z", nullptr, $PUBLIC | $FINAL},
	{"kill", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([Ljava/nio/ByteBuffer;II)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([Ljava/nio/ByteBuffer;)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"translateAndSetReadyOps", "(ILsun/nio/ch/SelectionKeyImpl;)Z", nullptr, $PUBLIC},
	{"translateAndUpdateReadyOps", "(ILsun/nio/ch/SelectionKeyImpl;)Z", nullptr, $PUBLIC},
	{"translateInterestOps", "(I)I", nullptr, $PUBLIC},
	{"translateReadyOps", "(IILsun/nio/ch/SelectionKeyImpl;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SourceChannelImpl_InnerClassesInfo_[] = {
	{"java.nio.channels.Pipe$SourceChannel", "java.nio.channels.Pipe", "SourceChannel", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SourceChannelImpl_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.SourceChannelImpl",
	"java.nio.channels.Pipe$SourceChannel",
	"sun.nio.ch.SelChImpl",
	_SourceChannelImpl_FieldInfo_,
	_SourceChannelImpl_MethodInfo_,
	nullptr,
	nullptr,
	_SourceChannelImpl_InnerClassesInfo_
};

$Object* allocate$SourceChannelImpl($Class* clazz) {
	return $of($alloc(SourceChannelImpl));
}

void SourceChannelImpl::close() {
	this->$Pipe$SourceChannel::close();
}

bool SourceChannelImpl::isOpen() {
	 return this->$Pipe$SourceChannel::isOpen();
}

int32_t SourceChannelImpl::hashCode() {
	 return this->$Pipe$SourceChannel::hashCode();
}

bool SourceChannelImpl::equals(Object$* obj) {
	 return this->$Pipe$SourceChannel::equals(obj);
}

$Object* SourceChannelImpl::clone() {
	 return this->$Pipe$SourceChannel::clone();
}

$String* SourceChannelImpl::toString() {
	 return this->$Pipe$SourceChannel::toString();
}

void SourceChannelImpl::finalize() {
	this->$Pipe$SourceChannel::finalize();
}

$FileDescriptor* SourceChannelImpl::getFD() {
	return $nc(($cast($SocketChannelImpl, this->sc)))->getFD();
}

int32_t SourceChannelImpl::getFDVal() {
	return $nc(($cast($SocketChannelImpl, this->sc)))->getFDVal();
}

void SourceChannelImpl::init$($SelectorProvider* sp, $SocketChannel* sc) {
	$Pipe$SourceChannel::init$(sp);
	$set(this, sc, sc);
}

void SourceChannelImpl::implCloseSelectableChannel() {
	if (!isRegistered()) {
		kill();
	}
}

void SourceChannelImpl::kill() {
	$nc(this->sc)->close();
}

void SourceChannelImpl::implConfigureBlocking(bool block) {
	$nc(this->sc)->configureBlocking(block);
}

bool SourceChannelImpl::translateReadyOps(int32_t ops, int32_t initialOps, $SelectionKeyImpl* ski) {
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
	if ((((int32_t)(ops & (uint32_t)(int32_t)$Net::POLLIN)) != 0) && (((int32_t)(intOps & (uint32_t)$SelectionKey::OP_READ)) != 0)) {
		newOps |= $SelectionKey::OP_READ;
	}
	ski->nioReadyOps(newOps);
	return ((int32_t)(newOps & (uint32_t)~oldOps)) != 0;
}

bool SourceChannelImpl::translateAndUpdateReadyOps(int32_t ops, $SelectionKeyImpl* ski) {
	return translateReadyOps(ops, $nc(ski)->nioReadyOps(), ski);
}

bool SourceChannelImpl::translateAndSetReadyOps(int32_t ops, $SelectionKeyImpl* ski) {
	return translateReadyOps(ops, 0, ski);
}

int32_t SourceChannelImpl::translateInterestOps(int32_t ops) {
	int32_t newOps = 0;
	if (((int32_t)(ops & (uint32_t)$SelectionKey::OP_READ)) != 0) {
		$init($Net);
		newOps |= $Net::POLLIN;
	}
	return newOps;
}

int32_t SourceChannelImpl::read($ByteBuffer* dst) {
	try {
		return $nc(this->sc)->read(dst);
	} catch ($AsynchronousCloseException&) {
		$var($AsynchronousCloseException, x, $catch());
		close();
		$throw(x);
	}
	$shouldNotReachHere();
}

int64_t SourceChannelImpl::read($ByteBufferArray* dsts, int32_t offset, int32_t length) {
	if ((offset < 0) || (length < 0) || (offset > $nc(dsts)->length - length)) {
		$throwNew($IndexOutOfBoundsException);
	}
	try {
		return read($($Util::subsequence(dsts, offset, length)));
	} catch ($AsynchronousCloseException&) {
		$var($AsynchronousCloseException, x, $catch());
		close();
		$throw(x);
	}
	$shouldNotReachHere();
}

int64_t SourceChannelImpl::read($ByteBufferArray* dsts) {
	try {
		return $nc(this->sc)->read(dsts);
	} catch ($AsynchronousCloseException&) {
		$var($AsynchronousCloseException, x, $catch());
		close();
		$throw(x);
	}
	$shouldNotReachHere();
}

SourceChannelImpl::SourceChannelImpl() {
}

$Class* SourceChannelImpl::load$($String* name, bool initialize) {
	$loadClass(SourceChannelImpl, name, initialize, &_SourceChannelImpl_ClassInfo_, allocate$SourceChannelImpl);
	return class$;
}

$Class* SourceChannelImpl::class$ = nullptr;

		} // ch
	} // nio
} // sun