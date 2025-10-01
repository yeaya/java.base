#include <sun/nio/cs/StringUTF16.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef ARRAY_BYTE_INDEX_SCALE
#undef ARRAY_BYTE_BASE_OFFSET

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _StringUTF16_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StringUTF16, unsafe)},
	{}
};

$MethodInfo _StringUTF16_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(StringUTF16::*)()>(&StringUTF16::init$))},
	{"getChar", "([BI)C", nullptr, $PUBLIC | $STATIC, $method(static_cast<char16_t(*)($bytes*,int32_t)>(&StringUTF16::getChar))},
	{}
};

$ClassInfo _StringUTF16_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.StringUTF16",
	"java.lang.Object",
	nullptr,
	_StringUTF16_FieldInfo_,
	_StringUTF16_MethodInfo_
};

$Object* allocate$StringUTF16($Class* clazz) {
	return $of($alloc(StringUTF16));
}

$Unsafe* StringUTF16::unsafe = nullptr;

void StringUTF16::init$() {
}

char16_t StringUTF16::getChar($bytes* val, int32_t index) {
	$init(StringUTF16);
	$init($Unsafe);
	return $nc(StringUTF16::unsafe)->getChar(val, $Unsafe::ARRAY_BYTE_BASE_OFFSET + $Unsafe::ARRAY_BYTE_INDEX_SCALE * index * (int64_t)2);
}

void clinit$StringUTF16($Class* class$) {
	$assignStatic(StringUTF16::unsafe, $Unsafe::getUnsafe());
}

StringUTF16::StringUTF16() {
}

$Class* StringUTF16::load$($String* name, bool initialize) {
	$loadClass(StringUTF16, name, initialize, &_StringUTF16_ClassInfo_, clinit$StringUTF16, allocate$StringUTF16);
	return class$;
}

$Class* StringUTF16::class$ = nullptr;

		} // cs
	} // nio
} // sun