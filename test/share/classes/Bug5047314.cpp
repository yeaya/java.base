#include <Bug5047314.h>

#include <java/text/CollationKey.h>
#include <java/text/Collator.h>
#include <java/util/Locale.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collator = ::java::text::Collator;
using $Locale = ::java::util::Locale;

$FieldInfo _Bug5047314_FieldInfo_[] = {
	{"colLao", "Ljava/text/Collator;", nullptr, $PRIVATE | $STATIC, $staticField(Bug5047314, colLao)},
	{"colThai", "Ljava/text/Collator;", nullptr, $PRIVATE | $STATIC, $staticField(Bug5047314, colThai)},
	{"textLao", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(Bug5047314, textLao)},
	{"textThai", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(Bug5047314, textThai)},
	{}
};

$MethodInfo _Bug5047314_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Bug5047314, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Bug5047314, main, void, $StringArray*)},
	{"testLao1", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(Bug5047314, testLao1, void)},
	{"testLao2", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(Bug5047314, testLao2, void)},
	{"testThai1", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(Bug5047314, testThai1, void)},
	{"testThai2", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(Bug5047314, testThai2, void)},
	{}
};

$ClassInfo _Bug5047314_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Bug5047314",
	"java.lang.Object",
	nullptr,
	_Bug5047314_FieldInfo_,
	_Bug5047314_MethodInfo_
};

$Object* allocate$Bug5047314($Class* clazz) {
	return $of($alloc(Bug5047314));
}

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
		$nc(Bug5047314::colLao)->compare($nc(Bug5047314::textLao)->get(i), $nc(Bug5047314::textLao)->get(i));
	}
	$nc($System::out)->println("Passed."_s);
}

void Bug5047314::testLao2() {
	$init(Bug5047314);
	$nc($System::out)->print("Test(Lao 2) .... "_s);
	for (int32_t i = 0; i < $nc(Bug5047314::textLao)->length; ++i) {
		$nc(Bug5047314::colLao)->compare($nc(Bug5047314::textLao)->get(i), $nc(Bug5047314::textLao)->get(i));
	}
	$nc($System::out)->println("Passed."_s);
}

void Bug5047314::testThai1() {
	$init(Bug5047314);
	$nc($System::out)->print("Test(Thai 1) .... "_s);
	for (int32_t i = 0; i < $nc(Bug5047314::textThai)->length; ++i) {
		$nc(Bug5047314::colThai)->compare($nc(Bug5047314::textThai)->get(i), $nc(Bug5047314::textThai)->get(i));
	}
	$nc($System::out)->println("Passed."_s);
}

void Bug5047314::testThai2() {
	$init(Bug5047314);
	$nc($System::out)->print("Test(Thai 2) .... "_s);
	for (int32_t i = 0; i < $nc(Bug5047314::textThai)->length; ++i) {
		$nc(Bug5047314::colThai)->getCollationKey($nc(Bug5047314::textThai)->get(i));
	}
	$nc($System::out)->println("Passed."_s);
}

void clinit$Bug5047314($Class* class$) {
	$useLocalCurrentObjectStackCache();
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
	$loadClass(Bug5047314, name, initialize, &_Bug5047314_ClassInfo_, clinit$Bug5047314, allocate$Bug5047314);
	return class$;
}

$Class* Bug5047314::class$ = nullptr;