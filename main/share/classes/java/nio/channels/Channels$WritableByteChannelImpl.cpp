#include <java/nio/channels/Channels$WritableByteChannelImpl.h>

#include <java/io/OutputStream.h>
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

using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Channels = ::java::nio::channels::Channels;
using $ClosedChannelException = ::java::nio::channels::ClosedChannelException;
using $WritableByteChannel = ::java::nio::channels::WritableByteChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;

namespace java {
	namespace nio {
		namespace channels {

$FieldInfo _Channels$WritableByteChannelImpl_FieldInfo_[] = {
	{"out", "Ljava/io/OutputStream;", nullptr, $PRIVATE | $FINAL, $field(Channels$WritableByteChannelImpl, out)},
	{"TRANSFER_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Channels$WritableByteChannelImpl, TRANSFER_SIZE)},
	{"buf", "[B", nullptr, $PRIVATE, $field(Channels$WritableByteChannelImpl, buf)},
	{"writeLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(Channels$WritableByteChannelImpl, writeLock)},
	{}
};

$MethodInfo _Channels$WritableByteChannelImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*close", "()V", nullptr, $PUBLIC | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/io/OutputStream;)V", nullptr, 0, $method(static_cast<void(Channels$WritableByteChannelImpl::*)($OutputStream*)>(&Channels$WritableByteChannelImpl::init$))},
	{"implCloseChannel", "()V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"*isOpen", "()Z", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"write", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _Channels$WritableByteChannelImpl_InnerClassesInfo_[] = {
	{"java.nio.channels.Channels$WritableByteChannelImpl", "java.nio.channels.Channels", "WritableByteChannelImpl", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Channels$WritableByteChannelImpl_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.channels.Channels$WritableByteChannelImpl",
	"java.nio.channels.spi.AbstractInterruptibleChannel",
	"java.nio.channels.WritableByteChannel",
	_Channels$WritableByteChannelImpl_FieldInfo_,
	_Channels$WritableByteChannelImpl_MethodInfo_,
	nullptr,
	nullptr,
	_Channels$WritableByteChannelImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.nio.channels.Channels"
};

$Object* allocate$Channels$WritableByteChannelImpl($Class* clazz) {
	return $of($alloc(Channels$WritableByteChannelImpl));
}

void Channels$WritableByteChannelImpl::close() {
	this->$AbstractInterruptibleChannel::close();
}

bool Channels$WritableByteChannelImpl::isOpen() {
	 return this->$AbstractInterruptibleChannel::isOpen();
}

int32_t Channels$WritableByteChannelImpl::hashCode() {
	 return this->$AbstractInterruptibleChannel::hashCode();
}

bool Channels$WritableByteChannelImpl::equals(Object$* obj) {
	 return this->$AbstractInterruptibleChannel::equals(obj);
}

$Object* Channels$WritableByteChannelImpl::clone() {
	 return this->$AbstractInterruptibleChannel::clone();
}

$String* Channels$WritableByteChannelImpl::toString() {
	 return this->$AbstractInterruptibleChannel::toString();
}

void Channels$WritableByteChannelImpl::finalize() {
	this->$AbstractInterruptibleChannel::finalize();
}

void Channels$WritableByteChannelImpl::init$($OutputStream* out) {
	$AbstractInterruptibleChannel::init$();
	$set(this, buf, $new($bytes, 0));
	$set(this, writeLock, $new($Object));
	$set(this, out, out);
}

int32_t Channels$WritableByteChannelImpl::write($ByteBuffer* src) {
	$useLocalCurrentObjectStackCache();
	if (!isOpen()) {
		$throwNew($ClosedChannelException);
	}
	int32_t len = $nc(src)->remaining();
	int32_t totalWritten = 0;
	$synchronized(this->writeLock) {
		while (totalWritten < len) {
			int32_t bytesToWrite = $Math::min((len - totalWritten), Channels$WritableByteChannelImpl::TRANSFER_SIZE);
			if ($nc(this->buf)->length < bytesToWrite) {
				$set(this, buf, $new($bytes, bytesToWrite));
			}
			src->get(this->buf, 0, bytesToWrite);
			{
				$var($Throwable, var$0, nullptr);
				try {
					begin();
					$nc(this->out)->write(this->buf, 0, bytesToWrite);
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} /*finally*/ {
					end(bytesToWrite > 0);
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
			totalWritten += bytesToWrite;
		}
		return totalWritten;
	}
}

void Channels$WritableByteChannelImpl::implCloseChannel() {
	$nc(this->out)->close();
}

Channels$WritableByteChannelImpl::Channels$WritableByteChannelImpl() {
}

$Class* Channels$WritableByteChannelImpl::load$($String* name, bool initialize) {
	$loadClass(Channels$WritableByteChannelImpl, name, initialize, &_Channels$WritableByteChannelImpl_ClassInfo_, allocate$Channels$WritableByteChannelImpl);
	return class$;
}

$Class* Channels$WritableByteChannelImpl::class$ = nullptr;

		} // channels
	} // nio
} // java