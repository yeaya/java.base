#include <jdk/internal/icu/util/CodePointTrie$Data16.h>

#include <java/io/DataOutputStream.h>
#include <jdk/internal/icu/util/CodePointTrie$Data.h>
#include <jdk/internal/icu/util/CodePointTrie$ValueWidth.h>
#include <jdk/internal/icu/util/CodePointTrie.h>
#include <jcpp.h>

#undef BITS_16

using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CodePointTrie$Data = ::jdk::internal::icu::util::CodePointTrie$Data;
using $CodePointTrie$ValueWidth = ::jdk::internal::icu::util::CodePointTrie$ValueWidth;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {

$FieldInfo _CodePointTrie$Data16_FieldInfo_[] = {
	{"array", "[C", nullptr, 0, $field(CodePointTrie$Data16, array)},
	{}
};

$MethodInfo _CodePointTrie$Data16_MethodInfo_[] = {
	{"<init>", "([C)V", nullptr, 0, $method(CodePointTrie$Data16, init$, void, $chars*)},
	{"getDataLength", "()I", nullptr, 0, $virtualMethod(CodePointTrie$Data16, getDataLength, int32_t)},
	{"getFromIndex", "(I)I", nullptr, 0, $virtualMethod(CodePointTrie$Data16, getFromIndex, int32_t, int32_t)},
	{"getValueWidth", "()Ljdk/internal/icu/util/CodePointTrie$ValueWidth;", nullptr, 0, $virtualMethod(CodePointTrie$Data16, getValueWidth, $CodePointTrie$ValueWidth*)},
	{"write", "(Ljava/io/DataOutputStream;)I", nullptr, 0, $virtualMethod(CodePointTrie$Data16, write, int32_t, $DataOutputStream*), "java.io.IOException"},
	{}
};

$InnerClassInfo _CodePointTrie$Data16_InnerClassesInfo_[] = {
	{"jdk.internal.icu.util.CodePointTrie$Data16", "jdk.internal.icu.util.CodePointTrie", "Data16", $PRIVATE | $STATIC | $FINAL},
	{"jdk.internal.icu.util.CodePointTrie$Data", "jdk.internal.icu.util.CodePointTrie", "Data", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _CodePointTrie$Data16_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.icu.util.CodePointTrie$Data16",
	"jdk.internal.icu.util.CodePointTrie$Data",
	nullptr,
	_CodePointTrie$Data16_FieldInfo_,
	_CodePointTrie$Data16_MethodInfo_,
	nullptr,
	nullptr,
	_CodePointTrie$Data16_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.util.CodePointTrie"
};

$Object* allocate$CodePointTrie$Data16($Class* clazz) {
	return $of($alloc(CodePointTrie$Data16));
}

void CodePointTrie$Data16::init$($chars* a) {
	$CodePointTrie$Data::init$();
	$set(this, array, a);
}

$CodePointTrie$ValueWidth* CodePointTrie$Data16::getValueWidth() {
	$init($CodePointTrie$ValueWidth);
	return $CodePointTrie$ValueWidth::BITS_16;
}

int32_t CodePointTrie$Data16::getDataLength() {
	return $nc(this->array)->length;
}

int32_t CodePointTrie$Data16::getFromIndex(int32_t index) {
	return $nc(this->array)->get(index);
}

int32_t CodePointTrie$Data16::write($DataOutputStream* dos) {
	{
		$var($chars, arr$, this->array);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			char16_t v = arr$->get(i$);
			{
				$nc(dos)->writeChar(v);
			}
		}
	}
	return $nc(this->array)->length * 2;
}

CodePointTrie$Data16::CodePointTrie$Data16() {
}

$Class* CodePointTrie$Data16::load$($String* name, bool initialize) {
	$loadClass(CodePointTrie$Data16, name, initialize, &_CodePointTrie$Data16_ClassInfo_, allocate$CodePointTrie$Data16);
	return class$;
}

$Class* CodePointTrie$Data16::class$ = nullptr;

			} // util
		} // icu
	} // internal
} // jdk