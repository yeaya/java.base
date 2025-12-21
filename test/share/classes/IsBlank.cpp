#include <IsBlank.h>

#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/function/IntConsumer.h>
#include <java/util/function/IntPredicate.h>
#include <java/util/stream/IntStream.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $IntConsumer = ::java::util::function::IntConsumer;
using $IntPredicate = ::java::util::function::IntPredicate;
using $IntStream = ::java::util::stream::IntStream;

class IsBlank$$Lambda$lambda$testWhitespace$0 : public $IntPredicate {
	$class(IsBlank$$Lambda$lambda$testWhitespace$0, $NO_CLASS_INIT, $IntPredicate)
public:
	void init$() {
	}
	virtual bool test(int32_t c) override {
		 return IsBlank::lambda$testWhitespace$0(c);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<IsBlank$$Lambda$lambda$testWhitespace$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo IsBlank$$Lambda$lambda$testWhitespace$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IsBlank$$Lambda$lambda$testWhitespace$0::*)()>(&IsBlank$$Lambda$lambda$testWhitespace$0::init$))},
	{"test", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo IsBlank$$Lambda$lambda$testWhitespace$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"IsBlank$$Lambda$lambda$testWhitespace$0",
	"java.lang.Object",
	"java.util.function.IntPredicate",
	nullptr,
	methodInfos
};
$Class* IsBlank$$Lambda$lambda$testWhitespace$0::load$($String* name, bool initialize) {
	$loadClass(IsBlank$$Lambda$lambda$testWhitespace$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* IsBlank$$Lambda$lambda$testWhitespace$0::class$ = nullptr;

class IsBlank$$Lambda$lambda$testWhitespace$1$1 : public $IntConsumer {
	$class(IsBlank$$Lambda$lambda$testWhitespace$1$1, $NO_CLASS_INIT, $IntConsumer)
public:
	void init$($StringBuilder* sb) {
		$set(this, sb, sb);
	}
	virtual void accept(int32_t c) override {
		IsBlank::lambda$testWhitespace$1(sb, c);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<IsBlank$$Lambda$lambda$testWhitespace$1$1>());
	}
	$StringBuilder* sb = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo IsBlank$$Lambda$lambda$testWhitespace$1$1::fieldInfos[2] = {
	{"sb", "Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $field(IsBlank$$Lambda$lambda$testWhitespace$1$1, sb)},
	{}
};
$MethodInfo IsBlank$$Lambda$lambda$testWhitespace$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/lang/StringBuilder;)V", nullptr, $PUBLIC, $method(static_cast<void(IsBlank$$Lambda$lambda$testWhitespace$1$1::*)($StringBuilder*)>(&IsBlank$$Lambda$lambda$testWhitespace$1$1::init$))},
	{"accept", "(I)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo IsBlank$$Lambda$lambda$testWhitespace$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"IsBlank$$Lambda$lambda$testWhitespace$1$1",
	"java.lang.Object",
	"java.util.function.IntConsumer",
	fieldInfos,
	methodInfos
};
$Class* IsBlank$$Lambda$lambda$testWhitespace$1$1::load$($String* name, bool initialize) {
	$loadClass(IsBlank$$Lambda$lambda$testWhitespace$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* IsBlank$$Lambda$lambda$testWhitespace$1$1::class$ = nullptr;

$MethodInfo _IsBlank_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IsBlank::*)()>(&IsBlank::init$))},
	{"lambda$testWhitespace$0", "(I)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)(int32_t)>(&IsBlank::lambda$testWhitespace$0))},
	{"lambda$testWhitespace$1", "(Ljava/lang/StringBuilder;I)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($StringBuilder*,int32_t)>(&IsBlank::lambda$testWhitespace$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&IsBlank::main))},
	{"test", "(Ljava/lang/String;Z)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,bool)>(&IsBlank::test))},
	{"testIsBlank", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&IsBlank::testIsBlank))},
	{"testWhitespace", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&IsBlank::testWhitespace))},
	{}
};

$ClassInfo _IsBlank_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"IsBlank",
	"java.lang.Object",
	nullptr,
	nullptr,
	_IsBlank_MethodInfo_
};

$Object* allocate$IsBlank($Class* clazz) {
	return $of($alloc(IsBlank));
}

void IsBlank::init$() {
}

void IsBlank::main($StringArray* arg) {
	testIsBlank();
	testWhitespace();
}

void IsBlank::testIsBlank() {
	test(""_s, true);
	test(" "_s, true);
	test(" \t"_s, true);
	test(u"   "_s, true);
	test("   abc   "_s, false);
	test(u"   abc•"_s, false);
}

void IsBlank::testWhitespace() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder, 64));
	$nc($($nc($($IntStream::range(1, 0x0000FFFF)))->filter(static_cast<$IntPredicate*>($$new(IsBlank$$Lambda$lambda$testWhitespace$0)))))->forEach(static_cast<$IntConsumer*>($$new(IsBlank$$Lambda$lambda$testWhitespace$1$1, sb)));
	$var($String, whiteSpace, sb->toString());
	test(whiteSpace, true);
	test($$str({whiteSpace, "abc"_s, whiteSpace}), false);
}

void IsBlank::test($String* input, bool expected) {
	$useLocalCurrentObjectStackCache();
	if ($nc(input)->isBlank() != expected) {
		$nc($System::err)->format("Failed test, Input: %s, Expected: %b%n"_s, $$new($ObjectArray, {
			$of(input),
			$($of($Boolean::valueOf(expected)))
		}));
		$throwNew($RuntimeException);
	}
}

void IsBlank::lambda$testWhitespace$1($StringBuilder* sb, int32_t c) {
	$nc(sb)->append((char16_t)c);
}

bool IsBlank::lambda$testWhitespace$0(int32_t c) {
	return $Character::isWhitespace(c);
}

IsBlank::IsBlank() {
}

$Class* IsBlank::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(IsBlank$$Lambda$lambda$testWhitespace$0::classInfo$.name)) {
			return IsBlank$$Lambda$lambda$testWhitespace$0::load$(name, initialize);
		}
		if (name->equals(IsBlank$$Lambda$lambda$testWhitespace$1$1::classInfo$.name)) {
			return IsBlank$$Lambda$lambda$testWhitespace$1$1::load$(name, initialize);
		}
	}
	$loadClass(IsBlank, name, initialize, &_IsBlank_ClassInfo_, allocate$IsBlank);
	return class$;
}

$Class* IsBlank::class$ = nullptr;