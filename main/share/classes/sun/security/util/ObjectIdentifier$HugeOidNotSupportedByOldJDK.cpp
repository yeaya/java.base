#include <sun/security/util/ObjectIdentifier$HugeOidNotSupportedByOldJDK.h>

#include <sun/security/util/ObjectIdentifier.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace util {

$FieldInfo _ObjectIdentifier$HugeOidNotSupportedByOldJDK_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ObjectIdentifier$HugeOidNotSupportedByOldJDK, serialVersionUID)},
	{"theOne", "Lsun/security/util/ObjectIdentifier$HugeOidNotSupportedByOldJDK;", nullptr, $STATIC, $staticField(ObjectIdentifier$HugeOidNotSupportedByOldJDK, theOne)},
	{}
};

$MethodInfo _ObjectIdentifier$HugeOidNotSupportedByOldJDK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ObjectIdentifier$HugeOidNotSupportedByOldJDK::*)()>(&ObjectIdentifier$HugeOidNotSupportedByOldJDK::init$))},
	{}
};

$InnerClassInfo _ObjectIdentifier$HugeOidNotSupportedByOldJDK_InnerClassesInfo_[] = {
	{"sun.security.util.ObjectIdentifier$HugeOidNotSupportedByOldJDK", "sun.security.util.ObjectIdentifier", "HugeOidNotSupportedByOldJDK", $STATIC},
	{}
};

$ClassInfo _ObjectIdentifier$HugeOidNotSupportedByOldJDK_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.util.ObjectIdentifier$HugeOidNotSupportedByOldJDK",
	"java.lang.Object",
	"java.io.Serializable",
	_ObjectIdentifier$HugeOidNotSupportedByOldJDK_FieldInfo_,
	_ObjectIdentifier$HugeOidNotSupportedByOldJDK_MethodInfo_,
	nullptr,
	nullptr,
	_ObjectIdentifier$HugeOidNotSupportedByOldJDK_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.ObjectIdentifier"
};

$Object* allocate$ObjectIdentifier$HugeOidNotSupportedByOldJDK($Class* clazz) {
	return $of($alloc(ObjectIdentifier$HugeOidNotSupportedByOldJDK));
}

ObjectIdentifier$HugeOidNotSupportedByOldJDK* ObjectIdentifier$HugeOidNotSupportedByOldJDK::theOne = nullptr;

void ObjectIdentifier$HugeOidNotSupportedByOldJDK::init$() {
}

void clinit$ObjectIdentifier$HugeOidNotSupportedByOldJDK($Class* class$) {
	$assignStatic(ObjectIdentifier$HugeOidNotSupportedByOldJDK::theOne, $new(ObjectIdentifier$HugeOidNotSupportedByOldJDK));
}

ObjectIdentifier$HugeOidNotSupportedByOldJDK::ObjectIdentifier$HugeOidNotSupportedByOldJDK() {
}

$Class* ObjectIdentifier$HugeOidNotSupportedByOldJDK::load$($String* name, bool initialize) {
	$loadClass(ObjectIdentifier$HugeOidNotSupportedByOldJDK, name, initialize, &_ObjectIdentifier$HugeOidNotSupportedByOldJDK_ClassInfo_, clinit$ObjectIdentifier$HugeOidNotSupportedByOldJDK, allocate$ObjectIdentifier$HugeOidNotSupportedByOldJDK);
	return class$;
}

$Class* ObjectIdentifier$HugeOidNotSupportedByOldJDK::class$ = nullptr;

		} // util
	} // security
} // sun