#include <java/nio/channels/Channels$ReadableByteChannelImpl.h>

#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/Channels.h>
#include <java/nio/channels/ClosedChannelException.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <jcpp.h>

#undef TRANSFER_SIZE

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Channels = ::java::nio::channels::Channels;
using $ClosedChannelException = ::java::nio::channels::ClosedChannelException;
using $ReadableByteChannel = ::java::nio::channels::ReadableByteChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;

namespace java {
	namespace nio {
		namespace channels {

$FieldInfo _Channels$ReadableByteChannelImpl_FieldInfo_[] = {
	{"in", "Ljava/io/InputStream;", nullptr, $PRIVATE | $FINAL, $field(Channels$ReadableByteChannelImpl, in)},
	{"TRANSFER_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Channels$ReadableByteChannelImpl, TRANSFER_SIZE)},
	{"buf", "[B", nullptr, $PRIVATE, $field(Channels$ReadableByteChannelImpl, buf)},
	{"readLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(Channels$ReadableByteChannelImpl, readLock)},
	{}
};

$MethodInfo _Channels$ReadableByteChannelImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*close", "()V", nullptr, $PUBLIC | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, 0, $method(static_cast<void(Channels$ReadableByteChannelImpl::*)($InputStream*)>(&Channels$ReadableByteChannelImpl::init$))},
	{"implCloseChannel", "()V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"*isOpen", "()Z", nullptr, $PUBLIC | $FINAL},
	{"read", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Channels$ReadableByteChannelImpl_InnerClassesInfo_[] = {
	{"java.nio.channels.Channels$ReadableByteChannelImpl", "java.nio.channels.Channels", "ReadableByteChannelImpl", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Channels$ReadableByteChannelImpl_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.channels.Channels$ReadableByteChannelImpl",
	"java.nio.channels.spi.AbstractInterruptibleChannel",
	"java.nio.channels.ReadableByteChannel",
	_Channels$ReadableByteChannelImpl_FieldInfo_,
	_Channels$ReadableByteChannelImpl_MethodInfo_,
	nullptr,
	nullptr,
	_Channels$ReadableByteChannelImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.nio.channels.Channels"
};

$Object* allocate$Channels$ReadableByteChannelImpl($Class* clazz) {
	return $of($alloc(Channels$ReadableByteChannelImpl));
}

void Channels$ReadableByteChannelImpl::close() {
	this->$AbstractInterruptibleChannel::close();
}

bool Channels$ReadableByteChannelImpl::isOpen() {
	 return this->$AbstractInterruptibleChannel::isOpen();
}

int32_t Channels$ReadableByteChannelImpl::hashCode() {
	 return this->$AbstractInterruptibleChannel::hashCode();
}

bool Channels$ReadableByteChannelImpl::equals(Object$* obj) {
	 return this->$AbstractInterruptibleChannel::equals(obj);
}

$Object* Channels$ReadableByteChannelImpl::clone() {
	 return this->$AbstractInterruptibleChannel::clone();
}

$String* Channels$ReadableByteChannelImpl::toString() {
	 return this->$AbstractInterruptibleChannel::toString();
}

void Channels$ReadableByteChannelImpl::finalize() {
	this->$AbstractInterruptibleChannel::finalize();
}

void Channels$ReadableByteChannelImpl::init$($InputStream* in) {
	$AbstractInterruptibleChannel::init$();
	$set(this, buf, $new($bytes, 0));
	$set(this, readLock, $new($Object));
	$set(this, in, in);
}

int32_t Channels$ReadableByteChannelImpl::read($ByteBuffer* dst) {
	if (!isOpen()) {
		$throwNew($ClosedChannelException);
	}
	int32_t len = $nc(dst)->remaining();
	int32_t totalRead = 0;
	int32_t bytesRead = 0;
	$synchronized(this->readLock) {
		while (totalRead < len) {
			int32_t bytesToRead = $Math::min((len - totalRead), Channels$ReadableByteChannelImpl::TRANSFER_SIZE);
			if ($nc(this->buf)->length < bytesToRead) {
				$set(this, buf, $new($bytes, bytesToRead));
			}
			if ((totalRead > 0) && !($nc(this->in)->available() > 0)) {
				break;
			}
			{
				$var($Throwable, var$0, nullptr);
				try {
					begin();
					bytesRead = $nc(this->in)->read(this->buf, 0, bytesToRead);
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} /*finally*/ {
					end(bytesRead > 0);
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
			if (bytesRead < 0) {
				break;
			} else {
				totalRead += bytesRead;
			}
			dst->put(this->buf, 0, bytesRead);
		}
		if ((bytesRead < 0) && (totalRead == 0)) {
			return -1;
		}
		return totalRead;
	}
}

void Channels$ReadableByteChannelImpl::implCloseChannel() {
	$nc(this->in)->close();
}

Channels$ReadableByteChannelImpl::Channels$ReadableByteChannelImpl() {
}

$Class* Channels$ReadableByteChannelImpl::load$($String* name, bool initialize) {
	$loadClass(Channels$ReadableByteChannelImpl, name, initialize, &_Channels$ReadableByteChannelImpl_ClassInfo_, allocate$Channels$ReadableByteChannelImpl);
	return class$;
}

$Class* Channels$ReadableByteChannelImpl::class$ = nullptr;

		} // channels
	} // nio
} // java