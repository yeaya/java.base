#include <java/text/CollationKey.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

namespace java {
	namespace text {

$FieldInfo _CollationKey_FieldInfo_[] = {
	{"source", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(CollationKey, source)},
	{}
};

$MethodInfo _CollationKey_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(CollationKey::*)($String*)>(&CollationKey::init$))},
	{"compareTo", "(Ljava/text/CollationKey;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getSourceString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toByteArray", "()[B", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _CollationKey_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.text.CollationKey",
	"java.lang.Object",
	"java.lang.Comparable",
	_CollationKey_FieldInfo_,
	_CollationKey_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/Comparable<Ljava/text/CollationKey;>;"
};

$Object* allocate$CollationKey($Class* clazz) {
	return $of($alloc(CollationKey));
}

$String* CollationKey::getSourceString() {
	return this->source;
}

void CollationKey::init$($String* source) {
	if (source == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, source, source);
}

int32_t CollationKey::compareTo(Object$* target) {
	return this->compareTo($cast(CollationKey, target));
}

CollationKey::CollationKey() {
}

$Class* CollationKey::load$($String* name, bool initialize) {
	$loadClass(CollationKey, name, initialize, &_CollationKey_ClassInfo_, allocate$CollationKey);
	return class$;
}

$Class* CollationKey::class$ = nullptr;

	} // text
} // java