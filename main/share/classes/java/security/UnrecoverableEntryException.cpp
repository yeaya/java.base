#include <java/security/UnrecoverableEntryException.h>
#include <java/security/GeneralSecurityException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;

namespace java {
	namespace security {

void UnrecoverableEntryException::init$() {
	$GeneralSecurityException::init$();
}

void UnrecoverableEntryException::init$($String* msg) {
	$GeneralSecurityException::init$(msg);
}

UnrecoverableEntryException::UnrecoverableEntryException() {
}

UnrecoverableEntryException::UnrecoverableEntryException(const UnrecoverableEntryException& e) : $GeneralSecurityException(e) {
}

void UnrecoverableEntryException::throw$() {
	throw *this;
}

$Class* UnrecoverableEntryException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnrecoverableEntryException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(UnrecoverableEntryException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(UnrecoverableEntryException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.security.UnrecoverableEntryException",
		"java.security.GeneralSecurityException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UnrecoverableEntryException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnrecoverableEntryException);
	});
	return class$;
}

$Class* UnrecoverableEntryException::class$ = nullptr;

	} // security
} // java