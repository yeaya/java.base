#include <java/lang/ClassCircularityError.h>

#include <java/lang/LinkageError.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $LinkageError = ::java::lang::LinkageError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$FieldInfo _ClassCircularityError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ClassCircularityError, serialVersionUID)},
	{}
};

$MethodInfo _ClassCircularityError_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ClassCircularityError, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ClassCircularityError, init$, void, $String*)},
	{}
};

$ClassInfo _ClassCircularityError_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.ClassCircularityError",
	"java.lang.LinkageError",
	nullptr,
	_ClassCircularityError_FieldInfo_,
	_ClassCircularityError_MethodInfo_
};

$Object* allocate$ClassCircularityError($Class* clazz) {
	return $of($alloc(ClassCircularityError));
}

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
	$loadClass(ClassCircularityError, name, initialize, &_ClassCircularityError_ClassInfo_, allocate$ClassCircularityError);
	return class$;
}

$Class* ClassCircularityError::class$ = nullptr;

	} // lang
} // java