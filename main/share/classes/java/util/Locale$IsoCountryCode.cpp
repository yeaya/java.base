#include <java/util/Locale$IsoCountryCode.h>

#include <java/io/Serializable.h>
#include <java/lang/Enum.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractMap.h>
#include <java/util/Locale$IsoCountryCode$1.h>
#include <java/util/Locale$IsoCountryCode$2.h>
#include <java/util/Locale$IsoCountryCode$3.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

#undef PART1_ALPHA2
#undef PART1_ALPHA3
#undef PART3

using $Locale$IsoCountryCodeArray = $Array<::java::util::Locale$IsoCountryCode>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AbstractMap = ::java::util::AbstractMap;
using $Locale$IsoCountryCode$1 = ::java::util::Locale$IsoCountryCode$1;
using $Locale$IsoCountryCode$2 = ::java::util::Locale$IsoCountryCode$2;
using $Locale$IsoCountryCode$3 = ::java::util::Locale$IsoCountryCode$3;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $Function = ::java::util::function::Function;

namespace java {
	namespace util {

class Locale$IsoCountryCode$$Lambda$createCountryCodeSet : public $Function {
	$class(Locale$IsoCountryCode$$Lambda$createCountryCodeSet, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure(Locale$IsoCountryCode, inst$)->createCountryCodeSet());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Locale$IsoCountryCode$$Lambda$createCountryCodeSet>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Locale$IsoCountryCode$$Lambda$createCountryCodeSet::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Locale$IsoCountryCode$$Lambda$createCountryCodeSet::*)()>(&Locale$IsoCountryCode$$Lambda$createCountryCodeSet::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Locale$IsoCountryCode$$Lambda$createCountryCodeSet::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.Locale$IsoCountryCode$$Lambda$createCountryCodeSet",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Locale$IsoCountryCode$$Lambda$createCountryCodeSet::load$($String* name, bool initialize) {
	$loadClass(Locale$IsoCountryCode$$Lambda$createCountryCodeSet, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Locale$IsoCountryCode$$Lambda$createCountryCodeSet::class$ = nullptr;

$FieldInfo _Locale$IsoCountryCode_FieldInfo_[] = {
	{"PART1_ALPHA2", "Ljava/util/Locale$IsoCountryCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Locale$IsoCountryCode, PART1_ALPHA2)},
	{"PART1_ALPHA3", "Ljava/util/Locale$IsoCountryCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Locale$IsoCountryCode, PART1_ALPHA3)},
	{"PART3", "Ljava/util/Locale$IsoCountryCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Locale$IsoCountryCode, PART3)},
	{"$VALUES", "[Ljava/util/Locale$IsoCountryCode;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Locale$IsoCountryCode, $VALUES)},
	{"iso3166CodesMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/util/Locale$IsoCountryCode;Ljava/util/Set<Ljava/lang/String;>;>;", $PRIVATE | $STATIC, $staticField(Locale$IsoCountryCode, iso3166CodesMap)},
	{}
};

$MethodInfo _Locale$IsoCountryCode_MethodInfo_[] = {
	{"$values", "()[Ljava/util/Locale$IsoCountryCode;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Locale$IsoCountryCodeArray*(*)()>(&Locale$IsoCountryCode::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Locale$IsoCountryCode::*)($String*,int32_t)>(&Locale$IsoCountryCode::init$))},
	{"createCountryCodeSet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $ABSTRACT},
	{"retrieveISOCountryCodes", "(Ljava/util/Locale$IsoCountryCode;)Ljava/util/Set;", "(Ljava/util/Locale$IsoCountryCode;)Ljava/util/Set<Ljava/lang/String;>;", $STATIC, $method(static_cast<$Set*(*)(Locale$IsoCountryCode*)>(&Locale$IsoCountryCode::retrieveISOCountryCodes))},
	{"valueOf", "(Ljava/lang/String;)Ljava/util/Locale$IsoCountryCode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Locale$IsoCountryCode*(*)($String*)>(&Locale$IsoCountryCode::valueOf))},
	{"values", "()[Ljava/util/Locale$IsoCountryCode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Locale$IsoCountryCodeArray*(*)()>(&Locale$IsoCountryCode::values))},
	{}
};

$InnerClassInfo _Locale$IsoCountryCode_InnerClassesInfo_[] = {
	{"java.util.Locale$IsoCountryCode", "java.util.Locale", "IsoCountryCode", $PUBLIC | $STATIC | $ABSTRACT | $ENUM},
	{"java.util.Locale$IsoCountryCode$3", nullptr, nullptr, $FINAL | $ENUM},
	{"java.util.Locale$IsoCountryCode$2", nullptr, nullptr, $FINAL | $ENUM},
	{"java.util.Locale$IsoCountryCode$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Locale$IsoCountryCode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT | $ENUM,
	"java.util.Locale$IsoCountryCode",
	"java.lang.Enum",
	nullptr,
	_Locale$IsoCountryCode_FieldInfo_,
	_Locale$IsoCountryCode_MethodInfo_,
	"Ljava/lang/Enum<Ljava/util/Locale$IsoCountryCode;>;",
	nullptr,
	_Locale$IsoCountryCode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Locale"
};

$Object* allocate$Locale$IsoCountryCode($Class* clazz) {
	return $of($alloc(Locale$IsoCountryCode));
}

Locale$IsoCountryCode* Locale$IsoCountryCode::PART1_ALPHA2 = nullptr;
Locale$IsoCountryCode* Locale$IsoCountryCode::PART1_ALPHA3 = nullptr;
Locale$IsoCountryCode* Locale$IsoCountryCode::PART3 = nullptr;
$Locale$IsoCountryCodeArray* Locale$IsoCountryCode::$VALUES = nullptr;
$Map* Locale$IsoCountryCode::iso3166CodesMap = nullptr;

$Locale$IsoCountryCodeArray* Locale$IsoCountryCode::$values() {
	$init(Locale$IsoCountryCode);
	return $new($Locale$IsoCountryCodeArray, {
		Locale$IsoCountryCode::PART1_ALPHA2,
		Locale$IsoCountryCode::PART1_ALPHA3,
		Locale$IsoCountryCode::PART3
	});
}

$Locale$IsoCountryCodeArray* Locale$IsoCountryCode::values() {
	$init(Locale$IsoCountryCode);
	return $cast($Locale$IsoCountryCodeArray, Locale$IsoCountryCode::$VALUES->clone());
}

Locale$IsoCountryCode* Locale$IsoCountryCode::valueOf($String* name) {
	$init(Locale$IsoCountryCode);
	return $cast(Locale$IsoCountryCode, $Enum::valueOf(Locale$IsoCountryCode::class$, name));
}

void Locale$IsoCountryCode::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

$Set* Locale$IsoCountryCode::retrieveISOCountryCodes(Locale$IsoCountryCode* type) {
	$init(Locale$IsoCountryCode);
	return $cast($Set, $nc(Locale$IsoCountryCode::iso3166CodesMap)->computeIfAbsent(type, static_cast<$Function*>($$new(Locale$IsoCountryCode$$Lambda$createCountryCodeSet))));
}

void clinit$Locale$IsoCountryCode($Class* class$) {
	$assignStatic(Locale$IsoCountryCode::PART1_ALPHA2, $new($Locale$IsoCountryCode$1, "PART1_ALPHA2"_s, 0));
	$assignStatic(Locale$IsoCountryCode::PART1_ALPHA3, $new($Locale$IsoCountryCode$2, "PART1_ALPHA3"_s, 1));
	$assignStatic(Locale$IsoCountryCode::PART3, $new($Locale$IsoCountryCode$3, "PART3"_s, 2));
	$assignStatic(Locale$IsoCountryCode::$VALUES, Locale$IsoCountryCode::$values());
	$assignStatic(Locale$IsoCountryCode::iso3166CodesMap, static_cast<$Map*>(static_cast<$AbstractMap*>($new($ConcurrentHashMap))));
}

Locale$IsoCountryCode::Locale$IsoCountryCode() {
}

$Class* Locale$IsoCountryCode::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Locale$IsoCountryCode$$Lambda$createCountryCodeSet::classInfo$.name)) {
			return Locale$IsoCountryCode$$Lambda$createCountryCodeSet::load$(name, initialize);
		}
	}
	$loadClass(Locale$IsoCountryCode, name, initialize, &_Locale$IsoCountryCode_ClassInfo_, clinit$Locale$IsoCountryCode, allocate$Locale$IsoCountryCode);
	return class$;
}

$Class* Locale$IsoCountryCode::class$ = nullptr;

	} // util
} // java