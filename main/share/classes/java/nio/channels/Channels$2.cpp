#include <java/nio/channels/Channels$2.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Math.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/AsynchronousByteChannel.h>
#include <java/nio/channels/Channels.h>
#include <java/util/concurrent/ExecutionException.h>
#include <java/util/concurrent/Future.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AsynchronousByteChannel = ::java::nio::channels::AsynchronousByteChannel;
using $ExecutionException = ::java::util::concurrent::ExecutionException;
using $Future = ::java::util::concurrent::Future;

namespace java {
	namespace nio {
		namespace channels {

$FieldInfo _Channels$2_FieldInfo_[] = {
	{"val$ch", "Ljava/nio/channels/AsynchronousByteChannel;", nullptr, $FINAL | $SYNTHETIC, $field(Channels$2, val$ch)},
	{"bb", "Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $field(Channels$2, bb)},
	{"bs", "[B", nullptr, $PRIVATE, $field(Channels$2, bs)},
	{"b1", "[B", nullptr, $PRIVATE, $field(Channels$2, b1)},
	{}
};

$MethodInfo _Channels$2_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/AsynchronousByteChannel;)V", nullptr, 0, $method(static_cast<void(Channels$2::*)($AsynchronousByteChannel*)>(&Channels$2::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "()I", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _Channels$2_EnclosingMethodInfo_ = {
	"java.nio.channels.Channels",
	"newInputStream",
	"(Ljava/nio/channels/AsynchronousByteChannel;)Ljava/io/InputStream;"
};

$InnerClassInfo _Channels$2_InnerClassesInfo_[] = {
	{"java.nio.channels.Channels$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Channels$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.channels.Channels$2",
	"java.io.InputStream",
	nullptr,
	_Channels$2_FieldInfo_,
	_Channels$2_MethodInfo_,
	nullptr,
	&_Channels$2_EnclosingMethodInfo_,
	_Channels$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.nio.channels.Channels"
};

$Object* allocate$Channels$2($Class* clazz) {
	return $of($alloc(Channels$2));
}

void Channels$2::init$($AsynchronousByteChannel* val$ch) {
	$set(this, val$ch, val$ch);
	$InputStream::init$();
}

int32_t Channels$2::read() {
	$synchronized(this) {
		if (this->b1 == nullptr) {
			$set(this, b1, $new($bytes, 1));
		}
		int32_t n = this->read(this->b1);
		if (n == 1) {
			return (int32_t)($nc(this->b1)->get(0) & (uint32_t)255);
		}
		return -1;
	}
}

int32_t Channels$2::read($bytes* bs, int32_t off, int32_t len) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if ((off < 0) || (off > $nc(bs)->length) || (len < 0) || ((off + len) > $nc(bs)->length) || ((off + len) < 0)) {
			$throwNew($IndexOutOfBoundsException);
		} else if (len == 0) {
			return 0;
		}
		$var($ByteBuffer, bb, (this->bs == bs) ? this->bb : $ByteBuffer::wrap(bs));
		$nc(bb)->position(off);
		bb->limit($Math::min(off + len, bb->capacity()));
		$set(this, bb, bb);
		$set(this, bs, bs);
		bool interrupted = false;
		{
			$var($Throwable, var$0, nullptr);
			int32_t var$2 = 0;
			bool return$1 = false;
			try {
				for (;;) {
					try {
						var$2 = $nc(($cast($Integer, $($nc($($nc(this->val$ch)->read(bb)))->get()))))->intValue();
						return$1 = true;
						goto $finally;
					} catch ($ExecutionException& ee) {
						$throwNew($IOException, $(ee->getCause()));
					} catch ($InterruptedException& ie) {
						interrupted = true;
					}
				}
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} $finally: {
				if (interrupted) {
					$($Thread::currentThread())->interrupt();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	}
	$shouldNotReachHere();
}

void Channels$2::close() {
	$nc(this->val$ch)->close();
}

Channels$2::Channels$2() {
}

$Class* Channels$2::load$($String* name, bool initialize) {
	$loadClass(Channels$2, name, initialize, &_Channels$2_ClassInfo_, allocate$Channels$2);
	return class$;
}

$Class* Channels$2::class$ = nullptr;

		} // channels
	} // nio
} // java