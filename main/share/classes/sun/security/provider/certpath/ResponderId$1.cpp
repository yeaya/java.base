#include <sun/security/provider/certpath/ResponderId$1.h>

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
#include <sun/security/provider/certpath/ResponderId$Type.h>
#include <sun/security/provider/certpath/ResponderId.h>
#include <jcpp.h>

#undef BY_KEY
#undef BY_NAME

using $ResponderId$TypeArray = $Array<::sun::security::provider::certpath::ResponderId$Type>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $ResponderId = ::sun::security::provider::certpath::ResponderId;
using $ResponderId$Type = ::sun::security::provider::certpath::ResponderId$Type;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

$FieldInfo _ResponderId$1_FieldInfo_[] = {
	{"$SwitchMap$sun$security$provider$certpath$ResponderId$Type", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ResponderId$1, $SwitchMap$sun$security$provider$certpath$ResponderId$Type)},
	{}
};

$EnclosingMethodInfo _ResponderId$1_EnclosingMethodInfo_ = {
	"sun.security.provider.certpath.ResponderId",
	nullptr,
	nullptr
};

$InnerClassInfo _ResponderId$1_InnerClassesInfo_[] = {
	{"sun.security.provider.certpath.ResponderId$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _ResponderId$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"sun.security.provider.certpath.ResponderId$1",
	"java.lang.Object",
	nullptr,
	_ResponderId$1_FieldInfo_,
	nullptr,
	nullptr,
	&_ResponderId$1_EnclosingMethodInfo_,
	_ResponderId$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.certpath.ResponderId"
};

$Object* allocate$ResponderId$1($Class* clazz) {
	return $of($alloc(ResponderId$1));
}

$ints* ResponderId$1::$SwitchMap$sun$security$provider$certpath$ResponderId$Type = nullptr;

void clinit$ResponderId$1($Class* class$) {
	$assignStatic(ResponderId$1::$SwitchMap$sun$security$provider$certpath$ResponderId$Type, $new($ints, $($ResponderId$Type::values())->length));
	{
		try {
			$nc(ResponderId$1::$SwitchMap$sun$security$provider$certpath$ResponderId$Type)->set($ResponderId$Type::BY_NAME->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(ResponderId$1::$SwitchMap$sun$security$provider$certpath$ResponderId$Type)->set($ResponderId$Type::BY_KEY->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

ResponderId$1::ResponderId$1() {
}

$Class* ResponderId$1::load$($String* name, bool initialize) {
	$loadClass(ResponderId$1, name, initialize, &_ResponderId$1_ClassInfo_, clinit$ResponderId$1, allocate$ResponderId$1);
	return class$;
}

$Class* ResponderId$1::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun