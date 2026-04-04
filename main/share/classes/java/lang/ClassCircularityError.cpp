#include <java/lang/ClassCircularityError.h>
#include <java/lang/LinkageError.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $LinkageError = ::java::lang::LinkageError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

void ClassCircularityError::init$() {
	$LinkageError::init$();
}

void ClassCircularityError::init$($String* s) {
	$LinkageError::init$(s);
}

ClassCircularityError::ClassCircularityError() {
}

ClassCircularityError::ClassCircularityError(const ClassCircularityError& e) : $LinkageError(e) {
}

void ClassCircularityError::throw$() {
	throw *this;
}

$Class* ClassCircularityError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ClassCircularityError, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ClassCircularityError, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ClassCircularityError, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.ClassCircularityError",
		"java.lang.LinkageError",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ClassCircularityError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassCircularityError);
	});
	return class$;
}

$Class* ClassCircularityError::class$ = nullptr;

	} // lang
} // java