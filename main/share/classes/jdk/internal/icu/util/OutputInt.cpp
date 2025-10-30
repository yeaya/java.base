#include <jdk/internal/icu/util/OutputInt.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {

$FieldInfo _OutputInt_FieldInfo_[] = {
	{"value", "I", nullptr, $PUBLIC, $field(OutputInt, value)},
	{}
};

$MethodInfo _OutputInt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(OutputInt::*)()>(&OutputInt::init$))},
	{}
};

$ClassInfo _OutputInt_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.icu.util.OutputInt",
	"java.lang.Object",
	nullptr,
	_OutputInt_FieldInfo_,
	_OutputInt_MethodInfo_
};

$Object* allocate$OutputInt($Class* clazz) {
	return $of($alloc(OutputInt));
}

void OutputInt::init$() {
}

OutputInt::OutputInt() {
}

$Class* OutputInt::load$($String* name, bool initialize) {
	$loadClass(OutputInt, name, initialize, &_OutputInt_ClassInfo_, allocate$OutputInt);
	return class$;
}

$Class* OutputInt::class$ = nullptr;

			} // util
		} // icu
	} // internal
} // jdk