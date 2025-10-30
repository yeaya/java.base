#include <java/util/StringJoiner.h>

#include <java/lang/CharSequence.h>
#include <java/lang/OutOfMemoryError.h>
#include <java/util/Arrays.h>
#include <java/util/Objects.h>
#include <jdk/internal/access/JavaLangAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jcpp.h>

#undef EMPTY_STRING_ARRAY
#undef JLA

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $Arrays = ::java::util::Arrays;
using $Objects = ::java::util::Objects;
using $JavaLangAccess = ::jdk::internal::access::JavaLangAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;

namespace java {
	namespace util {

$FieldInfo _StringJoiner_FieldInfo_[] = {
	{"EMPTY_STRING_ARRAY", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StringJoiner, EMPTY_STRING_ARRAY)},
	{"prefix", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(StringJoiner, prefix)},
	{"delimiter", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(StringJoiner, delimiter)},
	{"suffix", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(StringJoiner, suffix)},
	{"elts", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(StringJoiner, elts)},
	{"size", "I", nullptr, $PRIVATE, $field(StringJoiner, size)},
	{"len", "I", nullptr, $PRIVATE, $field(StringJoiner, len)},
	{"emptyValue", "Ljava/lang/String;", nullptr, $PRIVATE, $field(StringJoiner, emptyValue)},
	{"JLA", "Ljdk/internal/access/JavaLangAccess;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StringJoiner, JLA)},
	{}
};

$MethodInfo _StringJoiner_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/CharSequence;)V", nullptr, $PUBLIC, $method(static_cast<void(StringJoiner::*)($CharSequence*)>(&StringJoiner::init$))},
	{"<init>", "(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Ljava/lang/CharSequence;)V", nullptr, $PUBLIC, $method(static_cast<void(StringJoiner::*)($CharSequence*,$CharSequence*,$CharSequence*)>(&StringJoiner::init$))},
	{"add", "(Ljava/lang/CharSequence;)Ljava/util/StringJoiner;", nullptr, $PUBLIC, $method(static_cast<StringJoiner*(StringJoiner::*)($CharSequence*)>(&StringJoiner::add))},
	{"checkAddLength", "(II)I", nullptr, $PRIVATE, $method(static_cast<int32_t(StringJoiner::*)(int32_t,int32_t)>(&StringJoiner::checkAddLength))},
	{"compactElts", "()V", nullptr, $PRIVATE, $method(static_cast<void(StringJoiner::*)()>(&StringJoiner::compactElts))},
	{"length", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(StringJoiner::*)()>(&StringJoiner::length))},
	{"merge", "(Ljava/util/StringJoiner;)Ljava/util/StringJoiner;", nullptr, $PUBLIC, $method(static_cast<StringJoiner*(StringJoiner::*)(StringJoiner*)>(&StringJoiner::merge))},
	{"setEmptyValue", "(Ljava/lang/CharSequence;)Ljava/util/StringJoiner;", nullptr, $PUBLIC, $method(static_cast<StringJoiner*(StringJoiner::*)($CharSequence*)>(&StringJoiner::setEmptyValue))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _StringJoiner_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.util.StringJoiner",
	"java.lang.Object",
	nullptr,
	_StringJoiner_FieldInfo_,
	_StringJoiner_MethodInfo_
};

$Object* allocate$StringJoiner($Class* clazz) {
	return $of($alloc(StringJoiner));
}

$StringArray* StringJoiner::EMPTY_STRING_ARRAY = nullptr;
$JavaLangAccess* StringJoiner::JLA = nullptr;

void StringJoiner::init$($CharSequence* delimiter) {
	StringJoiner::init$(delimiter, ""_s, ""_s);
}

void StringJoiner::init$($CharSequence* delimiter, $CharSequence* prefix, $CharSequence* suffix) {
	$Objects::requireNonNull($of(prefix), "The prefix must not be null"_s);
	$Objects::requireNonNull($of(delimiter), "The delimiter must not be null"_s);
	$Objects::requireNonNull($of(suffix), "The suffix must not be null"_s);
	$set(this, prefix, $nc(prefix)->toString());
	$set(this, delimiter, $nc(delimiter)->toString());
	$set(this, suffix, $nc(suffix)->toString());
	checkAddLength(0, 0);
}

StringJoiner* StringJoiner::setEmptyValue($CharSequence* emptyValue) {
	$set(this, emptyValue, $nc(($cast($CharSequence, $Objects::requireNonNull($of(emptyValue), "The empty value must not be null"_s))))->toString());
	return this;
}

$String* StringJoiner::toString() {
	int32_t size = this->size;
	$var($StringArray, elts, this->elts);
	if (size == 0) {
		if (this->emptyValue != nullptr) {
			return this->emptyValue;
		}
		$assign(elts, StringJoiner::EMPTY_STRING_ARRAY);
	}
	return $nc(StringJoiner::JLA)->join(this->prefix, this->suffix, this->delimiter, elts, size);
}

StringJoiner* StringJoiner::add($CharSequence* newElement) {
	$var($String, elt, $String::valueOf($of(newElement)));
	if (this->elts == nullptr) {
		$set(this, elts, $new($StringArray, 8));
	} else {
		if (this->size == $nc(this->elts)->length) {
			$set(this, elts, $fcast($StringArray, $Arrays::copyOf(this->elts, 2 * this->size)));
		}
		this->len = checkAddLength(this->len, $nc(this->delimiter)->length());
	}
	this->len = checkAddLength(this->len, elt->length());
	$nc(this->elts)->set(this->size++, elt);
	return this;
}

int32_t StringJoiner::checkAddLength(int32_t oldLen, int32_t inc) {
	int64_t newLen = (int64_t)oldLen + (int64_t)inc;
	int64_t var$0 = newLen + (int64_t)$nc(this->prefix)->length();
	int64_t tmpLen = var$0 + (int64_t)$nc(this->suffix)->length();
	if (tmpLen != (int32_t)tmpLen) {
		$throwNew($OutOfMemoryError, "Requested array size exceeds VM limit"_s);
	}
	return (int32_t)newLen;
}

StringJoiner* StringJoiner::merge(StringJoiner* other) {
	$Objects::requireNonNull(other);
	if (other->size == 0) {
		return this;
	}
	other->compactElts();
	return add($nc(other->elts)->get(0));
}

void StringJoiner::compactElts() {
	int32_t sz = this->size;
	if (sz > 1) {
		$nc(this->elts)->set(0, $($nc(StringJoiner::JLA)->join(""_s, ""_s, this->delimiter, this->elts, sz)));
		$Arrays::fill(this->elts, 1, sz, ($Object*)nullptr);
		this->size = 1;
	}
}

int32_t StringJoiner::length() {
	int32_t var$0 = 0;
	if (this->size == 0 && this->emptyValue != nullptr) {
		var$0 = $nc(this->emptyValue)->length();
	} else {
		int32_t var$1 = this->len + $nc(this->prefix)->length();
		var$0 = var$1 + $nc(this->suffix)->length();
	}
	return var$0;
}

void clinit$StringJoiner($Class* class$) {
	$assignStatic(StringJoiner::EMPTY_STRING_ARRAY, $new($StringArray, 0));
	$assignStatic(StringJoiner::JLA, $SharedSecrets::getJavaLangAccess());
}

StringJoiner::StringJoiner() {
}

$Class* StringJoiner::load$($String* name, bool initialize) {
	$loadClass(StringJoiner, name, initialize, &_StringJoiner_ClassInfo_, clinit$StringJoiner, allocate$StringJoiner);
	return class$;
}

$Class* StringJoiner::class$ = nullptr;

	} // util
} // java