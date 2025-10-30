#include <java/util/ConcurrentModificationException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace util {

$FieldInfo _ConcurrentModificationException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ConcurrentModificationException, serialVersionUID)},
	{}
};

$MethodInfo _ConcurrentModificationException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ConcurrentModificationException::*)()>(&ConcurrentModificationException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ConcurrentModificationException::*)($String*)>(&ConcurrentModificationException::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(ConcurrentModificationException::*)($Throwable*)>(&ConcurrentModificationException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(ConcurrentModificationException::*)($String*,$Throwable*)>(&ConcurrentModificationException::init$))},
	{}
};

$ClassInfo _ConcurrentModificationException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.ConcurrentModificationException",
	"java.lang.RuntimeException",
	nullptr,
	_ConcurrentModificationException_FieldInfo_,
	_ConcurrentModificationException_MethodInfo_
};

$Object* allocate$ConcurrentModificationException($Class* clazz) {
	return $of($alloc(ConcurrentModificationException));
}

void ConcurrentModificationException::init$() {
	$RuntimeException::init$();
}

void ConcurrentModificationException::init$($String* message) {
	$RuntimeException::init$(message);
}

void ConcurrentModificationException::init$($Throwable* cause) {
	$RuntimeException::init$(cause);
}

void ConcurrentModificationException::init$($String* message, $Throwable* cause) {
	$RuntimeException::init$(message, cause);
}

ConcurrentModificationException::ConcurrentModificationException() {
}

ConcurrentModificationException::ConcurrentModificationException(const ConcurrentModificationException& e) : $RuntimeException(e) {
}

void ConcurrentModificationException::throw$() {
	throw *this;
}

$Class* ConcurrentModificationException::load$($String* name, bool initialize) {
	$loadClass(ConcurrentModificationException, name, initialize, &_ConcurrentModificationException_ClassInfo_, allocate$ConcurrentModificationException);
	return class$;
}

$Class* ConcurrentModificationException::class$ = nullptr;

	} // util
} // java