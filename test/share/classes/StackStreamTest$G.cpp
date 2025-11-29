#include <StackStreamTest$G.h>

#include <StackStreamTest.h>
#include <java/io/Serializable.h>
#include <java/lang/StackTraceElement.h>
#include <java/lang/StackWalker$Option.h>
#include <java/lang/StackWalker$StackFrame.h>
#include <java/lang/StackWalker.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Arrays.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Optional.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef DEFAULT_WALKER
#undef GOLDEN_CLASS_NAMES
#undef GOLDEN_METHOD_NAMES
#undef RETAIN_CLASS_REFERENCE
#undef STE_WALKER

using $StackStreamTest = ::StackStreamTest;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StackTraceElement = ::java::lang::StackTraceElement;
using $StackWalker = ::java::lang::StackWalker;
using $StackWalker$Option = ::java::lang::StackWalker$Option;
using $StackWalker$StackFrame = ::java::lang::StackWalker$StackFrame;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Arrays = ::java::util::Arrays;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Optional = ::java::util::Optional;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;

class StackStreamTest$G$$Lambda$lambda$g$0 : public $Function {
	$class(StackStreamTest$G$$Lambda$lambda$g$0, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* s) override {
		 return $of(StackStreamTest$G::lambda$g$0($cast($Stream, s)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StackStreamTest$G$$Lambda$lambda$g$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo StackStreamTest$G$$Lambda$lambda$g$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StackStreamTest$G$$Lambda$lambda$g$0::*)()>(&StackStreamTest$G$$Lambda$lambda$g$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StackStreamTest$G$$Lambda$lambda$g$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"StackStreamTest$G$$Lambda$lambda$g$0",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* StackStreamTest$G$$Lambda$lambda$g$0::load$($String* name, bool initialize) {
	$loadClass(StackStreamTest$G$$Lambda$lambda$g$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StackStreamTest$G$$Lambda$lambda$g$0::class$ = nullptr;

class StackStreamTest$G$$Lambda$lambda$g$1$1 : public $Function {
	$class(StackStreamTest$G$$Lambda$lambda$g$1$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* s) override {
		 return $of(StackStreamTest$G::lambda$g$1($cast($Stream, s)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StackStreamTest$G$$Lambda$lambda$g$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo StackStreamTest$G$$Lambda$lambda$g$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StackStreamTest$G$$Lambda$lambda$g$1$1::*)()>(&StackStreamTest$G$$Lambda$lambda$g$1$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StackStreamTest$G$$Lambda$lambda$g$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"StackStreamTest$G$$Lambda$lambda$g$1$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* StackStreamTest$G$$Lambda$lambda$g$1$1::load$($String* name, bool initialize) {
	$loadClass(StackStreamTest$G$$Lambda$lambda$g$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StackStreamTest$G$$Lambda$lambda$g$1$1::class$ = nullptr;

class StackStreamTest$G$$Lambda$lambda$g$3$2 : public $Function {
	$class(StackStreamTest$G$$Lambda$lambda$g$3$2, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* s) override {
		 return StackStreamTest$G::lambda$g$3($cast($Stream, s));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StackStreamTest$G$$Lambda$lambda$g$3$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo StackStreamTest$G$$Lambda$lambda$g$3$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StackStreamTest$G$$Lambda$lambda$g$3$2::*)()>(&StackStreamTest$G$$Lambda$lambda$g$3$2::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StackStreamTest$G$$Lambda$lambda$g$3$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"StackStreamTest$G$$Lambda$lambda$g$3$2",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* StackStreamTest$G$$Lambda$lambda$g$3$2::load$($String* name, bool initialize) {
	$loadClass(StackStreamTest$G$$Lambda$lambda$g$3$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StackStreamTest$G$$Lambda$lambda$g$3$2::class$ = nullptr;

class StackStreamTest$G$$Lambda$lambda$g$4$3 : public $Function {
	$class(StackStreamTest$G$$Lambda$lambda$g$4$3, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* s) override {
		 return $of(StackStreamTest$G::lambda$g$4($cast($Stream, s)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StackStreamTest$G$$Lambda$lambda$g$4$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo StackStreamTest$G$$Lambda$lambda$g$4$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StackStreamTest$G$$Lambda$lambda$g$4$3::*)()>(&StackStreamTest$G$$Lambda$lambda$g$4$3::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StackStreamTest$G$$Lambda$lambda$g$4$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"StackStreamTest$G$$Lambda$lambda$g$4$3",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* StackStreamTest$G$$Lambda$lambda$g$4$3::load$($String* name, bool initialize) {
	$loadClass(StackStreamTest$G$$Lambda$lambda$g$4$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StackStreamTest$G$$Lambda$lambda$g$4$3::class$ = nullptr;

class StackStreamTest$G$$Lambda$lambda$firstFrame$5$4 : public $Consumer {
	$class(StackStreamTest$G$$Lambda$lambda$firstFrame$5$4, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* e) override {
		StackStreamTest$G::lambda$firstFrame$5($cast($StackWalker$StackFrame, e));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StackStreamTest$G$$Lambda$lambda$firstFrame$5$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo StackStreamTest$G$$Lambda$lambda$firstFrame$5$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StackStreamTest$G$$Lambda$lambda$firstFrame$5$4::*)()>(&StackStreamTest$G$$Lambda$lambda$firstFrame$5$4::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo StackStreamTest$G$$Lambda$lambda$firstFrame$5$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"StackStreamTest$G$$Lambda$lambda$firstFrame$5$4",
	"java.lang.Object",
	"java.util.function.Consumer",
	nullptr,
	methodInfos
};
$Class* StackStreamTest$G$$Lambda$lambda$firstFrame$5$4::load$($String* name, bool initialize) {
	$loadClass(StackStreamTest$G$$Lambda$lambda$firstFrame$5$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StackStreamTest$G$$Lambda$lambda$firstFrame$5$4::class$ = nullptr;

class StackStreamTest$G$$Lambda$lambda$firstFrame$7$5 : public $Function {
	$class(StackStreamTest$G$$Lambda$lambda$firstFrame$7$5, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* s) override {
		 return $of(StackStreamTest$G::lambda$firstFrame$7($cast($Stream, s)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StackStreamTest$G$$Lambda$lambda$firstFrame$7$5>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo StackStreamTest$G$$Lambda$lambda$firstFrame$7$5::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StackStreamTest$G$$Lambda$lambda$firstFrame$7$5::*)()>(&StackStreamTest$G$$Lambda$lambda$firstFrame$7$5::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StackStreamTest$G$$Lambda$lambda$firstFrame$7$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"StackStreamTest$G$$Lambda$lambda$firstFrame$7$5",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* StackStreamTest$G$$Lambda$lambda$firstFrame$7$5::load$($String* name, bool initialize) {
	$loadClass(StackStreamTest$G$$Lambda$lambda$firstFrame$7$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StackStreamTest$G$$Lambda$lambda$firstFrame$7$5::class$ = nullptr;

class StackStreamTest$G$$Lambda$lambda$firstFrame$6$6 : public $Predicate {
	$class(StackStreamTest$G$$Lambda$lambda$firstFrame$6$6, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* e) override {
		 return StackStreamTest$G::lambda$firstFrame$6($cast($StackWalker$StackFrame, e));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StackStreamTest$G$$Lambda$lambda$firstFrame$6$6>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo StackStreamTest$G$$Lambda$lambda$firstFrame$6$6::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StackStreamTest$G$$Lambda$lambda$firstFrame$6$6::*)()>(&StackStreamTest$G$$Lambda$lambda$firstFrame$6$6::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo StackStreamTest$G$$Lambda$lambda$firstFrame$6$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"StackStreamTest$G$$Lambda$lambda$firstFrame$6$6",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* StackStreamTest$G$$Lambda$lambda$firstFrame$6$6::load$($String* name, bool initialize) {
	$loadClass(StackStreamTest$G$$Lambda$lambda$firstFrame$6$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StackStreamTest$G$$Lambda$lambda$firstFrame$6$6::class$ = nullptr;

class StackStreamTest$G$$Lambda$isTestClass$7 : public $Predicate {
	$class(StackStreamTest$G$$Lambda$isTestClass$7, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* f) override {
		 return $StackStreamTest::isTestClass($cast($StackWalker$StackFrame, f));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StackStreamTest$G$$Lambda$isTestClass$7>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo StackStreamTest$G$$Lambda$isTestClass$7::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StackStreamTest$G$$Lambda$isTestClass$7::*)()>(&StackStreamTest$G$$Lambda$isTestClass$7::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo StackStreamTest$G$$Lambda$isTestClass$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"StackStreamTest$G$$Lambda$isTestClass$7",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* StackStreamTest$G$$Lambda$isTestClass$7::load$($String* name, bool initialize) {
	$loadClass(StackStreamTest$G$$Lambda$isTestClass$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StackStreamTest$G$$Lambda$isTestClass$7::class$ = nullptr;

class StackStreamTest$G$$Lambda$toStackTraceElement$8 : public $Function {
	$class(StackStreamTest$G$$Lambda$toStackTraceElement$8, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($StackWalker$StackFrame, inst$)->toStackTraceElement());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StackStreamTest$G$$Lambda$toStackTraceElement$8>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo StackStreamTest$G$$Lambda$toStackTraceElement$8::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StackStreamTest$G$$Lambda$toStackTraceElement$8::*)()>(&StackStreamTest$G$$Lambda$toStackTraceElement$8::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StackStreamTest$G$$Lambda$toStackTraceElement$8::classInfo$ = {
	$PUBLIC | $FINAL,
	"StackStreamTest$G$$Lambda$toStackTraceElement$8",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* StackStreamTest$G$$Lambda$toStackTraceElement$8::load$($String* name, bool initialize) {
	$loadClass(StackStreamTest$G$$Lambda$toStackTraceElement$8, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StackStreamTest$G$$Lambda$toStackTraceElement$8::class$ = nullptr;

class StackStreamTest$G$$Lambda$lambda$g$2$9 : public $Consumer {
	$class(StackStreamTest$G$$Lambda$lambda$g$2$9, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* ste) override {
		StackStreamTest$G::lambda$g$2($cast($StackTraceElement, ste));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StackStreamTest$G$$Lambda$lambda$g$2$9>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo StackStreamTest$G$$Lambda$lambda$g$2$9::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StackStreamTest$G$$Lambda$lambda$g$2$9::*)()>(&StackStreamTest$G$$Lambda$lambda$g$2$9::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo StackStreamTest$G$$Lambda$lambda$g$2$9::classInfo$ = {
	$PUBLIC | $FINAL,
	"StackStreamTest$G$$Lambda$lambda$g$2$9",
	"java.lang.Object",
	"java.util.function.Consumer",
	nullptr,
	methodInfos
};
$Class* StackStreamTest$G$$Lambda$lambda$g$2$9::load$($String* name, bool initialize) {
	$loadClass(StackStreamTest$G$$Lambda$lambda$g$2$9, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StackStreamTest$G$$Lambda$lambda$g$2$9::class$ = nullptr;

class StackStreamTest$G$$Lambda$getMethodName$10 : public $Function {
	$class(StackStreamTest$G$$Lambda$getMethodName$10, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($StackWalker$StackFrame, inst$)->getMethodName());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StackStreamTest$G$$Lambda$getMethodName$10>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo StackStreamTest$G$$Lambda$getMethodName$10::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StackStreamTest$G$$Lambda$getMethodName$10::*)()>(&StackStreamTest$G$$Lambda$getMethodName$10::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StackStreamTest$G$$Lambda$getMethodName$10::classInfo$ = {
	$PUBLIC | $FINAL,
	"StackStreamTest$G$$Lambda$getMethodName$10",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* StackStreamTest$G$$Lambda$getMethodName$10::load$($String* name, bool initialize) {
	$loadClass(StackStreamTest$G$$Lambda$getMethodName$10, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StackStreamTest$G$$Lambda$getMethodName$10::class$ = nullptr;

class StackStreamTest$G$$Lambda$getClassName$11 : public $Function {
	$class(StackStreamTest$G$$Lambda$getClassName$11, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($StackWalker$StackFrame, inst$)->getClassName());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StackStreamTest$G$$Lambda$getClassName$11>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo StackStreamTest$G$$Lambda$getClassName$11::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StackStreamTest$G$$Lambda$getClassName$11::*)()>(&StackStreamTest$G$$Lambda$getClassName$11::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StackStreamTest$G$$Lambda$getClassName$11::classInfo$ = {
	$PUBLIC | $FINAL,
	"StackStreamTest$G$$Lambda$getClassName$11",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* StackStreamTest$G$$Lambda$getClassName$11::load$($String* name, bool initialize) {
	$loadClass(StackStreamTest$G$$Lambda$getClassName$11, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StackStreamTest$G$$Lambda$getClassName$11::class$ = nullptr;

$FieldInfo _StackStreamTest$G_FieldInfo_[] = {
	{"STE_WALKER", "Ljava/lang/StackWalker;", nullptr, $STATIC, $staticField(StackStreamTest$G, STE_WALKER)},
	{"DEFAULT_WALKER", "Ljava/lang/StackWalker;", nullptr, $STATIC, $staticField(StackStreamTest$G, DEFAULT_WALKER)},
	{"GOLDEN_CLASS_NAMES", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(StackStreamTest$G, GOLDEN_CLASS_NAMES)},
	{"GOLDEN_METHOD_NAMES", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(StackStreamTest$G, GOLDEN_METHOD_NAMES)},
	{}
};

$MethodInfo _StackStreamTest$G_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(StackStreamTest$G::*)()>(&StackStreamTest$G::init$))},
	{"checkStackTraceElements", "(Ljava/util/List;Ljava/util/List;Ljava/util/List;)V", "(Ljava/util/List<Ljava/lang/String;>;Ljava/util/List<Ljava/lang/String;>;Ljava/util/List<Ljava/lang/StackTraceElement;>;)V", $STATIC, $method(static_cast<void(*)($List*,$List*,$List*)>(&StackStreamTest$G::checkStackTraceElements))},
	{"dumpSTEInfo", "(Ljava/util/List;Ljava/util/List;Ljava/util/List;)V", "(Ljava/util/List<Ljava/lang/String;>;Ljava/util/List<Ljava/lang/String;>;Ljava/util/List<Ljava/lang/StackTraceElement;>;)V", $STATIC, $method(static_cast<void(*)($List*,$List*,$List*)>(&StackStreamTest$G::dumpSTEInfo))},
	{"firstFrame", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&StackStreamTest$G::firstFrame))},
	{"g", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&StackStreamTest$G::g))},
	{"lambda$firstFrame$5", "(Ljava/lang/StackWalker$StackFrame;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($StackWalker$StackFrame*)>(&StackStreamTest$G::lambda$firstFrame$5))},
	{"lambda$firstFrame$6", "(Ljava/lang/StackWalker$StackFrame;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($StackWalker$StackFrame*)>(&StackStreamTest$G::lambda$firstFrame$6))},
	{"lambda$firstFrame$7", "(Ljava/util/stream/Stream;)Ljava/util/Optional;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Optional*(*)($Stream*)>(&StackStreamTest$G::lambda$firstFrame$7))},
	{"lambda$g$0", "(Ljava/util/stream/Stream;)Ljava/util/List;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$List*(*)($Stream*)>(&StackStreamTest$G::lambda$g$0))},
	{"lambda$g$1", "(Ljava/util/stream/Stream;)Ljava/util/List;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$List*(*)($Stream*)>(&StackStreamTest$G::lambda$g$1))},
	{"lambda$g$2", "(Ljava/lang/StackTraceElement;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($StackTraceElement*)>(&StackStreamTest$G::lambda$g$2))},
	{"lambda$g$3", "(Ljava/util/stream/Stream;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($Stream*)>(&StackStreamTest$G::lambda$g$3))},
	{"lambda$g$4", "(Ljava/util/stream/Stream;)Ljava/util/List;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$List*(*)($Stream*)>(&StackStreamTest$G::lambda$g$4))},
	{}
};

$InnerClassInfo _StackStreamTest$G_InnerClassesInfo_[] = {
	{"StackStreamTest$G", "StackStreamTest", "G", $STATIC},
	{}
};

$ClassInfo _StackStreamTest$G_ClassInfo_ = {
	$ACC_SUPER,
	"StackStreamTest$G",
	"java.lang.Object",
	nullptr,
	_StackStreamTest$G_FieldInfo_,
	_StackStreamTest$G_MethodInfo_,
	nullptr,
	nullptr,
	_StackStreamTest$G_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"StackStreamTest"
};

$Object* allocate$StackStreamTest$G($Class* clazz) {
	return $of($alloc(StackStreamTest$G));
}

$StackWalker* StackStreamTest$G::STE_WALKER = nullptr;
$StackWalker* StackStreamTest$G::DEFAULT_WALKER = nullptr;
$List* StackStreamTest$G::GOLDEN_CLASS_NAMES = nullptr;
$List* StackStreamTest$G::GOLDEN_METHOD_NAMES = nullptr;

void StackStreamTest$G::init$() {
}

void StackStreamTest$G::g() {
	$init(StackStreamTest$G);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$nc($System::out)->println("Thread dump"_s);
	$Thread::dumpStack();
	$StackStreamTest::caller();
	firstFrame();
	$nc($System::out)->println("check class names"_s);
	$var($List, sfs, $cast($List, $nc(StackStreamTest$G::DEFAULT_WALKER)->walk(static_cast<$Function*>($$new(StackStreamTest$G$$Lambda$lambda$g$0)))));
	$StackStreamTest::equalsOrThrow("class names"_s, sfs, StackStreamTest$G::GOLDEN_CLASS_NAMES);
	$nc($System::out)->println("methodNames()"_s);
	$assign(sfs, $cast($List, $nc(StackStreamTest$G::DEFAULT_WALKER)->walk(static_cast<$Function*>($$new(StackStreamTest$G$$Lambda$lambda$g$1$1)))));
	$StackStreamTest::equalsOrThrow("method names"_s, sfs, StackStreamTest$G::GOLDEN_METHOD_NAMES);
	$var($Exception, exc, $new($Exception, "G.g stack"_s));
	exc->printStackTrace();
	$nc($System::out)->println("Stream of StackTraceElement"_s);
	$nc($($StackWalker::getInstance()))->walk(static_cast<$Function*>($$new(StackStreamTest$G$$Lambda$lambda$g$3$2)));
	$nc($System::out)->println("Collect StackTraceElement"_s);
	$var($List, stacktrace, $cast($List, $nc(StackStreamTest$G::STE_WALKER)->walk(static_cast<$Function*>($$new(StackStreamTest$G$$Lambda$lambda$g$4$3)))));
	int32_t i = 0;
	{
		$var($Iterator, i$, $nc(stacktrace)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($StackTraceElement, s, $cast($StackTraceElement, i$->next()));
			{
				$nc($System::out)->format("  %d: %s%n"_s, $$new($ObjectArray, {
					$($of($Integer::valueOf(i++))),
					$of(s)
				}));
			}
		}
	}
	checkStackTraceElements(StackStreamTest$G::GOLDEN_CLASS_NAMES, StackStreamTest$G::GOLDEN_METHOD_NAMES, stacktrace);
}

void StackStreamTest$G::checkStackTraceElements($List* classNames, $List* methodNames, $List* stes) {
	$init(StackStreamTest$G);
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $nc(classNames)->size();
	if (var$0 != $nc(methodNames)->size()) {
		$throwNew($RuntimeException, "Test error: classNames and methodNames should be same size"_s);
	}
	int32_t var$1 = $nc(classNames)->size();
	if (var$1 != $nc(stes)->size()) {
		dumpSTEInfo(classNames, methodNames, stes);
		$throwNew($RuntimeException, "wrong number of elements in stes"_s);
	}
	for (int32_t i = 0; i < $nc(classNames)->size(); ++i) {
		bool var$2 = !$nc(($cast($String, $(classNames->get(i)))))->equals($($nc(($cast($StackTraceElement, $($nc(stes)->get(i)))))->getClassName()));
		if (var$2 || !$nc(($cast($String, $($nc(methodNames)->get(i)))))->equals($($nc(($cast($StackTraceElement, $($nc(stes)->get(i)))))->getMethodName()))) {
			dumpSTEInfo(classNames, methodNames, stes);
			$throwNew($RuntimeException, "class & method names don\'t match"_s);
		}
	}
}

void StackStreamTest$G::dumpSTEInfo($List* classNames, $List* methodNames, $List* stes) {
	$init(StackStreamTest$G);
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println("Observed class, method names:"_s);
	{
		$var($Iterator, i$, $nc(stes)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($StackTraceElement, ste, $cast($StackTraceElement, i$->next()));
			{
				$var($String, var$0, $$str({"  "_s, $($nc(ste)->getClassName()), ", "_s}));
				$nc($System::out)->println($$concat(var$0, $(ste->getMethodName())));
			}
		}
	}
	$nc($System::out)->println("Expected class, method names:"_s);
	for (int32_t i = 0; i < $nc(classNames)->size(); ++i) {
		$var($String, var$1, $$str({"  "_s, $cast($String, $(classNames->get(i))), ", "_s}));
		$nc($System::out)->println($$concat(var$1, $cast($String, $($nc(methodNames)->get(i)))));
	}
}

void StackStreamTest$G::firstFrame() {
	$init(StackStreamTest$G);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$nc($System::out)->println("first frame()"_s);
	$init($StackWalker$Option);
	$var($StackWalker, sw, $StackWalker::getInstance($StackWalker$Option::RETAIN_CLASS_REFERENCE));
	$nc(sw)->forEach(static_cast<$Consumer*>($$new(StackStreamTest$G$$Lambda$lambda$firstFrame$5$4)));
	$nc($System::out)->println("\n"_s);
	$var($Optional, frame, $cast($Optional, sw->walk(static_cast<$Function*>($$new(StackStreamTest$G$$Lambda$lambda$firstFrame$7$5)))));
	$Class* c = $nc(($cast($StackWalker$StackFrame, $($nc(frame)->get()))))->getDeclaringClass();
	$nc($System::out)->println($$str({"\nfirst frame: "_s, c}));
	$load($StackStreamTest);
	if (c != $StackStreamTest::class$) {
		$throwNew($RuntimeException, $$str({"Unexpected first caller class "_s, c}));
	}
}

$Optional* StackStreamTest$G::lambda$firstFrame$7($Stream* s) {
	$init(StackStreamTest$G);
	$useLocalCurrentObjectStackCache();
	return $nc($($nc(s)->filter(static_cast<$Predicate*>($$new(StackStreamTest$G$$Lambda$lambda$firstFrame$6$6)))))->findFirst();
}

bool StackStreamTest$G::lambda$firstFrame$6($StackWalker$StackFrame* e) {
	$init(StackStreamTest$G);
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $$str({$($nc(e)->getClassName()), " == "_s}));
	$nc($System::err)->println($$concat(var$0, $$str($nc($(e->getClassName()))->equals("StackStreamTest"_s))));
	return $nc($($nc(e)->getClassName()))->equals("StackStreamTest"_s);
}

void StackStreamTest$G::lambda$firstFrame$5($StackWalker$StackFrame* e) {
	$init(StackStreamTest$G);
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $$str({$($nc(e)->getClassName()), ","_s}));
	$nc($System::out)->println($$concat(var$0, $(e->getMethodName())));
}

$List* StackStreamTest$G::lambda$g$4($Stream* s) {
	$init(StackStreamTest$G);
	$useLocalCurrentObjectStackCache();
	$var($Function, var$0, static_cast<$Function*>($new(StackStreamTest$G$$Lambda$toStackTraceElement$8)));
	return $cast($List, $nc($($nc(s)->filter(static_cast<$Predicate*>($$new(StackStreamTest$G$$Lambda$isTestClass$7)))))->collect($($Collectors::mapping(var$0, $($Collectors::toList())))));
}

$Object* StackStreamTest$G::lambda$g$3($Stream* s) {
	$init(StackStreamTest$G);
	$useLocalCurrentObjectStackCache();
	$nc($($nc(s)->map(static_cast<$Function*>($$new(StackStreamTest$G$$Lambda$toStackTraceElement$8)))))->forEach(static_cast<$Consumer*>($$new(StackStreamTest$G$$Lambda$lambda$g$2$9)));
	return $of(nullptr);
}

void StackStreamTest$G::lambda$g$2($StackTraceElement* ste) {
	$init(StackStreamTest$G);
	$nc($System::out)->println($$str({"STE: "_s, ste}));
}

$List* StackStreamTest$G::lambda$g$1($Stream* s) {
	$init(StackStreamTest$G);
	$useLocalCurrentObjectStackCache();
	return $cast($List, $nc($($nc($($nc(s)->filter(static_cast<$Predicate*>($$new(StackStreamTest$G$$Lambda$isTestClass$7)))))->map(static_cast<$Function*>($$new(StackStreamTest$G$$Lambda$getMethodName$10)))))->collect($($Collectors::toList())));
}

$List* StackStreamTest$G::lambda$g$0($Stream* s) {
	$init(StackStreamTest$G);
	$useLocalCurrentObjectStackCache();
	return $cast($List, $nc($($nc($($nc(s)->filter(static_cast<$Predicate*>($$new(StackStreamTest$G$$Lambda$isTestClass$7)))))->map(static_cast<$Function*>($$new(StackStreamTest$G$$Lambda$getClassName$11)))))->collect($($Collectors::toList())));
}

void clinit$StackStreamTest$G($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(StackStreamTest$G::STE_WALKER, $StackWalker::getInstance());
	$assignStatic(StackStreamTest$G::DEFAULT_WALKER, $StackWalker::getInstance());
	$assignStatic(StackStreamTest$G::GOLDEN_CLASS_NAMES, $Arrays::asList($$new($StringArray, {
		"StackStreamTest$G"_s,
		"StackStreamTest$F"_s,
		"StackStreamTest$E"_s,
		"StackStreamTest$D"_s,
		"StackStreamTest$C"_s,
		"StackStreamTest$B"_s,
		"StackStreamTest$A"_s,
		"StackStreamTest"_s,
		"StackStreamTest"_s
	})));
	$assignStatic(StackStreamTest$G::GOLDEN_METHOD_NAMES, $Arrays::asList($$new($StringArray, {
		"g"_s,
		"f"_s,
		"e"_s,
		"d"_s,
		"c"_s,
		"b"_s,
		"a"_s,
		"test"_s,
		"main"_s
	})));
}

StackStreamTest$G::StackStreamTest$G() {
}

$Class* StackStreamTest$G::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(StackStreamTest$G$$Lambda$lambda$g$0::classInfo$.name)) {
			return StackStreamTest$G$$Lambda$lambda$g$0::load$(name, initialize);
		}
		if (name->equals(StackStreamTest$G$$Lambda$lambda$g$1$1::classInfo$.name)) {
			return StackStreamTest$G$$Lambda$lambda$g$1$1::load$(name, initialize);
		}
		if (name->equals(StackStreamTest$G$$Lambda$lambda$g$3$2::classInfo$.name)) {
			return StackStreamTest$G$$Lambda$lambda$g$3$2::load$(name, initialize);
		}
		if (name->equals(StackStreamTest$G$$Lambda$lambda$g$4$3::classInfo$.name)) {
			return StackStreamTest$G$$Lambda$lambda$g$4$3::load$(name, initialize);
		}
		if (name->equals(StackStreamTest$G$$Lambda$lambda$firstFrame$5$4::classInfo$.name)) {
			return StackStreamTest$G$$Lambda$lambda$firstFrame$5$4::load$(name, initialize);
		}
		if (name->equals(StackStreamTest$G$$Lambda$lambda$firstFrame$7$5::classInfo$.name)) {
			return StackStreamTest$G$$Lambda$lambda$firstFrame$7$5::load$(name, initialize);
		}
		if (name->equals(StackStreamTest$G$$Lambda$lambda$firstFrame$6$6::classInfo$.name)) {
			return StackStreamTest$G$$Lambda$lambda$firstFrame$6$6::load$(name, initialize);
		}
		if (name->equals(StackStreamTest$G$$Lambda$isTestClass$7::classInfo$.name)) {
			return StackStreamTest$G$$Lambda$isTestClass$7::load$(name, initialize);
		}
		if (name->equals(StackStreamTest$G$$Lambda$toStackTraceElement$8::classInfo$.name)) {
			return StackStreamTest$G$$Lambda$toStackTraceElement$8::load$(name, initialize);
		}
		if (name->equals(StackStreamTest$G$$Lambda$lambda$g$2$9::classInfo$.name)) {
			return StackStreamTest$G$$Lambda$lambda$g$2$9::load$(name, initialize);
		}
		if (name->equals(StackStreamTest$G$$Lambda$getMethodName$10::classInfo$.name)) {
			return StackStreamTest$G$$Lambda$getMethodName$10::load$(name, initialize);
		}
		if (name->equals(StackStreamTest$G$$Lambda$getClassName$11::classInfo$.name)) {
			return StackStreamTest$G$$Lambda$getClassName$11::load$(name, initialize);
		}
	}
	$loadClass(StackStreamTest$G, name, initialize, &_StackStreamTest$G_ClassInfo_, clinit$StackStreamTest$G, allocate$StackStreamTest$G);
	return class$;
}

$Class* StackStreamTest$G::class$ = nullptr;