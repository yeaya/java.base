#include <java/security/UnrecoverableKeyException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/UnrecoverableEntryException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnrecoverableEntryException = ::java::security::UnrecoverableEntryException;

namespace java {
	namespace security {

$FieldInfo _UnrecoverableKeyException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnrecoverableKeyException, serialVersionUID)},
	{}
};

$MethodInfo _UnrecoverableKeyException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UnrecoverableKeyException::*)()>(&UnrecoverableKeyException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(UnrecoverableKeyException::*)($String*)>(&UnrecoverableKeyException::init$))},
	{}
};

$ClassInfo _UnrecoverableKeyException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.UnrecoverableKeyException",
	"java.security.UnrecoverableEntryException",
	nullptr,
	_UnrecoverableKeyException_FieldInfo_,
	_UnrecoverableKeyException_MethodInfo_
};

$Object* allocate$UnrecoverableKeyException($Class* clazz) {
	return $of($alloc(UnrecoverableKeyException));
}

void UnrecoverableKeyException::init$() {
	$UnrecoverableEntryException::init$();
}

void UnrecoverableKeyException::init$($String* msg) {
	$UnrecoverableEntryException::init$(msg);
}

UnrecoverableKeyException::UnrecoverableKeyException() {
}

UnrecoverableKeyException::UnrecoverableKeyException(const UnrecoverableKeyException& e) {
}

UnrecoverableKeyException UnrecoverableKeyException::wrapper$() {
	$pendingException(this);
	return *this;
}

void UnrecoverableKeyException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* UnrecoverableKeyException::load$($String* name, bool initialize) {
	$loadClass(UnrecoverableKeyException, name, initialize, &_UnrecoverableKeyException_ClassInfo_, allocate$UnrecoverableKeyException);
	return class$;
}

$Class* UnrecoverableKeyException::class$ = nullptr;

	} // security
} // java