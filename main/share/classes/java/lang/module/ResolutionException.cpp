#include <java/lang/module/ResolutionException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace lang {
		namespace module {

$FieldInfo _ResolutionException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ResolutionException, serialVersionUID)},
	{}
};

$MethodInfo _ResolutionException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ResolutionException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ResolutionException, init$, void, $String*)},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(ResolutionException, init$, void, $Throwable*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(ResolutionException, init$, void, $String*, $Throwable*)},
	{}
};

$ClassInfo _ResolutionException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.module.ResolutionException",
	"java.lang.RuntimeException",
	nullptr,
	_ResolutionException_FieldInfo_,
	_ResolutionException_MethodInfo_
};

$Object* allocate$ResolutionException($Class* clazz) {
	return $of($alloc(ResolutionException));
}

void ResolutionException::init$() {
	$RuntimeException::init$();
}

void ResolutionException::init$($String* msg) {
	$RuntimeException::init$(msg);
}

void ResolutionException::init$($Throwable* cause) {
	$RuntimeException::init$(cause);
}

void ResolutionException::init$($String* msg, $Throwable* cause) {
	$RuntimeException::init$(msg, cause);
}

ResolutionException::ResolutionException() {
}

ResolutionException::ResolutionException(const ResolutionException& e) : $RuntimeException(e) {
}

void ResolutionException::throw$() {
	throw *this;
}

$Class* ResolutionException::load$($String* name, bool initialize) {
	$loadClass(ResolutionException, name, initialize, &_ResolutionException_ClassInfo_, allocate$ResolutionException);
	return class$;
}

$Class* ResolutionException::class$ = nullptr;

		} // module
	} // lang
} // java