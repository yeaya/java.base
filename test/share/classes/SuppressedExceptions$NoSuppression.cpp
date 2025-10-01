#include <SuppressedExceptions$NoSuppression.h>

#include <SuppressedExceptions.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $SuppressedExceptions = ::SuppressedExceptions;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _SuppressedExceptions$NoSuppression_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(SuppressedExceptions$NoSuppression::*)(bool)>(&SuppressedExceptions$NoSuppression::init$))},
	{}
};

$InnerClassInfo _SuppressedExceptions$NoSuppression_InnerClassesInfo_[] = {
	{"SuppressedExceptions$NoSuppression", "SuppressedExceptions", "NoSuppression", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SuppressedExceptions$NoSuppression_ClassInfo_ = {
	$ACC_SUPER,
	"SuppressedExceptions$NoSuppression",
	"java.lang.Throwable",
	nullptr,
	nullptr,
	_SuppressedExceptions$NoSuppression_MethodInfo_,
	nullptr,
	nullptr,
	_SuppressedExceptions$NoSuppression_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SuppressedExceptions"
};

$Object* allocate$SuppressedExceptions$NoSuppression($Class* clazz) {
	return $of($alloc(SuppressedExceptions$NoSuppression));
}

void SuppressedExceptions$NoSuppression::init$(bool enableSuppression) {
	$Throwable::init$("The medium."_s, nullptr, enableSuppression, true);
}

SuppressedExceptions$NoSuppression::SuppressedExceptions$NoSuppression() {
}

SuppressedExceptions$NoSuppression::SuppressedExceptions$NoSuppression(const SuppressedExceptions$NoSuppression& e) {
}

SuppressedExceptions$NoSuppression SuppressedExceptions$NoSuppression::wrapper$() {
	$pendingException(this);
	return *this;
}

void SuppressedExceptions$NoSuppression::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* SuppressedExceptions$NoSuppression::load$($String* name, bool initialize) {
	$loadClass(SuppressedExceptions$NoSuppression, name, initialize, &_SuppressedExceptions$NoSuppression_ClassInfo_, allocate$SuppressedExceptions$NoSuppression);
	return class$;
}

$Class* SuppressedExceptions$NoSuppression::class$ = nullptr;