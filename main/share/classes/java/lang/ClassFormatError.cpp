#include <java/lang/ClassFormatError.h>
#include <java/lang/LinkageError.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $LinkageError = ::java::lang::LinkageError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

void ClassFormatError::init$() {
	$LinkageError::init$();
}

void ClassFormatError::init$($String* s) {
	$LinkageError::init$(s);
}

ClassFormatError::ClassFormatError() {
}

ClassFormatError::ClassFormatError(const ClassFormatError& e) : $LinkageError(e) {
}

void ClassFormatError::throw$() {
	throw *this;
}

$Class* ClassFormatError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ClassFormatError, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ClassFormatError, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ClassFormatError, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.ClassFormatError",
		"java.lang.LinkageError",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ClassFormatError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassFormatError);
	});
	return class$;
}

$Class* ClassFormatError::class$ = nullptr;

	} // lang
} // java