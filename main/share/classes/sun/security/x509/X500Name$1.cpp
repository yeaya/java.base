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

void X500Name$1::init$() {
}

$Object* X500Name$1::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$load($X500Principal);
	$Class* pClass = $X500Principal::class$;
	$load($X500Name);
	$var($ClassArray, args, $new($ClassArray, {$X500Name::class$}));
	$var($Constructor, cons, pClass->getDeclaredConstructor(args));
	$nc(cons)->setAccessible(true);
	$var($Field, field, pClass->getDeclaredField("thisX500Name"_s));
	$nc(field)->setAccessible(true);
	return $new($ObjectArray, {
		cons,
		field
	});
}

X500Name$1::X500Name$1() {
}

$Class* X500Name$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(X500Name$1, init$, void)},
		{"run", "()[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(X500Name$1, run, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.x509.X500Name",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.x509.X500Name$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.x509.X500Name$1",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<[Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.x509.X500Name"
	};
	$loadClass(X500Name$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(X500Name$1);
	});
	return class$;
}

$Class* X500Name$1::class$ = nullptr;

		} // x509
	} // security
} // sun