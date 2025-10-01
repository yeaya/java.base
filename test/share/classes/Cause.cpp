#include <Cause.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Cause_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Cause::*)()>(&Cause::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Cause::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _Cause_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Cause",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Cause_MethodInfo_
};

$Object* allocate$Cause($Class* clazz) {
	return $of($alloc(Cause));
}

void Cause::init$() {
}

void Cause::main($StringArray* args) {
	$var($Exception, e, $new($Exception));
	$var($AssertionError, ae, $new($AssertionError, $of(e)));
	if (!$equals(ae->getCause(), e)) {
		$throwNew($Exception, "Cause not set."_s);
	}
	$assign(ae, $new($AssertionError, $of("gosh it\'s late"_s)));
	if (ae->getCause() != nullptr) {
		$throwNew($Exception, $$str({"Cause set erroneously: "_s, $(ae->getCause())}));
	}
}

Cause::Cause() {
}

$Class* Cause::load$($String* name, bool initialize) {
	$loadClass(Cause, name, initialize, &_Cause_ClassInfo_, allocate$Cause);
	return class$;
}

$Class* Cause::class$ = nullptr;