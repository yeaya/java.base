#include <java/lang/ClassCastException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace lang {

void ClassCastException::init$() {
	$RuntimeException::init$();
}

void ClassCastException::init$($String* s) {
	$RuntimeException::init$(s);
}

ClassCastException::ClassCastException() {
}

ClassCastException::ClassCastException(const ClassCastException& e) : $RuntimeException(e) {
}

void ClassCastException::throw$() {
	throw *this;
}

$Class* ClassCastException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ClassCastException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ClassCastException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ClassCastException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.ClassCastException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ClassCastException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassCastException);
	});
	return class$;
}

$Class* ClassCastException::class$ = nullptr;

	} // lang
} // java