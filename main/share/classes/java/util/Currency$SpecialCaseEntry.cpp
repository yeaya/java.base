#include <java/util/Currency$SpecialCaseEntry.h>
#include <java/util/Currency.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef MAX_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Currency = ::java::util::Currency;

namespace java {
	namespace util {

void Currency$SpecialCaseEntry::init$(int64_t cutOverTime, $String* oldCurrency, $String* newCurrency, int32_t oldCurrencyFraction, int32_t newCurrencyFraction, int32_t oldCurrencyNumericCode, int32_t newCurrencyNumericCode) {
	this->cutOverTime = cutOverTime;
	$set(this, oldCurrency, oldCurrency);
	$set(this, newCurrency, newCurrency);
	this->oldCurrencyFraction = oldCurrencyFraction;
	this->newCurrencyFraction = newCurrencyFraction;
	this->oldCurrencyNumericCode = oldCurrencyNumericCode;
	this->newCurrencyNumericCode = newCurrencyNumericCode;
}

void Currency$SpecialCaseEntry::init$($String* currencyCode, int32_t fraction, int32_t numericCode) {
	Currency$SpecialCaseEntry::init$($Long::MAX_VALUE, currencyCode, ""_s, fraction, 0, numericCode, 0);
}

int32_t Currency$SpecialCaseEntry::indexOf($String* code, int32_t fraction, int32_t numeric) {
	$useLocalObjectStack();
	$init($Currency);
	int32_t size = $nc($Currency::specialCasesList)->size();
	for (int32_t index = 0; index < size; ++index) {
		$var(Currency$SpecialCaseEntry, scEntry, $cast(Currency$SpecialCaseEntry, $Currency::specialCasesList->get(index)));
		if ($nc($nc(scEntry)->oldCurrency)->equals(code) && scEntry->oldCurrencyFraction == fraction && scEntry->oldCurrencyNumericCode == numeric && scEntry->cutOverTime == $Long::MAX_VALUE) {
			return index;
		}
	}
	return -1;
}

$ints* Currency$SpecialCaseEntry::findEntry($String* code) {
	$useLocalObjectStack();
	$var($ints, fractionAndNumericCode, nullptr);
	$init($Currency);
	int32_t size = $nc($Currency::specialCasesList)->size();
	for (int32_t index = 0; index < size; ++index) {
		$var(Currency$SpecialCaseEntry, scEntry, $cast(Currency$SpecialCaseEntry, $Currency::specialCasesList->get(index)));
		bool var$0 = $nc($nc(scEntry)->oldCurrency)->equals(code);
		if (var$0 && (scEntry->cutOverTime == $Long::MAX_VALUE || $System::currentTimeMillis() < scEntry->cutOverTime)) {
			$assign(fractionAndNumericCode, $new($ints, 2));
			fractionAndNumericCode->set(0, scEntry->oldCurrencyFraction);
			fractionAndNumericCode->set(1, scEntry->oldCurrencyNumericCode);
			break;
		} else {
			bool var$1 = $nc(scEntry->newCurrency)->equals(code);
			if (var$1 && $System::currentTimeMillis() >= scEntry->cutOverTime) {
				$assign(fractionAndNumericCode, $new($ints, 2));
				fractionAndNumericCode->set(0, scEntry->newCurrencyFraction);
				fractionAndNumericCode->set(1, scEntry->newCurrencyNumericCode);
				break;
			}
		}
	}
	return fractionAndNumericCode;
}

int32_t Currency$SpecialCaseEntry::currencyCodeIndex($String* code) {
	$useLocalObjectStack();
	$init($Currency);
	int32_t size = $nc($Currency::specialCasesList)->size();
	for (int32_t index = 0; index < size; ++index) {
		$var(Currency$SpecialCaseEntry, scEntry, $cast(Currency$SpecialCaseEntry, $Currency::specialCasesList->get(index)));
		bool var$0 = $nc($nc(scEntry)->oldCurrency)->equals(code);
		if (var$0 && (scEntry->cutOverTime == $Long::MAX_VALUE || $System::currentTimeMillis() < scEntry->cutOverTime)) {
			return index;
		} else {
			bool var$1 = $nc(scEntry->newCurrency)->equals(code);
			if (var$1 && $System::currentTimeMillis() >= scEntry->cutOverTime) {
				return index;
			}
		}
	}
	return -1;
}

int32_t Currency$SpecialCaseEntry::toIndex(int32_t tableEntry) {
	return (tableEntry & 0x1f) - 1;
}

Currency$SpecialCaseEntry::Currency$SpecialCaseEntry() {
}

$Class* Currency$SpecialCaseEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"cutOverTime", "J", nullptr, $PRIVATE | $FINAL, $field(Currency$SpecialCaseEntry, cutOverTime)},
		{"oldCurrency", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Currency$SpecialCaseEntry, oldCurrency)},
		{"newCurrency", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Currency$SpecialCaseEntry, newCurrency)},
		{"oldCurrencyFraction", "I", nullptr, $PRIVATE | $FINAL, $field(Currency$SpecialCaseEntry, oldCurrencyFraction)},
		{"newCurrencyFraction", "I", nullptr, $PRIVATE | $FINAL, $field(Currency$SpecialCaseEntry, newCurrencyFraction)},
		{"oldCurrencyNumericCode", "I", nullptr, $PRIVATE | $FINAL, $field(Currency$SpecialCaseEntry, oldCurrencyNumericCode)},
		{"newCurrencyNumericCode", "I", nullptr, $PRIVATE | $FINAL, $field(Currency$SpecialCaseEntry, newCurrencyNumericCode)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(JLjava/lang/String;Ljava/lang/String;IIII)V", nullptr, $PRIVATE, $method(Currency$SpecialCaseEntry, init$, void, int64_t, $String*, $String*, int32_t, int32_t, int32_t, int32_t)},
		{"<init>", "(Ljava/lang/String;II)V", nullptr, $PRIVATE, $method(Currency$SpecialCaseEntry, init$, void, $String*, int32_t, int32_t)},
		{"currencyCodeIndex", "(Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $staticMethod(Currency$SpecialCaseEntry, currencyCodeIndex, int32_t, $String*)},
		{"findEntry", "(Ljava/lang/String;)[I", nullptr, $PRIVATE | $STATIC, $staticMethod(Currency$SpecialCaseEntry, findEntry, $ints*, $String*)},
		{"indexOf", "(Ljava/lang/String;II)I", nullptr, $PRIVATE | $STATIC, $staticMethod(Currency$SpecialCaseEntry, indexOf, int32_t, $String*, int32_t, int32_t)},
		{"toIndex", "(I)I", nullptr, $PRIVATE | $STATIC, $staticMethod(Currency$SpecialCaseEntry, toIndex, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Currency$SpecialCaseEntry", "java.util.Currency", "SpecialCaseEntry", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.Currency$SpecialCaseEntry",
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
	$loadClass(Currency$SpecialCaseEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Currency$SpecialCaseEntry);
	});
	return class$;
}

$Class* Currency$SpecialCaseEntry::class$ = nullptr;

	} // util
} // java