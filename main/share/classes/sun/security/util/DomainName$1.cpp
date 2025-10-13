#include <sun/security/util/DomainName$1.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/util/DomainName$Rule$Type.h>
#include <sun/security/util/DomainName$Rule.h>
#include <sun/security/util/DomainName.h>
#include <jcpp.h>

#undef EXCEPTION
#undef NORMAL
#undef OTHER
#undef WILDCARD

using $DomainName$Rule$TypeArray = $Array<::sun::security::util::DomainName$Rule$Type>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $DomainName = ::sun::security::util::DomainName;
using $DomainName$Rule = ::sun::security::util::DomainName$Rule;
using $DomainName$Rule$Type = ::sun::security::util::DomainName$Rule$Type;

namespace sun {
	namespace security {
		namespace util {

$FieldInfo _DomainName$1_FieldInfo_[] = {
	{"$SwitchMap$sun$security$util$DomainName$Rule$Type", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DomainName$1, $SwitchMap$sun$security$util$DomainName$Rule$Type)},
	{}
};

$EnclosingMethodInfo _DomainName$1_EnclosingMethodInfo_ = {
	"sun.security.util.DomainName",
	nullptr,
	nullptr
};

$InnerClassInfo _DomainName$1_InnerClassesInfo_[] = {
	{"sun.security.util.DomainName$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _DomainName$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"sun.security.util.DomainName$1",
	"java.lang.Object",
	nullptr,
	_DomainName$1_FieldInfo_,
	nullptr,
	nullptr,
	&_DomainName$1_EnclosingMethodInfo_,
	_DomainName$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.DomainName"
};

$Object* allocate$DomainName$1($Class* clazz) {
	return $of($alloc(DomainName$1));
}

$ints* DomainName$1::$SwitchMap$sun$security$util$DomainName$Rule$Type = nullptr;

void clinit$DomainName$1($Class* class$) {
	$assignStatic(DomainName$1::$SwitchMap$sun$security$util$DomainName$Rule$Type, $new($ints, $($DomainName$Rule$Type::values())->length));
	{
		try {
			$nc(DomainName$1::$SwitchMap$sun$security$util$DomainName$Rule$Type)->set($DomainName$Rule$Type::NORMAL->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(DomainName$1::$SwitchMap$sun$security$util$DomainName$Rule$Type)->set($DomainName$Rule$Type::WILDCARD->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(DomainName$1::$SwitchMap$sun$security$util$DomainName$Rule$Type)->set($DomainName$Rule$Type::OTHER->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(DomainName$1::$SwitchMap$sun$security$util$DomainName$Rule$Type)->set($DomainName$Rule$Type::EXCEPTION->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

DomainName$1::DomainName$1() {
}

$Class* DomainName$1::load$($String* name, bool initialize) {
	$loadClass(DomainName$1, name, initialize, &_DomainName$1_ClassInfo_, clinit$DomainName$1, allocate$DomainName$1);
	return class$;
}

$Class* DomainName$1::class$ = nullptr;

		} // util
	} // security
} // sun