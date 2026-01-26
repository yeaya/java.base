#include <java/lang/ClassFormatError.h>

#include <java/lang/LinkageError.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $LinkageError = ::java::lang::LinkageError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$FieldInfo _ClassFormatError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ClassFormatError, serialVersionUID)},
	{}
};

$MethodInfo _ClassFormatError_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ClassFormatError, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ClassFormatError, init$, void, $String*)},
	{}
};

$ClassInfo _ClassFormatError_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.ClassFormatError",
	"java.lang.LinkageError",
	nullptr,
	_ClassFormatError_FieldInfo_,
	_ClassFormatError_MethodInfo_
};

$Object* allocate$ClassFormatError($Class* clazz) {
	return $of($alloc(ClassFormatError));
}

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
	$loadClass(ClassFormatError, name, initialize, &_ClassFormatError_ClassInfo_, allocate$ClassFormatError);
	return class$;
}

$Class* ClassFormatError::class$ = nullptr;

	} // lang
} // java