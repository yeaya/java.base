#include <SPIProviderTest.h>
#include <java/io/Serializable.h>
#include <java/lang/Number.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/text/NumberFormat$Style.h>
#include <java/text/NumberFormat.h>
#include <java/text/ParseException.h>
#include <java/util/Arrays.h>
#include <java/util/Locale.h>
#include <java/util/function/Consumer.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef QAA
#undef QAB
#undef SHORT

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $NumberFormat = ::java::text::NumberFormat;
using $NumberFormat$Style = ::java::text::NumberFormat$Style;
using $ParseException = ::java::text::ParseException;
using $Arrays = ::java::util::Arrays;
using $Locale = ::java::util::Locale;
using $Consumer = ::java::util::function::Consumer;

class SPIProviderTest$$Lambda$testSPIProvider : public $Consumer {
	$class(SPIProviderTest$$Lambda$testSPIProvider, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* args) override {
		SPIProviderTest::testSPIProvider($cast($ObjectArray, args));
	}
};
$Class* SPIProviderTest$$Lambda$testSPIProvider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SPIProviderTest$$Lambda$testSPIProvider, init$, void)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(SPIProviderTest$$Lambda$testSPIProvider, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"SPIProviderTest$$Lambda$testSPIProvider",
		"java.lang.Object",
		"java.util.function.Consumer",
		nullptr,
		methodInfos$$
	};
	$loadClass(SPIProviderTest$$Lambda$testSPIProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SPIProviderTest$$Lambda$testSPIProvider);
	});
	return class$;
}
$Class* SPIProviderTest$$Lambda$testSPIProvider::class$ = nullptr;

$Locale* SPIProviderTest::QAA = nullptr;
$Locale* SPIProviderTest::QAB = nullptr;

void SPIProviderTest::main($StringArray* args) {
	$init(SPIProviderTest);
	$new(SPIProviderTest);
}

void SPIProviderTest::init$() {
	$useLocalObjectStack();
	$$nc($Arrays::stream($(testData())))->forEach($$new(SPIProviderTest$$Lambda$testSPIProvider));
}

$ObjectArray2* SPIProviderTest::testData() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			SPIProviderTest::QAA,
			$($Integer::valueOf(1000)),
			"1K"_s
		}),
		$$new($ObjectArray, {
			SPIProviderTest::QAA,
			$($Integer::valueOf(-1000)),
			"-1K"_s
		}),
		$$new($ObjectArray, {
			SPIProviderTest::QAA,
			$($Integer::valueOf(2000)),
			"2K"_s
		}),
		$$new($ObjectArray, {
			SPIProviderTest::QAA,
			$($Integer::valueOf(-2000)),
			"-2K"_s
		}),
		$$new($ObjectArray, {
			SPIProviderTest::QAA,
			$($Integer::valueOf(1000000)),
			"1M"_s
		}),
		$$new($ObjectArray, {
			SPIProviderTest::QAA,
			$($Integer::valueOf(-1000000)),
			"-1M"_s
		}),
		$$new($ObjectArray, {
			SPIProviderTest::QAA,
			$($Integer::valueOf(2000000)),
			"2M"_s
		}),
		$$new($ObjectArray, {
			SPIProviderTest::QAA,
			$($Integer::valueOf(-2000000)),
			"-2M"_s
		}),
		$$new($ObjectArray, {
			SPIProviderTest::QAB,
			$($Integer::valueOf(1000)),
			"1K"_s
		}),
		$$new($ObjectArray, {
			SPIProviderTest::QAB,
			$($Integer::valueOf(-1000)),
			"(1K)"_s
		}),
		$$new($ObjectArray, {
			SPIProviderTest::QAB,
			$($Integer::valueOf(2000)),
			"2KK"_s
		}),
		$$new($ObjectArray, {
			SPIProviderTest::QAB,
			$($Integer::valueOf(-2000)),
			"-2KK"_s
		}),
		$$new($ObjectArray, {
			SPIProviderTest::QAB,
			$($Integer::valueOf(3000)),
			"3KKK"_s
		}),
		$$new($ObjectArray, {
			SPIProviderTest::QAB,
			$($Integer::valueOf(-3000)),
			"-3KKK"_s
		}),
		$$new($ObjectArray, {
			SPIProviderTest::QAB,
			$($Integer::valueOf(5000)),
			"5KKKK"_s
		}),
		$$new($ObjectArray, {
			SPIProviderTest::QAB,
			$($Integer::valueOf(-5000)),
			"-5KKKK"_s
		}),
		$$new($ObjectArray, {
			SPIProviderTest::QAB,
			$($Integer::valueOf(10000)),
			"10000"_s
		}),
		$$new($ObjectArray, {
			SPIProviderTest::QAB,
			$($Integer::valueOf(-10000)),
			"-10000"_s
		}),
		$$new($ObjectArray, {
			SPIProviderTest::QAB,
			$($Integer::valueOf(1000000)),
			"1 M"_s
		}),
		$$new($ObjectArray, {
			SPIProviderTest::QAB,
			$($Integer::valueOf(-1000000)),
			"(1 M)"_s
		}),
		$$new($ObjectArray, {
			SPIProviderTest::QAB,
			$($Integer::valueOf(2000000)),
			"2 MM"_s
		}),
		$$new($ObjectArray, {
			SPIProviderTest::QAB,
			$($Integer::valueOf(-2000000)),
			"(2 MM)"_s
		}),
		$$new($ObjectArray, {
			SPIProviderTest::QAB,
			$($Integer::valueOf(3000000)),
			"3 MMM"_s
		}),
		$$new($ObjectArray, {
			SPIProviderTest::QAB,
			$($Integer::valueOf(-3000000)),
			"-3 MMM"_s
		}),
		$$new($ObjectArray, {
			SPIProviderTest::QAB,
			$($Integer::valueOf(5000000)),
			"5 MMMM"_s
		}),
		$$new($ObjectArray, {
			SPIProviderTest::QAB,
			$($Integer::valueOf(-5000000)),
			"-5 MMMM"_s
		})
	});
}

void SPIProviderTest::testSPIProvider($ObjectArray* args) {
	$init(SPIProviderTest);
	$useLocalObjectStack();
	$var($Locale, loc, $cast($Locale, $nc(args)->get(0)));
	$var($Number, number, $cast($Number, args->get(1)));
	$var($String, expected, $cast($String, args->get(2)));
	$nc($System::out)->printf("Testing locale: %s, number: %d, expected: %s\n"_s, $$new($ObjectArray, {
		loc,
		number,
		expected
	}));
	$init($NumberFormat$Style);
	$var($NumberFormat, nf, $NumberFormat::getCompactNumberInstance(loc, $NumberFormat$Style::SHORT));
	$var($String, formatted, $nc(nf)->format(number));
	$System::out->printf("    formatted: %s\n"_s, $$new($ObjectArray, {formatted}));
	if (!$nc(formatted)->equals(expected)) {
		$throwNew($RuntimeException, "formatted and expected strings do not match."_s);
	}
	try {
		$var($Number, parsed, nf->parse(formatted));
		$System::out->printf("    parsed: %s\n"_s, $$new($ObjectArray, {parsed}));
		int32_t var$0 = $nc(parsed)->intValue();
		if (var$0 != $nc(number)->intValue()) {
			$throwNew($RuntimeException, "parsed and input numbers do not match."_s);
		}
	} catch ($ParseException& pe) {
		$throwNew($RuntimeException, pe);
	}
}

void SPIProviderTest::clinit$($Class* clazz) {
	$assignStatic(SPIProviderTest::QAA, $Locale::forLanguageTag("qaa"_s));
	$assignStatic(SPIProviderTest::QAB, $Locale::forLanguageTag("qab"_s));
}

SPIProviderTest::SPIProviderTest() {
}

$Class* SPIProviderTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("SPIProviderTest$$Lambda$testSPIProvider")) {
			return SPIProviderTest$$Lambda$testSPIProvider::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"QAA", "Ljava/util/Locale;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SPIProviderTest, QAA)},
		{"QAB", "Ljava/util/Locale;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SPIProviderTest, QAB)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SPIProviderTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(SPIProviderTest, main, void, $StringArray*)},
		{"testData", "()[[Ljava/lang/Object;", nullptr, 0, $virtualMethod(SPIProviderTest, testData, $ObjectArray2*)},
		{"testSPIProvider", "([Ljava/lang/Object;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(SPIProviderTest, testSPIProvider, void, $ObjectArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"SPIProviderTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SPIProviderTest, name, initialize, &classInfo$$, SPIProviderTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SPIProviderTest);
	});
	return class$;
}

$Class* SPIProviderTest::class$ = nullptr;