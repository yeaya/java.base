#include <NativeMethod.h>

#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/StackWalker$Option.h>
#include <java/lang/StackWalker$StackFrame.h>
#include <java/lang/StackWalker.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef SHOW_REFLECT_FRAMES

using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackWalker = ::java::lang::StackWalker;
using $StackWalker$Option = ::java::lang::StackWalker$Option;
using $StackWalker$StackFrame = ::java::lang::StackWalker$StackFrame;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Method = ::java::lang::reflect::Method;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Collector = ::java::util::stream::Collector;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;

class NativeMethod$$Lambda$lambda$walk$0 : public $Function {
	$class(NativeMethod$$Lambda$lambda$walk$0, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* s) override {
		 return $of(NativeMethod::lambda$walk$0($cast($Stream, s)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<NativeMethod$$Lambda$lambda$walk$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo NativeMethod$$Lambda$lambda$walk$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NativeMethod$$Lambda$lambda$walk$0::*)()>(&NativeMethod$$Lambda$lambda$walk$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo NativeMethod$$Lambda$lambda$walk$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"NativeMethod$$Lambda$lambda$walk$0",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* NativeMethod$$Lambda$lambda$walk$0::load$($String* name, bool initialize) {
	$loadClass(NativeMethod$$Lambda$lambda$walk$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* NativeMethod$$Lambda$lambda$walk$0::class$ = nullptr;

class NativeMethod$$Lambda$isNativeMethod$1 : public $Predicate {
	$class(NativeMethod$$Lambda$isNativeMethod$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* inst$) override {
		 return $sure($StackWalker$StackFrame, inst$)->isNativeMethod();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<NativeMethod$$Lambda$isNativeMethod$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo NativeMethod$$Lambda$isNativeMethod$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NativeMethod$$Lambda$isNativeMethod$1::*)()>(&NativeMethod$$Lambda$isNativeMethod$1::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo NativeMethod$$Lambda$isNativeMethod$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"NativeMethod$$Lambda$isNativeMethod$1",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* NativeMethod$$Lambda$isNativeMethod$1::load$($String* name, bool initialize) {
	$loadClass(NativeMethod$$Lambda$isNativeMethod$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* NativeMethod$$Lambda$isNativeMethod$1::class$ = nullptr;

$FieldInfo _NativeMethod_FieldInfo_[] = {
	{"walker", "Ljava/lang/StackWalker;", nullptr, $PRIVATE | $FINAL, $field(NativeMethod, walker)},
	{}
};

$MethodInfo _NativeMethod_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(NativeMethod::*)()>(&NativeMethod::init$))},
	{"assertTrue", "(ZLjava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(bool,$String*)>(&NativeMethod::assertTrue))},
	{"lambda$walk$0", "(Ljava/util/stream/Stream;)Ljava/util/List;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$List*(*)($Stream*)>(&NativeMethod::lambda$walk$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&NativeMethod::main)), "java.lang.Exception"},
	{"test", "()V", nullptr, 0, nullptr, "java.lang.Exception"},
	{"walk", "()V", nullptr, 0},
	{}
};

$ClassInfo _NativeMethod_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"NativeMethod",
	"java.lang.Object",
	nullptr,
	_NativeMethod_FieldInfo_,
	_NativeMethod_MethodInfo_
};

$Object* allocate$NativeMethod($Class* clazz) {
	return $of($alloc(NativeMethod));
}

void NativeMethod::main($StringArray* args) {
	$$new(NativeMethod)->test();
}

void NativeMethod::init$() {
	$init($StackWalker$Option);
	$set(this, walker, $StackWalker::getInstance($StackWalker$Option::SHOW_REFLECT_FRAMES));
}

void NativeMethod::test() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Method, m, NativeMethod::class$->getDeclaredMethod("walk"_s, $$new($ClassArray, 0)));
	$nc(m)->invoke(this, $$new($ObjectArray, 0));
}

void NativeMethod::walk() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($List, nativeFrames, $cast($List, $nc(this->walker)->walk(static_cast<$Function*>($$new(NativeMethod$$Lambda$lambda$walk$0)))));
	assertTrue($nc(nativeFrames)->size() > 0, "native frame not found"_s);
	{
		$var($Iterator, i$, $nc(nativeFrames)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($StackWalker$StackFrame, f, $cast($StackWalker$StackFrame, i$->next()));
			{
				assertTrue($nc(f)->getFileName() != nullptr, "source file expected to be found"_s);
				assertTrue($nc(f)->getLineNumber() < 0, "line number expected to be unavailable"_s);
				assertTrue($nc(f)->getByteCodeIndex() < 0, "bci expected to be unavailable"_s);
			}
		}
	}
}

void NativeMethod::assertTrue(bool value, $String* msg) {
	if (value != true) {
		$throwNew($AssertionError, $of(msg));
	}
}

$List* NativeMethod::lambda$walk$0($Stream* s) {
	$useLocalCurrentObjectStackCache();
	return $cast($List, $nc($($nc(s)->filter(static_cast<$Predicate*>($$new(NativeMethod$$Lambda$isNativeMethod$1)))))->collect($($Collectors::toList())));
}

NativeMethod::NativeMethod() {
}

$Class* NativeMethod::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(NativeMethod$$Lambda$lambda$walk$0::classInfo$.name)) {
			return NativeMethod$$Lambda$lambda$walk$0::load$(name, initialize);
		}
		if (name->equals(NativeMethod$$Lambda$isNativeMethod$1::classInfo$.name)) {
			return NativeMethod$$Lambda$isNativeMethod$1::load$(name, initialize);
		}
	}
	$loadClass(NativeMethod, name, initialize, &_NativeMethod_ClassInfo_, allocate$NativeMethod);
	return class$;
}

$Class* NativeMethod::class$ = nullptr;