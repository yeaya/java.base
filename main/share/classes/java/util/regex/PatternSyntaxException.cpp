#include <java/util/regex/PatternSyntaxException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace regex {

$FieldInfo _PatternSyntaxException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PatternSyntaxException, serialVersionUID)},
	{"desc", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(PatternSyntaxException, desc)},
	{"pattern", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(PatternSyntaxException, pattern)},
	{"index", "I", nullptr, $PRIVATE | $FINAL, $field(PatternSyntaxException, index)},
	{}
};

$MethodInfo _PatternSyntaxException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(PatternSyntaxException::*)($String*,$String*,int32_t)>(&PatternSyntaxException::init$))},
	{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getIndex", "()I", nullptr, $PUBLIC},
	{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPattern", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PatternSyntaxException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.regex.PatternSyntaxException",
	"java.lang.IllegalArgumentException",
	nullptr,
	_PatternSyntaxException_FieldInfo_,
	_PatternSyntaxException_MethodInfo_
};

$Object* allocate$PatternSyntaxException($Class* clazz) {
	return $of($alloc(PatternSyntaxException));
}

void PatternSyntaxException::init$($String* desc, $String* regex, int32_t index) {
	$IllegalArgumentException::init$();
	$set(this, desc, desc);
	$set(this, pattern, regex);
	this->index = index;
}

int32_t PatternSyntaxException::getIndex() {
	return this->index;
}

$String* PatternSyntaxException::getDescription() {
	return this->desc;
}

$String* PatternSyntaxException::getPattern() {
	return this->pattern;
}

$String* PatternSyntaxException::getMessage() {
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append(this->desc);
	if (this->index >= 0) {
		sb->append(" near index "_s);
		sb->append(this->index);
	}
	sb->append($($System::lineSeparator()));
	sb->append(this->pattern);
	if (this->index >= 0 && this->pattern != nullptr && this->index < $nc(this->pattern)->length()) {
		sb->append($($System::lineSeparator()));
		for (int32_t i = 0; i < this->index; ++i) {
			sb->append(u' ');
		}
		sb->append(u'^');
	}
	return sb->toString();
}

PatternSyntaxException::PatternSyntaxException() {
}

PatternSyntaxException::PatternSyntaxException(const PatternSyntaxException& e) {
}

PatternSyntaxException PatternSyntaxException::wrapper$() {
	$pendingException(this);
	return *this;
}

void PatternSyntaxException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* PatternSyntaxException::load$($String* name, bool initialize) {
	$loadClass(PatternSyntaxException, name, initialize, &_PatternSyntaxException_ClassInfo_, allocate$PatternSyntaxException);
	return class$;
}

$Class* PatternSyntaxException::class$ = nullptr;

		} // regex
	} // util
} // java