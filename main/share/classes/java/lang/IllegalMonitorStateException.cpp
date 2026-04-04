#include <java/lang/IllegalMonitorStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace lang {

void IllegalMonitorStateException::init$() {
	$RuntimeException::init$();
}

void IllegalMonitorStateException::init$($String* s) {
	$RuntimeException::init$(s);
}

IllegalMonitorStateException::IllegalMonitorStateException() {
}

IllegalMonitorStateException::IllegalMonitorStateException(const IllegalMonitorStateException& e) : $RuntimeException(e) {
}

void IllegalMonitorStateException::throw$() {
	throw *this;
}

$Class* IllegalMonitorStateException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IllegalMonitorStateException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(IllegalMonitorStateException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(IllegalMonitorStateException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.IllegalMonitorStateException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IllegalMonitorStateException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IllegalMonitorStateException);
	});
	return class$;
}

$Class* IllegalMonitorStateException::class$ = nullptr;

	} // lang
} // java