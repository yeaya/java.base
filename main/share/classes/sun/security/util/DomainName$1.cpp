#include <sun/security/util/DomainName$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <sun/security/util/DomainName$Rule$Type.h>
#include <sun/security/util/DomainName$Rule.h>
#include <sun/security/util/DomainName.h>
#include <jcpp.h>

#undef EXCEPTION
#undef NORMAL
#undef OTHER
#undef WILDCARD

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $DomainName$Rule$Type = ::sun::security::util::DomainName$Rule$Type;

namespace sun {
	namespace security {
		namespace util {

$ints* DomainName$1::$SwitchMap$sun$security$util$DomainName$Rule$Type = nullptr;

void DomainName$1::clinit$($Class* clazz) {
	$assignStatic(DomainName$1::$SwitchMap$sun$security$util$DomainName$Rule$Type, $new($ints, $($DomainName$Rule$Type::values())->length));
	{
		try {
			DomainName$1::$SwitchMap$sun$security$util$DomainName$Rule$Type->set($DomainName$Rule$Type::NORMAL->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			DomainName$1::$SwitchMap$sun$security$util$DomainName$Rule$Type->set($DomainName$Rule$Type::WILDCARD->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			DomainName$1::$SwitchMap$sun$security$util$DomainName$Rule$Type->set($DomainName$Rule$Type::OTHER->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			DomainName$1::$SwitchMap$sun$security$util$DomainName$Rule$Type->set($DomainName$Rule$Type::EXCEPTION->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

DomainName$1::DomainName$1() {
}

$Class* DomainName$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$sun$security$util$DomainName$Rule$Type", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DomainName$1, $SwitchMap$sun$security$util$DomainName$Rule$Type)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.util.DomainName",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.util.DomainName$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"sun.security.util.DomainName$1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.util.DomainName"
	};
	$loadClass(DomainName$1, name, initialize, &classInfo$$, DomainName$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DomainName$1);
	});
	return class$;
}

$Class* DomainName$1::class$ = nullptr;

		} // util
	} // security
} // sun