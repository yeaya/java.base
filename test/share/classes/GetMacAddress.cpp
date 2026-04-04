#include <GetMacAddress.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/NetworkInterface.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/concurrent/ExecutorService.h>
#include <java/util/concurrent/Executors.h>
#include <java/util/concurrent/Future.h>
#include <java/util/concurrent/Phaser.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef NUM_ITERS
#undef NUM_THREADS

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $NetworkInterface = ::java::net::NetworkInterface;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $Executors = ::java::util::concurrent::Executors;
using $Future = ::java::util::concurrent::Future;
using $Phaser = ::java::util::concurrent::Phaser;
using $Predicate = ::java::util::function::Predicate;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;

class GetMacAddress$$Lambda$lambda$static$0 : public $Predicate {
	$class(GetMacAddress$$Lambda$lambda$static$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* ni) override {
		 return GetMacAddress::lambda$static$0($cast($NetworkInterface, ni));
	}
};
$Class* GetMacAddress$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GetMacAddress$$Lambda$lambda$static$0, init$, void)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(GetMacAddress$$Lambda$lambda$static$0, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"GetMacAddress$$Lambda$lambda$static$0",
		"java.lang.Object",
		"java.util.function.Predicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(GetMacAddress$$Lambda$lambda$static$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetMacAddress$$Lambda$lambda$static$0);
	});
	return class$;
}
$Class* GetMacAddress$$Lambda$lambda$static$0::class$ = nullptr;

$volatile(bool) GetMacAddress::failed = false;
$Predicate* GetMacAddress::hasHardwareAddress = nullptr;

void GetMacAddress::init$($NetworkInterface* ni, $String* name, $Phaser* phaser) {
	$set(this, ni, ni);
	$set(this, threadName, name);
	$set(this, startingGate, phaser);
}

$Object* GetMacAddress::call() {
	$useLocalObjectStack();
	int32_t count = 0;
	$nc(this->startingGate)->arriveAndAwaitAdvance();
	try {
		for (int32_t i = 0; i < GetMacAddress::NUM_ITERS; ++i) {
			$nc(this->ni)->getMTU();
			$var($bytes, addr, this->ni->getHardwareAddress());
			if (addr == nullptr) {
				$nc($System::out)->println($$str({this->threadName, ". mac id is null"_s}));
				GetMacAddress::failed = true;
			}
			count = count + 1;
			if (count % 100 == 0) {
				$nc($System::out)->println($$str({this->threadName, ". count is "_s, $$str(count)}));
			}
		}
	} catch ($Exception& ex) {
		$nc($System::out)->println($$str({this->threadName, ". Not expecting exception:"_s, $(ex->getMessage())}));
		GetMacAddress::failed = true;
		return ex;
	}
	return nullptr;
}

$Stream* GetMacAddress::getNetworkInterfacesAsStream() {
	$init(GetMacAddress);
	return $NetworkInterface::networkInterfaces();
}

void GetMacAddress::main($StringArray* args) {
	$init(GetMacAddress);
	$useLocalObjectStack();
	$var($List, toTest, $cast($List, $$nc($$nc(getNetworkInterfacesAsStream())->filter(GetMacAddress::hasHardwareAddress))->collect($($Collectors::toList()))));
	$var($ExecutorService, executor, $Executors::newFixedThreadPool(GetMacAddress::NUM_THREADS));
	{
		$var($Iterator, i$, $nc(toTest)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($NetworkInterface, ni, $cast($NetworkInterface, i$->next()));
			{
				$var($Phaser, startingGate, $new($Phaser, GetMacAddress::NUM_THREADS));
				$nc($System::out)->println($$str({"Testing: "_s, $($nc(ni)->getName())}));
				$var($List, list, $new($ArrayList));
				for (int32_t i = 0; i < GetMacAddress::NUM_THREADS; ++i) {
					list->add($$new(GetMacAddress, ni, $$str({$(ni->getName()), "-Thread-"_s, $$str(i)}), startingGate));
				}
				$var($List, futures, $nc(executor)->invokeAll(list));
				{
					$var($Iterator, i$, $nc(futures)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Future, f, $cast($Future, i$->next()));
						if ($nc(f)->get() != nullptr) {
							$$sure($Exception, f->get())->printStackTrace($System::out);
						}
					}
				}
				if (GetMacAddress::failed) {
					break;
				}
			}
		}
	}
	$nc(executor)->shutdownNow();
	if (!GetMacAddress::failed) {
		$nc($System::out)->println("PASSED - Finished all threads"_s);
	} else {
		$throwNew($RuntimeException, "Failed"_s);
	}
}

bool GetMacAddress::lambda$static$0($NetworkInterface* ni) {
	$init(GetMacAddress);
	$useLocalObjectStack();
	try {
		if ($nc(ni)->getHardwareAddress() == nullptr) {
			$nc($System::out)->println($$str({"Not testing null addr: "_s, $(ni->getName())}));
			return false;
		}
	} catch ($Exception& ex) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("Not testing: "_s);
		var$0->append($($nc(ni)->getName()));
		var$0->append(" "_s);
		var$0->append($(ex->getMessage()));
		$nc($System::out)->println($$str(var$0));
		return false;
	}
	return true;
}

void GetMacAddress::clinit$($Class* clazz) {
	$assignStatic(GetMacAddress::hasHardwareAddress, $new(GetMacAddress$$Lambda$lambda$static$0));
}

GetMacAddress::GetMacAddress() {
}

$Class* GetMacAddress::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("GetMacAddress$$Lambda$lambda$static$0")) {
			return GetMacAddress$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"NUM_THREADS", "I", nullptr, $STATIC | $FINAL, $constField(GetMacAddress, NUM_THREADS)},
		{"NUM_ITERS", "I", nullptr, $STATIC | $FINAL, $constField(GetMacAddress, NUM_ITERS)},
		{"failed", "Z", nullptr, $STATIC | $VOLATILE, $staticField(GetMacAddress, failed)},
		{"threadName", "Ljava/lang/String;", nullptr, $FINAL, $field(GetMacAddress, threadName)},
		{"ni", "Ljava/net/NetworkInterface;", nullptr, $FINAL, $field(GetMacAddress, ni)},
		{"startingGate", "Ljava/util/concurrent/Phaser;", nullptr, $FINAL, $field(GetMacAddress, startingGate)},
		{"hasHardwareAddress", "Ljava/util/function/Predicate;", "Ljava/util/function/Predicate<Ljava/net/NetworkInterface;>;", $STATIC | $FINAL, $staticField(GetMacAddress, hasHardwareAddress)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/NetworkInterface;Ljava/lang/String;Ljava/util/concurrent/Phaser;)V", nullptr, $PUBLIC, $method(GetMacAddress, init$, void, $NetworkInterface*, $String*, $Phaser*)},
		{"call", "()Ljava/lang/Exception;", nullptr, $PUBLIC, $virtualMethod(GetMacAddress, call, $Object*)},
		{"getNetworkInterfacesAsStream", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/net/NetworkInterface;>;", $PUBLIC | $STATIC, $staticMethod(GetMacAddress, getNetworkInterfacesAsStream, $Stream*), "java.lang.Exception"},
		{"lambda$static$0", "(Ljava/net/NetworkInterface;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(GetMacAddress, lambda$static$0, bool, $NetworkInterface*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(GetMacAddress, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"GetMacAddress",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Exception;>;"
	};
	$loadClass(GetMacAddress, name, initialize, &classInfo$$, GetMacAddress::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(GetMacAddress);
	});
	return class$;
}

$Class* GetMacAddress::class$ = nullptr;