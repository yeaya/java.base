#include <java/lang/Exception.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Exception::*)()>(&Exception::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Exception::*)($String*)>(&Exception::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(Exception::*)($String*,$Throwable*)>(&Exception::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(Exception::*)($Throwable*)>(&Exception::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;ZZ)V", nullptr, $PROTECTED, $method(static_cast<void(Exception::*)($String*,$Throwable*,bool,bool)>(&Exception::init$))},
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

Exception::Exception(const Exception& e) {
}

Exception Exception::wrapper$() {
	$pendingException(this);
	return *this;
}

void Exception::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* Exception::load$($String* name, bool initialize) {
	$loadClass(Exception, name, initialize, &_Exception_ClassInfo_, allocate$Exception);
	return class$;
}

$Class* Exception::class$ = nullptr;

	} // lang
} // java