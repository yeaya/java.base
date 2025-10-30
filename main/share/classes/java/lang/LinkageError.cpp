#include <java/lang/LinkageError.h>

#include <java/lang/Error.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$FieldInfo _LinkageError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LinkageError, serialVersionUID)},
	{}
};

$MethodInfo _LinkageError_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LinkageError::*)()>(&LinkageError::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(LinkageError::*)($String*)>(&LinkageError::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(LinkageError::*)($String*,$Throwable*)>(&LinkageError::init$))},
	{}
};

$ClassInfo _LinkageError_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.LinkageError",
	"java.lang.Error",
	nullptr,
	_LinkageError_FieldInfo_,
	_LinkageError_MethodInfo_
};

$Object* allocate$LinkageError($Class* clazz) {
	return $of($alloc(LinkageError));
}

void LinkageError::init$() {
	$Error::init$();
}

void LinkageError::init$($String* s) {
	$Error::init$(s);
}

void LinkageError::init$($String* s, $Throwable* cause) {
	$Error::init$(s, cause);
}

LinkageError::LinkageError() {
}

LinkageError::LinkageError(const LinkageError& e) : $Error(e) {
}

void LinkageError::throw$() {
	throw *this;
}

$Class* LinkageError::load$($String* name, bool initialize) {
	$loadClass(LinkageError, name, initialize, &_LinkageError_ClassInfo_, allocate$LinkageError);
	return class$;
}

$Class* LinkageError::class$ = nullptr;

	} // lang
} // java