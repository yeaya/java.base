#include <java/lang/module/FindException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace lang {
		namespace module {

$FieldInfo _FindException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FindException, serialVersionUID)},
	{}
};

$MethodInfo _FindException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FindException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(FindException, init$, void, $String*)},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(FindException, init$, void, $Throwable*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(FindException, init$, void, $String*, $Throwable*)},
	{}
};

$ClassInfo _FindException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.module.FindException",
	"java.lang.RuntimeException",
	nullptr,
	_FindException_FieldInfo_,
	_FindException_MethodInfo_
};

$Object* allocate$FindException($Class* clazz) {
	return $of($alloc(FindException));
}

void FindException::init$() {
	$RuntimeException::init$();
}

void FindException::init$($String* msg) {
	$RuntimeException::init$(msg);
}

void FindException::init$($Throwable* cause) {
	$RuntimeException::init$(cause);
}

void FindException::init$($String* msg, $Throwable* cause) {
	$RuntimeException::init$(msg, cause);
}

FindException::FindException() {
}

FindException::FindException(const FindException& e) : $RuntimeException(e) {
}

void FindException::throw$() {
	throw *this;
}

$Class* FindException::load$($String* name, bool initialize) {
	$loadClass(FindException, name, initialize, &_FindException_ClassInfo_, allocate$FindException);
	return class$;
}

$Class* FindException::class$ = nullptr;

		} // module
	} // lang
} // java