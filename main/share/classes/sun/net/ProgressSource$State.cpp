#include <sun/net/ProgressSource$State.h>

#include <java/lang/Enum.h>
#include <sun/net/ProgressSource.h>
#include <jcpp.h>

#undef CONNECTED
#undef DELETE
#undef NEW
#undef UPDATE

using $ProgressSource$StateArray = $Array<::sun::net::ProgressSource$State>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProgressSource = ::sun::net::ProgressSource;

namespace sun {
	namespace net {

$FieldInfo _ProgressSource$State_FieldInfo_[] = {
	{"NEW", "Lsun/net/ProgressSource$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ProgressSource$State, NEW)},
	{"CONNECTED", "Lsun/net/ProgressSource$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ProgressSource$State, CONNECTED)},
	{"UPDATE", "Lsun/net/ProgressSource$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ProgressSource$State, UPDATE)},
	{"DELETE", "Lsun/net/ProgressSource$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ProgressSource$State, DELETE)},
	{"$VALUES", "[Lsun/net/ProgressSource$State;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(ProgressSource$State, $VALUES)},
	{}
};

$MethodInfo _ProgressSource$State_MethodInfo_[] = {
	{"$values", "()[Lsun/net/ProgressSource$State;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$ProgressSource$StateArray*(*)()>(&ProgressSource$State::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(ProgressSource$State::*)($String*,int32_t)>(&ProgressSource$State::init$))},
	{"valueOf", "(Ljava/lang/String;)Lsun/net/ProgressSource$State;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ProgressSource$State*(*)($String*)>(&ProgressSource$State::valueOf))},
	{"values", "()[Lsun/net/ProgressSource$State;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ProgressSource$StateArray*(*)()>(&ProgressSource$State::values))},
	{}
};

$InnerClassInfo _ProgressSource$State_InnerClassesInfo_[] = {
	{"sun.net.ProgressSource$State", "sun.net.ProgressSource", "State", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _ProgressSource$State_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"sun.net.ProgressSource$State",
	"java.lang.Enum",
	nullptr,
	_ProgressSource$State_FieldInfo_,
	_ProgressSource$State_MethodInfo_,
	"Ljava/lang/Enum<Lsun/net/ProgressSource$State;>;",
	nullptr,
	_ProgressSource$State_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.ProgressSource"
};

$Object* allocate$ProgressSource$State($Class* clazz) {
	return $of($alloc(ProgressSource$State));
}

ProgressSource$State* ProgressSource$State::NEW = nullptr;
ProgressSource$State* ProgressSource$State::CONNECTED = nullptr;
ProgressSource$State* ProgressSource$State::UPDATE = nullptr;
ProgressSource$State* ProgressSource$State::DELETE = nullptr;
$ProgressSource$StateArray* ProgressSource$State::$VALUES = nullptr;

$ProgressSource$StateArray* ProgressSource$State::$values() {
	$init(ProgressSource$State);
	return $new($ProgressSource$StateArray, {
		ProgressSource$State::NEW,
		ProgressSource$State::CONNECTED,
		ProgressSource$State::UPDATE,
		ProgressSource$State::DELETE
	});
}

$ProgressSource$StateArray* ProgressSource$State::values() {
	$init(ProgressSource$State);
	return $cast($ProgressSource$StateArray, ProgressSource$State::$VALUES->clone());
}

ProgressSource$State* ProgressSource$State::valueOf($String* name) {
	$init(ProgressSource$State);
	return $cast(ProgressSource$State, $Enum::valueOf(ProgressSource$State::class$, name));
}

void ProgressSource$State::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$ProgressSource$State($Class* class$) {
	$assignStatic(ProgressSource$State::NEW, $new(ProgressSource$State, "NEW"_s, 0));
	$assignStatic(ProgressSource$State::CONNECTED, $new(ProgressSource$State, "CONNECTED"_s, 1));
	$assignStatic(ProgressSource$State::UPDATE, $new(ProgressSource$State, "UPDATE"_s, 2));
	$assignStatic(ProgressSource$State::DELETE, $new(ProgressSource$State, "DELETE"_s, 3));
	$assignStatic(ProgressSource$State::$VALUES, ProgressSource$State::$values());
}

ProgressSource$State::ProgressSource$State() {
}

$Class* ProgressSource$State::load$($String* name, bool initialize) {
	$loadClass(ProgressSource$State, name, initialize, &_ProgressSource$State_ClassInfo_, clinit$ProgressSource$State, allocate$ProgressSource$State);
	return class$;
}

$Class* ProgressSource$State::class$ = nullptr;

	} // net
} // sun