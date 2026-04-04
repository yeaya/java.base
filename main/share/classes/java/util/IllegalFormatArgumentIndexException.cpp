#include <java/util/IllegalFormatArgumentIndexException.h>
#include <java/util/IllegalFormatException.h>
#include <jcpp.h>

#undef MIN_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $IllegalFormatException = ::java::util::IllegalFormatException;

namespace java {
	namespace util {

void IllegalFormatArgumentIndexException::init$(int32_t index) {
	$IllegalFormatException::init$();
	this->illegalIndex = index;
}

int32_t IllegalFormatArgumentIndexException::getIndex() {
	return this->illegalIndex;
}

$String* IllegalFormatArgumentIndexException::getMessage() {
	$useLocalObjectStack();
	int32_t index = getIndex();
	if (index == $Integer::MIN_VALUE) {
		return "Format argument index: (not representable as int)"_s;
	}
	return $String::format("Illegal format argument index = %d"_s, $$new($ObjectArray, {$($Integer::valueOf(getIndex()))}));
}

IllegalFormatArgumentIndexException::IllegalFormatArgumentIndexException() {
}

IllegalFormatArgumentIndexException::IllegalFormatArgumentIndexException(const IllegalFormatArgumentIndexException& e) : $IllegalFormatException(e) {
}

void IllegalFormatArgumentIndexException::throw$() {
	throw *this;
}

$Class* IllegalFormatArgumentIndexException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IllegalFormatArgumentIndexException, serialVersionUID)},
		{"illegalIndex", "I", nullptr, $PRIVATE | $FINAL, $field(IllegalFormatArgumentIndexException, illegalIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(IllegalFormatArgumentIndexException, init$, void, int32_t)},
		{"getIndex", "()I", nullptr, 0, $virtualMethod(IllegalFormatArgumentIndexException, getIndex, int32_t)},
		{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(IllegalFormatArgumentIndexException, getMessage, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.IllegalFormatArgumentIndexException",
		"java.util.IllegalFormatException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IllegalFormatArgumentIndexException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IllegalFormatArgumentIndexException);
	});
	return class$;
}

$Class* IllegalFormatArgumentIndexException::class$ = nullptr;

	} // util
} // java