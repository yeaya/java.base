#include <java/lang/Exception.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$FieldInfo _Exception_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(Exception, serialVersionUID)},
	{}
};

$MethodInfo _Exception_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Exception, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(Exception, init$, void, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(Exception, init$, void, $String*, $Throwable*)},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(Exception, init$, void, $Throwable*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;ZZ)V", nullptr, $PROTECTED, $method(Exception, init$, void, $String*, $Throwable*, bool, bool)},
	{}
};

$ClassInfo _Exception_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.Exception",
	"java.lang.Throwable",
	nullptr,
	_Exception_FieldInfo_,
	_Exception_MethodInfo_
};

$Object* allocate$Exception($Class* clazz) {
	return $of($alloc(Exception));
}

void Exception::init$() {
	$Throwable::init$();
}

void Exception::init$($String* message) {
	$Throwable::init$(message);
}

void Exception::init$($String* message, $Throwable* cause) {
	$Throwable::init$(message, cause);
}

void Exception::init$($Throwable* cause) {
	$Throwable::init$(cause);
}

void Exception::init$($String* message, $Throwable* cause, bool enableSuppression, bool writableStackTrace) {
	$Throwable::init$(message, cause, enableSuppression, writableStackTrace);
}

Exception::Exception() {
}

Exception::Exception(const Exception& e) : $Throwable(e) {
}

void Exception::throw$() {
	throw *this;
}

$Class* Exception::load$($String* name, bool initialize) {
	$loadClass(Exception, name, initialize, &_Exception_ClassInfo_, allocate$Exception);
	return class$;
}

$Class* Exception::class$ = nullptr;

	} // lang
} // java