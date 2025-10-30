#include <java/net/URISyntaxException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

namespace java {
	namespace net {

$FieldInfo _URISyntaxException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URISyntaxException, serialVersionUID)},
	{"input", "Ljava/lang/String;", nullptr, $PRIVATE, $field(URISyntaxException, input)},
	{"index", "I", nullptr, $PRIVATE, $field(URISyntaxException, index)},
	{}
};

$MethodInfo _URISyntaxException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(URISyntaxException::*)($String*,$String*,int32_t)>(&URISyntaxException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(URISyntaxException::*)($String*,$String*)>(&URISyntaxException::init$))},
	{"getIndex", "()I", nullptr, $PUBLIC},
	{"getInput", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getReason", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _URISyntaxException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.net.URISyntaxException",
	"java.lang.Exception",
	nullptr,
	_URISyntaxException_FieldInfo_,
	_URISyntaxException_MethodInfo_
};

$Object* allocate$URISyntaxException($Class* clazz) {
	return $of($alloc(URISyntaxException));
}

void URISyntaxException::init$($String* input, $String* reason, int32_t index) {
	$Exception::init$(reason);
	if ((input == nullptr) || (reason == nullptr)) {
		$throwNew($NullPointerException);
	}
	if (index < -1) {
		$throwNew($IllegalArgumentException);
	}
	$set(this, input, input);
	this->index = index;
}

void URISyntaxException::init$($String* input, $String* reason) {
	URISyntaxException::init$(input, reason, -1);
}

$String* URISyntaxException::getInput() {
	return this->input;
}

$String* URISyntaxException::getReason() {
	return $Exception::getMessage();
}

int32_t URISyntaxException::getIndex() {
	return this->index;
}

$String* URISyntaxException::getMessage() {
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

URISyntaxException::URISyntaxException() {
}

URISyntaxException::URISyntaxException(const URISyntaxException& e) : $Exception(e) {
}

void URISyntaxException::throw$() {
	throw *this;
}

$Class* URISyntaxException::load$($String* name, bool initialize) {
	$loadClass(URISyntaxException, name, initialize, &_URISyntaxException_ClassInfo_, allocate$URISyntaxException);
	return class$;
}

$Class* URISyntaxException::class$ = nullptr;

	} // net
} // java