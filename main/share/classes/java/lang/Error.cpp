#include <java/lang/Error.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$FieldInfo _Error_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(Error, serialVersionUID)},
	{}
};

$MethodInfo _Error_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Error::*)()>(&Error::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Error::*)($String*)>(&Error::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(Error::*)($String*,$Throwable*)>(&Error::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(Error::*)($Throwable*)>(&Error::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;ZZ)V", nullptr, $PROTECTED, $method(static_cast<void(Error::*)($String*,$Throwable*,bool,bool)>(&Error::init$))},
	{}
};

$ClassInfo _Error_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.Error",
	"java.lang.Throwable",
	nullptr,
	_Error_FieldInfo_,
	_Error_MethodInfo_
};

$Object* allocate$Error($Class* clazz) {
	return $of($alloc(Error));
}

void Error::init$() {
	$Throwable::init$();
}

void Error::init$($String* message) {
	$Throwable::init$(message);
}

void Error::init$($String* message, $Throwable* cause) {
	$Throwable::init$(message, cause);
}

void Error::init$($Throwable* cause) {
	$Throwable::init$(cause);
}

void Error::init$($String* message, $Throwable* cause, bool enableSuppression, bool writableStackTrace) {
	$Throwable::init$(message, cause, enableSuppression, writableStackTrace);
}

Error::Error() {
}

Error::Error(const Error& e) : $Throwable(e) {
}

void Error::throw$() {
	throw *this;
}

$Class* Error::load$($String* name, bool initialize) {
	$loadClass(Error, name, initialize, &_Error_ClassInfo_, allocate$Error);
	return class$;
}

$Class* Error::class$ = nullptr;

	} // lang
} // java