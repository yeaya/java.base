#include <java/nio/channels/Channels$3.h>

#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/AsynchronousByteChannel.h>
#include <java/nio/channels/Channels.h>
#include <java/util/concurrent/ExecutionException.h>
#include <java/util/concurrent/Future.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AsynchronousByteChannel = ::java::nio::channels::AsynchronousByteChannel;
using $AsynchronousChannel = ::java::nio::channels::AsynchronousChannel;
using $Channels = ::java::nio::channels::Channels;
using $ExecutionException = ::java::util::concurrent::ExecutionException;
using $Future = ::java::util::concurrent::Future;

namespace java {
	namespace nio {
		namespace channels {

$FieldInfo _Channels$3_FieldInfo_[] = {
	{"val$ch", "Ljava/nio/channels/AsynchronousByteChannel;", nullptr, $FINAL | $SYNTHETIC, $field(Channels$3, val$ch)},
	{"bb", "Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $field(Channels$3, bb)},
	{"bs", "[B", nullptr, $PRIVATE, $field(Channels$3, bs)},
	{"b1", "[B", nullptr, $PRIVATE, $field(Channels$3, b1)},
	{}
};

$MethodInfo _Channels$3_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/AsynchronousByteChannel;)V", nullptr, 0, $method(static_cast<void(Channels$3::*)($AsynchronousByteChannel*)>(&Channels$3::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"write", "([BII)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _Channels$3_EnclosingMethodInfo_ = {
	"java.nio.channels.Channels",
	"newOutputStream",
	"(Ljava/nio/channels/AsynchronousByteChannel;)Ljava/io/OutputStream;"
};

$InnerClassInfo _Channels$3_InnerClassesInfo_[] = {
	{"java.nio.channels.Channels$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Channels$3_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.channels.Channels$3",
	"java.io.OutputStream",
	nullptr,
	_Channels$3_FieldInfo_,
	_Channels$3_MethodInfo_,
	nullptr,
	&_Channels$3_EnclosingMethodInfo_,
	_Channels$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.nio.channels.Channels"
};

$Object* allocate$Channels$3($Class* clazz) {
	return $of($alloc(Channels$3));
}

void Channels$3::init$($AsynchronousByteChannel* val$ch) {
	$set(this, val$ch, val$ch);
	$OutputStream::init$();
}

void Channels$3::write(int32_t b) {
	$synchronized(this) {
		if (this->b1 == nullptr) {
			$set(this, b1, $new($bytes, 1));
		}
		$nc(this->b1)->set(0, (int8_t)b);
		this->write(this->b1);
	}
}

void Channels$3::write($bytes* bs, int32_t off, int32_t len) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if ((off < 0) || (off > $nc(bs)->length) || (len < 0) || ((off + len) > $nc(bs)->length) || ((off + len) < 0)) {
			$throwNew($IndexOutOfBoundsException);
		} else if (len == 0) {
			return;
		}
		$var($ByteBuffer, bb, (this->bs == bs) ? this->bb : $ByteBuffer::wrap(bs));
		$nc(bb)->limit($Math::min(off + len, bb->capacity()));
		bb->position(off);
		$set(this, bb, bb);
		$set(this, bs, bs);
		bool interrupted = false;
		{
			$var($Throwable, var$0, nullptr);
			try {
				while (bb->remaining() > 0) {
					try {
						$nc($($nc(this->val$ch)->write(bb)))->get();
					} catch ($ExecutionException&) {
						$var($ExecutionException, ee, $catch());
						$throwNew($IOException, $(ee->getCause()));
					} catch ($InterruptedException&) {
						$var($InterruptedException, ie, $catch());
						interrupted = true;
					}
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				if (interrupted) {
					$($Thread::currentThread())->interrupt();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void Channels$3::close() {
	$nc(this->val$ch)->close();
}

Channels$3::Channels$3() {
}

$Class* Channels$3::load$($String* name, bool initialize) {
	$loadClass(Channels$3, name, initialize, &_Channels$3_ClassInfo_, allocate$Channels$3);
	return class$;
}

$Class* Channels$3::class$ = nullptr;

		} // channels
	} // nio
} // java