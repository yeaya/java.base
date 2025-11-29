#include <RacyHandler.h>

#include <RacyHandler$CustomHttpHandler.h>
#include <java/io/Serializable.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <java/net/URLStreamHandler.h>
#include <java/net/URLStreamHandlerFactory.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

#undef NUM_THREADS

using $RacyHandler$CustomHttpHandler = ::RacyHandler$CustomHttpHandler;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Method = ::java::lang::reflect::Method;
using $URL = ::java::net::URL;
using $URLStreamHandler = ::java::net::URLStreamHandler;
using $URLStreamHandlerFactory = ::java::net::URLStreamHandlerFactory;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;

class RacyHandler$$Lambda$lambda$runTest$1 : public $Runnable {
	$class(RacyHandler$$Lambda$lambda$runTest$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$(RacyHandler* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$runTest$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<RacyHandler$$Lambda$lambda$runTest$1>());
	}
	RacyHandler* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo RacyHandler$$Lambda$lambda$runTest$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(RacyHandler$$Lambda$lambda$runTest$1, inst$)},
	{}
};
$MethodInfo RacyHandler$$Lambda$lambda$runTest$1::methodInfos[3] = {
	{"<init>", "(LRacyHandler;)V", nullptr, $PUBLIC, $method(static_cast<void(RacyHandler$$Lambda$lambda$runTest$1::*)(RacyHandler*)>(&RacyHandler$$Lambda$lambda$runTest$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo RacyHandler$$Lambda$lambda$runTest$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"RacyHandler$$Lambda$lambda$runTest$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* RacyHandler$$Lambda$lambda$runTest$1::load$($String* name, bool initialize) {
	$loadClass(RacyHandler$$Lambda$lambda$runTest$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* RacyHandler$$Lambda$lambda$runTest$1::class$ = nullptr;

class RacyHandler$$Lambda$lambda$runTest$2$1 : public $Runnable {
	$class(RacyHandler$$Lambda$lambda$runTest$2$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$(RacyHandler* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$runTest$2();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<RacyHandler$$Lambda$lambda$runTest$2$1>());
	}
	RacyHandler* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo RacyHandler$$Lambda$lambda$runTest$2$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(RacyHandler$$Lambda$lambda$runTest$2$1, inst$)},
	{}
};
$MethodInfo RacyHandler$$Lambda$lambda$runTest$2$1::methodInfos[3] = {
	{"<init>", "(LRacyHandler;)V", nullptr, $PUBLIC, $method(static_cast<void(RacyHandler$$Lambda$lambda$runTest$2$1::*)(RacyHandler*)>(&RacyHandler$$Lambda$lambda$runTest$2$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo RacyHandler$$Lambda$lambda$runTest$2$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"RacyHandler$$Lambda$lambda$runTest$2$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* RacyHandler$$Lambda$lambda$runTest$2$1::load$($String* name, bool initialize) {
	$loadClass(RacyHandler$$Lambda$lambda$runTest$2$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* RacyHandler$$Lambda$lambda$runTest$2$1::class$ = nullptr;

class RacyHandler$$Lambda$lambda$runTest$0$2 : public $URLStreamHandlerFactory {
	$class(RacyHandler$$Lambda$lambda$runTest$0$2, $NO_CLASS_INIT, $URLStreamHandlerFactory)
public:
	void init$(RacyHandler* inst) {
		$set(this, inst$, inst);
	}
	virtual $URLStreamHandler* createURLStreamHandler($String* proto) override {
		 return $nc(inst$)->lambda$runTest$0(proto);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<RacyHandler$$Lambda$lambda$runTest$0$2>());
	}
	RacyHandler* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo RacyHandler$$Lambda$lambda$runTest$0$2::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(RacyHandler$$Lambda$lambda$runTest$0$2, inst$)},
	{}
};
$MethodInfo RacyHandler$$Lambda$lambda$runTest$0$2::methodInfos[3] = {
	{"<init>", "(LRacyHandler;)V", nullptr, $PUBLIC, $method(static_cast<void(RacyHandler$$Lambda$lambda$runTest$0$2::*)(RacyHandler*)>(&RacyHandler$$Lambda$lambda$runTest$0$2::init$))},
	{"createURLStreamHandler", "(Ljava/lang/String;)Ljava/net/URLStreamHandler;", nullptr, $PUBLIC},
	{}
};
$ClassInfo RacyHandler$$Lambda$lambda$runTest$0$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"RacyHandler$$Lambda$lambda$runTest$0$2",
	"java.lang.Object",
	"java.net.URLStreamHandlerFactory",
	fieldInfos,
	methodInfos
};
$Class* RacyHandler$$Lambda$lambda$runTest$0$2::load$($String* name, bool initialize) {
	$loadClass(RacyHandler$$Lambda$lambda$runTest$0$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* RacyHandler$$Lambda$lambda$runTest$0$2::class$ = nullptr;

$FieldInfo _RacyHandler_FieldInfo_[] = {
	{"factorySet", "Z", nullptr, $STATIC | $VOLATILE, $staticField(RacyHandler, factorySet)},
	{"NUM_THREADS", "I", nullptr, $STATIC, $staticField(RacyHandler, NUM_THREADS)},
	{"cdl", "Ljava/util/concurrent/CountDownLatch;", nullptr, $STATIC, $staticField(RacyHandler, cdl)},
	{}
};

$MethodInfo _RacyHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RacyHandler::*)()>(&RacyHandler::init$))},
	{"getURLStreamHandler", "()Ljava/net/URLStreamHandler;", nullptr, $PUBLIC},
	{"lambda$runTest$0", "(Ljava/lang/String;)Ljava/net/URLStreamHandler;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$URLStreamHandler*(RacyHandler::*)($String*)>(&RacyHandler::lambda$runTest$0))},
	{"lambda$runTest$1", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(RacyHandler::*)()>(&RacyHandler::lambda$runTest$1))},
	{"lambda$runTest$2", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(RacyHandler::*)()>(&RacyHandler::lambda$runTest$2))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&RacyHandler::main))},
	{"runTest", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _RacyHandler_InnerClassesInfo_[] = {
	{"RacyHandler$CustomHttpHandler", "RacyHandler", "CustomHttpHandler", 0},
	{}
};

$ClassInfo _RacyHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"RacyHandler",
	"java.lang.Object",
	nullptr,
	_RacyHandler_FieldInfo_,
	_RacyHandler_MethodInfo_,
	nullptr,
	nullptr,
	_RacyHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	"RacyHandler$CustomHttpHandler"
};

$Object* allocate$RacyHandler($Class* clazz) {
	return $of($alloc(RacyHandler));
}

$volatile(bool) RacyHandler::factorySet = false;
int32_t RacyHandler::NUM_THREADS = 0;
$CountDownLatch* RacyHandler::cdl = nullptr;

void RacyHandler::init$() {
}

void RacyHandler::main($StringArray* args) {
	$init(RacyHandler);
	$var(RacyHandler, tester, $new(RacyHandler));
	tester->runTest();
}

void RacyHandler::runTest() {
	$useLocalCurrentObjectStackCache();
	$$new($Thread, static_cast<$Runnable*>($$new(RacyHandler$$Lambda$lambda$runTest$1, this)))->start();
	$nc(RacyHandler::cdl)->countDown();
	for (int32_t i = 0; i < RacyHandler::NUM_THREADS; ++i) {
		$$new($Thread, static_cast<$Runnable*>($$new(RacyHandler$$Lambda$lambda$runTest$2$1, this)))->start();
		$nc(RacyHandler::cdl)->countDown();
	}
	while (!RacyHandler::factorySet) {
	}
	try {
		$Thread::sleep(500);
	} catch ($InterruptedException& ie) {
	}
	$var($URLStreamHandler, httpHandler, getURLStreamHandler());
	$nc($System::out)->println($$str({"After setting factory URL handlers: http "_s, httpHandler}));
	if (!($instanceOf($RacyHandler$CustomHttpHandler, httpHandler))) {
		$throwNew($RuntimeException, "FAILED: Incorrect handler type"_s);
	}
}

$URLStreamHandler* RacyHandler::getURLStreamHandler() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$load($URL);
		$var($Method, method, $URL::class$->getDeclaredMethod("getURLStreamHandler"_s, $$new($ClassArray, {$String::class$})));
		$nc(method)->setAccessible(true);
		return $cast($URLStreamHandler, method->invoke(nullptr, $$new($ObjectArray, {$of("http"_s)})));
	} catch ($Exception& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

void RacyHandler::lambda$runTest$2() {
	try {
		$nc(RacyHandler::cdl)->await();
		while (!RacyHandler::factorySet) {
			getURLStreamHandler();
		}
	} catch ($Exception& ignore) {
	}
}

void RacyHandler::lambda$runTest$1() {
	try {
		$nc(RacyHandler::cdl)->await();
		$URL::setURLStreamHandlerFactory(static_cast<$URLStreamHandlerFactory*>($$new(RacyHandler$$Lambda$lambda$runTest$0$2, this)));
		RacyHandler::factorySet = true;
	} catch ($Exception& ignore) {
	}
}

$URLStreamHandler* RacyHandler::lambda$runTest$0($String* proto) {
	return $new($RacyHandler$CustomHttpHandler, this);
}

void clinit$RacyHandler($Class* class$) {
	RacyHandler::factorySet = false;
	RacyHandler::NUM_THREADS = 2;
	$assignStatic(RacyHandler::cdl, $new($CountDownLatch, RacyHandler::NUM_THREADS + 1));
}

RacyHandler::RacyHandler() {
}

$Class* RacyHandler::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(RacyHandler$$Lambda$lambda$runTest$1::classInfo$.name)) {
			return RacyHandler$$Lambda$lambda$runTest$1::load$(name, initialize);
		}
		if (name->equals(RacyHandler$$Lambda$lambda$runTest$2$1::classInfo$.name)) {
			return RacyHandler$$Lambda$lambda$runTest$2$1::load$(name, initialize);
		}
		if (name->equals(RacyHandler$$Lambda$lambda$runTest$0$2::classInfo$.name)) {
			return RacyHandler$$Lambda$lambda$runTest$0$2::load$(name, initialize);
		}
	}
	$loadClass(RacyHandler, name, initialize, &_RacyHandler_ClassInfo_, clinit$RacyHandler, allocate$RacyHandler);
	return class$;
}

$Class* RacyHandler::class$ = nullptr;