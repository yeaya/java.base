#include <java/util/Currency$OtherCurrencyEntry.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Currency.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Currency = ::java::util::Currency;
using $List = ::java::util::List;

namespace java {
	namespace util {

$FieldInfo _Currency$OtherCurrencyEntry_FieldInfo_[] = {
	{"currencyCode", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Currency$OtherCurrencyEntry, currencyCode)},
	{"fraction", "I", nullptr, $PRIVATE | $FINAL, $field(Currency$OtherCurrencyEntry, fraction)},
	{"numericCode", "I", nullptr, $PRIVATE | $FINAL, $field(Currency$OtherCurrencyEntry, numericCode)},
	{}
};

$MethodInfo _Currency$OtherCurrencyEntry_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;II)V", nullptr, $PRIVATE, $method(static_cast<void(Currency$OtherCurrencyEntry::*)($String*,int32_t,int32_t)>(&Currency$OtherCurrencyEntry::init$))},
	{"findEntry", "(Ljava/lang/String;)Ljava/util/Currency$OtherCurrencyEntry;", nullptr, $PRIVATE | $STATIC, $method(static_cast<Currency$OtherCurrencyEntry*(*)($String*)>(&Currency$OtherCurrencyEntry::findEntry))},
	{}
};

$InnerClassInfo _Currency$OtherCurrencyEntry_InnerClassesInfo_[] = {
	{"java.util.Currency$OtherCurrencyEntry", "java.util.Currency", "OtherCurrencyEntry", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Currency$OtherCurrencyEntry_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Currency$OtherCurrencyEntry",
	"java.lang.Object",
	nullptr,
	_Currency$OtherCurrencyEntry_FieldInfo_,
	_Currency$OtherCurrencyEntry_MethodInfo_,
	nullptr,
	nullptr,
	_Currency$OtherCurrencyEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Currency"
};

$Object* allocate$Currency$OtherCurrencyEntry($Class* clazz) {
	return $of($alloc(Currency$OtherCurrencyEntry));
}

void Currency$OtherCurrencyEntry::init$($String* currencyCode, int32_t fraction, int32_t numericCode) {
	$set(this, currencyCode, currencyCode);
	this->fraction = fraction;
	this->numericCode = numericCode;
}

Currency$OtherCurrencyEntry* Currency$OtherCurrencyEntry::findEntry($String* code) {
	$useLocalCurrentObjectStackCache();
	$init($Currency);
	int32_t size = $nc($Currency::otherCurrenciesList)->size();
	for (int32_t index = 0; index < size; ++index) {
		$var(Currency$OtherCurrencyEntry, ocEntry, $cast(Currency$OtherCurrencyEntry, $nc($Currency::otherCurrenciesList)->get(index)));
		if ($nc($nc(ocEntry)->currencyCode)->equalsIgnoreCase(code)) {
			return ocEntry;
		}
	}
	return nullptr;
}

Currency$OtherCurrencyEntry::Currency$OtherCurrencyEntry() {
}

$Class* Currency$OtherCurrencyEntry::load$($String* name, bool initialize) {
	$loadClass(Currency$OtherCurrencyEntry, name, initialize, &_Currency$OtherCurrencyEntry_ClassInfo_, allocate$Currency$OtherCurrencyEntry);
	return class$;
}

$Class* Currency$OtherCurrencyEntry::class$ = nullptr;

	} // util
} // java