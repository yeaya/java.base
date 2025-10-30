#include <jdk/internal/util/xml/impl/Input.h>

#include <java/io/Reader.h>
#include <jcpp.h>

using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace util {
			namespace xml {
				namespace impl {

$FieldInfo _Input_FieldInfo_[] = {
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

$MethodInfo _Input_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(Input::*)(int32_t)>(&Input::init$))},
	{"<init>", "([C)V", nullptr, $PUBLIC, $method(static_cast<void(Input::*)($chars*)>(&Input::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Input::*)()>(&Input::init$))},
	{}
};

$ClassInfo _Input_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.util.xml.impl.Input",
	"java.lang.Object",
	nullptr,
	_Input_FieldInfo_,
	_Input_MethodInfo_
};

$Object* allocate$Input($Class* clazz) {
	return $of($alloc(Input));
}

void Input::init$(int32_t buffsize) {
	$set(this, chars, $new($chars, buffsize));
	this->chLen = $nc(this->chars)->length;
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
	$loadClass(Input, name, initialize, &_Input_ClassInfo_, allocate$Input);
	return class$;
}

$Class* Input::class$ = nullptr;

				} // impl
			} // xml
		} // util
	} // internal
} // jdk