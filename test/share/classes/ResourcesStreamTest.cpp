#include <ResourcesStreamTest.h>

#include <ResourcesStreamTest$FailingClassLoader.h>
#include <ResourcesStreamTest$SuccessClassLoader.h>
#include <java/io/IOException.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/io/UncheckedIOException.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <java/util/Optional.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $ResourcesStreamTest$FailingClassLoader = ::ResourcesStreamTest$FailingClassLoader;
using $ResourcesStreamTest$SuccessClassLoader = ::ResourcesStreamTest$SuccessClassLoader;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $URL = ::java::net::URL;
using $Optional = ::java::util::Optional;
using $Consumer = ::java::util::function::Consumer;
using $Predicate = ::java::util::function::Predicate;
using $Supplier = ::java::util::function::Supplier;
using $Stream = ::java::util::stream::Stream;

class ResourcesStreamTest$$Lambda$println : public $Consumer {
	$class(ResourcesStreamTest$$Lambda$println, $NO_CLASS_INIT, $Consumer)
public:
	void init$($PrintStream* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* arg0) override {
		$nc(inst$)->println(arg0);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ResourcesStreamTest$$Lambda$println>());
	}
	$PrintStream* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ResourcesStreamTest$$Lambda$println::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ResourcesStreamTest$$Lambda$println, inst$)},
	{}
};
$MethodInfo ResourcesStreamTest$$Lambda$println::methodInfos[3] = {
	{"<init>", "(Ljava/io/PrintStream;)V", nullptr, $PUBLIC, $method(static_cast<void(ResourcesStreamTest$$Lambda$println::*)($PrintStream*)>(&ResourcesStreamTest$$Lambda$println::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ResourcesStreamTest$$Lambda$println::classInfo$ = {
	$PUBLIC | $FINAL,
	"ResourcesStreamTest$$Lambda$println",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* ResourcesStreamTest$$Lambda$println::load$($String* name, bool initialize) {
	$loadClass(ResourcesStreamTest$$Lambda$println, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ResourcesStreamTest$$Lambda$println::class$ = nullptr;

class ResourcesStreamTest$$Lambda$lambda$testFailure$0$1 : public $Predicate {
	$class(ResourcesStreamTest$$Lambda$lambda$testFailure$0$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* url) override {
		 return ResourcesStreamTest::lambda$testFailure$0($cast($URL, url));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ResourcesStreamTest$$Lambda$lambda$testFailure$0$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ResourcesStreamTest$$Lambda$lambda$testFailure$0$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ResourcesStreamTest$$Lambda$lambda$testFailure$0$1::*)()>(&ResourcesStreamTest$$Lambda$lambda$testFailure$0$1::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo ResourcesStreamTest$$Lambda$lambda$testFailure$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"ResourcesStreamTest$$Lambda$lambda$testFailure$0$1",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* ResourcesStreamTest$$Lambda$lambda$testFailure$0$1::load$($String* name, bool initialize) {
	$loadClass(ResourcesStreamTest$$Lambda$lambda$testFailure$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ResourcesStreamTest$$Lambda$lambda$testFailure$0$1::class$ = nullptr;

class ResourcesStreamTest$$Lambda$lambda$testFailure$1$2 : public $Supplier {
	$class(ResourcesStreamTest$$Lambda$lambda$testFailure$1$2, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of(ResourcesStreamTest::lambda$testFailure$1());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ResourcesStreamTest$$Lambda$lambda$testFailure$1$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ResourcesStreamTest$$Lambda$lambda$testFailure$1$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ResourcesStreamTest$$Lambda$lambda$testFailure$1$2::*)()>(&ResourcesStreamTest$$Lambda$lambda$testFailure$1$2::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ResourcesStreamTest$$Lambda$lambda$testFailure$1$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"ResourcesStreamTest$$Lambda$lambda$testFailure$1$2",
	"java.lang.Object",
	"java.util.function.Supplier",
	nullptr,
	methodInfos
};
$Class* ResourcesStreamTest$$Lambda$lambda$testFailure$1$2::load$($String* name, bool initialize) {
	$loadClass(ResourcesStreamTest$$Lambda$lambda$testFailure$1$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ResourcesStreamTest$$Lambda$lambda$testFailure$1$2::class$ = nullptr;

$MethodInfo _ResourcesStreamTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ResourcesStreamTest::*)()>(&ResourcesStreamTest::init$))},
	{"lambda$testFailure$0", "(Ljava/net/URL;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($URL*)>(&ResourcesStreamTest::lambda$testFailure$0))},
	{"lambda$testFailure$1", "()Ljava/lang/Exception;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Exception*(*)()>(&ResourcesStreamTest::lambda$testFailure$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ResourcesStreamTest::main)), "java.lang.Exception"},
	{"testFailure", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&ResourcesStreamTest::testFailure)), "java.lang.Exception"},
	{"testSuccess", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&ResourcesStreamTest::testSuccess)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _ResourcesStreamTest_InnerClassesInfo_[] = {
	{"ResourcesStreamTest$FailingClassLoader", "ResourcesStreamTest", "FailingClassLoader", $PUBLIC | $STATIC},
	{"ResourcesStreamTest$SuccessClassLoader", "ResourcesStreamTest", "SuccessClassLoader", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ResourcesStreamTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ResourcesStreamTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ResourcesStreamTest_MethodInfo_,
	nullptr,
	nullptr,
	_ResourcesStreamTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"ResourcesStreamTest$FailingClassLoader,ResourcesStreamTest$SuccessClassLoader"
};

$Object* allocate$ResourcesStreamTest($Class* clazz) {
	return $of($alloc(ResourcesStreamTest));
}

void ResourcesStreamTest::init$() {
}

void ResourcesStreamTest::main($StringArray* args) {
	testSuccess();
	testFailure();
}

void ResourcesStreamTest::testSuccess() {
	try {
		$var($ClassLoader, cl, $new($ResourcesStreamTest$FailingClassLoader));
		$var($Stream, stream, cl->resources("the name"_s));
		$init($System);
		$nc(stream)->forEach(static_cast<$Consumer*>($$new(ResourcesStreamTest$$Lambda$println, static_cast<$PrintStream*>($nc($System::out)))));
		$throwNew($Exception, "expected UncheckedIOException not thrown"_s);
	} catch ($UncheckedIOException&) {
		$var($UncheckedIOException, uio, $catch());
		$var($String, causeMessage, $nc($($cast($IOException, uio->getCause())))->getMessage());
		if (!"the name"_s->equals(causeMessage)) {
			$throwNew($Exception, $$str({"unexpected cause message: "_s, causeMessage}));
		}
	}
}

void ResourcesStreamTest::testFailure() {
	$var($ClassLoader, cl, $new($ResourcesStreamTest$SuccessClassLoader));
	int64_t count = $nc($(cl->resources("the name"_s)))->count();
	if (count != 1) {
		$throwNew($Exception, "expected resource is null or empty"_s);
	}
	$nc($($nc($($nc($(cl->resources("the name"_s)))->filter(static_cast<$Predicate*>($$new(ResourcesStreamTest$$Lambda$lambda$testFailure$0$1)))))->findFirst()))->orElseThrow(static_cast<$Supplier*>($$new(ResourcesStreamTest$$Lambda$lambda$testFailure$1$2)));
}

$Exception* ResourcesStreamTest::lambda$testFailure$1() {
	return $new($Exception, "correct URL not found"_s);
}

bool ResourcesStreamTest::lambda$testFailure$0($URL* url) {
	return "file:/somefile"_s->equals($($nc(url)->toExternalForm()));
}

ResourcesStreamTest::ResourcesStreamTest() {
}

$Class* ResourcesStreamTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ResourcesStreamTest$$Lambda$println::classInfo$.name)) {
			return ResourcesStreamTest$$Lambda$println::load$(name, initialize);
		}
		if (name->equals(ResourcesStreamTest$$Lambda$lambda$testFailure$0$1::classInfo$.name)) {
			return ResourcesStreamTest$$Lambda$lambda$testFailure$0$1::load$(name, initialize);
		}
		if (name->equals(ResourcesStreamTest$$Lambda$lambda$testFailure$1$2::classInfo$.name)) {
			return ResourcesStreamTest$$Lambda$lambda$testFailure$1$2::load$(name, initialize);
		}
	}
	$loadClass(ResourcesStreamTest, name, initialize, &_ResourcesStreamTest_ClassInfo_, allocate$ResourcesStreamTest);
	return class$;
}

$Class* ResourcesStreamTest::class$ = nullptr;