#include <GetCharsOverLength.h>

#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

using $intArray2 = $Array<int32_t, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringBuffer = ::java::lang::StringBuffer;

$MethodInfo _GetCharsOverLength_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(GetCharsOverLength, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(GetCharsOverLength, main, void, $StringArray*)},
	{}
};

$ClassInfo _GetCharsOverLength_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"GetCharsOverLength",
	"java.lang.Object",
	nullptr,
	nullptr,
	_GetCharsOverLength_MethodInfo_
};

$Object* allocate$GetCharsOverLength($Class* clazz) {
	return $of($alloc(GetCharsOverLength));
}

void GetCharsOverLength::init$() {
}

void GetCharsOverLength::main($StringArray* argv) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuffer, sb, $new($StringBuffer, "sample string buffer"_s));
	$var($chars, dst, $new($chars, 30));
	bool failed = false;
	$var($intArray2, a, $new($intArray2, {
		$$new($ints, {
			0,
			0,
			dst->length + 1
		}),
		$$new($ints, {
			0,
			0,
			dst->length + 2
		}),
		$$new($ints, {
			0,
			0,
			dst->length + 20
		}),
		$$new($ints, {
			5,
			5,
			dst->length + 1
		}),
		$$new($ints, {
			5,
			5,
			dst->length + 2
		}),
		$$new($ints, {
			5,
			5,
			dst->length + 20
		})
	}));
	for (int32_t i = 0; i < a->length; ++i) {
		try {
			sb->getChars($nc(a->get(i))->get(0), $nc(a->get(i))->get(1), dst, $nc(a->get(i))->get(2));
			$throwNew($RuntimeException, "Bounds test failed"_s);
		} catch ($IndexOutOfBoundsException& iobe) {
		}
	}
}

GetCharsOverLength::GetCharsOverLength() {
}

$Class* GetCharsOverLength::load$($String* name, bool initialize) {
	$loadClass(GetCharsOverLength, name, initialize, &_GetCharsOverLength_ClassInfo_, allocate$GetCharsOverLength);
	return class$;
}

$Class* GetCharsOverLength::class$ = nullptr;