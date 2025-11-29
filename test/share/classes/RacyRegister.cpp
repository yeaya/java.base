#include <RacyRegister.h>

#include <RacyRegister$1.h>
#include <java/nio/channels/ClosedChannelException.h>
#include <java/nio/channels/SelectableChannel.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/Selector.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/util/concurrent/Callable.h>
#include <java/util/concurrent/ExecutorService.h>
#include <java/util/concurrent/Executors.h>
#include <java/util/concurrent/Future.h>
#include <jcpp.h>

#undef OP_READ

using $RacyRegister$1 = ::RacyRegister$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ClosedChannelException = ::java::nio::channels::ClosedChannelException;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $Selector = ::java::nio::channels::Selector;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $Callable = ::java::util::concurrent::Callable;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $Executors = ::java::util::concurrent::Executors;
using $Future = ::java::util::concurrent::Future;

$MethodInfo _RacyRegister_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RacyRegister::*)()>(&RacyRegister::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&RacyRegister::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _RacyRegister_InnerClassesInfo_[] = {
	{"RacyRegister$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _RacyRegister_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"RacyRegister",
	"java.lang.Object",
	nullptr,
	nullptr,
	_RacyRegister_MethodInfo_,
	nullptr,
	nullptr,
	_RacyRegister_InnerClassesInfo_,
	nullptr,
	nullptr,
	"RacyRegister$1"
};

$Object* allocate$RacyRegister($Class* clazz) {
	return $of($alloc(RacyRegister));
}

void RacyRegister::init$() {
}

void RacyRegister::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($ExecutorService, pool, $Executors::newFixedThreadPool(1));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Selector, sel, $Selector::open());
			{
				$var($Throwable, var$1, nullptr);
				try {
					try {
						int32_t count = 100;
						while (count-- > 0) {
							$var($SocketChannel, sc, $SocketChannel::open());
							$nc(sc)->configureBlocking(false);
							$var($Future, result, $nc(pool)->submit(static_cast<$Callable*>($$new($RacyRegister$1, sc))));
							$var($SelectionKey, key, nullptr);
							try {
								$assign(key, sc->register$(sel, $SelectionKey::OP_READ));
							} catch ($ClosedChannelException& ignore) {
							}
							$nc(result)->get();
							if (key != nullptr && key->isValid()) {
								$throwNew($RuntimeException, "Key is valid"_s);
							}
						}
					} catch ($Throwable& t$) {
						if (sel != nullptr) {
							try {
								sel->close();
							} catch ($Throwable& x2) {
								t$->addSuppressed(x2);
							}
						}
						$throw(t$);
					}
				} catch ($Throwable& var$2) {
					$assign(var$1, var$2);
				} /*finally*/ {
					if (sel != nullptr) {
						sel->close();
					}
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			$nc(pool)->shutdown();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

RacyRegister::RacyRegister() {
}

$Class* RacyRegister::load$($String* name, bool initialize) {
	$loadClass(RacyRegister, name, initialize, &_RacyRegister_ClassInfo_, allocate$RacyRegister);
	return class$;
}

$Class* RacyRegister::class$ = nullptr;