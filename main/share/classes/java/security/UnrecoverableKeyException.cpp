#include <java/security/UnrecoverableKeyException.h>
#include <java/security/UnrecoverableEntryException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnrecoverableEntryException = ::java::security::UnrecoverableEntryException;

namespace java {
	namespace security {

void UnrecoverableKeyException::init$() {
	$UnrecoverableEntryException::init$();
}

void UnrecoverableKeyException::init$($String* msg) {
	$UnrecoverableEntryException::init$(msg);
}

UnrecoverableKeyException::UnrecoverableKeyException() {
}

UnrecoverableKeyException::UnrecoverableKeyException(const UnrecoverableKeyException& e) : $UnrecoverableEntryException(e) {
}

void UnrecoverableKeyException::throw$() {
	throw *this;
}

$Class* UnrecoverableKeyException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnrecoverableKeyException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(UnrecoverableKeyException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(UnrecoverableKeyException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.security.UnrecoverableKeyException",
		"java.security.UnrecoverableEntryException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UnrecoverableKeyException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnrecoverableKeyException);
	});
	return class$;
}

$Class* UnrecoverableKeyException::class$ = nullptr;

	} // security
} // java