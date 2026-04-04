#include <java/security/InvalidParameterException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace security {

void InvalidParameterException::init$() {
	$IllegalArgumentException::init$();
}

void InvalidParameterException::init$($String* msg) {
	$IllegalArgumentException::init$(msg);
}

InvalidParameterException::InvalidParameterException() {
}

InvalidParameterException::InvalidParameterException(const InvalidParameterException& e) : $IllegalArgumentException(e) {
}

void InvalidParameterException::throw$() {
	throw *this;
}

$Class* InvalidParameterException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidParameterException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InvalidParameterException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InvalidParameterException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.security.InvalidParameterException",
		"java.lang.IllegalArgumentException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InvalidParameterException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InvalidParameterException);
	});
	return class$;
}

$Class* InvalidParameterException::class$ = nullptr;

	} // security
} // java