#include <java/lang/IllegalThreadStateException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$FieldInfo _IllegalThreadStateException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IllegalThreadStateException, serialVersionUID)},
	{}
};

$MethodInfo _IllegalThreadStateException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(IllegalThreadStateException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(IllegalThreadStateException, init$, void, $String*)},
	{}
};

$ClassInfo _IllegalThreadStateException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.IllegalThreadStateException",
	"java.lang.IllegalArgumentException",
	nullptr,
	_IllegalThreadStateException_FieldInfo_,
	_IllegalThreadStateException_MethodInfo_
};

$Object* allocate$IllegalThreadStateException($Class* clazz) {
	return $of($alloc(IllegalThreadStateException));
}

void IllegalThreadStateException::init$() {
	$IllegalArgumentException::init$();
}

void IllegalThreadStateException::init$($String* s) {
	$IllegalArgumentException::init$(s);
}

IllegalThreadStateException::IllegalThreadStateException() {
}

IllegalThreadStateException::IllegalThreadStateException(const IllegalThreadStateException& e) : $IllegalArgumentException(e) {
}

void IllegalThreadStateException::throw$() {
	throw *this;
}

$Class* IllegalThreadStateException::load$($String* name, bool initialize) {
	$loadClass(IllegalThreadStateException, name, initialize, &_IllegalThreadStateException_ClassInfo_, allocate$IllegalThreadStateException);
	return class$;
}

$Class* IllegalThreadStateException::class$ = nullptr;

	} // lang
} // java