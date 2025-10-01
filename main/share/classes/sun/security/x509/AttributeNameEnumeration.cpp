#include <sun/security/x509/AttributeNameEnumeration.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Vector.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _AttributeNameEnumeration_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AttributeNameEnumeration, serialVersionUID)},
	{}
};

$MethodInfo _AttributeNameEnumeration_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AttributeNameEnumeration::*)()>(&AttributeNameEnumeration::init$))},
	{}
};

$ClassInfo _AttributeNameEnumeration_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.AttributeNameEnumeration",
	"java.util.Vector",
	nullptr,
	_AttributeNameEnumeration_FieldInfo_,
	_AttributeNameEnumeration_MethodInfo_,
	"Ljava/util/Vector<Ljava/lang/String;>;"
};

$Object* allocate$AttributeNameEnumeration($Class* clazz) {
	return $of($alloc(AttributeNameEnumeration));
}

void AttributeNameEnumeration::init$() {
	$Vector::init$(4, 2);
}

AttributeNameEnumeration::AttributeNameEnumeration() {
}

$Class* AttributeNameEnumeration::load$($String* name, bool initialize) {
	$loadClass(AttributeNameEnumeration, name, initialize, &_AttributeNameEnumeration_ClassInfo_, allocate$AttributeNameEnumeration);
	return class$;
}

$Class* AttributeNameEnumeration::class$ = nullptr;

		} // x509
	} // security
} // sun