#include <sun/security/util/PendingException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace sun {
	namespace security {
		namespace util {

void PendingException::init$() {
	$RuntimeException::init$();
}

void PendingException::init$($String* msg) {
	$RuntimeException::init$(msg);
}

PendingException::PendingException() {
}

PendingException::PendingException(const PendingException& e) : $RuntimeException(e) {
}

void PendingException::throw$() {
	throw *this;
}

$Class* PendingException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PendingException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PendingException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(PendingException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.util.PendingException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PendingException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PendingException);
	});
	return class$;
}

$Class* PendingException::class$ = nullptr;

		} // util
	} // security
} // sun