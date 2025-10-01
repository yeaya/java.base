#include <jdk/internal/icu/text/StringPrep$Values.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/icu/text/StringPrep.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringPrep = ::jdk::internal::icu::text::StringPrep;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

$FieldInfo _StringPrep$Values_FieldInfo_[] = {
	{"isIndex", "Z", nullptr, 0, $field(StringPrep$Values, isIndex)},
	{"value", "I", nullptr, 0, $field(StringPrep$Values, value)},
	{"type", "I", nullptr, 0, $field(StringPrep$Values, type)},
	{}
};

$MethodInfo _StringPrep$Values_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(StringPrep$Values::*)()>(&StringPrep$Values::init$))},
	{"reset", "()V", nullptr, $PUBLIC, $method(static_cast<void(StringPrep$Values::*)()>(&StringPrep$Values::reset))},
	{}
};

$InnerClassInfo _StringPrep$Values_InnerClassesInfo_[] = {
	{"jdk.internal.icu.text.StringPrep$Values", "jdk.internal.icu.text.StringPrep", "Values", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _StringPrep$Values_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.icu.text.StringPrep$Values",
	"java.lang.Object",
	nullptr,
	_StringPrep$Values_FieldInfo_,
	_StringPrep$Values_MethodInfo_,
	nullptr,
	nullptr,
	_StringPrep$Values_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.text.StringPrep"
};

$Object* allocate$StringPrep$Values($Class* clazz) {
	return $of($alloc(StringPrep$Values));
}

void StringPrep$Values::init$() {
}

void StringPrep$Values::reset() {
	this->isIndex = false;
	this->value = 0;
	this->type = -1;
}

StringPrep$Values::StringPrep$Values() {
}

$Class* StringPrep$Values::load$($String* name, bool initialize) {
	$loadClass(StringPrep$Values, name, initialize, &_StringPrep$Values_ClassInfo_, allocate$StringPrep$Values);
	return class$;
}

$Class* StringPrep$Values::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk