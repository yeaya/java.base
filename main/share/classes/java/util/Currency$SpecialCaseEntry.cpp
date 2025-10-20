#include <java/util/Currency$SpecialCaseEntry.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $List = ::java::util::List;

namespace java {
	namespace util {

$FieldInfo _Currency$SpecialCaseEntry_FieldInfo_[] = {
	{"cutOverTime", "J", nullptr, $PRIVATE | $FINAL, $field(Currency$SpecialCaseEntry, cutOverTime)},
	{"oldCurrency", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Currency$SpecialCaseEntry, oldCurrency)},
	{"newCurrency", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Currency$SpecialCaseEntry, newCurrency)},
	{"oldCurrencyFraction", "I", nullptr, $PRIVATE | $FINAL, $field(Currency$SpecialCaseEntry, oldCurrencyFraction)},
	{"newCurrencyFraction", "I", nullptr, $PRIVATE | $FINAL, $field(Currency$SpecialCaseEntry, newCurrencyFraction)},
	{"oldCurrencyNumericCode", "I", nullptr, $PRIVATE | $FINAL, $field(Currency$SpecialCaseEntry, oldCurrencyNumericCode)},
	{"newCurrencyNumericCode", "I", nullptr, $PRIVATE | $FINAL, $field(Currency$SpecialCaseEntry, newCurrencyNumericCode)},
	{}
};

$MethodInfo _Currency$SpecialCaseEntry_MethodInfo_[] = {
	{"<init>", "(JLjava/lang/String;Ljava/lang/String;IIII)V", nullptr, $PRIVATE, $method(static_cast<void(Currency$SpecialCaseEntry::*)(int64_t,$String*,$String*,int32_t,int32_t,int32_t,int32_t)>(&Currency$SpecialCaseEntry::init$))},
	{"<init>", "(Ljava/lang/String;II)V", nullptr, $PRIVATE, $method(static_cast<void(Currency$SpecialCaseEntry::*)($String*,int32_t,int32_t)>(&Currency$SpecialCaseEntry::init$))},
	{"currencyCodeIndex", "(Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($String*)>(&Currency$SpecialCaseEntry::currencyCodeIndex))},
	{"findEntry", "(Ljava/lang/String;)[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ints*(*)($String*)>(&Currency$SpecialCaseEntry::findEntry))},
	{"indexOf", "(Ljava/lang/String;II)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($String*,int32_t,int32_t)>(&Currency$SpecialCaseEntry::indexOf))},
	{"toIndex", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&Currency$SpecialCaseEntry::toIndex))},
	{}
};

$InnerClassInfo _Currency$SpecialCaseEntry_InnerClassesInfo_[] = {
	{"java.util.Currency$SpecialCaseEntry", "java.util.Currency", "SpecialCaseEntry", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Currency$SpecialCaseEntry_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Currency$SpecialCaseEntry",
	"java.lang.Object",
	nullptr,
	_Currency$SpecialCaseEntry_FieldInfo_,
	_Currency$SpecialCaseEntry_MethodInfo_,
	nullptr,
	nullptr,
	_Currency$SpecialCaseEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Currency"
};

$Object* allocate$Currency$SpecialCaseEntry($Class* clazz) {
	return $of($alloc(Currency$SpecialCaseEntry));
}

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
	$useLocalCurrentObjectStackCache();
	$init($Currency);
	int32_t size = $nc($Currency::specialCasesList)->size();
	for (int32_t index = 0; index < size; ++index) {
		$var(Currency$SpecialCaseEntry, scEntry, $cast(Currency$SpecialCaseEntry, $nc($Currency::specialCasesList)->get(index)));
		if ($nc($nc(scEntry)->oldCurrency)->equals(code) && scEntry->oldCurrencyFraction == fraction && scEntry->oldCurrencyNumericCode == numeric && scEntry->cutOverTime == $Long::MAX_VALUE) {
			return index;
		}
	}
	return -1;
}

$ints* Currency$SpecialCaseEntry::findEntry($String* code) {
	$useLocalCurrentObjectStackCache();
	$var($ints, fractionAndNumericCode, nullptr);
	$init($Currency);
	int32_t size = $nc($Currency::specialCasesList)->size();
	for (int32_t index = 0; index < size; ++index) {
		$var(Currency$SpecialCaseEntry, scEntry, $cast(Currency$SpecialCaseEntry, $nc($Currency::specialCasesList)->get(index)));
		bool var$0 = $nc($nc(scEntry)->oldCurrency)->equals(code);
		if (var$0 && (scEntry->cutOverTime == $Long::MAX_VALUE || $System::currentTimeMillis() < $nc(scEntry)->cutOverTime)) {
			$assign(fractionAndNumericCode, $new($ints, 2));
			fractionAndNumericCode->set(0, scEntry->oldCurrencyFraction);
			fractionAndNumericCode->set(1, scEntry->oldCurrencyNumericCode);
			break;
		} else {
			bool var$2 = $nc(scEntry->newCurrency)->equals(code);
			if (var$2 && $System::currentTimeMillis() >= scEntry->cutOverTime) {
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
	$useLocalCurrentObjectStackCache();
	$init($Currency);
	int32_t size = $nc($Currency::specialCasesList)->size();
	for (int32_t index = 0; index < size; ++index) {
		$var(Currency$SpecialCaseEntry, scEntry, $cast(Currency$SpecialCaseEntry, $nc($Currency::specialCasesList)->get(index)));
		bool var$0 = $nc($nc(scEntry)->oldCurrency)->equals(code);
		if (var$0 && (scEntry->cutOverTime == $Long::MAX_VALUE || $System::currentTimeMillis() < $nc(scEntry)->cutOverTime)) {
			return index;
		} else {
			bool var$2 = $nc(scEntry->newCurrency)->equals(code);
			if (var$2 && $System::currentTimeMillis() >= scEntry->cutOverTime) {
				return index;
			}
		}
	}
	return -1;
}

int32_t Currency$SpecialCaseEntry::toIndex(int32_t tableEntry) {
	return ((int32_t)(tableEntry & (uint32_t)31)) - 1;
}

Currency$SpecialCaseEntry::Currency$SpecialCaseEntry() {
}

$Class* Currency$SpecialCaseEntry::load$($String* name, bool initialize) {
	$loadClass(Currency$SpecialCaseEntry, name, initialize, &_Currency$SpecialCaseEntry_ClassInfo_, allocate$Currency$SpecialCaseEntry);
	return class$;
}

$Class* Currency$SpecialCaseEntry::class$ = nullptr;

	} // util
} // java