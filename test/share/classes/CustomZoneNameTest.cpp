#include <CustomZoneNameTest.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/time/Instant.h>
#include <java/time/ZoneId.h>
#include <java/time/ZonedDateTime.h>
#include <java/time/format/DateTimeFormatter.h>
#include <java/time/temporal/TemporalAccessor.h>
#include <java/time/temporal/TemporalQuery.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Instant = ::java::time::Instant;
using $ZoneId = ::java::time::ZoneId;
using $ZonedDateTime = ::java::time::ZonedDateTime;
using $DateTimeFormatter = ::java::time::format::DateTimeFormatter;
using $TemporalAccessor = ::java::time::temporal::TemporalAccessor;
using $TemporalQuery = ::java::time::temporal::TemporalQuery;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Consumer = ::java::util::function::Consumer;
using $Predicate = ::java::util::function::Predicate;

class CustomZoneNameTest$$Lambda$lambda$testFormatting$0 : public $Predicate {
	$class(CustomZoneNameTest$$Lambda$lambda$testFormatting$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$($ZonedDateTime* customZDT) {
		$set(this, customZDT, customZDT);
	}
	virtual bool test(Object$* e) override {
		 return CustomZoneNameTest::lambda$testFormatting$0(customZDT, $cast($Map$Entry, e));
	}
	$ZonedDateTime* customZDT = nullptr;
};
$Class* CustomZoneNameTest$$Lambda$lambda$testFormatting$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"customZDT", "Ljava/time/ZonedDateTime;", nullptr, $PUBLIC, $field(CustomZoneNameTest$$Lambda$lambda$testFormatting$0, customZDT)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/time/ZonedDateTime;)V", nullptr, $PUBLIC, $method(CustomZoneNameTest$$Lambda$lambda$testFormatting$0, init$, void, $ZonedDateTime*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(CustomZoneNameTest$$Lambda$lambda$testFormatting$0, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"CustomZoneNameTest$$Lambda$lambda$testFormatting$0",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CustomZoneNameTest$$Lambda$lambda$testFormatting$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CustomZoneNameTest$$Lambda$lambda$testFormatting$0);
	});
	return class$;
}
$Class* CustomZoneNameTest$$Lambda$lambda$testFormatting$0::class$ = nullptr;

class CustomZoneNameTest$$Lambda$lambda$testFormatting$1$1 : public $Consumer {
	$class(CustomZoneNameTest$$Lambda$lambda$testFormatting$1$1, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* e) override {
		CustomZoneNameTest::lambda$testFormatting$1($cast($Map$Entry, e));
	}
};
$Class* CustomZoneNameTest$$Lambda$lambda$testFormatting$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CustomZoneNameTest$$Lambda$lambda$testFormatting$1$1, init$, void)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(CustomZoneNameTest$$Lambda$lambda$testFormatting$1$1, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"CustomZoneNameTest$$Lambda$lambda$testFormatting$1$1",
		"java.lang.Object",
		"java.util.function.Consumer",
		nullptr,
		methodInfos$$
	};
	$loadClass(CustomZoneNameTest$$Lambda$lambda$testFormatting$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CustomZoneNameTest$$Lambda$lambda$testFormatting$1$1);
	});
	return class$;
}
$Class* CustomZoneNameTest$$Lambda$lambda$testFormatting$1$1::class$ = nullptr;

class CustomZoneNameTest$$Lambda$lambda$testParsing$2$2 : public $Predicate {
	$class(CustomZoneNameTest$$Lambda$lambda$testParsing$2$2, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* e) override {
		 return CustomZoneNameTest::lambda$testParsing$2($cast($Map$Entry, e));
	}
};
$Class* CustomZoneNameTest$$Lambda$lambda$testParsing$2$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CustomZoneNameTest$$Lambda$lambda$testParsing$2$2, init$, void)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(CustomZoneNameTest$$Lambda$lambda$testParsing$2$2, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"CustomZoneNameTest$$Lambda$lambda$testParsing$2$2",
		"java.lang.Object",
		"java.util.function.Predicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(CustomZoneNameTest$$Lambda$lambda$testParsing$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CustomZoneNameTest$$Lambda$lambda$testParsing$2$2);
	});
	return class$;
}
$Class* CustomZoneNameTest$$Lambda$lambda$testParsing$2$2::class$ = nullptr;

class CustomZoneNameTest$$Lambda$lambda$testParsing$3$3 : public $Consumer {
	$class(CustomZoneNameTest$$Lambda$lambda$testParsing$3$3, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* e) override {
		CustomZoneNameTest::lambda$testParsing$3($cast($Map$Entry, e));
	}
};
$Class* CustomZoneNameTest$$Lambda$lambda$testParsing$3$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CustomZoneNameTest$$Lambda$lambda$testParsing$3$3, init$, void)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(CustomZoneNameTest$$Lambda$lambda$testParsing$3$3, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"CustomZoneNameTest$$Lambda$lambda$testParsing$3$3",
		"java.lang.Object",
		"java.util.function.Consumer",
		nullptr,
		methodInfos$$
	};
	$loadClass(CustomZoneNameTest$$Lambda$lambda$testParsing$3$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CustomZoneNameTest$$Lambda$lambda$testParsing$3$3);
	});
	return class$;
}
$Class* CustomZoneNameTest$$Lambda$lambda$testParsing$3$3::class$ = nullptr;

class CustomZoneNameTest$$Lambda$from$4 : public $TemporalQuery {
	$class(CustomZoneNameTest$$Lambda$from$4, $NO_CLASS_INIT, $TemporalQuery)
public:
	void init$() {
	}
	virtual $Object* queryFrom($TemporalAccessor* arg0) override {
		 return $of($Instant::from(arg0));
	}
};
$Class* CustomZoneNameTest$$Lambda$from$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CustomZoneNameTest$$Lambda$from$4, init$, void)},
		{"queryFrom", "(Ljava/time/temporal/TemporalAccessor;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CustomZoneNameTest$$Lambda$from$4, queryFrom, $Object*, $TemporalAccessor*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"CustomZoneNameTest$$Lambda$from$4",
		"java.lang.Object",
		"java.time.temporal.TemporalQuery",
		nullptr,
		methodInfos$$
	};
	$loadClass(CustomZoneNameTest$$Lambda$from$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CustomZoneNameTest$$Lambda$from$4);
	});
	return class$;
}
$Class* CustomZoneNameTest$$Lambda$from$4::class$ = nullptr;

class CustomZoneNameTest$$Lambda$from$5 : public $TemporalQuery {
	$class(CustomZoneNameTest$$Lambda$from$5, $NO_CLASS_INIT, $TemporalQuery)
public:
	void init$() {
	}
	virtual $Object* queryFrom($TemporalAccessor* arg0) override {
		 return $of($ZonedDateTime::from(arg0));
	}
};
$Class* CustomZoneNameTest$$Lambda$from$5::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CustomZoneNameTest$$Lambda$from$5, init$, void)},
		{"queryFrom", "(Ljava/time/temporal/TemporalAccessor;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CustomZoneNameTest$$Lambda$from$5, queryFrom, $Object*, $TemporalAccessor*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"CustomZoneNameTest$$Lambda$from$5",
		"java.lang.Object",
		"java.time.temporal.TemporalQuery",
		nullptr,
		methodInfos$$
	};
	$loadClass(CustomZoneNameTest$$Lambda$from$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CustomZoneNameTest$$Lambda$from$5);
	});
	return class$;
}
$Class* CustomZoneNameTest$$Lambda$from$5::class$ = nullptr;

$Instant* CustomZoneNameTest::instant = nullptr;
$ZoneId* CustomZoneNameTest::customZone = nullptr;
$Map* CustomZoneNameTest::formats = nullptr;

void CustomZoneNameTest::init$() {
}

void CustomZoneNameTest::main($StringArray* args) {
	$init(CustomZoneNameTest);
	testFormatting();
	testParsing();
}

void CustomZoneNameTest::testFormatting() {
	$init(CustomZoneNameTest);
	$useLocalObjectStack();
	$var($ZonedDateTime, customZDT, $ZonedDateTime::ofInstant(CustomZoneNameTest::instant, CustomZoneNameTest::customZone));
	$$nc($$nc($$nc($$nc($nc(CustomZoneNameTest::formats)->entrySet())->stream())->filter($$new(CustomZoneNameTest$$Lambda$lambda$testFormatting$0, customZDT)))->findAny())->ifPresent($$new(CustomZoneNameTest$$Lambda$lambda$testFormatting$1$1));
}

void CustomZoneNameTest::testParsing() {
	$init(CustomZoneNameTest);
	$useLocalObjectStack();
	$$nc($$nc($$nc($$nc($nc(CustomZoneNameTest::formats)->entrySet())->stream())->filter($$new(CustomZoneNameTest$$Lambda$lambda$testParsing$2$2)))->findAny())->ifPresent($$new(CustomZoneNameTest$$Lambda$lambda$testParsing$3$3));
}

void CustomZoneNameTest::lambda$testParsing$3($Map$Entry* e) {
	$init(CustomZoneNameTest);
	$useLocalObjectStack();
	$throwNew($RuntimeException, $$str({"Parsing failed for the format "_s, $$cast($String, $nc(e)->getKey())}));
}

bool CustomZoneNameTest::lambda$testParsing$2($Map$Entry* e) {
	$init(CustomZoneNameTest);
	$useLocalObjectStack();
	$var($DateTimeFormatter, fmt, $DateTimeFormatter::ofPattern($$cast($String, $nc(e)->getKey())));
	$var($String, input, $cast($String, e->getValue()));
	int64_t parsedInstant = $$sure($Instant, $nc(fmt)->parse(input, $$new(CustomZoneNameTest$$Lambda$from$4)))->toEpochMilli();
	$var($ZoneId, parsedZone, $$sure($ZonedDateTime, fmt->parse(input, $$new(CustomZoneNameTest$$Lambda$from$5)))->getZone());
	$nc($System::out)->println($$str({"testParsing. Input: "_s, input, ", expected instant: "_s, $$str(CustomZoneNameTest::now), ", expected zone: "_s, CustomZoneNameTest::customZone, ", parsed instant: "_s, $$str(parsedInstant), ", parsed zone: "_s, parsedZone}));
	return parsedInstant != CustomZoneNameTest::now || !$nc(parsedZone)->equals(CustomZoneNameTest::customZone);
}

void CustomZoneNameTest::lambda$testFormatting$1($Map$Entry* e) {
	$init(CustomZoneNameTest);
	$useLocalObjectStack();
	$throwNew($RuntimeException, $$str({"Provider\'s custom name was not retrieved for the format "_s, $$cast($String, $nc(e)->getKey())}));
}

bool CustomZoneNameTest::lambda$testFormatting$0($ZonedDateTime* customZDT, $Map$Entry* e) {
	$init(CustomZoneNameTest);
	$useLocalObjectStack();
	$var($String, formatted, $$nc($DateTimeFormatter::ofPattern($$cast($String, $nc(e)->getKey())))->format(customZDT));
	$var($String, expected, $cast($String, e->getValue()));
	$nc($System::out)->println($$str({"testFormatting. Pattern: "_s, $$cast($String, e->getKey()), ", expected: "_s, expected, ", formatted: "_s, formatted}));
	return !$nc(formatted)->equals(expected);
}

void CustomZoneNameTest::clinit$($Class* clazz) {
	$assignStatic(CustomZoneNameTest::instant, $Instant::ofEpochMilli(CustomZoneNameTest::now));
	$assignStatic(CustomZoneNameTest::customZone, $ZoneId::of("Custom/Timezone"_s));
	$assignStatic(CustomZoneNameTest::formats, $Map::of("yyyy-MM-dd HH:mm:ss.SSS VV"_s, "2019-12-06 22:06:12.372 Custom/Timezone"_s, "yyyy-MM-dd HH:mm:ss.SSS z"_s, "2019-12-06 22:06:12.372 CUST_WT"_s, "yyyy-MM-dd HH:mm:ss.SSS zzzz"_s, "2019-12-06 22:06:12.372 Custom Winter Time"_s, "yyyy-MM-dd HH:mm:ss.SSS v"_s, "2019-12-06 22:06:12.372 Custom Time"_s, "yyyy-MM-dd HH:mm:ss.SSS vvvv"_s, "2019-12-06 22:06:12.372 Custom Timezone Time"_s));
}

CustomZoneNameTest::CustomZoneNameTest() {
}

$Class* CustomZoneNameTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("CustomZoneNameTest$$Lambda$lambda$testFormatting$0")) {
			return CustomZoneNameTest$$Lambda$lambda$testFormatting$0::load$(name, initialize);
		}
		if (name->equals("CustomZoneNameTest$$Lambda$lambda$testFormatting$1$1")) {
			return CustomZoneNameTest$$Lambda$lambda$testFormatting$1$1::load$(name, initialize);
		}
		if (name->equals("CustomZoneNameTest$$Lambda$lambda$testParsing$2$2")) {
			return CustomZoneNameTest$$Lambda$lambda$testParsing$2$2::load$(name, initialize);
		}
		if (name->equals("CustomZoneNameTest$$Lambda$lambda$testParsing$3$3")) {
			return CustomZoneNameTest$$Lambda$lambda$testParsing$3$3::load$(name, initialize);
		}
		if (name->equals("CustomZoneNameTest$$Lambda$from$4")) {
			return CustomZoneNameTest$$Lambda$from$4::load$(name, initialize);
		}
		if (name->equals("CustomZoneNameTest$$Lambda$from$5")) {
			return CustomZoneNameTest$$Lambda$from$5::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"now", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CustomZoneNameTest, now)},
		{"instant", "Ljava/time/Instant;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CustomZoneNameTest, instant)},
		{"customZone", "Ljava/time/ZoneId;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CustomZoneNameTest, customZone)},
		{"formats", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(CustomZoneNameTest, formats)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CustomZoneNameTest, init$, void)},
		{"lambda$testFormatting$0", "(Ljava/time/ZonedDateTime;Ljava/util/Map$Entry;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(CustomZoneNameTest, lambda$testFormatting$0, bool, $ZonedDateTime*, $Map$Entry*)},
		{"lambda$testFormatting$1", "(Ljava/util/Map$Entry;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(CustomZoneNameTest, lambda$testFormatting$1, void, $Map$Entry*)},
		{"lambda$testParsing$2", "(Ljava/util/Map$Entry;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(CustomZoneNameTest, lambda$testParsing$2, bool, $Map$Entry*)},
		{"lambda$testParsing$3", "(Ljava/util/Map$Entry;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(CustomZoneNameTest, lambda$testParsing$3, void, $Map$Entry*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(CustomZoneNameTest, main, void, $StringArray*)},
		{"testFormatting", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(CustomZoneNameTest, testFormatting, void)},
		{"testParsing", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(CustomZoneNameTest, testParsing, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"CustomZoneNameTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CustomZoneNameTest, name, initialize, &classInfo$$, CustomZoneNameTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CustomZoneNameTest);
	});
	return class$;
}

$Class* CustomZoneNameTest::class$ = nullptr;