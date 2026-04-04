#include <java/lang/UnsatisfiedLinkError.h>
#include <java/lang/LinkageError.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $LinkageError = ::java::lang::LinkageError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

void UnsatisfiedLinkError::init$() {
	$LinkageError::init$();
}

void UnsatisfiedLinkError::init$($String* s) {
	$LinkageError::init$(s);
}

UnsatisfiedLinkError::UnsatisfiedLinkError() {
}

UnsatisfiedLinkError::UnsatisfiedLinkError(const UnsatisfiedLinkError& e) : $LinkageError(e) {
}

void UnsatisfiedLinkError::throw$() {
	throw *this;
}

$Class* UnsatisfiedLinkError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnsatisfiedLinkError, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(UnsatisfiedLinkError, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(UnsatisfiedLinkError, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.UnsatisfiedLinkError",
		"java.lang.LinkageError",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UnsatisfiedLinkError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnsatisfiedLinkError);
	});
	return class$;
}

$Class* UnsatisfiedLinkError::class$ = nullptr;

	} // lang
} // java