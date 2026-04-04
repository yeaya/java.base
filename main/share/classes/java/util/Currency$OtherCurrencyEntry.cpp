#include <java/util/Currency$OtherCurrencyEntry.h>
#include <java/util/Currency.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Currency = ::java::util::Currency;

namespace java {
	namespace util {

void Currency$OtherCurrencyEntry::init$($String* currencyCode, int32_t fraction, int32_t numericCode) {
	$set(this, currencyCode, currencyCode);
	this->fraction = fraction;
	this->numericCode = numericCode;
}

Currency$OtherCurrencyEntry* Currency$OtherCurrencyEntry::findEntry($String* code) {
	$useLocalObjectStack();
	$init($Currency);
	int32_t size = $nc($Currency::otherCurrenciesList)->size();
	for (int32_t index = 0; index < size; ++index) {
		$var(Currency$OtherCurrencyEntry, ocEntry, $cast(Currency$OtherCurrencyEntry, $Currency::otherCurrenciesList->get(index)));
		if ($nc($nc(ocEntry)->currencyCode)->equalsIgnoreCase(code)) {
			return ocEntry;
		}
	}
	return nullptr;
}

Currency$OtherCurrencyEntry::Currency$OtherCurrencyEntry() {
}

$Class* Currency$OtherCurrencyEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"currencyCode", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Currency$OtherCurrencyEntry, currencyCode)},
		{"fraction", "I", nullptr, $PRIVATE | $FINAL, $field(Currency$OtherCurrencyEntry, fraction)},
		{"numericCode", "I", nullptr, $PRIVATE | $FINAL, $field(Currency$OtherCurrencyEntry, numericCode)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;II)V", nullptr, $PRIVATE, $method(Currency$OtherCurrencyEntry, init$, void, $String*, int32_t, int32_t)},
		{"findEntry", "(Ljava/lang/String;)Ljava/util/Currency$OtherCurrencyEntry;", nullptr, $PRIVATE | $STATIC, $staticMethod(Currency$OtherCurrencyEntry, findEntry, Currency$OtherCurrencyEntry*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Currency$OtherCurrencyEntry", "java.util.Currency", "OtherCurrencyEntry", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.Currency$OtherCurrencyEntry",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.Currency"
	};
	$loadClass(Currency$OtherCurrencyEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Currency$OtherCurrencyEntry);
	});
	return class$;
}

$Class* Currency$OtherCurrencyEntry::class$ = nullptr;

	} // util
} // java