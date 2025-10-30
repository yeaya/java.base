#include <java/lang/NoClassDefFoundError.h>

#include <java/lang/LinkageError.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $LinkageError = ::java::lang::LinkageError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$FieldInfo _NoClassDefFoundError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NoClassDefFoundError, serialVersionUID)},
	{}
};

$MethodInfo _NoClassDefFoundError_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NoClassDefFoundError::*)()>(&NoClassDefFoundError::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(NoClassDefFoundError::*)($String*)>(&NoClassDefFoundError::init$))},
	{}
};

$ClassInfo _NoClassDefFoundError_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.NoClassDefFoundError",
	"java.lang.LinkageError",
	nullptr,
	_NoClassDefFoundError_FieldInfo_,
	_NoClassDefFoundError_MethodInfo_
};

$Object* allocate$NoClassDefFoundError($Class* clazz) {
	return $of($alloc(NoClassDefFoundError));
}

void NoClassDefFoundError::init$() {
	$LinkageError::init$();
}

void NoClassDefFoundError::init$($String* s) {
	$LinkageError::init$(s);
}

NoClassDefFoundError::NoClassDefFoundError() {
}

NoClassDefFoundError::NoClassDefFoundError(const NoClassDefFoundError& e) : $LinkageError(e) {
}

void NoClassDefFoundError::throw$() {
	throw *this;
}

$Class* NoClassDefFoundError::load$($String* name, bool initialize) {
	$loadClass(NoClassDefFoundError, name, initialize, &_NoClassDefFoundError_ClassInfo_, allocate$NoClassDefFoundError);
	return class$;
}

$Class* NoClassDefFoundError::class$ = nullptr;

	} // lang
} // java