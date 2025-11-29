#include <sun/nio/ch/PipeImpl$Initializer$LoopbackConnector.h>

#include <java/io/IOException.h>
#include <java/net/SocketAddress.h>
#include <java/net/UnixDomainSocketAddress.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/ServerSocketChannel.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <java/nio/channels/spi/SelectorProvider.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/util/Random.h>
#include <sun/nio/ch/PipeImpl$Initializer.h>
#include <sun/nio/ch/PipeImpl.h>
#include <sun/nio/ch/SinkChannelImpl.h>
#include <sun/nio/ch/SourceChannelImpl.h>
#include <jcpp.h>

#undef RANDOM_NUMBER_GENERATOR

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketAddress = ::java::net::SocketAddress;
using $UnixDomainSocketAddress = ::java::net::UnixDomainSocketAddress;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $Random = ::java::util::Random;
using $PipeImpl = ::sun::nio::ch::PipeImpl;
using $PipeImpl$Initializer = ::sun::nio::ch::PipeImpl$Initializer;
using $SinkChannelImpl = ::sun::nio::ch::SinkChannelImpl;
using $SourceChannelImpl = ::sun::nio::ch::SourceChannelImpl;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _PipeImpl$Initializer$LoopbackConnector_FieldInfo_[] = {
	{"this$0", "Lsun/nio/ch/PipeImpl$Initializer;", nullptr, $FINAL | $SYNTHETIC, $field(PipeImpl$Initializer$LoopbackConnector, this$0)},
	{}
};

$MethodInfo _PipeImpl$Initializer$LoopbackConnector_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/ch/PipeImpl$Initializer;)V", nullptr, $PRIVATE, $method(static_cast<void(PipeImpl$Initializer$LoopbackConnector::*)($PipeImpl$Initializer*)>(&PipeImpl$Initializer$LoopbackConnector::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PipeImpl$Initializer$LoopbackConnector_InnerClassesInfo_[] = {
	{"sun.nio.ch.PipeImpl$Initializer", "sun.nio.ch.PipeImpl", "Initializer", $PRIVATE | $STATIC},
	{"sun.nio.ch.PipeImpl$Initializer$LoopbackConnector", "sun.nio.ch.PipeImpl$Initializer", "LoopbackConnector", $PRIVATE},
	{}
};

$ClassInfo _PipeImpl$Initializer$LoopbackConnector_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.PipeImpl$Initializer$LoopbackConnector",
	"java.lang.Object",
	"java.lang.Runnable",
	_PipeImpl$Initializer$LoopbackConnector_FieldInfo_,
	_PipeImpl$Initializer$LoopbackConnector_MethodInfo_,
	nullptr,
	nullptr,
	_PipeImpl$Initializer$LoopbackConnector_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.PipeImpl"
};

$Object* allocate$PipeImpl$Initializer$LoopbackConnector($Class* clazz) {
	return $of($alloc(PipeImpl$Initializer$LoopbackConnector));
}

void PipeImpl$Initializer$LoopbackConnector::init$($PipeImpl$Initializer* this$0) {
	$set(this, this$0, this$0);
}

void PipeImpl$Initializer$LoopbackConnector::run() {
	$useLocalCurrentObjectStackCache();
	$var($ServerSocketChannel, ssc, nullptr);
	$var($SocketChannel, sc1, nullptr);
	$var($SocketChannel, sc2, nullptr);
	$var($SocketAddress, sa, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$var($ByteBuffer, secret, $ByteBuffer::allocate(16));
				$var($ByteBuffer, bb, $ByteBuffer::allocate(16));
				for (;;) {
					if (ssc == nullptr || !$nc(ssc)->isOpen()) {
						$assign(ssc, $PipeImpl::createListener());
						$assign(sa, $nc(ssc)->getLocalAddress());
					}
					$assign(sc1, $SocketChannel::open(sa));
					$init($PipeImpl);
					$nc($PipeImpl::RANDOM_NUMBER_GENERATOR)->nextBytes($($cast($bytes, $nc(secret)->array())));
					do {
						$nc(sc1)->write(secret);
					} while ($nc(secret)->hasRemaining());
					secret->rewind();
					$assign(sc2, $nc(ssc)->accept());
					do {
						$nc(sc2)->read(bb);
					} while ($nc(bb)->hasRemaining());
					bb->rewind();
					if (bb->equals(secret)) {
						break;
					}
					$nc(sc2)->close();
					$nc(sc1)->close();
				}
				$set(this->this$0, source, $new($SourceChannelImpl, this->this$0->sp, sc1));
				$set(this->this$0, sink, $new($SinkChannelImpl, this->this$0->sp, sc2));
			} catch ($IOException& e) {
				try {
					if (sc1 != nullptr) {
						sc1->close();
					}
					if (sc2 != nullptr) {
						sc2->close();
					}
				} catch ($IOException& e2) {
				}
				$set(this->this$0, ioe, e);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			try {
				if (ssc != nullptr) {
					ssc->close();
				}
				if ($instanceOf($UnixDomainSocketAddress, sa)) {
					$var($Path, path, $nc(($cast($UnixDomainSocketAddress, sa)))->getPath());
					$Files::deleteIfExists(path);
				}
			} catch ($IOException& e2) {
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

PipeImpl$Initializer$LoopbackConnector::PipeImpl$Initializer$LoopbackConnector() {
}

$Class* PipeImpl$Initializer$LoopbackConnector::load$($String* name, bool initialize) {
	$loadClass(PipeImpl$Initializer$LoopbackConnector, name, initialize, &_PipeImpl$Initializer$LoopbackConnector_ClassInfo_, allocate$PipeImpl$Initializer$LoopbackConnector);
	return class$;
}

$Class* PipeImpl$Initializer$LoopbackConnector::class$ = nullptr;

		} // ch
	} // nio
} // sun