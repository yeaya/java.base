#include <jdk/internal/util/xml/impl/Input.h>
#include <java/io/Reader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace util {
			namespace xml {
				namespace impl {

void Input::init$(int32_t buffsize) {
	$set(this, chars, $new($chars, buffsize));
	this->chLen = this->chars->length;
}

void Input::init$($chars* buff) {
	$set(this, chars, buff);
	this->chLen = $nc(this->chars)->length;
}

void Input::init$() {
}

Input::Input() {
}

$Class* Input::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"pubid", "Ljava/lang/String;", nullptr, $PUBLIC, $field(Input, pubid)},
		{"sysid", "Ljava/lang/String;", nullptr, $PUBLIC, $field(Input, sysid)},
		{"xmlenc", "Ljava/lang/String;", nullptr, $PUBLIC, $field(Input, xmlenc)},
		{"xmlver", "C", nullptr, $PUBLIC, $field(Input, xmlver)},
		{"src", "Ljava/io/Reader;", nullptr, $PUBLIC, $field(Input, src)},
		{"chars", "[C", nullptr, $PUBLIC, $field(Input, chars)},
		{"chLen", "I", nullptr, $PUBLIC, $field(Input, chLen)},
		{"chIdx", "I", nullptr, $PUBLIC, $field(Input, chIdx)},
		{"next", "Ljdk/internal/util/xml/impl/Input;", nullptr, $PUBLIC, $field(Input, next)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(Input, init$, void, int32_t)},
		{"<init>", "([C)V", nullptr, $PUBLIC, $method(Input, init$, void, $chars*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(Input, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.util.xml.impl.Input",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Input, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Input);
	});
	return class$;
}

$Class* Input::class$ = nullptr;

				} // impl
			} // xml
		} // util
	} // internal
} // jdk