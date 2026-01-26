#include <java/lang/StringIndexOutOfBoundsException.h>

#include <java/lang/IndexOutOfBoundsException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$FieldInfo _StringIndexOutOfBoundsException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringIndexOutOfBoundsException, serialVersionUID)},
	{}
};

$MethodInfo _StringIndexOutOfBoundsException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(StringIndexOutOfBoundsException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(StringIndexOutOfBoundsException, init$, void, $String*)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(StringIndexOutOfBoundsException, init$, void, int32_t)},
	{}
};

$ClassInfo _StringIndexOutOfBoundsException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.StringIndexOutOfBoundsException",
	"java.lang.IndexOutOfBoundsException",
	nullptr,
	_StringIndexOutOfBoundsException_FieldInfo_,
	_StringIndexOutOfBoundsException_MethodInfo_
};

$Object* allocate$StringIndexOutOfBoundsException($Class* clazz) {
	return $of($alloc(StringIndexOutOfBoundsException));
}

void StringIndexOutOfBoundsException::init$() {
	$IndexOutOfBoundsException::init$();
}

void StringIndexOutOfBoundsException::init$($String* s) {
	$IndexOutOfBoundsException::init$(s);
}

void StringIndexOutOfBoundsException::init$(int32_t index) {
	$useLocalCurrentObjectStackCache();
	$IndexOutOfBoundsException::init$($$str({"String index out of range: "_s, $$str(index)}));
}

StringIndexOutOfBoundsException::StringIndexOutOfBoundsException() {
}

StringIndexOutOfBoundsException::StringIndexOutOfBoundsException(const StringIndexOutOfBoundsException& e) : $IndexOutOfBoundsException(e) {
}

void StringIndexOutOfBoundsException::throw$() {
	throw *this;
}

$Class* StringIndexOutOfBoundsException::load$($String* name, bool initialize) {
	$loadClass(StringIndexOutOfBoundsException, name, initialize, &_StringIndexOutOfBoundsException_ClassInfo_, allocate$StringIndexOutOfBoundsException);
	return class$;
}

$Class* StringIndexOutOfBoundsException::class$ = nullptr;

	} // lang
} // java