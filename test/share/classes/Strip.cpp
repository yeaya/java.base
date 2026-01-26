#include <Strip.h>

#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/function/IntConsumer.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/IntPredicate.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/IntStream.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $IntConsumer = ::java::util::function::IntConsumer;
using $IntFunction = ::java::util::function::IntFunction;
using $IntPredicate = ::java::util::function::IntPredicate;
using $Collectors = ::java::util::stream::Collectors;
using $IntStream = ::java::util::stream::IntStream;
using $Stream = ::java::util::stream::Stream;

class Strip$$Lambda$lambda$testWhitespace$0 : public $IntPredicate {
	$class(Strip$$Lambda$lambda$testWhitespace$0, $NO_CLASS_INIT, $IntPredicate)
public:
	void init$() {
	}
	virtual bool test(int32_t c) override {
		 return Strip::lambda$testWhitespace$0(c);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Strip$$Lambda$lambda$testWhitespace$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Strip$$Lambda$lambda$testWhitespace$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Strip$$Lambda$lambda$testWhitespace$0, init$, void)},
	{"test", "(I)Z", nullptr, $PUBLIC, $virtualMethod(Strip$$Lambda$lambda$testWhitespace$0, test, bool, int32_t)},
	{}
};
$ClassInfo Strip$$Lambda$lambda$testWhitespace$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"Strip$$Lambda$lambda$testWhitespace$0",
	"java.lang.Object",
	"java.util.function.IntPredicate",
	nullptr,
	methodInfos
};
$Class* Strip$$Lambda$lambda$testWhitespace$0::load$($String* name, bool initialize) {
	$loadClass(Strip$$Lambda$lambda$testWhitespace$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Strip$$Lambda$lambda$testWhitespace$0::class$ = nullptr;

class Strip$$Lambda$lambda$testWhitespace$1$1 : public $IntConsumer {
	$class(Strip$$Lambda$lambda$testWhitespace$1$1, $NO_CLASS_INIT, $IntConsumer)
public:
	void init$($StringBuilder* sb) {
		$set(this, sb, sb);
	}
	virtual void accept(int32_t c) override {
		Strip::lambda$testWhitespace$1(sb, c);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Strip$$Lambda$lambda$testWhitespace$1$1>());
	}
	$StringBuilder* sb = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Strip$$Lambda$lambda$testWhitespace$1$1::fieldInfos[2] = {
	{"sb", "Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $field(Strip$$Lambda$lambda$testWhitespace$1$1, sb)},
	{}
};
$MethodInfo Strip$$Lambda$lambda$testWhitespace$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/lang/StringBuilder;)V", nullptr, $PUBLIC, $method(Strip$$Lambda$lambda$testWhitespace$1$1, init$, void, $StringBuilder*)},
	{"accept", "(I)V", nullptr, $PUBLIC, $virtualMethod(Strip$$Lambda$lambda$testWhitespace$1$1, accept, void, int32_t)},
	{}
};
$ClassInfo Strip$$Lambda$lambda$testWhitespace$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"Strip$$Lambda$lambda$testWhitespace$1$1",
	"java.lang.Object",
	"java.util.function.IntConsumer",
	fieldInfos,
	methodInfos
};
$Class* Strip$$Lambda$lambda$testWhitespace$1$1::load$($String* name, bool initialize) {
	$loadClass(Strip$$Lambda$lambda$testWhitespace$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Strip$$Lambda$lambda$testWhitespace$1$1::class$ = nullptr;

class Strip$$Lambda$lambda$report$2$2 : public $IntFunction {
	$class(Strip$$Lambda$lambda$report$2$2, $NO_CLASS_INIT, $IntFunction)
public:
	void init$() {
	}
	virtual $Object* apply(int32_t c) override {
		 return $of(Strip::lambda$report$2(c));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Strip$$Lambda$lambda$report$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Strip$$Lambda$lambda$report$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Strip$$Lambda$lambda$report$2$2, init$, void)},
	{"apply", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Strip$$Lambda$lambda$report$2$2, apply, $Object*, int32_t)},
	{}
};
$ClassInfo Strip$$Lambda$lambda$report$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"Strip$$Lambda$lambda$report$2$2",
	"java.lang.Object",
	"java.util.function.IntFunction",
	nullptr,
	methodInfos
};
$Class* Strip$$Lambda$lambda$report$2$2::load$($String* name, bool initialize) {
	$loadClass(Strip$$Lambda$lambda$report$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Strip$$Lambda$lambda$report$2$2::class$ = nullptr;

$MethodInfo _Strip_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Strip, init$, void)},
	{"equal", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(Strip, equal, void, $String*, $String*)},
	{"lambda$report$2", "(I)Ljava/lang/Integer;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Strip, lambda$report$2, $Integer*, int32_t)},
	{"lambda$testWhitespace$0", "(I)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Strip, lambda$testWhitespace$0, bool, int32_t)},
	{"lambda$testWhitespace$1", "(Ljava/lang/StringBuilder;I)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Strip, lambda$testWhitespace$1, void, $StringBuilder*, int32_t)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(Strip, main, void, $StringArray*)},
	{"report", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(Strip, report, void, $String*, $String*, $String*, $String*, $String*)},
	{"testStrip", "()V", nullptr, $STATIC, $staticMethod(Strip, testStrip, void)},
	{"testWhitespace", "()V", nullptr, $STATIC, $staticMethod(Strip, testWhitespace, void)},
	{}
};

$ClassInfo _Strip_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Strip",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Strip_MethodInfo_
};

$Object* allocate$Strip($Class* clazz) {
	return $of($alloc(Strip));
}

void Strip::init$() {
}

void Strip::main($StringArray* arg) {
	testStrip();
	testWhitespace();
}

void Strip::testStrip() {
	$useLocalCurrentObjectStackCache();
	equal($("   abc   "_s->strip()), "abc"_s);
	equal($("   abc   "_s->stripLeading()), "abc   "_s);
	equal($("   abc   "_s->stripTrailing()), "   abc"_s);
	equal($(u"   abc•   "_s->strip()), u"abc•"_s);
	equal($(u"   abc•   "_s->stripLeading()), u"abc•   "_s);
	equal($(u"   abc•   "_s->stripTrailing()), u"   abc•"_s);
	equal($(""_s->strip()), ""_s);
	equal($(""_s->stripLeading()), ""_s);
	equal($(""_s->stripTrailing()), ""_s);
	equal($("\b"_s->strip()), "\b"_s);
	equal($("\b"_s->stripLeading()), "\b"_s);
	equal($("\b"_s->stripTrailing()), "\b"_s);
}

void Strip::testWhitespace() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder, 64));
	$nc($($nc($($IntStream::range(1, 0x0000FFFF)))->filter(static_cast<$IntPredicate*>($$new(Strip$$Lambda$lambda$testWhitespace$0)))))->forEach(static_cast<$IntConsumer*>($$new(Strip$$Lambda$lambda$testWhitespace$1$1, sb)));
	$var($String, whiteSpace, sb->toString());
	$var($String, testString, $str({whiteSpace, "abc"_s, whiteSpace}));
	equal($($nc(testString)->strip()), "abc"_s);
	equal($($nc(testString)->stripLeading()), $$str({"abc"_s, whiteSpace}));
	equal($($nc(testString)->stripTrailing()), $$str({whiteSpace, "abc"_s}));
}

void Strip::report($String* message, $String* inputTag, $String* input, $String* outputTag, $String* output) {
	$useLocalCurrentObjectStackCache();
	$nc($System::err)->println(message);
	$nc($System::err)->println();
	$nc($System::err)->println(inputTag);
	$nc($System::err)->println($($nc($($($nc(input)->codePoints())->mapToObj(static_cast<$IntFunction*>($$new(Strip$$Lambda$lambda$report$2$2)))))->collect($($Collectors::toList()))));
	$nc($System::err)->println();
	$nc($System::err)->println(outputTag);
	$nc($System::err)->println($($nc($($($nc(output)->codePoints())->mapToObj(static_cast<$IntFunction*>($$new(Strip$$Lambda$lambda$report$2$2)))))->collect($($Collectors::toList()))));
	$throwNew($RuntimeException);
}

void Strip::equal($String* input, $String* expected) {
	if (input == nullptr || expected == nullptr || !$nc(expected)->equals(input)) {
		report("Failed equal"_s, "Input:"_s, input, "Expected:"_s, expected);
	}
}

$Integer* Strip::lambda$report$2(int32_t c) {
	return $Integer::valueOf(c);
}

void Strip::lambda$testWhitespace$1($StringBuilder* sb, int32_t c) {
	$nc(sb)->append((char16_t)c);
}

bool Strip::lambda$testWhitespace$0(int32_t c) {
	return $Character::isWhitespace(c);
}

Strip::Strip() {
}

$Class* Strip::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Strip$$Lambda$lambda$testWhitespace$0::classInfo$.name)) {
			return Strip$$Lambda$lambda$testWhitespace$0::load$(name, initialize);
		}
		if (name->equals(Strip$$Lambda$lambda$testWhitespace$1$1::classInfo$.name)) {
			return Strip$$Lambda$lambda$testWhitespace$1$1::load$(name, initialize);
		}
		if (name->equals(Strip$$Lambda$lambda$report$2$2::classInfo$.name)) {
			return Strip$$Lambda$lambda$report$2$2::load$(name, initialize);
		}
	}
	$loadClass(Strip, name, initialize, &_Strip_ClassInfo_, allocate$Strip);
	return class$;
}

$Class* Strip::class$ = nullptr;