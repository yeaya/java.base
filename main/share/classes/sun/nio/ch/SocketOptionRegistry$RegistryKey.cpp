#include <sun/nio/ch/SocketOptionRegistry$RegistryKey.h>

#include <java/net/ProtocolFamily.h>
#include <java/net/SocketOption.h>
#include <sun/nio/ch/SocketOptionRegistry.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProtocolFamily = ::java::net::ProtocolFamily;
using $SocketOption = ::java::net::SocketOption;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _SocketOptionRegistry$RegistryKey_FieldInfo_[] = {
	{"name", "Ljava/net/SocketOption;", "Ljava/net/SocketOption<*>;", $PRIVATE | $FINAL, $field(SocketOptionRegistry$RegistryKey, name)},
	{"family", "Ljava/net/ProtocolFamily;", nullptr, $PRIVATE | $FINAL, $field(SocketOptionRegistry$RegistryKey, family)},
	{}
};

$MethodInfo _SocketOptionRegistry$RegistryKey_MethodInfo_[] = {
	{"<init>", "(Ljava/net/SocketOption;Ljava/net/ProtocolFamily;)V", "(Ljava/net/SocketOption<*>;Ljava/net/ProtocolFamily;)V", 0, $method(static_cast<void(SocketOptionRegistry$RegistryKey::*)($SocketOption*,$ProtocolFamily*)>(&SocketOptionRegistry$RegistryKey::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SocketOptionRegistry$RegistryKey_InnerClassesInfo_[] = {
	{"sun.nio.ch.SocketOptionRegistry$RegistryKey", "sun.nio.ch.SocketOptionRegistry", "RegistryKey", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SocketOptionRegistry$RegistryKey_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.SocketOptionRegistry$RegistryKey",
	"java.lang.Object",
	nullptr,
	_SocketOptionRegistry$RegistryKey_FieldInfo_,
	_SocketOptionRegistry$RegistryKey_MethodInfo_,
	nullptr,
	nullptr,
	_SocketOptionRegistry$RegistryKey_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.SocketOptionRegistry"
};

$Object* allocate$SocketOptionRegistry$RegistryKey($Class* clazz) {
	return $of($alloc(SocketOptionRegistry$RegistryKey));
}

void SocketOptionRegistry$RegistryKey::init$($SocketOption* name, $ProtocolFamily* family) {
	$set(this, name, name);
	$set(this, family, family);
}

int32_t SocketOptionRegistry$RegistryKey::hashCode() {
	int32_t var$0 = $nc($of(this->name))->hashCode();
	return var$0 + $nc($of(this->family))->hashCode();
}

bool SocketOptionRegistry$RegistryKey::equals(Object$* ob) {
	if (ob == nullptr) {
		return false;
	}
	if (!($instanceOf(SocketOptionRegistry$RegistryKey, ob))) {
		return false;
	}
	$var(SocketOptionRegistry$RegistryKey, other, $cast(SocketOptionRegistry$RegistryKey, ob));
	if (this->name != $nc(other)->name) {
		return false;
	}
	if (this->family != $nc(other)->family) {
		return false;
	}
	return true;
}

SocketOptionRegistry$RegistryKey::SocketOptionRegistry$RegistryKey() {
}

$Class* SocketOptionRegistry$RegistryKey::load$($String* name, bool initialize) {
	$loadClass(SocketOptionRegistry$RegistryKey, name, initialize, &_SocketOptionRegistry$RegistryKey_ClassInfo_, allocate$SocketOptionRegistry$RegistryKey);
	return class$;
}

$Class* SocketOptionRegistry$RegistryKey::class$ = nullptr;

		} // ch
	} // nio
} // sun