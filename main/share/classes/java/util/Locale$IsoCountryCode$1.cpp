#include <java/util/Locale$IsoCountryCode$1.h>

#include <java/util/Locale$IsoCountryCode.h>
#include <java/util/Locale.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $Locale$IsoCountryCode = ::java::util::Locale$IsoCountryCode;
using $Set = ::java::util::Set;

namespace java {
	namespace util {

$MethodInfo _Locale$IsoCountryCode$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(Locale$IsoCountryCode$1, init$, void, $String*, int32_t)},
	{"createCountryCodeSet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", 0, $virtualMethod(Locale$IsoCountryCode$1, createCountryCodeSet, $Set*)},
	{}
};

$EnclosingMethodInfo _Locale$IsoCountryCode$1_EnclosingMethodInfo_ = {
	"java.util.Locale$IsoCountryCode",
	nullptr,
	nullptr
};

$InnerClassInfo _Locale$IsoCountryCode$1_InnerClassesInfo_[] = {
	{"java.util.Locale$IsoCountryCode", "java.util.Locale", "IsoCountryCode", $PUBLIC | $STATIC | $ABSTRACT | $ENUM},
	{"java.util.Locale$IsoCountryCode$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Locale$IsoCountryCode$1_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"java.util.Locale$IsoCountryCode$1",
	"java.util.Locale$IsoCountryCode",
	nullptr,
	nullptr,
	_Locale$IsoCountryCode$1_MethodInfo_,
	nullptr,
	&_Locale$IsoCountryCode$1_EnclosingMethodInfo_,
	_Locale$IsoCountryCode$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Locale"
};

$Object* allocate$Locale$IsoCountryCode$1($Class* clazz) {
	return $of($alloc(Locale$IsoCountryCode$1));
}

void Locale$IsoCountryCode$1::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Locale$IsoCountryCode::init$($enum$name, $enum$ordinal);
}

$Set* Locale$IsoCountryCode$1::createCountryCodeSet() {
	return $Set::of($($Locale::getISOCountries()));
}

Locale$IsoCountryCode$1::Locale$IsoCountryCode$1() {
}

$Class* Locale$IsoCountryCode$1::load$($String* name, bool initialize) {
	$loadClass(Locale$IsoCountryCode$1, name, initialize, &_Locale$IsoCountryCode$1_ClassInfo_, allocate$Locale$IsoCountryCode$1);
	return class$;
}

$Class* Locale$IsoCountryCode$1::class$ = nullptr;

	} // util
} // java