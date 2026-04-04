#include <sun/security/x509/NetscapeCertTypeExtension$MapEntry.h>
#include <sun/security/x509/NetscapeCertTypeExtension.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace x509 {

void NetscapeCertTypeExtension$MapEntry::init$($String* name, int32_t position) {
	$set(this, mName, name);
	this->mPosition = position;
}

NetscapeCertTypeExtension$MapEntry::NetscapeCertTypeExtension$MapEntry() {
}

$Class* NetscapeCertTypeExtension$MapEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"mName", "Ljava/lang/String;", nullptr, 0, $field(NetscapeCertTypeExtension$MapEntry, mName)},
		{"mPosition", "I", nullptr, 0, $field(NetscapeCertTypeExtension$MapEntry, mPosition)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I)V", nullptr, 0, $method(NetscapeCertTypeExtension$MapEntry, init$, void, $String*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.x509.NetscapeCertTypeExtension$MapEntry", "sun.security.x509.NetscapeCertTypeExtension", "MapEntry", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.x509.NetscapeCertTypeExtension$MapEntry",
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
		"sun.security.x509.NetscapeCertTypeExtension"
	};
	$loadClass(NetscapeCertTypeExtension$MapEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NetscapeCertTypeExtension$MapEntry);
	});
	return class$;
}

$Class* NetscapeCertTypeExtension$MapEntry::class$ = nullptr;

		} // x509
	} // security
} // sun