#include <StackTraceSerialization$TestThrowable.h>

#include <StackTraceSerialization.h>
#include <jcpp.h>

using $StackTraceSerialization = ::StackTraceSerialization;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _StackTraceSerialization$TestThrowable_MethodInfo_[] = {
	{"<init>", "(ZZ)V", nullptr, $PUBLIC, $method(static_cast<void(StackTraceSerialization$TestThrowable::*)(bool,bool)>(&StackTraceSerialization$TestThrowable::init$))},
	{}
};

$InnerClassInfo _StackTraceSerialization$TestThrowable_InnerClassesInfo_[] = {
	{"StackTraceSerialization$TestThrowable", "StackTraceSerialization", "TestThrowable", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _StackTraceSerialization$TestThrowable_ClassInfo_ = {
	$ACC_SUPER,
	"StackTraceSerialization$TestThrowable",
	"java.lang.Throwable",
	nullptr,
	nullptr,
	_StackTraceSerialization$TestThrowable_MethodInfo_,
	nullptr,
	nullptr,
	_StackTraceSerialization$TestThrowable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"StackTraceSerialization"
};

$Object* allocate$StackTraceSerialization$TestThrowable($Class* clazz) {
	return $of($alloc(StackTraceSerialization$TestThrowable));
}

void StackTraceSerialization$TestThrowable::init$(bool enableSuppression, bool writableStackTrace) {
	$Throwable::init$("the medium"_s, nullptr, enableSuppression, writableStackTrace);
}

StackTraceSerialization$TestThrowable::StackTraceSerialization$TestThrowable() {
}

StackTraceSerialization$TestThrowable::StackTraceSerialization$TestThrowable(const StackTraceSerialization$TestThrowable& e) : $Throwable(e) {
}

void StackTraceSerialization$TestThrowable::throw$() {
	throw *this;
}

$Class* StackTraceSerialization$TestThrowable::load$($String* name, bool initialize) {
	$loadClass(StackTraceSerialization$TestThrowable, name, initialize, &_StackTraceSerialization$TestThrowable_ClassInfo_, allocate$StackTraceSerialization$TestThrowable);
	return class$;
}

$Class* StackTraceSerialization$TestThrowable::class$ = nullptr;