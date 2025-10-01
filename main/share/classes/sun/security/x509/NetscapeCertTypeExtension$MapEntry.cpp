#include <sun/security/x509/NetscapeCertTypeExtension$MapEntry.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/x509/NetscapeCertTypeExtension.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NetscapeCertTypeExtension = ::sun::security::x509::NetscapeCertTypeExtension;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _NetscapeCertTypeExtension$MapEntry_FieldInfo_[] = {
	{"mName", "Ljava/lang/String;", nullptr, 0, $field(NetscapeCertTypeExtension$MapEntry, mName)},
	{"mPosition", "I", nullptr, 0, $field(NetscapeCertTypeExtension$MapEntry, mPosition)},
	{}
};

$MethodInfo _NetscapeCertTypeExtension$MapEntry_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, 0, $method(static_cast<void(NetscapeCertTypeExtension$MapEntry::*)($String*,int32_t)>(&NetscapeCertTypeExtension$MapEntry::init$))},
	{}
};

$InnerClassInfo _NetscapeCertTypeExtension$MapEntry_InnerClassesInfo_[] = {
	{"sun.security.x509.NetscapeCertTypeExtension$MapEntry", "sun.security.x509.NetscapeCertTypeExtension", "MapEntry", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _NetscapeCertTypeExtension$MapEntry_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.x509.NetscapeCertTypeExtension$MapEntry",
	"java.lang.Object",
	nullptr,
	_NetscapeCertTypeExtension$MapEntry_FieldInfo_,
	_NetscapeCertTypeExtension$MapEntry_MethodInfo_,
	nullptr,
	nullptr,
	_NetscapeCertTypeExtension$MapEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.x509.NetscapeCertTypeExtension"
};

$Object* allocate$NetscapeCertTypeExtension$MapEntry($Class* clazz) {
	return $of($alloc(NetscapeCertTypeExtension$MapEntry));
}

void NetscapeCertTypeExtension$MapEntry::init$($String* name, int32_t position) {
	$set(this, mName, name);
	this->mPosition = position;
}

NetscapeCertTypeExtension$MapEntry::NetscapeCertTypeExtension$MapEntry() {
}

$Class* NetscapeCertTypeExtension$MapEntry::load$($String* name, bool initialize) {
	$loadClass(NetscapeCertTypeExtension$MapEntry, name, initialize, &_NetscapeCertTypeExtension$MapEntry_ClassInfo_, allocate$NetscapeCertTypeExtension$MapEntry);
	return class$;
}

$Class* NetscapeCertTypeExtension$MapEntry::class$ = nullptr;

		} // x509
	} // security
} // sun