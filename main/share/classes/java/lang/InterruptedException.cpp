#include <java/lang/InterruptedException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$FieldInfo _InterruptedException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InterruptedException, serialVersionUID)},
	{}
};

$MethodInfo _InterruptedException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(InterruptedException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InterruptedException, init$, void, $String*)},
	{}
};

$ClassInfo _InterruptedException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.InterruptedException",
	"java.lang.Exception",
	nullptr,
	_InterruptedException_FieldInfo_,
	_InterruptedException_MethodInfo_
};

$Object* allocate$InterruptedException($Class* clazz) {
	return $of($alloc(InterruptedException));
}

void InterruptedException::init$() {
	$Exception::init$();
}

void InterruptedException::init$($String* s) {
	$Exception::init$(s);
}

InterruptedException::InterruptedException() {
}

InterruptedException::InterruptedException(const InterruptedException& e) : $Exception(e) {
}

void InterruptedException::throw$() {
	throw *this;
}

$Class* InterruptedException::load$($String* name, bool initialize) {
	$loadClass(InterruptedException, name, initialize, &_InterruptedException_ClassInfo_, allocate$InterruptedException);
	return class$;
}

$Class* InterruptedException::class$ = nullptr;

	} // lang
} // java