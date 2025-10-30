#include <java/nio/file/InvalidPathException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

namespace java {
	namespace nio {
		namespace file {

$FieldInfo _InvalidPathException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(InvalidPathException, serialVersionUID)},
	{"input", "Ljava/lang/String;", nullptr, $PRIVATE, $field(InvalidPathException, input)},
	{"index", "I", nullptr, $PRIVATE, $field(InvalidPathException, index)},
	{}
};

$MethodInfo _InvalidPathException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidPathException::*)($String*,$String*,int32_t)>(&InvalidPathException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidPathException::*)($String*,$String*)>(&InvalidPathException::init$))},
	{"getIndex", "()I", nullptr, $PUBLIC},
	{"getInput", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getReason", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _InvalidPathException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.file.InvalidPathException",
	"java.lang.IllegalArgumentException",
	nullptr,
	_InvalidPathException_FieldInfo_,
	_InvalidPathException_MethodInfo_
};

$Object* allocate$InvalidPathException($Class* clazz) {
	return $of($alloc(InvalidPathException));
}

void InvalidPathException::init$($String* input, $String* reason, int32_t index) {
	$IllegalArgumentException::init$(reason);
	if ((input == nullptr) || (reason == nullptr)) {
		$throwNew($NullPointerException);
	}
	if (index < -1) {
		$throwNew($IllegalArgumentException);
	}
	$set(this, input, input);
	this->index = index;
}

void InvalidPathException::init$($String* input, $String* reason) {
	InvalidPathException::init$(input, reason, -1);
}

$String* InvalidPathException::getInput() {
	return this->input;
}

$String* InvalidPathException::getReason() {
	return $IllegalArgumentException::getMessage();
}

int32_t InvalidPathException::getIndex() {
	return this->index;
}

$String* InvalidPathException::getMessage() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append($(getReason()));
	if (this->index > -1) {
		sb->append(" at index "_s);
		sb->append(this->index);
	}
	sb->append(": "_s);
	sb->append(this->input);
	return sb->toString();
}

InvalidPathException::InvalidPathException() {
}

InvalidPathException::InvalidPathException(const InvalidPathException& e) : $IllegalArgumentException(e) {
}

void InvalidPathException::throw$() {
	throw *this;
}

$Class* InvalidPathException::load$($String* name, bool initialize) {
	$loadClass(InvalidPathException, name, initialize, &_InvalidPathException_ClassInfo_, allocate$InvalidPathException);
	return class$;
}

$Class* InvalidPathException::class$ = nullptr;

		} // file
	} // nio
} // java