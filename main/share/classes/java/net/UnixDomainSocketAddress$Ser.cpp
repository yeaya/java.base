#include <java/net/UnixDomainSocketAddress$Ser.h>
#include <java/net/UnixDomainSocketAddress.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnixDomainSocketAddress = ::java::net::UnixDomainSocketAddress;

namespace java {
	namespace net {

void UnixDomainSocketAddress$Ser::init$($String* pathname) {
	$set(this, pathname, pathname);
}

$Object* UnixDomainSocketAddress$Ser::readResolve() {
	return $UnixDomainSocketAddress::of(this->pathname);
}

UnixDomainSocketAddress$Ser::UnixDomainSocketAddress$Ser() {
}

$Class* UnixDomainSocketAddress$Ser::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(UnixDomainSocketAddress$Ser, serialVersionUID)},
		{"pathname", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(UnixDomainSocketAddress$Ser, pathname)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(UnixDomainSocketAddress$Ser, init$, void, $String*)},
		{"readResolve", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(UnixDomainSocketAddress$Ser, readResolve, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.UnixDomainSocketAddress$Ser", "java.net.UnixDomainSocketAddress", "Ser", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.net.UnixDomainSocketAddress$Ser",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.net.UnixDomainSocketAddress"
	};
	$loadClass(UnixDomainSocketAddress$Ser, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnixDomainSocketAddress$Ser);
	});
	return class$;
}

$Class* UnixDomainSocketAddress$Ser::class$ = nullptr;

	} // net
} // java