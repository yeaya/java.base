#include <java/net/URLPermission$Authority.h>

#include <java/net/HostPortrange.h>
#include <java/net/URLPermission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HostPortrange = ::java::net::HostPortrange;

namespace java {
	namespace net {

$FieldInfo _URLPermission$Authority_FieldInfo_[] = {
	{"p", "Ljava/net/HostPortrange;", nullptr, 0, $field(URLPermission$Authority, p)},
	{}
};

$MethodInfo _URLPermission$Authority_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(URLPermission$Authority, init$, void, $String*, $String*)},
	{"equals", "(Ljava/net/URLPermission$Authority;)Z", nullptr, 0, $virtualMethod(URLPermission$Authority, equals, bool, URLPermission$Authority*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(URLPermission$Authority, hashCode, int32_t)},
	{"implies", "(Ljava/net/URLPermission$Authority;)Z", nullptr, 0, $virtualMethod(URLPermission$Authority, implies, bool, URLPermission$Authority*)},
	{"impliesHostrange", "(Ljava/net/URLPermission$Authority;)Z", nullptr, $PRIVATE, $method(URLPermission$Authority, impliesHostrange, bool, URLPermission$Authority*)},
	{"impliesPortrange", "(Ljava/net/URLPermission$Authority;)Z", nullptr, $PRIVATE, $method(URLPermission$Authority, impliesPortrange, bool, URLPermission$Authority*)},
	{}
};

$InnerClassInfo _URLPermission$Authority_InnerClassesInfo_[] = {
	{"java.net.URLPermission$Authority", "java.net.URLPermission", "Authority", $STATIC},
	{}
};

$ClassInfo _URLPermission$Authority_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.URLPermission$Authority",
	"java.lang.Object",
	nullptr,
	_URLPermission$Authority_FieldInfo_,
	_URLPermission$Authority_MethodInfo_,
	nullptr,
	nullptr,
	_URLPermission$Authority_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.URLPermission"
};

$Object* allocate$URLPermission$Authority($Class* clazz) {
	return $of($alloc(URLPermission$Authority));
}

void URLPermission$Authority::init$($String* scheme, $String* authority) {
	int32_t at = $nc(authority)->indexOf((int32_t)u'@');
	if (at == -1) {
		$set(this, p, $new($HostPortrange, scheme, authority));
	} else {
		$set(this, p, $new($HostPortrange, scheme, $(authority->substring(at + 1))));
	}
}

bool URLPermission$Authority::implies(URLPermission$Authority* other) {
	bool var$0 = impliesHostrange(other);
	return var$0 && impliesPortrange(other);
}

bool URLPermission$Authority::impliesHostrange(URLPermission$Authority* that) {
	$useLocalCurrentObjectStackCache();
	$var($String, thishost, $nc(this->p)->hostname());
	$var($String, thathost, $nc($nc(that)->p)->hostname());
	bool var$0 = $nc(this->p)->wildcard();
	if (var$0 && $nc(thishost)->isEmpty()) {
		return true;
	}
	bool var$1 = $nc(that->p)->wildcard();
	if (var$1 && $nc(thathost)->isEmpty()) {
		return false;
	}
	if ($nc(thishost)->equals(thathost)) {
		return true;
	}
	if ($nc(this->p)->wildcard()) {
		return $nc(thathost)->endsWith(thishost);
	}
	return false;
}

bool URLPermission$Authority::impliesPortrange(URLPermission$Authority* that) {
	$useLocalCurrentObjectStackCache();
	$var($ints, thisrange, $nc(this->p)->portrange());
	$var($ints, thatrange, $nc($nc(that)->p)->portrange());
	if ($nc(thisrange)->get(0) == -1) {
		return true;
	}
	return $nc(thisrange)->get(0) <= $nc(thatrange)->get(0) && thisrange->get(1) >= thatrange->get(1);
}

bool URLPermission$Authority::equals(URLPermission$Authority* that) {
	return $nc(this->p)->equals($nc(that)->p);
}

int32_t URLPermission$Authority::hashCode() {
	return $nc(this->p)->hashCode();
}

URLPermission$Authority::URLPermission$Authority() {
}

$Class* URLPermission$Authority::load$($String* name, bool initialize) {
	$loadClass(URLPermission$Authority, name, initialize, &_URLPermission$Authority_ClassInfo_, allocate$URLPermission$Authority);
	return class$;
}

$Class* URLPermission$Authority::class$ = nullptr;

	} // net
} // java