#include <java/lang/CloneNotSupportedException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$FieldInfo _CloneNotSupportedException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CloneNotSupportedException, serialVersionUID)},
	{}
};

$MethodInfo _CloneNotSupportedException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CloneNotSupportedException::*)()>(&CloneNotSupportedException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CloneNotSupportedException::*)($String*)>(&CloneNotSupportedException::init$))},
	{}
};

$ClassInfo _CloneNotSupportedException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.CloneNotSupportedException",
	"java.lang.Exception",
	nullptr,
	_CloneNotSupportedException_FieldInfo_,
	_CloneNotSupportedException_MethodInfo_
};

$Object* allocate$CloneNotSupportedException($Class* clazz) {
	return $of($alloc(CloneNotSupportedException));
}

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
	$loadClass(CloneNotSupportedException, name, initialize, &_CloneNotSupportedException_ClassInfo_, allocate$CloneNotSupportedException);
	return class$;
}

$Class* CloneNotSupportedException::class$ = nullptr;

	} // lang
} // java