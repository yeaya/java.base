#include <Exceptions4String$33.h>

#include <Exceptions4String.h>
#include <java/io/IOException.h>
#include <java/io/UnsupportedEncodingException.h>
#include <jcpp.h>

using $Exceptions4String = ::Exceptions4String;
using $IOException = ::java::io::IOException;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _Exceptions4String$33_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Exceptions4String$33::*)()>(&Exceptions4String$33::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Exceptions4String$33_EnclosingMethodInfo_ = {
	"Exceptions4String",
	"getBytes",
	"()V"
};

$InnerClassInfo _Exceptions4String$33_InnerClassesInfo_[] = {
	{"Exceptions4String$33", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4String$33_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4String$33",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4String$33_MethodInfo_,
	nullptr,
	&_Exceptions4String$33_EnclosingMethodInfo_,
	_Exceptions4String$33_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4String"
};

$Object* allocate$Exceptions4String$33($Class* clazz) {
	return $of($alloc(Exceptions4String$33));
}

void Exceptions4String$33::init$() {
}

void Exceptions4String$33::run() {
	try {
		"foo"_s->getBytes(($String*)nullptr);
	} catch ($UnsupportedEncodingException& x) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(x));
	}
}

Exceptions4String$33::Exceptions4String$33() {
}

$Class* Exceptions4String$33::load$($String* name, bool initialize) {
	$loadClass(Exceptions4String$33, name, initialize, &_Exceptions4String$33_ClassInfo_, allocate$Exceptions4String$33);
	return class$;
}

$Class* Exceptions4String$33::class$ = nullptr;