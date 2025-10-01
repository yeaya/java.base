#include <jdk/internal/reflect/SignatureIterator.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace reflect {

$FieldInfo _SignatureIterator_FieldInfo_[] = {
	{"sig", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(SignatureIterator, sig)},
	{"idx", "I", nullptr, $PRIVATE, $field(SignatureIterator, idx)},
	{}
};

$MethodInfo _SignatureIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SignatureIterator::*)($String*)>(&SignatureIterator::init$))},
	{"atEnd", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"reset", "()V", nullptr, $PUBLIC},
	{"returnType", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SignatureIterator_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.reflect.SignatureIterator",
	"java.lang.Object",
	nullptr,
	_SignatureIterator_FieldInfo_,
	_SignatureIterator_MethodInfo_
};

$Object* allocate$SignatureIterator($Class* clazz) {
	return $of($alloc(SignatureIterator));
}

void SignatureIterator::init$($String* sig) {
	$set(this, sig, sig);
	reset();
}

void SignatureIterator::reset() {
	this->idx = 1;
}

bool SignatureIterator::atEnd() {
	return $nc(this->sig)->charAt(this->idx) == u')';
}

$String* SignatureIterator::next() {
	if (atEnd()) {
		return nullptr;
	}
	char16_t c = $nc(this->sig)->charAt(this->idx);
	if (c != u'[' && c != u'L') {
		++this->idx;
		return $String::valueOf(c);
	}
	int32_t endIdx = this->idx;
	if (c == u'[') {
		while ((c = $nc(this->sig)->charAt(endIdx)) == u'[') {
			++endIdx;
		}
	}
	if (c == u'L') {
		while ($nc(this->sig)->charAt(endIdx) != u';') {
			++endIdx;
		}
	}
	int32_t beginIdx = this->idx;
	this->idx = endIdx + 1;
	return $nc(this->sig)->substring(beginIdx, this->idx);
}

$String* SignatureIterator::returnType() {
	if (!atEnd()) {
		$throwNew($InternalError, "Illegal use of SignatureIterator"_s);
	}
	return $nc(this->sig)->substring(this->idx + 1, $nc(this->sig)->length());
}

SignatureIterator::SignatureIterator() {
}

$Class* SignatureIterator::load$($String* name, bool initialize) {
	$loadClass(SignatureIterator, name, initialize, &_SignatureIterator_ClassInfo_, allocate$SignatureIterator);
	return class$;
}

$Class* SignatureIterator::class$ = nullptr;

		} // reflect
	} // internal
} // jdk