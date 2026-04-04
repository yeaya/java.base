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
};
$Class* IsBlank$$Lambda$lambda$testWhitespace$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(IsBlank$$Lambda$lambda$testWhitespace$0, init$, void)},
		{"test", "(I)Z", nullptr, $PUBLIC, $virtualMethod(IsBlank$$Lambda$lambda$testWhitespace$0, test, bool, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"IsBlank$$Lambda$lambda$testWhitespace$0",
		"java.lang.Object",
		"java.util.function.IntPredicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(IsBlank$$Lambda$lambda$testWhitespace$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IsBlank$$Lambda$lambda$testWhitespace$0);
	});
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
	$StringBuilder* sb = nullptr;
};
$Class* IsBlank$$Lambda$lambda$testWhitespace$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"sb", "Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $field(IsBlank$$Lambda$lambda$testWhitespace$1$1, sb)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/StringBuilder;)V", nullptr, $PUBLIC, $method(IsBlank$$Lambda$lambda$testWhitespace$1$1, init$, void, $StringBuilder*)},
		{"accept", "(I)V", nullptr, $PUBLIC, $virtualMethod(IsBlank$$Lambda$lambda$testWhitespace$1$1, accept, void, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"IsBlank$$Lambda$lambda$testWhitespace$1$1",
		"java.lang.Object",
		"java.util.function.IntConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IsBlank$$Lambda$lambda$testWhitespace$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IsBlank$$Lambda$lambda$testWhitespace$1$1);
	});
	return class$;
}
$Class* IsBlank$$Lambda$lambda$testWhitespace$1$1::class$ = nullptr;

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
	$useLocalObjectStack();
	$var($StringBuilder, sb, $new($StringBuilder, 64));
	$$nc($$nc($IntStream::range(1, 0x0000ffff))->filter($$new(IsBlank$$Lambda$lambda$testWhitespace$0)))->forEach($$new(IsBlank$$Lambda$lambda$testWhitespace$1$1, sb));
	$var($String, whiteSpace, sb->toString());
	test(whiteSpace, true);
	test($$str({whiteSpace, "abc"_s, whiteSpace}), false);
}

void IsBlank::test($String* input, bool expected) {
	$useLocalObjectStack();
	if ($nc(input)->isBlank() != expected) {
		$nc($System::err)->format("Failed test, Input: %s, Expected: %b%n"_s, $$new($ObjectArray, {
			input,
			$($Boolean::valueOf(expected))
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
		if (name->equals("IsBlank$$Lambda$lambda$testWhitespace$0")) {
			return IsBlank$$Lambda$lambda$testWhitespace$0::load$(name, initialize);
		}
		if (name->equals("IsBlank$$Lambda$lambda$testWhitespace$1$1")) {
			return IsBlank$$Lambda$lambda$testWhitespace$1$1::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(IsBlank, init$, void)},
		{"lambda$testWhitespace$0", "(I)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(IsBlank, lambda$testWhitespace$0, bool, int32_t)},
		{"lambda$testWhitespace$1", "(Ljava/lang/StringBuilder;I)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(IsBlank, lambda$testWhitespace$1, void, $StringBuilder*, int32_t)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(IsBlank, main, void, $StringArray*)},
		{"test", "(Ljava/lang/String;Z)V", nullptr, $STATIC, $staticMethod(IsBlank, test, void, $String*, bool)},
		{"testIsBlank", "()V", nullptr, $STATIC, $staticMethod(IsBlank, testIsBlank, void)},
		{"testWhitespace", "()V", nullptr, $STATIC, $staticMethod(IsBlank, testWhitespace, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"IsBlank",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(IsBlank, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IsBlank);
	});
	return class$;
}

$Class* IsBlank::class$ = nullptr;