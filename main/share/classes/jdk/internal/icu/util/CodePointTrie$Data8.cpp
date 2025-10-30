#include <jdk/internal/icu/util/CodePointTrie$Data8.h>

#include <java/io/DataOutputStream.h>
#include <jdk/internal/icu/util/CodePointTrie$Data.h>
#include <jdk/internal/icu/util/CodePointTrie$ValueWidth.h>
#include <jdk/internal/icu/util/CodePointTrie.h>
#include <jcpp.h>

#undef BITS_8

using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CodePointTrie = ::jdk::internal::icu::util::CodePointTrie;
using $CodePointTrie$Data = ::jdk::internal::icu::util::CodePointTrie$Data;
using $CodePointTrie$ValueWidth = ::jdk::internal::icu::util::CodePointTrie$ValueWidth;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {

$FieldInfo _CodePointTrie$Data8_FieldInfo_[] = {
	{"array", "[B", nullptr, 0, $field(CodePointTrie$Data8, array)},
	{}
};

$MethodInfo _CodePointTrie$Data8_MethodInfo_[] = {
	{"<init>", "([B)V", nullptr, 0, $method(static_cast<void(CodePointTrie$Data8::*)($bytes*)>(&CodePointTrie$Data8::init$))},
	{"getDataLength", "()I", nullptr, 0},
	{"getFromIndex", "(I)I", nullptr, 0},
	{"getValueWidth", "()Ljdk/internal/icu/util/CodePointTrie$ValueWidth;", nullptr, 0},
	{"write", "(Ljava/io/DataOutputStream;)I", nullptr, 0, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _CodePointTrie$Data8_InnerClassesInfo_[] = {
	{"jdk.internal.icu.util.CodePointTrie$Data8", "jdk.internal.icu.util.CodePointTrie", "Data8", $PRIVATE | $STATIC | $FINAL},
	{"jdk.internal.icu.util.CodePointTrie$Data", "jdk.internal.icu.util.CodePointTrie", "Data", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _CodePointTrie$Data8_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.icu.util.CodePointTrie$Data8",
	"jdk.internal.icu.util.CodePointTrie$Data",
	nullptr,
	_CodePointTrie$Data8_FieldInfo_,
	_CodePointTrie$Data8_MethodInfo_,
	nullptr,
	nullptr,
	_CodePointTrie$Data8_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.util.CodePointTrie"
};

$Object* allocate$CodePointTrie$Data8($Class* clazz) {
	return $of($alloc(CodePointTrie$Data8));
}

void CodePointTrie$Data8::init$($bytes* a) {
	$CodePointTrie$Data::init$();
	$set(this, array, a);
}

$CodePointTrie$ValueWidth* CodePointTrie$Data8::getValueWidth() {
	$init($CodePointTrie$ValueWidth);
	return $CodePointTrie$ValueWidth::BITS_8;
}

int32_t CodePointTrie$Data8::getDataLength() {
	return $nc(this->array)->length;
}

int32_t CodePointTrie$Data8::getFromIndex(int32_t index) {
	return (int32_t)($nc(this->array)->get(index) & (uint32_t)255);
}

int32_t CodePointTrie$Data8::write($DataOutputStream* dos) {
	{
		$var($bytes, arr$, this->array);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int8_t v = arr$->get(i$);
			{
				$nc(dos)->writeByte(v);
			}
		}
	}
	return $nc(this->array)->length;
}

CodePointTrie$Data8::CodePointTrie$Data8() {
}

$Class* CodePointTrie$Data8::load$($String* name, bool initialize) {
	$loadClass(CodePointTrie$Data8, name, initialize, &_CodePointTrie$Data8_ClassInfo_, allocate$CodePointTrie$Data8);
	return class$;
}

$Class* CodePointTrie$Data8::class$ = nullptr;

			} // util
		} // icu
	} // internal
} // jdk