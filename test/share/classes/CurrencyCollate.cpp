#include <CurrencyCollate.h>
#include <java/text/Collator.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef DATA
#undef US

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Collator = ::java::text::Collator;
using $Locale = ::java::util::Locale;

$Collator* CurrencyCollate::myCollation = nullptr;

void CurrencyCollate::init$() {
}

void CurrencyCollate::main($StringArray* args) {
	$init(CurrencyCollate);
	$useLocalObjectStack();
	$var($StringArray, DATA, $new($StringArray, {
		u"€"_s,
		">"_s,
		"$"_s,
		u"€"_s,
		"<"_s,
		u"£"_s,
		u"¤"_s,
		"<"_s,
		u"฿"_s,
		u"฿"_s,
		"<"_s,
		u"¢"_s,
		u"¢"_s,
		"<"_s,
		u"₡"_s,
		u"₡"_s,
		"<"_s,
		u"₢"_s,
		u"₢"_s,
		"<"_s,
		"$"_s,
		"$"_s,
		"<"_s,
		u"₫"_s,
		u"₫"_s,
		"<"_s,
		u"₣"_s,
		u"₣"_s,
		"<"_s,
		u"₤"_s,
		u"₤"_s,
		"<"_s,
		u"₥"_s,
		u"₥"_s,
		"<"_s,
		u"₦"_s,
		u"₦"_s,
		"<"_s,
		u"₧"_s,
		u"₧"_s,
		"<"_s,
		u"£"_s,
		u"£"_s,
		"<"_s,
		u"₨"_s,
		u"₨"_s,
		"<"_s,
		u"₪"_s,
		u"₪"_s,
		"<"_s,
		u"₩"_s,
		u"₩"_s,
		"<"_s,
		u"¥"_s
	}));
	for (int32_t i = 0; i < DATA->length; i += 3) {
		int32_t expected = $nc(DATA->get(i + 1))->equals(">"_s) ? 1 : ($nc(DATA->get(i + 1))->equals("<"_s) ? -1 : 0);
		int32_t actual = $nc(CurrencyCollate::myCollation)->compare(DATA->get(i), DATA->get(i + 2));
		if (actual != expected) {
			$throwNew($RuntimeException, $$str({"Collation of "_s, DATA->get(i), " vs. "_s, DATA->get(i + 2), " yields "_s, $$str(actual), "; expected "_s, $$str(expected)}));
		}
	}
	$nc($System::out)->println("Ok"_s);
}

void CurrencyCollate::clinit$($Class* clazz) {
	$init($Locale);
	$assignStatic(CurrencyCollate::myCollation, $Collator::getInstance($Locale::US));
}

CurrencyCollate::CurrencyCollate() {
}

$Class* CurrencyCollate::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"myCollation", "Ljava/text/Collator;", nullptr, $STATIC, $staticField(CurrencyCollate, myCollation)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyCollate, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(CurrencyCollate, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"CurrencyCollate",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CurrencyCollate, name, initialize, &classInfo$$, CurrencyCollate::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyCollate);
	});
	return class$;
}

$Class* CurrencyCollate::class$ = nullptr;