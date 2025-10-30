#include <java/util/Locale$LanguageRange.h>

#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <sun/util/locale/LocaleMatcher.h>
#include <jcpp.h>

#undef MAX_WEIGHT
#undef MIN_WEIGHT
#undef ROOT

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $LocaleMatcher = ::sun::util::locale::LocaleMatcher;

namespace java {
	namespace util {

$FieldInfo _Locale$LanguageRange_FieldInfo_[] = {
	{"MAX_WEIGHT", "D", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Locale$LanguageRange, MAX_WEIGHT)},
	{"MIN_WEIGHT", "D", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Locale$LanguageRange, MIN_WEIGHT)},
	{"range", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Locale$LanguageRange, range)},
	{"weight", "D", nullptr, $PRIVATE | $FINAL, $field(Locale$LanguageRange, weight)},
	{"hash", "I", nullptr, $PRIVATE | $VOLATILE, $field(Locale$LanguageRange, hash)},
	{}
};

$MethodInfo _Locale$LanguageRange_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Locale$LanguageRange::*)($String*)>(&Locale$LanguageRange::init$))},
	{"<init>", "(Ljava/lang/String;D)V", nullptr, $PUBLIC, $method(static_cast<void(Locale$LanguageRange::*)($String*,double)>(&Locale$LanguageRange::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getRange", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(Locale$LanguageRange::*)()>(&Locale$LanguageRange::getRange))},
	{"getWeight", "()D", nullptr, $PUBLIC, $method(static_cast<double(Locale$LanguageRange::*)()>(&Locale$LanguageRange::getWeight))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isSubtagIllFormed", "(Ljava/lang/String;Z)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*,bool)>(&Locale$LanguageRange::isSubtagIllFormed))},
	{"mapEquivalents", "(Ljava/util/List;Ljava/util/Map;)Ljava/util/List;", "(Ljava/util/List<Ljava/util/Locale$LanguageRange;>;Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;)Ljava/util/List<Ljava/util/Locale$LanguageRange;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)($List*,$Map*)>(&Locale$LanguageRange::mapEquivalents))},
	{"parse", "(Ljava/lang/String;)Ljava/util/List;", "(Ljava/lang/String;)Ljava/util/List<Ljava/util/Locale$LanguageRange;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)($String*)>(&Locale$LanguageRange::parse))},
	{"parse", "(Ljava/lang/String;Ljava/util/Map;)Ljava/util/List;", "(Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;)Ljava/util/List<Ljava/util/Locale$LanguageRange;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)($String*,$Map*)>(&Locale$LanguageRange::parse))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Locale$LanguageRange_InnerClassesInfo_[] = {
	{"java.util.Locale$LanguageRange", "java.util.Locale", "LanguageRange", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _Locale$LanguageRange_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.util.Locale$LanguageRange",
	"java.lang.Object",
	nullptr,
	_Locale$LanguageRange_FieldInfo_,
	_Locale$LanguageRange_MethodInfo_,
	nullptr,
	nullptr,
	_Locale$LanguageRange_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Locale"
};

$Object* allocate$Locale$LanguageRange($Class* clazz) {
	return $of($alloc(Locale$LanguageRange));
}

double Locale$LanguageRange::MAX_WEIGHT = 0.0;
double Locale$LanguageRange::MIN_WEIGHT = 0.0;

void Locale$LanguageRange::init$($String* range) {
	Locale$LanguageRange::init$(range, Locale$LanguageRange::MAX_WEIGHT);
}

void Locale$LanguageRange::init$($String* range$renamed, double weight) {
	$useLocalCurrentObjectStackCache();
	$var($String, range, range$renamed);
	if (range == nullptr) {
		$throwNew($NullPointerException);
	}
	if (weight < Locale$LanguageRange::MIN_WEIGHT || weight > Locale$LanguageRange::MAX_WEIGHT) {
		$throwNew($IllegalArgumentException, $$str({"weight="_s, $$str(weight)}));
	}
	$init($Locale);
	$assign(range, $nc(range)->toLowerCase($Locale::ROOT));
	bool isIllFormed = false;
	$var($StringArray, subtags, range->split("-"_s));
	bool var$0 = isSubtagIllFormed(subtags->get(0), true);
	if (var$0 || range->endsWith("-"_s)) {
		isIllFormed = true;
	} else {
		for (int32_t i = 1; i < subtags->length; ++i) {
			if (isSubtagIllFormed(subtags->get(i), false)) {
				isIllFormed = true;
				break;
			}
		}
	}
	if (isIllFormed) {
		$throwNew($IllegalArgumentException, $$str({"range="_s, range}));
	}
	$set(this, range, range);
	this->weight = weight;
}

bool Locale$LanguageRange::isSubtagIllFormed($String* subtag, bool isFirstSubtag) {
	$init(Locale$LanguageRange);
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc(subtag)->isEmpty();
	if (var$0 || $nc(subtag)->length() > 8) {
		return true;
	} else if (subtag->equals("*"_s)) {
		return false;
	}
	$var($chars, charArray, $nc(subtag)->toCharArray());
	if (isFirstSubtag) {
		{
			$var($chars, arr$, charArray);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				char16_t c = arr$->get(i$);
				{
					if (c < u'a' || c > u'z') {
						return true;
					}
				}
			}
		}
	} else {
		{
			$var($chars, arr$, charArray);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				char16_t c = arr$->get(i$);
				{
					if (c < u'0' || (c > u'9' && c < u'a') || c > u'z') {
						return true;
					}
				}
			}
		}
	}
	return false;
}

$String* Locale$LanguageRange::getRange() {
	return this->range;
}

double Locale$LanguageRange::getWeight() {
	return this->weight;
}

$List* Locale$LanguageRange::parse($String* ranges) {
	$init(Locale$LanguageRange);
	return $LocaleMatcher::parse(ranges);
}

$List* Locale$LanguageRange::parse($String* ranges, $Map* map) {
	$init(Locale$LanguageRange);
	return mapEquivalents($(parse(ranges)), map);
}

$List* Locale$LanguageRange::mapEquivalents($List* priorityList, $Map* map) {
	$init(Locale$LanguageRange);
	return $LocaleMatcher::mapEquivalents(priorityList, map);
}

int32_t Locale$LanguageRange::hashCode() {
	int32_t h = this->hash;
	if (h == 0) {
		h = 17;
		h = 37 * h + $nc(this->range)->hashCode();
		int64_t bitsWeight = $Double::doubleToLongBits(this->weight);
		h = 37 * h + (int32_t)(bitsWeight ^ ((int64_t)((uint64_t)bitsWeight >> 32)));
		if (h != 0) {
			this->hash = h;
		}
	}
	return h;
}

bool Locale$LanguageRange::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	$var(Locale$LanguageRange, other, nullptr);
	bool var$2 = $instanceOf(Locale$LanguageRange, obj);
	if (var$2) {
		$assign(other, $cast(Locale$LanguageRange, obj));
		var$2 = true;
	}
	bool var$1 = var$2;
	bool var$0 = var$1 && $nc(this->range)->equals($nc(other)->range);
	return var$0 && this->weight == $nc(other)->weight;
}

$String* Locale$LanguageRange::toString() {
	return (this->weight == Locale$LanguageRange::MAX_WEIGHT) ? this->range : $str({this->range, ";q="_s, $$str(this->weight)});
}

Locale$LanguageRange::Locale$LanguageRange() {
}

void clinit$Locale$LanguageRange($Class* class$) {
	Locale$LanguageRange::MAX_WEIGHT = 1.0;
	Locale$LanguageRange::MIN_WEIGHT = 0.0;
}

$Class* Locale$LanguageRange::load$($String* name, bool initialize) {
	$loadClass(Locale$LanguageRange, name, initialize, &_Locale$LanguageRange_ClassInfo_, clinit$Locale$LanguageRange, allocate$Locale$LanguageRange);
	return class$;
}

$Class* Locale$LanguageRange::class$ = nullptr;

	} // util
} // java