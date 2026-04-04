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

void SocketOptionRegistry$RegistryKey::init$($SocketOption* name, $ProtocolFamily* family) {
	$set(this, name, name);
	$set(this, family, family);
}

int32_t SocketOptionRegistry$RegistryKey::hashCode() {
	int32_t var$0 = $nc(this->name)->hashCode();
	return var$0 + $nc(this->family)->hashCode();
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
	if (this->family != other->family) {
		return false;
	}
	return true;
}

SocketOptionRegistry$RegistryKey::SocketOptionRegistry$RegistryKey() {
}

$Class* SocketOptionRegistry$RegistryKey::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/net/SocketOption;", "Ljava/net/SocketOption<*>;", $PRIVATE | $FINAL, $field(SocketOptionRegistry$RegistryKey, name)},
		{"family", "Ljava/net/ProtocolFamily;", nullptr, $PRIVATE | $FINAL, $field(SocketOptionRegistry$RegistryKey, family)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/SocketOption;Ljava/net/ProtocolFamily;)V", "(Ljava/net/SocketOption<*>;Ljava/net/ProtocolFamily;)V", 0, $method(SocketOptionRegistry$RegistryKey, init$, void, $SocketOption*, $ProtocolFamily*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(SocketOptionRegistry$RegistryKey, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(SocketOptionRegistry$RegistryKey, hashCode, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.SocketOptionRegistry$RegistryKey", "sun.nio.ch.SocketOptionRegistry", "RegistryKey", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.SocketOptionRegistry$RegistryKey",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.ch.SocketOptionRegistry"
	};
	$loadClass(SocketOptionRegistry$RegistryKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SocketOptionRegistry$RegistryKey);
	});
	return class$;
}

$Class* SocketOptionRegistry$RegistryKey::class$ = nullptr;

		} // ch
	} // nio
} // sun