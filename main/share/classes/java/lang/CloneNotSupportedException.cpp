#include <java/lang/CloneNotSupportedException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

void CloneNotSupportedException::init$() {
	$Exception::init$();
}

void CloneNotSupportedException::init$($String* s) {
	$Exception::init$(s);
}

CloneNotSupportedException::CloneNotSupportedException() {
}

CloneNotSupportedException::CloneNotSupportedException(const CloneNotSupportedException& e) : $Exception(e) {
}

void CloneNotSupportedException::throw$() {
	throw *this;
}

$Class* CloneNotSupportedException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CloneNotSupportedException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CloneNotSupportedException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(CloneNotSupportedException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.CloneNotSupportedException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CloneNotSupportedException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CloneNotSupportedException);
	});
	return class$;
}

$Class* CloneNotSupportedException::class$ = nullptr;

	} // lang
} // java