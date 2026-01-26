#include <jdk/internal/icu/util/CodePointTrie$Data32.h>

#include <java/io/DataOutputStream.h>
#include <jdk/internal/icu/util/CodePointTrie$Data.h>
#include <jdk/internal/icu/util/CodePointTrie$ValueWidth.h>
#include <jdk/internal/icu/util/CodePointTrie.h>
#include <jcpp.h>

#undef BITS_32

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

$FieldInfo _CodePointTrie$Data32_FieldInfo_[] = {
	{"array", "[I", nullptr, 0, $field(CodePointTrie$Data32, array)},
	{}
};

$MethodInfo _CodePointTrie$Data32_MethodInfo_[] = {
	{"<init>", "([I)V", nullptr, 0, $method(CodePointTrie$Data32, init$, void, $ints*)},
	{"getDataLength", "()I", nullptr, 0, $virtualMethod(CodePointTrie$Data32, getDataLength, int32_t)},
	{"getFromIndex", "(I)I", nullptr, 0, $virtualMethod(CodePointTrie$Data32, getFromIndex, int32_t, int32_t)},
	{"getValueWidth", "()Ljdk/internal/icu/util/CodePointTrie$ValueWidth;", nullptr, 0, $virtualMethod(CodePointTrie$Data32, getValueWidth, $CodePointTrie$ValueWidth*)},
	{"write", "(Ljava/io/DataOutputStream;)I", nullptr, 0, $virtualMethod(CodePointTrie$Data32, write, int32_t, $DataOutputStream*), "java.io.IOException"},
	{}
};

$InnerClassInfo _CodePointTrie$Data32_InnerClassesInfo_[] = {
	{"jdk.internal.icu.util.CodePointTrie$Data32", "jdk.internal.icu.util.CodePointTrie", "Data32", $PRIVATE | $STATIC | $FINAL},
	{"jdk.internal.icu.util.CodePointTrie$Data", "jdk.internal.icu.util.CodePointTrie", "Data", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _CodePointTrie$Data32_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.icu.util.CodePointTrie$Data32",
	"jdk.internal.icu.util.CodePointTrie$Data",
	nullptr,
	_CodePointTrie$Data32_FieldInfo_,
	_CodePointTrie$Data32_MethodInfo_,
	nullptr,
	nullptr,
	_CodePointTrie$Data32_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.util.CodePointTrie"
};

$Object* allocate$CodePointTrie$Data32($Class* clazz) {
	return $of($alloc(CodePointTrie$Data32));
}

void CodePointTrie$Data32::init$($ints* a) {
	$CodePointTrie$Data::init$();
	$set(this, array, a);
}

$CodePointTrie$ValueWidth* CodePointTrie$Data32::getValueWidth() {
	$init($CodePointTrie$ValueWidth);
	return $CodePointTrie$ValueWidth::BITS_32;
}

int32_t CodePointTrie$Data32::getDataLength() {
	return $nc(this->array)->length;
}

int32_t CodePointTrie$Data32::getFromIndex(int32_t index) {
	return $nc(this->array)->get(index);
}

int32_t CodePointTrie$Data32::write($DataOutputStream* dos) {
	{
		$var($ints, arr$, this->array);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int32_t v = arr$->get(i$);
			{
				$nc(dos)->writeInt(v);
			}
		}
	}
	return $nc(this->array)->length * 4;
}

CodePointTrie$Data32::CodePointTrie$Data32() {
}

$Class* CodePointTrie$Data32::load$($String* name, bool initialize) {
	$loadClass(CodePointTrie$Data32, name, initialize, &_CodePointTrie$Data32_ClassInfo_, allocate$CodePointTrie$Data32);
	return class$;
}

$Class* CodePointTrie$Data32::class$ = nullptr;

			} // util
		} // icu
	} // internal
} // jdk