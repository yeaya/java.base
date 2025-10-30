#include <java/net/UnixDomainSocketAddress$Ser.h>

#include <java/net/UnixDomainSocketAddress.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnixDomainSocketAddress = ::java::net::UnixDomainSocketAddress;

namespace java {
	namespace net {

$FieldInfo _UnixDomainSocketAddress$Ser_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(UnixDomainSocketAddress$Ser, serialVersionUID)},
	{"pathname", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(UnixDomainSocketAddress$Ser, pathname)},
	{}
};

$MethodInfo _UnixDomainSocketAddress$Ser_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(UnixDomainSocketAddress$Ser::*)($String*)>(&UnixDomainSocketAddress$Ser::init$))},
	{"readResolve", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(UnixDomainSocketAddress$Ser::*)()>(&UnixDomainSocketAddress$Ser::readResolve))},
	{}
};

$InnerClassInfo _UnixDomainSocketAddress$Ser_InnerClassesInfo_[] = {
	{"java.net.UnixDomainSocketAddress$Ser", "java.net.UnixDomainSocketAddress", "Ser", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _UnixDomainSocketAddress$Ser_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.net.UnixDomainSocketAddress$Ser",
	"java.lang.Object",
	"java.io.Serializable",
	_UnixDomainSocketAddress$Ser_FieldInfo_,
	_UnixDomainSocketAddress$Ser_MethodInfo_,
	nullptr,
	nullptr,
	_UnixDomainSocketAddress$Ser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.UnixDomainSocketAddress"
};

$Object* allocate$UnixDomainSocketAddress$Ser($Class* clazz) {
	return $of($alloc(UnixDomainSocketAddress$Ser));
}

void UnixDomainSocketAddress$Ser::init$($String* pathname) {
	$set(this, pathname, pathname);
}

$Object* UnixDomainSocketAddress$Ser::readResolve() {
	return $of($UnixDomainSocketAddress::of(this->pathname));
}

UnixDomainSocketAddress$Ser::UnixDomainSocketAddress$Ser() {
}

$Class* UnixDomainSocketAddress$Ser::load$($String* name, bool initialize) {
	$loadClass(UnixDomainSocketAddress$Ser, name, initialize, &_UnixDomainSocketAddress$Ser_ClassInfo_, allocate$UnixDomainSocketAddress$Ser);
	return class$;
}

$Class* UnixDomainSocketAddress$Ser::class$ = nullptr;

	} // net
} // java