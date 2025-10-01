#include <sun/net/sdp/SdpProvider$Action.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/net/sdp/SdpProvider.h>
#include <jcpp.h>

#undef BIND
#undef CONNECT

using $SdpProvider$ActionArray = $Array<::sun::net::sdp::SdpProvider$Action>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SdpProvider = ::sun::net::sdp::SdpProvider;

namespace sun {
	namespace net {
		namespace sdp {

$FieldInfo _SdpProvider$Action_FieldInfo_[] = {
	{"BIND", "Lsun/net/sdp/SdpProvider$Action;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SdpProvider$Action, BIND)},
	{"CONNECT", "Lsun/net/sdp/SdpProvider$Action;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SdpProvider$Action, CONNECT)},
	{"$VALUES", "[Lsun/net/sdp/SdpProvider$Action;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(SdpProvider$Action, $VALUES)},
	{}
};

$MethodInfo _SdpProvider$Action_MethodInfo_[] = {
	{"$values", "()[Lsun/net/sdp/SdpProvider$Action;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$SdpProvider$ActionArray*(*)()>(&SdpProvider$Action::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(SdpProvider$Action::*)($String*,int32_t)>(&SdpProvider$Action::init$))},
	{"valueOf", "(Ljava/lang/String;)Lsun/net/sdp/SdpProvider$Action;", nullptr, $PUBLIC | $STATIC, $method(static_cast<SdpProvider$Action*(*)($String*)>(&SdpProvider$Action::valueOf))},
	{"values", "()[Lsun/net/sdp/SdpProvider$Action;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SdpProvider$ActionArray*(*)()>(&SdpProvider$Action::values))},
	{}
};

$InnerClassInfo _SdpProvider$Action_InnerClassesInfo_[] = {
	{"sun.net.sdp.SdpProvider$Action", "sun.net.sdp.SdpProvider", "Action", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _SdpProvider$Action_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.net.sdp.SdpProvider$Action",
	"java.lang.Enum",
	nullptr,
	_SdpProvider$Action_FieldInfo_,
	_SdpProvider$Action_MethodInfo_,
	"Ljava/lang/Enum<Lsun/net/sdp/SdpProvider$Action;>;",
	nullptr,
	_SdpProvider$Action_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.sdp.SdpProvider"
};

$Object* allocate$SdpProvider$Action($Class* clazz) {
	return $of($alloc(SdpProvider$Action));
}

SdpProvider$Action* SdpProvider$Action::BIND = nullptr;
SdpProvider$Action* SdpProvider$Action::CONNECT = nullptr;
$SdpProvider$ActionArray* SdpProvider$Action::$VALUES = nullptr;

$SdpProvider$ActionArray* SdpProvider$Action::$values() {
	$init(SdpProvider$Action);
	return $new($SdpProvider$ActionArray, {
		SdpProvider$Action::BIND,
		SdpProvider$Action::CONNECT
	});
}

$SdpProvider$ActionArray* SdpProvider$Action::values() {
	$init(SdpProvider$Action);
	return $cast($SdpProvider$ActionArray, SdpProvider$Action::$VALUES->clone());
}

SdpProvider$Action* SdpProvider$Action::valueOf($String* name) {
	$init(SdpProvider$Action);
	return $cast(SdpProvider$Action, $Enum::valueOf(SdpProvider$Action::class$, name));
}

void SdpProvider$Action::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$SdpProvider$Action($Class* class$) {
	$assignStatic(SdpProvider$Action::BIND, $new(SdpProvider$Action, "BIND"_s, 0));
	$assignStatic(SdpProvider$Action::CONNECT, $new(SdpProvider$Action, "CONNECT"_s, 1));
	$assignStatic(SdpProvider$Action::$VALUES, SdpProvider$Action::$values());
}

SdpProvider$Action::SdpProvider$Action() {
}

$Class* SdpProvider$Action::load$($String* name, bool initialize) {
	$loadClass(SdpProvider$Action, name, initialize, &_SdpProvider$Action_ClassInfo_, clinit$SdpProvider$Action, allocate$SdpProvider$Action);
	return class$;
}

$Class* SdpProvider$Action::class$ = nullptr;

		} // sdp
	} // net
} // sun