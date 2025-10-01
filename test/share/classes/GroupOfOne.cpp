#include <GroupOfOne.h>

#include <GroupOfOne$1.h>
#include <GroupOfOne$2.h>
#include <GroupOfOne$3.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/SocketAddress.h>
#include <java/nio/channels/AsynchronousChannelGroup.h>
#include <java/nio/channels/AsynchronousServerSocketChannel.h>
#include <java/nio/channels/AsynchronousSocketChannel.h>
#include <java/nio/channels/CompletionHandler.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/ThreadFactory.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jcpp.h>

#undef SECONDS

using $GroupOfOne$1 = ::GroupOfOne$1;
using $GroupOfOne$2 = ::GroupOfOne$2;
using $GroupOfOne$3 = ::GroupOfOne$3;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $SocketAddress = ::java::net::SocketAddress;
using $AsynchronousChannel = ::java::nio::channels::AsynchronousChannel;
using $AsynchronousChannelGroup = ::java::nio::channels::AsynchronousChannelGroup;
using $AsynchronousServerSocketChannel = ::java::nio::channels::AsynchronousServerSocketChannel;
using $AsynchronousSocketChannel = ::java::nio::channels::AsynchronousSocketChannel;
using $CompletionHandler = ::java::nio::channels::CompletionHandler;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $ThreadFactory = ::java::util::concurrent::ThreadFactory;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

$MethodInfo _GroupOfOne_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GroupOfOne::*)()>(&GroupOfOne::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&GroupOfOne::main)), "java.lang.Exception"},
	{"test", "(Ljava/net/SocketAddress;ZZ)V", nullptr, $STATIC, $method(static_cast<void(*)($SocketAddress*,bool,bool)>(&GroupOfOne::test)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _GroupOfOne_InnerClassesInfo_[] = {
	{"GroupOfOne$3", nullptr, nullptr, 0},
	{"GroupOfOne$2", nullptr, nullptr, 0},
	{"GroupOfOne$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _GroupOfOne_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"GroupOfOne",
	"java.lang.Object",
	nullptr,
	nullptr,
	_GroupOfOne_MethodInfo_,
	nullptr,
	nullptr,
	_GroupOfOne_InnerClassesInfo_,
	nullptr,
	nullptr,
	"GroupOfOne$3,GroupOfOne$3$1,GroupOfOne$2,GroupOfOne$1"
};

$Object* allocate$GroupOfOne($Class* clazz) {
	return $of($alloc(GroupOfOne));
}

void GroupOfOne::init$() {
}

void GroupOfOne::main($StringArray* args) {
	$var($List, accepted, $new($ArrayList));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($AsynchronousServerSocketChannel, listener, $AsynchronousServerSocketChannel::open());
			{
				$var($Throwable, var$1, nullptr);
				try {
					try {
						$nc(listener)->bind($$new($InetSocketAddress, 0));
						listener->accept(($Void*)nullptr, $$new($GroupOfOne$1, accepted, listener));
						int32_t port = $nc((($cast($InetSocketAddress, $(listener->getLocalAddress())))))->getPort();
						$var($SocketAddress, sa, $new($InetSocketAddress, $($InetAddress::getLocalHost()), port));
						test(sa, true, false);
						test(sa, false, true);
						test(sa, true, true);
					} catch ($Throwable&) {
						$var($Throwable, t$, $catch());
						if (listener != nullptr) {
							try {
								listener->close();
							} catch ($Throwable&) {
								$var($Throwable, x2, $catch());
								t$->addSuppressed(x2);
							}
						}
						$throw(t$);
					}
				} catch ($Throwable&) {
					$assign(var$1, $catch());
				} /*finally*/ {
					if (listener != nullptr) {
						listener->close();
					}
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$synchronized(accepted) {
				{
					$var($Iterator, i$, accepted->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($AsynchronousSocketChannel, ch, $cast($AsynchronousSocketChannel, i$->next()));
						{
							$nc(ch)->close();
						}
					}
				}
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void GroupOfOne::test($SocketAddress* sa, bool closeChannel, bool shutdownGroup) {
	$var($AsynchronousChannelGroup, group, $AsynchronousChannelGroup::withFixedThreadPool(1, $$new($GroupOfOne$2)));
	$var($AsynchronousSocketChannel, ch, $AsynchronousSocketChannel::open(group));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($CountDownLatch, latch, $new($CountDownLatch, 2));
			$nc(ch)->connect(sa, ($Void*)nullptr, $$new($GroupOfOne$3, ch, latch, closeChannel, shutdownGroup, group));
			latch->await();
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(group)->shutdown();
			$init($TimeUnit);
			bool terminated = group->awaitTermination(20, $TimeUnit::SECONDS);
			if (!terminated) {
				$throwNew($RuntimeException, "Group did not terminate"_s);
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	$init($System);
	$nc($System::out)->println("TEST OKAY"_s);
}

GroupOfOne::GroupOfOne() {
}

$Class* GroupOfOne::load$($String* name, bool initialize) {
	$loadClass(GroupOfOne, name, initialize, &_GroupOfOne_ClassInfo_, allocate$GroupOfOne);
	return class$;
}

$Class* GroupOfOne::class$ = nullptr;