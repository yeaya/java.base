#include <sun/security/x509/X500Name$1.h>

#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <javax/security/auth/x500/X500Principal.h>
#include <sun/security/x509/X500Name.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Constructor = ::java::lang::reflect::Constructor;
using $Field = ::java::lang::reflect::Field;
using $X500Principal = ::javax::security::auth::x500::X500Principal;
using $X500Name = ::sun::security::x509::X500Name;

namespace sun {
	namespace security {
		namespace x509 {

$MethodInfo _X500Name$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(X500Name$1::*)()>(&X500Name$1::init$))},
	{"run", "()[Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _X500Name$1_EnclosingMethodInfo_ = {
	"sun.security.x509.X500Name",
	nullptr,
	nullptr
};

$InnerClassInfo _X500Name$1_InnerClassesInfo_[] = {
	{"sun.security.x509.X500Name$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _X500Name$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.x509.X500Name$1",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	nullptr,
	_X500Name$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<[Ljava/lang/Object;>;",
	&_X500Name$1_EnclosingMethodInfo_,
	_X500Name$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.x509.X500Name"
};

$Object* allocate$X500Name$1($Class* clazz) {
	return $of($alloc(X500Name$1));
}

void X500Name$1::init$() {
}

$Object* X500Name$1::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$load($X500Principal);
	$Class* pClass = $X500Principal::class$;
	$load($X500Name);
	$var($ClassArray, args, $new($ClassArray, {$X500Name::class$}));
	$var($Constructor, cons, $nc(pClass)->getDeclaredConstructor(args));
	$nc(cons)->setAccessible(true);
	$var($Field, field, pClass->getDeclaredField("thisX500Name"_s));
	$nc(field)->setAccessible(true);
	return $of($new($ObjectArray, {
		$of(cons),
		$of(field)
	}));
}

X500Name$1::X500Name$1() {
}

$Class* X500Name$1::load$($String* name, bool initialize) {
	$loadClass(X500Name$1, name, initialize, &_X500Name$1_ClassInfo_, allocate$X500Name$1);
	return class$;
}

$Class* X500Name$1::class$ = nullptr;

		} // x509
	} // security
} // sun