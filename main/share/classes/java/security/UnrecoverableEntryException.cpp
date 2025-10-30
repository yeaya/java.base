#include <java/security/UnrecoverableEntryException.h>

#include <java/security/GeneralSecurityException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;

namespace java {
	namespace security {

$FieldInfo _UnrecoverableEntryException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnrecoverableEntryException, serialVersionUID)},
	{}
};

$MethodInfo _UnrecoverableEntryException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UnrecoverableEntryException::*)()>(&UnrecoverableEntryException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(UnrecoverableEntryException::*)($String*)>(&UnrecoverableEntryException::init$))},
	{}
};

$ClassInfo _UnrecoverableEntryException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.UnrecoverableEntryException",
	"java.security.GeneralSecurityException",
	nullptr,
	_UnrecoverableEntryException_FieldInfo_,
	_UnrecoverableEntryException_MethodInfo_
};

$Object* allocate$UnrecoverableEntryException($Class* clazz) {
	return $of($alloc(UnrecoverableEntryException));
}

void UnrecoverableEntryException::init$() {
	$GeneralSecurityException::init$();
}

void UnrecoverableEntryException::init$($String* msg) {
	$GeneralSecurityException::init$(msg);
}

UnrecoverableEntryException::UnrecoverableEntryException() {
}

UnrecoverableEntryException::UnrecoverableEntryException(const UnrecoverableEntryException& e) : $GeneralSecurityException(e) {
}

void UnrecoverableEntryException::throw$() {
	throw *this;
}

$Class* UnrecoverableEntryException::load$($String* name, bool initialize) {
	$loadClass(UnrecoverableEntryException, name, initialize, &_UnrecoverableEntryException_ClassInfo_, allocate$UnrecoverableEntryException);
	return class$;
}

$Class* UnrecoverableEntryException::class$ = nullptr;

	} // security
} // java