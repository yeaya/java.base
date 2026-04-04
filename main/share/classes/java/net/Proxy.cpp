#include <java/net/Proxy.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/Proxy$Type.h>
#include <java/net/SocketAddress.h>
#include <jcpp.h>

#undef DIRECT
#undef NO_PROXY

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $Proxy$Type = ::java::net::Proxy$Type;
using $SocketAddress = ::java::net::SocketAddress;

namespace java {
	namespace net {

Proxy* Proxy::NO_PROXY = nullptr;

void Proxy::init$() {
	$init($Proxy$Type);
	$set(this, type$, $Proxy$Type::DIRECT);
	$set(this, sa, nullptr);
}

void Proxy::init$($Proxy$Type* type, $SocketAddress* sa) {
	$init($Proxy$Type);
	if ((type == $Proxy$Type::DIRECT) || !($instanceOf($InetSocketAddress, sa))) {
		$throwNew($IllegalArgumentException, $$str({"type "_s, type, " is not compatible with address "_s, sa}));
	}
	$set(this, type$, type);
	$set(this, sa, sa);
}

$Proxy$Type* Proxy::type() {
	return this->type$;
}

$SocketAddress* Proxy::address() {
	return this->sa;
}

$String* Proxy::toString() {
	$useLocalObjectStack();
	$init($Proxy$Type);
	if (type() == $Proxy$Type::DIRECT) {
		return "DIRECT"_s;
	}
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($(type()));
	var$0->append(" @ "_s);
	var$0->append($(address()));
	return $str(var$0);
}

bool Proxy::equals(Object$* obj) {
	$useLocalObjectStack();
	$var(Proxy, p, nullptr);
	bool var$0 = $instanceOf(Proxy, obj);
	if (var$0) {
		$assign(p, $cast(Proxy, obj));
		var$0 = true;
	}
	if (!(var$0)) {
		return false;
	}
	if ($nc(p)->type() == type()) {
		if (address() == nullptr) {
			return (p->address() == nullptr);
		} else {
			return $$nc(address())->equals($(p->address()));
		}
	}
	return false;
}

int32_t Proxy::hashCode() {
	$useLocalObjectStack();
	if (address() == nullptr) {
		return $$nc(type())->hashCode();
	}
	int32_t var$0 = $$nc(type())->hashCode();
	return var$0 + $$nc(address())->hashCode();
}

void Proxy::clinit$($Class* clazz) {
	$assignStatic(Proxy::NO_PROXY, $new(Proxy));
}

Proxy::Proxy() {
}

$Class* Proxy::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"type", "Ljava/net/Proxy$Type;", nullptr, $PRIVATE, $field(Proxy, type$)},
		{"sa", "Ljava/net/SocketAddress;", nullptr, $PRIVATE, $field(Proxy, sa)},
		{"NO_PROXY", "Ljava/net/Proxy;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Proxy, NO_PROXY)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Proxy, init$, void)},
		{"<init>", "(Ljava/net/Proxy$Type;Ljava/net/SocketAddress;)V", nullptr, $PUBLIC, $method(Proxy, init$, void, $Proxy$Type*, $SocketAddress*)},
		{"address", "()Ljava/net/SocketAddress;", nullptr, $PUBLIC, $virtualMethod(Proxy, address, $SocketAddress*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(Proxy, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(Proxy, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Proxy, toString, $String*)},
		{"type", "()Ljava/net/Proxy$Type;", nullptr, $PUBLIC, $virtualMethod(Proxy, type, $Proxy$Type*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.Proxy$Type", "java.net.Proxy", "Type", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.net.Proxy",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.net.Proxy$Type"
	};
	$loadClass(Proxy, name, initialize, &classInfo$$, Proxy::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Proxy);
	});
	return class$;
}

$Class* Proxy::class$ = nullptr;

	} // net
} // java