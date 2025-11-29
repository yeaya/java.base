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

$FieldInfo _Proxy_FieldInfo_[] = {
	{"type", "Ljava/net/Proxy$Type;", nullptr, $PRIVATE, $field(Proxy, type$)},
	{"sa", "Ljava/net/SocketAddress;", nullptr, $PRIVATE, $field(Proxy, sa)},
	{"NO_PROXY", "Ljava/net/Proxy;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Proxy, NO_PROXY)},
	{}
};

$MethodInfo _Proxy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Proxy::*)()>(&Proxy::init$))},
	{"<init>", "(Ljava/net/Proxy$Type;Ljava/net/SocketAddress;)V", nullptr, $PUBLIC, $method(static_cast<void(Proxy::*)($Proxy$Type*,$SocketAddress*)>(&Proxy::init$))},
	{"address", "()Ljava/net/SocketAddress;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"type", "()Ljava/net/Proxy$Type;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Proxy_InnerClassesInfo_[] = {
	{"java.net.Proxy$Type", "java.net.Proxy", "Type", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Proxy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.net.Proxy",
	"java.lang.Object",
	nullptr,
	_Proxy_FieldInfo_,
	_Proxy_MethodInfo_,
	nullptr,
	nullptr,
	_Proxy_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.net.Proxy$Type"
};

$Object* allocate$Proxy($Class* clazz) {
	return $of($alloc(Proxy));
}

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
	$useLocalCurrentObjectStackCache();
	$init($Proxy$Type);
	if (type() == $Proxy$Type::DIRECT) {
		return "DIRECT"_s;
	}
	$var($String, var$0, $$str({$(type()), " @ "_s}));
	return $concat(var$0, $(address()));
}

bool Proxy::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
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
			return $nc($of($(address())))->equals($(p->address()));
		}
	}
	return false;
}

int32_t Proxy::hashCode() {
	$useLocalCurrentObjectStackCache();
	if (address() == nullptr) {
		return $nc($(type()))->hashCode();
	}
	int32_t var$0 = $nc($(type()))->hashCode();
	return var$0 + $nc($of($(address())))->hashCode();
}

void clinit$Proxy($Class* class$) {
	$assignStatic(Proxy::NO_PROXY, $new(Proxy));
}

Proxy::Proxy() {
}

$Class* Proxy::load$($String* name, bool initialize) {
	$loadClass(Proxy, name, initialize, &_Proxy_ClassInfo_, clinit$Proxy, allocate$Proxy);
	return class$;
}

$Class* Proxy::class$ = nullptr;

	} // net
} // java