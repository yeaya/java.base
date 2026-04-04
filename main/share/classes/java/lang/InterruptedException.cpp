#include <java/lang/InterruptedException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

void InterruptedException::init$() {
	$Exception::init$();
}

void InterruptedException::init$($String* s) {
	$Exception::init$(s);
}

InterruptedException::InterruptedException() {
}

InterruptedException::InterruptedException(const InterruptedException& e) : $Exception(e) {
}

void InterruptedException::throw$() {
	throw *this;
}

$Class* InterruptedException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InterruptedException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InterruptedException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InterruptedException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.InterruptedException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InterruptedException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InterruptedException);
	});
	return class$;
}

$Class* InterruptedException::class$ = nullptr;

	} // lang
} // java