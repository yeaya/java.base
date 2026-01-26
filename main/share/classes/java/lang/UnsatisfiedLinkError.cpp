#include <java/lang/UnsatisfiedLinkError.h>

#include <java/lang/LinkageError.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $LinkageError = ::java::lang::LinkageError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$FieldInfo _UnsatisfiedLinkError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnsatisfiedLinkError, serialVersionUID)},
	{}
};

$MethodInfo _UnsatisfiedLinkError_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(UnsatisfiedLinkError, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(UnsatisfiedLinkError, init$, void, $String*)},
	{}
};

$ClassInfo _UnsatisfiedLinkError_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.UnsatisfiedLinkError",
	"java.lang.LinkageError",
	nullptr,
	_UnsatisfiedLinkError_FieldInfo_,
	_UnsatisfiedLinkError_MethodInfo_
};

$Object* allocate$UnsatisfiedLinkError($Class* clazz) {
	return $of($alloc(UnsatisfiedLinkError));
}

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
	$loadClass(UnsatisfiedLinkError, name, initialize, &_UnsatisfiedLinkError_ClassInfo_, allocate$UnsatisfiedLinkError);
	return class$;
}

$Class* UnsatisfiedLinkError::class$ = nullptr;

	} // lang
} // java