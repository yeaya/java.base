#include <Bug5047314.h>
#include <java/text/CollationKey.h>
#include <java/text/Collator.h>
#include <java/util/Locale.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collator = ::java::text::Collator;
using $Locale = ::java::util::Locale;

$Collator* Bug5047314::colLao = nullptr;
$Collator* Bug5047314::colThai = nullptr;
$StringArray* Bug5047314::textLao = nullptr;
$StringArray* Bug5047314::textThai = nullptr;

void Bug5047314::init$() {
}

void Bug5047314::main($StringArray* args) {
	$init(Bug5047314);
	testLao1();
	testLao2();
	testThai1();
	testThai2();
}

void Bug5047314::testLao1() {
	$init(Bug5047314);
	$nc($System::out)->print("Test(Lao 1) .... "_s);
	for (int32_t i = 0; i < $nc(Bug5047314::textLao)->length; ++i) {
		$nc(Bug5047314::colLao)->compare(Bug5047314::textLao->get(i), Bug5047314::textLao->get(i));
	}
	$System::out->println("Passed."_s);
}

void Bug5047314::testLao2() {
	$init(Bug5047314);
	$nc($System::out)->print("Test(Lao 2) .... "_s);
	for (int32_t i = 0; i < $nc(Bug5047314::textLao)->length; ++i) {
		$nc(Bug5047314::colLao)->compare(Bug5047314::textLao->get(i), Bug5047314::textLao->get(i));
	}
	$System::out->println("Passed."_s);
}

void Bug5047314::testThai1() {
	$init(Bug5047314);
	$nc($System::out)->print("Test(Thai 1) .... "_s);
	for (int32_t i = 0; i < $nc(Bug5047314::textThai)->length; ++i) {
		$nc(Bug5047314::colThai)->compare(Bug5047314::textThai->get(i), Bug5047314::textThai->get(i));
	}
	$System::out->println("Passed."_s);
}

void Bug5047314::testThai2() {
	$init(Bug5047314);
	$nc($System::out)->print("Test(Thai 2) .... "_s);
	for (int32_t i = 0; i < $nc(Bug5047314::textThai)->length; ++i) {
		$nc(Bug5047314::colThai)->getCollationKey(Bug5047314::textThai->get(i));
	}
	$System::out->println("Passed."_s);
}

void Bug5047314::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(Bug5047314::colLao, $Collator::getInstance($$new($Locale, "lo"_s)));
	$assignStatic(Bug5047314::colThai, $Collator::getInstance($$new($Locale, "th"_s)));
	$assignStatic(Bug5047314::textLao, $new($StringArray, {
		u"ເ"_s,
		u"ແ"_s,
		u"ໂ"_s,
		u"ໃ"_s,
		u"ໄ"_s
	}));
	$assignStatic(Bug5047314::textThai, $new($StringArray, {
		u"เ"_s,
		u"แ"_s,
		u"โ"_s,
		u"ใ"_s,
		u"ไ"_s
	}));
}

Bug5047314::Bug5047314() {
}

$Class* Bug5047314::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"colLao", "Ljava/text/Collator;", nullptr, $PRIVATE | $STATIC, $staticField(Bug5047314, colLao)},
		{"colThai", "Ljava/text/Collator;", nullptr, $PRIVATE | $STATIC, $staticField(Bug5047314, colThai)},
		{"textLao", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(Bug5047314, textLao)},
		{"textThai", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(Bug5047314, textThai)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Bug5047314, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Bug5047314, main, void, $StringArray*)},
		{"testLao1", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(Bug5047314, testLao1, void)},
		{"testLao2", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(Bug5047314, testLao2, void)},
		{"testThai1", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(Bug5047314, testThai1, void)},
		{"testThai2", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(Bug5047314, testThai2, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Bug5047314",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Bug5047314, name, initialize, &classInfo$$, Bug5047314::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Bug5047314);
	});
	return class$;
}

$Class* Bug5047314::class$ = nullptr;