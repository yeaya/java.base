#include <CustomZoneNameTest.h>

#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/time/Instant.h>
#include <java/time/ZoneId.h>
#include <java/time/ZonedDateTime.h>
#include <java/time/chrono/ChronoZonedDateTime.h>
#include <java/time/format/DateTimeFormatter.h>
#include <java/time/temporal/Temporal.h>
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

using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Instant = ::java::time::Instant;
using $ZoneId = ::java::time::ZoneId;
using $ZonedDateTime = ::java::time::ZonedDateTime;
using $ChronoZonedDateTime = ::java::time::chrono::ChronoZonedDateTime;
using $DateTimeFormatter = ::java::time::format::DateTimeFormatter;
using $Temporal = ::java::time::temporal::Temporal;
using $TemporalAccessor = ::java::time::temporal::TemporalAccessor;
using $TemporalQuery = ::java::time::temporal::TemporalQuery;
using $Collection = ::java::util::Collection;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;
using $Consumer = ::java::util::function::Consumer;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;

class CustomZoneNameTest$$Lambda$lambda$testFormatting$0 : public $Predicate {
	$class(CustomZoneNameTest$$Lambda$lambda$testFormatting$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$($ZonedDateTime* customZDT) {
		$set(this, customZDT, customZDT);
	}
	virtual bool test(Object$* e) override {
		 return CustomZoneNameTest::lambda$testFormatting$0(customZDT, $cast($Map$Entry, e));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CustomZoneNameTest$$Lambda$lambda$testFormatting$0>());
	}
	$ZonedDateTime* customZDT = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CustomZoneNameTest$$Lambda$lambda$testFormatting$0::fieldInfos[2] = {
	{"customZDT", "Ljava/time/ZonedDateTime;", nullptr, $PUBLIC, $field(CustomZoneNameTest$$Lambda$lambda$testFormatting$0, customZDT)},
	{}
};
$MethodInfo CustomZoneNameTest$$Lambda$lambda$testFormatting$0::methodInfos[3] = {
	{"<init>", "(Ljava/time/ZonedDateTime;)V", nullptr, $PUBLIC, $method(static_cast<void(CustomZoneNameTest$$Lambda$lambda$testFormatting$0::*)($ZonedDateTime*)>(&CustomZoneNameTest$$Lambda$lambda$testFormatting$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo CustomZoneNameTest$$Lambda$lambda$testFormatting$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"CustomZoneNameTest$$Lambda$lambda$testFormatting$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* CustomZoneNameTest$$Lambda$lambda$testFormatting$0::load$($String* name, bool initialize) {
	$loadClass(CustomZoneNameTest$$Lambda$lambda$testFormatting$0, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CustomZoneNameTest$$Lambda$lambda$testFormatting$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CustomZoneNameTest$$Lambda$lambda$testFormatting$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CustomZoneNameTest$$Lambda$lambda$testFormatting$1$1::*)()>(&CustomZoneNameTest$$Lambda$lambda$testFormatting$1$1::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CustomZoneNameTest$$Lambda$lambda$testFormatting$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"CustomZoneNameTest$$Lambda$lambda$testFormatting$1$1",
	"java.lang.Object",
	"java.util.function.Consumer",
	nullptr,
	methodInfos
};
$Class* CustomZoneNameTest$$Lambda$lambda$testFormatting$1$1::load$($String* name, bool initialize) {
	$loadClass(CustomZoneNameTest$$Lambda$lambda$testFormatting$1$1, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CustomZoneNameTest$$Lambda$lambda$testParsing$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CustomZoneNameTest$$Lambda$lambda$testParsing$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CustomZoneNameTest$$Lambda$lambda$testParsing$2$2::*)()>(&CustomZoneNameTest$$Lambda$lambda$testParsing$2$2::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo CustomZoneNameTest$$Lambda$lambda$testParsing$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"CustomZoneNameTest$$Lambda$lambda$testParsing$2$2",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* CustomZoneNameTest$$Lambda$lambda$testParsing$2$2::load$($String* name, bool initialize) {
	$loadClass(CustomZoneNameTest$$Lambda$lambda$testParsing$2$2, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CustomZoneNameTest$$Lambda$lambda$testParsing$3$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CustomZoneNameTest$$Lambda$lambda$testParsing$3$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CustomZoneNameTest$$Lambda$lambda$testParsing$3$3::*)()>(&CustomZoneNameTest$$Lambda$lambda$testParsing$3$3::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CustomZoneNameTest$$Lambda$lambda$testParsing$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"CustomZoneNameTest$$Lambda$lambda$testParsing$3$3",
	"java.lang.Object",
	"java.util.function.Consumer",
	nullptr,
	methodInfos
};
$Class* CustomZoneNameTest$$Lambda$lambda$testParsing$3$3::load$($String* name, bool initialize) {
	$loadClass(CustomZoneNameTest$$Lambda$lambda$testParsing$3$3, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CustomZoneNameTest$$Lambda$from$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CustomZoneNameTest$$Lambda$from$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CustomZoneNameTest$$Lambda$from$4::*)()>(&CustomZoneNameTest$$Lambda$from$4::init$))},
	{"queryFrom", "(Ljava/time/temporal/TemporalAccessor;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo CustomZoneNameTest$$Lambda$from$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"CustomZoneNameTest$$Lambda$from$4",
	"java.lang.Object",
	"java.time.temporal.TemporalQuery",
	nullptr,
	methodInfos
};
$Class* CustomZoneNameTest$$Lambda$from$4::load$($String* name, bool initialize) {
	$loadClass(CustomZoneNameTest$$Lambda$from$4, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CustomZoneNameTest$$Lambda$from$5>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CustomZoneNameTest$$Lambda$from$5::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CustomZoneNameTest$$Lambda$from$5::*)()>(&CustomZoneNameTest$$Lambda$from$5::init$))},
	{"queryFrom", "(Ljava/time/temporal/TemporalAccessor;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo CustomZoneNameTest$$Lambda$from$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"CustomZoneNameTest$$Lambda$from$5",
	"java.lang.Object",
	"java.time.temporal.TemporalQuery",
	nullptr,
	methodInfos
};
$Class* CustomZoneNameTest$$Lambda$from$5::load$($String* name, bool initialize) {
	$loadClass(CustomZoneNameTest$$Lambda$from$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CustomZoneNameTest$$Lambda$from$5::class$ = nullptr;

$FieldInfo _CustomZoneNameTest_FieldInfo_[] = {
	{"now", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CustomZoneNameTest, now)},
	{"instant", "Ljava/time/Instant;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CustomZoneNameTest, instant)},
	{"customZone", "Ljava/time/ZoneId;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CustomZoneNameTest, customZone)},
	{"formats", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(CustomZoneNameTest, formats)},
	{}
};

$MethodInfo _CustomZoneNameTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CustomZoneNameTest::*)()>(&CustomZoneNameTest::init$))},
	{"lambda$testFormatting$0", "(Ljava/time/ZonedDateTime;Ljava/util/Map$Entry;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($ZonedDateTime*,$Map$Entry*)>(&CustomZoneNameTest::lambda$testFormatting$0))},
	{"lambda$testFormatting$1", "(Ljava/util/Map$Entry;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Map$Entry*)>(&CustomZoneNameTest::lambda$testFormatting$1))},
	{"lambda$testParsing$2", "(Ljava/util/Map$Entry;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Map$Entry*)>(&CustomZoneNameTest::lambda$testParsing$2))},
	{"lambda$testParsing$3", "(Ljava/util/Map$Entry;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Map$Entry*)>(&CustomZoneNameTest::lambda$testParsing$3))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&CustomZoneNameTest::main))},
	{"testFormatting", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&CustomZoneNameTest::testFormatting))},
	{"testParsing", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&CustomZoneNameTest::testParsing))},
	{}
};

$ClassInfo _CustomZoneNameTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"CustomZoneNameTest",
	"java.lang.Object",
	nullptr,
	_CustomZoneNameTest_FieldInfo_,
	_CustomZoneNameTest_MethodInfo_
};

$Object* allocate$CustomZoneNameTest($Class* clazz) {
	return $of($alloc(CustomZoneNameTest));
}

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
	$useLocalCurrentObjectStackCache();
	$var($ZonedDateTime, customZDT, $ZonedDateTime::ofInstant(CustomZoneNameTest::instant, CustomZoneNameTest::customZone));
	$nc($($nc($($nc($($nc($($nc(CustomZoneNameTest::formats)->entrySet()))->stream()))->filter(static_cast<$Predicate*>($$new(CustomZoneNameTest$$Lambda$lambda$testFormatting$0, customZDT)))))->findAny()))->ifPresent(static_cast<$Consumer*>($$new(CustomZoneNameTest$$Lambda$lambda$testFormatting$1$1)));
}

void CustomZoneNameTest::testParsing() {
	$init(CustomZoneNameTest);
	$useLocalCurrentObjectStackCache();
	$nc($($nc($($nc($($nc($($nc(CustomZoneNameTest::formats)->entrySet()))->stream()))->filter(static_cast<$Predicate*>($$new(CustomZoneNameTest$$Lambda$lambda$testParsing$2$2)))))->findAny()))->ifPresent(static_cast<$Consumer*>($$new(CustomZoneNameTest$$Lambda$lambda$testParsing$3$3)));
}

void CustomZoneNameTest::lambda$testParsing$3($Map$Entry* e) {
	$init(CustomZoneNameTest);
	$useLocalCurrentObjectStackCache();
	$throwNew($RuntimeException, $$str({"Parsing failed for the format "_s, $cast($String, $($nc(e)->getKey()))}));
}

bool CustomZoneNameTest::lambda$testParsing$2($Map$Entry* e) {
	$init(CustomZoneNameTest);
	$useLocalCurrentObjectStackCache();
	$var($DateTimeFormatter, fmt, $DateTimeFormatter::ofPattern($cast($String, $($nc(e)->getKey()))));
	$var($String, input, $cast($String, $nc(e)->getValue()));
	int64_t parsedInstant = $nc(($cast($Instant, $($nc(fmt)->parse(static_cast<$CharSequence*>(input), static_cast<$TemporalQuery*>($$new(CustomZoneNameTest$$Lambda$from$4)))))))->toEpochMilli();
	$var($ZoneId, parsedZone, $nc(($cast($ZonedDateTime, $(fmt->parse(static_cast<$CharSequence*>(input), static_cast<$TemporalQuery*>($$new(CustomZoneNameTest$$Lambda$from$5)))))))->getZone());
	$init($System);
	$nc($System::out)->println($$str({"testParsing. Input: "_s, input, ", expected instant: "_s, $$str(CustomZoneNameTest::now), ", expected zone: "_s, CustomZoneNameTest::customZone, ", parsed instant: "_s, $$str(parsedInstant), ", parsed zone: "_s, parsedZone}));
	return parsedInstant != CustomZoneNameTest::now || !$nc(parsedZone)->equals(CustomZoneNameTest::customZone);
}

void CustomZoneNameTest::lambda$testFormatting$1($Map$Entry* e) {
	$init(CustomZoneNameTest);
	$useLocalCurrentObjectStackCache();
	$throwNew($RuntimeException, $$str({"Provider\'s custom name was not retrieved for the format "_s, $cast($String, $($nc(e)->getKey()))}));
}

bool CustomZoneNameTest::lambda$testFormatting$0($ZonedDateTime* customZDT, $Map$Entry* e) {
	$init(CustomZoneNameTest);
	$useLocalCurrentObjectStackCache();
	$var($String, formatted, $nc($($DateTimeFormatter::ofPattern($cast($String, $($nc(e)->getKey())))))->format(customZDT));
	$var($String, expected, $cast($String, $nc(e)->getValue()));
	$init($System);
	$nc($System::out)->println($$str({"testFormatting. Pattern: "_s, $cast($String, $(e->getKey())), ", expected: "_s, expected, ", formatted: "_s, formatted}));
	return !$nc(formatted)->equals(expected);
}

void clinit$CustomZoneNameTest($Class* class$) {
	$assignStatic(CustomZoneNameTest::instant, $Instant::ofEpochMilli(CustomZoneNameTest::now));
	$assignStatic(CustomZoneNameTest::customZone, $ZoneId::of("Custom/Timezone"_s));
	$assignStatic(CustomZoneNameTest::formats, $Map::of("yyyy-MM-dd HH:mm:ss.SSS VV"_s, "2019-12-06 22:06:12.372 Custom/Timezone"_s, "yyyy-MM-dd HH:mm:ss.SSS z"_s, "2019-12-06 22:06:12.372 CUST_WT"_s, "yyyy-MM-dd HH:mm:ss.SSS zzzz"_s, "2019-12-06 22:06:12.372 Custom Winter Time"_s, "yyyy-MM-dd HH:mm:ss.SSS v"_s, "2019-12-06 22:06:12.372 Custom Time"_s, "yyyy-MM-dd HH:mm:ss.SSS vvvv"_s, "2019-12-06 22:06:12.372 Custom Timezone Time"_s));
}

CustomZoneNameTest::CustomZoneNameTest() {
}

$Class* CustomZoneNameTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CustomZoneNameTest$$Lambda$lambda$testFormatting$0::classInfo$.name)) {
			return CustomZoneNameTest$$Lambda$lambda$testFormatting$0::load$(name, initialize);
		}
		if (name->equals(CustomZoneNameTest$$Lambda$lambda$testFormatting$1$1::classInfo$.name)) {
			return CustomZoneNameTest$$Lambda$lambda$testFormatting$1$1::load$(name, initialize);
		}
		if (name->equals(CustomZoneNameTest$$Lambda$lambda$testParsing$2$2::classInfo$.name)) {
			return CustomZoneNameTest$$Lambda$lambda$testParsing$2$2::load$(name, initialize);
		}
		if (name->equals(CustomZoneNameTest$$Lambda$lambda$testParsing$3$3::classInfo$.name)) {
			return CustomZoneNameTest$$Lambda$lambda$testParsing$3$3::load$(name, initialize);
		}
		if (name->equals(CustomZoneNameTest$$Lambda$from$4::classInfo$.name)) {
			return CustomZoneNameTest$$Lambda$from$4::load$(name, initialize);
		}
		if (name->equals(CustomZoneNameTest$$Lambda$from$5::classInfo$.name)) {
			return CustomZoneNameTest$$Lambda$from$5::load$(name, initialize);
		}
	}
	$loadClass(CustomZoneNameTest, name, initialize, &_CustomZoneNameTest_ClassInfo_, clinit$CustomZoneNameTest, allocate$CustomZoneNameTest);
	return class$;
}

$Class* CustomZoneNameTest::class$ = nullptr;