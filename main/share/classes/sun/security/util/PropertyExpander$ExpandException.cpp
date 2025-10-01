#include <sun/security/util/PropertyExpander$ExpandException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/GeneralSecurityException.h>
#include <sun/security/util/PropertyExpander.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $PropertyExpander = ::sun::security::util::PropertyExpander;

namespace sun {
	namespace security {
		namespace util {

$FieldInfo _PropertyExpander$ExpandException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PropertyExpander$ExpandException, serialVersionUID)},
	{}
};

$MethodInfo _PropertyExpander$ExpandException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(PropertyExpander$ExpandException::*)($String*)>(&PropertyExpander$ExpandException::init$))},
	{}
};

$InnerClassInfo _PropertyExpander$ExpandException_InnerClassesInfo_[] = {
	{"sun.security.util.PropertyExpander$ExpandException", "sun.security.util.PropertyExpander", "ExpandException", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _PropertyExpander$ExpandException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.PropertyExpander$ExpandException",
	"java.security.GeneralSecurityException",
	nullptr,
	_PropertyExpander$ExpandException_FieldInfo_,
	_PropertyExpander$ExpandException_MethodInfo_,
	nullptr,
	nullptr,
	_PropertyExpander$ExpandException_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.PropertyExpander"
};

$Object* allocate$PropertyExpander$ExpandException($Class* clazz) {
	return $of($alloc(PropertyExpander$ExpandException));
}

void PropertyExpander$ExpandException::init$($String* msg) {
	$GeneralSecurityException::init$(msg);
}

PropertyExpander$ExpandException::PropertyExpander$ExpandException() {
}

PropertyExpander$ExpandException::PropertyExpander$ExpandException(const PropertyExpander$ExpandException& e) {
}

PropertyExpander$ExpandException PropertyExpander$ExpandException::wrapper$() {
	$pendingException(this);
	return *this;
}

void PropertyExpander$ExpandException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* PropertyExpander$ExpandException::load$($String* name, bool initialize) {
	$loadClass(PropertyExpander$ExpandException, name, initialize, &_PropertyExpander$ExpandException_ClassInfo_, allocate$PropertyExpander$ExpandException);
	return class$;
}

$Class* PropertyExpander$ExpandException::class$ = nullptr;

		} // util
	} // security
} // sun