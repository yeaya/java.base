#include <StackStreamState.h>

#include <java/io/Serializable.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/StackWalker.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/function/Function.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StackWalker = ::java::lang::StackWalker;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Function = ::java::util::function::Function;
using $Stream = ::java::util::stream::Stream;

class StackStreamState$$Lambda$lambda$testStatic$0 : public $Function {
	$class(StackStreamState$$Lambda$lambda$testStatic$0, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* s) override {
		 return StackStreamState::lambda$testStatic$0($cast($Stream, s));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StackStreamState$$Lambda$lambda$testStatic$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo StackStreamState$$Lambda$lambda$testStatic$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StackStreamState$$Lambda$lambda$testStatic$0::*)()>(&StackStreamState$$Lambda$lambda$testStatic$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StackStreamState$$Lambda$lambda$testStatic$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"StackStreamState$$Lambda$lambda$testStatic$0",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* StackStreamState$$Lambda$lambda$testStatic$0::load$($String* name, bool initialize) {
	$loadClass(StackStreamState$$Lambda$lambda$testStatic$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StackStreamState$$Lambda$lambda$testStatic$0::class$ = nullptr;

class StackStreamState$$Lambda$lambda$testInstance$1$1 : public $Function {
	$class(StackStreamState$$Lambda$lambda$testInstance$1$1, $NO_CLASS_INIT, $Function)
public:
	void init$(StackStreamState* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* s) override {
		 return $nc(inst$)->lambda$testInstance$1($cast($Stream, s));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StackStreamState$$Lambda$lambda$testInstance$1$1>());
	}
	StackStreamState* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo StackStreamState$$Lambda$lambda$testInstance$1$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(StackStreamState$$Lambda$lambda$testInstance$1$1, inst$)},
	{}
};
$MethodInfo StackStreamState$$Lambda$lambda$testInstance$1$1::methodInfos[3] = {
	{"<init>", "(LStackStreamState;)V", nullptr, $PUBLIC, $method(static_cast<void(StackStreamState$$Lambda$lambda$testInstance$1$1::*)(StackStreamState*)>(&StackStreamState$$Lambda$lambda$testInstance$1$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StackStreamState$$Lambda$lambda$testInstance$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"StackStreamState$$Lambda$lambda$testInstance$1$1",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* StackStreamState$$Lambda$lambda$testInstance$1$1::load$($String* name, bool initialize) {
	$loadClass(StackStreamState$$Lambda$lambda$testInstance$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StackStreamState$$Lambda$lambda$testInstance$1$1::class$ = nullptr;

class StackStreamState$$Lambda$lambda$testLocal$2$2 : public $Function {
	$class(StackStreamState$$Lambda$lambda$testLocal$2$2, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* s) override {
		 return $of(StackStreamState::lambda$testLocal$2($cast($Stream, s)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StackStreamState$$Lambda$lambda$testLocal$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo StackStreamState$$Lambda$lambda$testLocal$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StackStreamState$$Lambda$lambda$testLocal$2$2::*)()>(&StackStreamState$$Lambda$lambda$testLocal$2$2::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StackStreamState$$Lambda$lambda$testLocal$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"StackStreamState$$Lambda$lambda$testLocal$2$2",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* StackStreamState$$Lambda$lambda$testLocal$2$2::load$($String* name, bool initialize) {
	$loadClass(StackStreamState$$Lambda$lambda$testLocal$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StackStreamState$$Lambda$lambda$testLocal$2$2::class$ = nullptr;

$FieldInfo _StackStreamState_FieldInfo_[] = {
	{"staticStream", "Ljava/util/stream/Stream;", "Ljava/util/stream/Stream<Ljava/lang/StackWalker$StackFrame;>;", $PRIVATE | $STATIC, $staticField(StackStreamState, staticStream)},
	{"instanceStream", "Ljava/util/stream/Stream;", "Ljava/util/stream/Stream<Ljava/lang/StackWalker$StackFrame;>;", $PRIVATE, $field(StackStreamState, instanceStream)},
	{"walker", "Ljava/lang/StackWalker;", nullptr, $PRIVATE | $FINAL, $field(StackStreamState, walker)},
	{}
};

$MethodInfo _StackStreamState_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StackStreamState::*)()>(&StackStreamState::init$))},
	{"checkStreamState", "(Ljava/util/stream/Stream;)V", "(Ljava/util/stream/Stream<Ljava/lang/StackWalker$StackFrame;>;)V", 0},
	{"lambda$testInstance$1", "(Ljava/util/stream/Stream;)Ljava/lang/Object;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Object*(StackStreamState::*)($Stream*)>(&StackStreamState::lambda$testInstance$1))},
	{"lambda$testLocal$2", "(Ljava/util/stream/Stream;)Ljava/util/stream/Stream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Stream*(*)($Stream*)>(&StackStreamState::lambda$testLocal$2))},
	{"lambda$testStatic$0", "(Ljava/util/stream/Stream;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($Stream*)>(&StackStreamState::lambda$testStatic$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&StackStreamState::main))},
	{"testInstance", "()V", nullptr, 0},
	{"testLocal", "()V", nullptr, 0},
	{"testStatic", "()V", nullptr, 0},
	{}
};

$ClassInfo _StackStreamState_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"StackStreamState",
	"java.lang.Object",
	nullptr,
	_StackStreamState_FieldInfo_,
	_StackStreamState_MethodInfo_
};

$Object* allocate$StackStreamState($Class* clazz) {
	return $of($alloc(StackStreamState));
}

$Stream* StackStreamState::staticStream = nullptr;

void StackStreamState::init$() {
	$set(this, walker, $StackWalker::getInstance());
}

void StackStreamState::main($StringArray* args) {
	$var(StackStreamState, test, $new(StackStreamState));
	test->testStatic();
	test->testInstance();
	test->testLocal();
}

void StackStreamState::testStatic() {
	$beforeCallerSensitive();
	$nc(this->walker)->walk(static_cast<$Function*>($$new(StackStreamState$$Lambda$lambda$testStatic$0)));
	checkStreamState(StackStreamState::staticStream);
}

void StackStreamState::testInstance() {
	$beforeCallerSensitive();
	$nc(this->walker)->walk(static_cast<$Function*>($$new(StackStreamState$$Lambda$lambda$testInstance$1$1, this)));
	checkStreamState(this->instanceStream);
}

void StackStreamState::testLocal() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Stream, stream, $cast($Stream, $nc(this->walker)->walk(static_cast<$Function*>($$new(StackStreamState$$Lambda$lambda$testLocal$2$2)))));
	checkStreamState(stream);
}

void StackStreamState::checkStreamState($Stream* stream) {
	$useLocalCurrentObjectStackCache();
	try {
		$nc(stream)->count();
		$throwNew($RuntimeException, "IllegalStateException not thrown"_s);
	} catch ($IllegalStateException& e) {
		$nc($System::out)->println($$str({"Got expected IllegalStateException: "_s, $(e->getMessage())}));
		e->printStackTrace($System::out);
	}
}

$Stream* StackStreamState::lambda$testLocal$2($Stream* s) {
	return s;
}

$Object* StackStreamState::lambda$testInstance$1($Stream* s) {
	$set(this, instanceStream, s);
	return $of(nullptr);
}

$Object* StackStreamState::lambda$testStatic$0($Stream* s) {
	$init(StackStreamState);
	$assignStatic(StackStreamState::staticStream, s);
	return $of(nullptr);
}

StackStreamState::StackStreamState() {
}

$Class* StackStreamState::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(StackStreamState$$Lambda$lambda$testStatic$0::classInfo$.name)) {
			return StackStreamState$$Lambda$lambda$testStatic$0::load$(name, initialize);
		}
		if (name->equals(StackStreamState$$Lambda$lambda$testInstance$1$1::classInfo$.name)) {
			return StackStreamState$$Lambda$lambda$testInstance$1$1::load$(name, initialize);
		}
		if (name->equals(StackStreamState$$Lambda$lambda$testLocal$2$2::classInfo$.name)) {
			return StackStreamState$$Lambda$lambda$testLocal$2$2::load$(name, initialize);
		}
	}
	$loadClass(StackStreamState, name, initialize, &_StackStreamState_ClassInfo_, allocate$StackStreamState);
	return class$;
}

$Class* StackStreamState::class$ = nullptr;