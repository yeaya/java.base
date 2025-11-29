#include <java/net/StandardProtocolFamily.h>

#include <java/lang/Enum.h>
#include <jcpp.h>

#undef INET
#undef INET6
#undef UNIX

using $StandardProtocolFamilyArray = $Array<::java::net::StandardProtocolFamily>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace net {

$FieldInfo _StandardProtocolFamily_FieldInfo_[] = {
	{"INET", "Ljava/net/StandardProtocolFamily;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StandardProtocolFamily, INET)},
	{"INET6", "Ljava/net/StandardProtocolFamily;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StandardProtocolFamily, INET6)},
	{"UNIX", "Ljava/net/StandardProtocolFamily;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StandardProtocolFamily, UNIX)},
	{"$VALUES", "[Ljava/net/StandardProtocolFamily;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(StandardProtocolFamily, $VALUES)},
	{}
};

$MethodInfo _StandardProtocolFamily_MethodInfo_[] = {
	{"$values", "()[Ljava/net/StandardProtocolFamily;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$StandardProtocolFamilyArray*(*)()>(&StandardProtocolFamily::$values))},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(StandardProtocolFamily::*)($String*,int32_t)>(&StandardProtocolFamily::init$))},
	{"*name", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Ljava/net/StandardProtocolFamily;", nullptr, $PUBLIC | $STATIC, $method(static_cast<StandardProtocolFamily*(*)($String*)>(&StandardProtocolFamily::valueOf))},
	{"values", "()[Ljava/net/StandardProtocolFamily;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$StandardProtocolFamilyArray*(*)()>(&StandardProtocolFamily::values))},
	{}
};

$ClassInfo _StandardProtocolFamily_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.net.StandardProtocolFamily",
	"java.lang.Enum",
	"java.net.ProtocolFamily",
	_StandardProtocolFamily_FieldInfo_,
	_StandardProtocolFamily_MethodInfo_,
	"Ljava/lang/Enum<Ljava/net/StandardProtocolFamily;>;Ljava/net/ProtocolFamily;"
};

$Object* allocate$StandardProtocolFamily($Class* clazz) {
	return $of($alloc(StandardProtocolFamily));
}

$String* StandardProtocolFamily::name() {
	 return this->$Enum::name();
}

$String* StandardProtocolFamily::toString() {
	 return this->$Enum::toString();
}

bool StandardProtocolFamily::equals(Object$* other) {
	 return this->$Enum::equals(other);
}

int32_t StandardProtocolFamily::hashCode() {
	 return this->$Enum::hashCode();
}

$Object* StandardProtocolFamily::clone() {
	 return this->$Enum::clone();
}

void StandardProtocolFamily::finalize() {
	this->$Enum::finalize();
}

StandardProtocolFamily* StandardProtocolFamily::INET = nullptr;
StandardProtocolFamily* StandardProtocolFamily::INET6 = nullptr;
StandardProtocolFamily* StandardProtocolFamily::UNIX = nullptr;
$StandardProtocolFamilyArray* StandardProtocolFamily::$VALUES = nullptr;

$StandardProtocolFamilyArray* StandardProtocolFamily::$values() {
	$init(StandardProtocolFamily);
	return $new($StandardProtocolFamilyArray, {
		StandardProtocolFamily::INET,
		StandardProtocolFamily::INET6,
		StandardProtocolFamily::UNIX
	});
}

$StandardProtocolFamilyArray* StandardProtocolFamily::values() {
	$init(StandardProtocolFamily);
	return $cast($StandardProtocolFamilyArray, StandardProtocolFamily::$VALUES->clone());
}

StandardProtocolFamily* StandardProtocolFamily::valueOf($String* name) {
	$init(StandardProtocolFamily);
	return $cast(StandardProtocolFamily, $Enum::valueOf(StandardProtocolFamily::class$, name));
}

void StandardProtocolFamily::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$StandardProtocolFamily($Class* class$) {
	$assignStatic(StandardProtocolFamily::INET, $new(StandardProtocolFamily, "INET"_s, 0));
	$assignStatic(StandardProtocolFamily::INET6, $new(StandardProtocolFamily, "INET6"_s, 1));
	$assignStatic(StandardProtocolFamily::UNIX, $new(StandardProtocolFamily, "UNIX"_s, 2));
	$assignStatic(StandardProtocolFamily::$VALUES, StandardProtocolFamily::$values());
}

StandardProtocolFamily::StandardProtocolFamily() {
}

$Class* StandardProtocolFamily::load$($String* name, bool initialize) {
	$loadClass(StandardProtocolFamily, name, initialize, &_StandardProtocolFamily_ClassInfo_, clinit$StandardProtocolFamily, allocate$StandardProtocolFamily);
	return class$;
}

$Class* StandardProtocolFamily::class$ = nullptr;

	} // net
} // java