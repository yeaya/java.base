#include <jdk/internal/util/Preconditions.h>

#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/Number.h>
#include <java/util/List.h>
#include <java/util/function/BiFunction.h>
#include <java/util/function/Function.h>
#include <jdk/internal/util/Preconditions$1.h>
#include <jcpp.h>

using $NumberArray = $Array<::java::lang::Number>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Number = ::java::lang::Number;
using $RuntimeException = ::java::lang::RuntimeException;
using $List = ::java::util::List;
using $BiFunction = ::java::util::function::BiFunction;
using $Function = ::java::util::function::Function;
using $Preconditions$1 = ::jdk::internal::util::Preconditions$1;

namespace jdk {
	namespace internal {
		namespace util {

$CompoundAttribute _Preconditions_MethodAnnotations_checkIndex5[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Preconditions_MethodAnnotations_checkIndex6[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$MethodInfo _Preconditions_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Preconditions::*)()>(&Preconditions::init$))},
	{"checkFromIndexSize", "(IIILjava/util/function/BiFunction;)I", "<X:Ljava/lang/RuntimeException;>(IIILjava/util/function/BiFunction<Ljava/lang/String;Ljava/util/List<Ljava/lang/Number;>;TX;>;)I", $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t,int32_t,$BiFunction*)>(&Preconditions::checkFromIndexSize))},
	{"checkFromIndexSize", "(JJJLjava/util/function/BiFunction;)J", "<X:Ljava/lang/RuntimeException;>(JJJLjava/util/function/BiFunction<Ljava/lang/String;Ljava/util/List<Ljava/lang/Number;>;TX;>;)J", $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t,int64_t,int64_t,$BiFunction*)>(&Preconditions::checkFromIndexSize))},
	{"checkFromToIndex", "(IIILjava/util/function/BiFunction;)I", "<X:Ljava/lang/RuntimeException;>(IIILjava/util/function/BiFunction<Ljava/lang/String;Ljava/util/List<Ljava/lang/Number;>;TX;>;)I", $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t,int32_t,$BiFunction*)>(&Preconditions::checkFromToIndex))},
	{"checkFromToIndex", "(JJJLjava/util/function/BiFunction;)J", "<X:Ljava/lang/RuntimeException;>(JJJLjava/util/function/BiFunction<Ljava/lang/String;Ljava/util/List<Ljava/lang/Number;>;TX;>;)J", $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t,int64_t,int64_t,$BiFunction*)>(&Preconditions::checkFromToIndex))},
	{"checkIndex", "(IILjava/util/function/BiFunction;)I", "<X:Ljava/lang/RuntimeException;>(IILjava/util/function/BiFunction<Ljava/lang/String;Ljava/util/List<Ljava/lang/Number;>;TX;>;)I", $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t,$BiFunction*)>(&Preconditions::checkIndex)), nullptr, nullptr, _Preconditions_MethodAnnotations_checkIndex5},
	{"checkIndex", "(JJLjava/util/function/BiFunction;)J", "<X:Ljava/lang/RuntimeException;>(JJLjava/util/function/BiFunction<Ljava/lang/String;Ljava/util/List<Ljava/lang/Number;>;TX;>;)J", $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t,int64_t,$BiFunction*)>(&Preconditions::checkIndex)), nullptr, nullptr, _Preconditions_MethodAnnotations_checkIndex6},
	{"outOfBounds", "(Ljava/util/function/BiFunction;Ljava/lang/String;[Ljava/lang/Number;)Ljava/lang/RuntimeException;", "(Ljava/util/function/BiFunction<Ljava/lang/String;Ljava/util/List<Ljava/lang/Number;>;+Ljava/lang/RuntimeException;>;Ljava/lang/String;[Ljava/lang/Number;)Ljava/lang/RuntimeException;", $PRIVATE | $STATIC | $TRANSIENT, $method(static_cast<$RuntimeException*(*)($BiFunction*,$String*,$NumberArray*)>(&Preconditions::outOfBounds))},
	{"outOfBoundsCheckFromIndexSize", "(Ljava/util/function/BiFunction;III)Ljava/lang/RuntimeException;", "(Ljava/util/function/BiFunction<Ljava/lang/String;Ljava/util/List<Ljava/lang/Number;>;+Ljava/lang/RuntimeException;>;III)Ljava/lang/RuntimeException;", $PRIVATE | $STATIC, $method(static_cast<$RuntimeException*(*)($BiFunction*,int32_t,int32_t,int32_t)>(&Preconditions::outOfBoundsCheckFromIndexSize))},
	{"outOfBoundsCheckFromIndexSize", "(Ljava/util/function/BiFunction;JJJ)Ljava/lang/RuntimeException;", "(Ljava/util/function/BiFunction<Ljava/lang/String;Ljava/util/List<Ljava/lang/Number;>;+Ljava/lang/RuntimeException;>;JJJ)Ljava/lang/RuntimeException;", $PRIVATE | $STATIC, $method(static_cast<$RuntimeException*(*)($BiFunction*,int64_t,int64_t,int64_t)>(&Preconditions::outOfBoundsCheckFromIndexSize))},
	{"outOfBoundsCheckFromToIndex", "(Ljava/util/function/BiFunction;III)Ljava/lang/RuntimeException;", "(Ljava/util/function/BiFunction<Ljava/lang/String;Ljava/util/List<Ljava/lang/Number;>;+Ljava/lang/RuntimeException;>;III)Ljava/lang/RuntimeException;", $PRIVATE | $STATIC, $method(static_cast<$RuntimeException*(*)($BiFunction*,int32_t,int32_t,int32_t)>(&Preconditions::outOfBoundsCheckFromToIndex))},
	{"outOfBoundsCheckFromToIndex", "(Ljava/util/function/BiFunction;JJJ)Ljava/lang/RuntimeException;", "(Ljava/util/function/BiFunction<Ljava/lang/String;Ljava/util/List<Ljava/lang/Number;>;+Ljava/lang/RuntimeException;>;JJJ)Ljava/lang/RuntimeException;", $PRIVATE | $STATIC, $method(static_cast<$RuntimeException*(*)($BiFunction*,int64_t,int64_t,int64_t)>(&Preconditions::outOfBoundsCheckFromToIndex))},
	{"outOfBoundsCheckIndex", "(Ljava/util/function/BiFunction;II)Ljava/lang/RuntimeException;", "(Ljava/util/function/BiFunction<Ljava/lang/String;Ljava/util/List<Ljava/lang/Number;>;+Ljava/lang/RuntimeException;>;II)Ljava/lang/RuntimeException;", $PRIVATE | $STATIC, $method(static_cast<$RuntimeException*(*)($BiFunction*,int32_t,int32_t)>(&Preconditions::outOfBoundsCheckIndex))},
	{"outOfBoundsCheckIndex", "(Ljava/util/function/BiFunction;JJ)Ljava/lang/RuntimeException;", "(Ljava/util/function/BiFunction<Ljava/lang/String;Ljava/util/List<Ljava/lang/Number;>;+Ljava/lang/RuntimeException;>;JJ)Ljava/lang/RuntimeException;", $PRIVATE | $STATIC, $method(static_cast<$RuntimeException*(*)($BiFunction*,int64_t,int64_t)>(&Preconditions::outOfBoundsCheckIndex))},
	{"outOfBoundsExceptionFormatter", "(Ljava/util/function/Function;)Ljava/util/function/BiFunction;", "<X:Ljava/lang/RuntimeException;>(Ljava/util/function/Function<Ljava/lang/String;TX;>;)Ljava/util/function/BiFunction<Ljava/lang/String;Ljava/util/List<Ljava/lang/Number;>;TX;>;", $PUBLIC | $STATIC, $method(static_cast<$BiFunction*(*)($Function*)>(&Preconditions::outOfBoundsExceptionFormatter))},
	{"outOfBoundsMessage", "(Ljava/lang/String;Ljava/util/List;)Ljava/lang/String;", "(Ljava/lang/String;Ljava/util/List<+Ljava/lang/Number;>;)Ljava/lang/String;", $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*,$List*)>(&Preconditions::outOfBoundsMessage))},
	{}
};

$InnerClassInfo _Preconditions_InnerClassesInfo_[] = {
	{"jdk.internal.util.Preconditions$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Preconditions_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.util.Preconditions",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Preconditions_MethodInfo_,
	nullptr,
	nullptr,
	_Preconditions_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.util.Preconditions$1"
};

$Object* allocate$Preconditions($Class* clazz) {
	return $of($alloc(Preconditions));
}

void Preconditions::init$() {
}

$RuntimeException* Preconditions::outOfBounds($BiFunction* oobef, $String* checkKind, $NumberArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($List, largs, $List::of(args));
	$var($RuntimeException, e, oobef == nullptr ? ($RuntimeException*)nullptr : $cast($RuntimeException, $nc(oobef)->apply(checkKind, largs)));
	return e == nullptr ? static_cast<$RuntimeException*>($new($IndexOutOfBoundsException, $(outOfBoundsMessage(checkKind, largs)))) : e;
}

$RuntimeException* Preconditions::outOfBoundsCheckIndex($BiFunction* oobe, int32_t index, int32_t length) {
	$useLocalCurrentObjectStackCache();
	return outOfBounds(oobe, "checkIndex"_s, $$new($NumberArray, {
		$(static_cast<$Number*>($Integer::valueOf(index))),
		$(static_cast<$Number*>($Integer::valueOf(length)))
	}));
}

$RuntimeException* Preconditions::outOfBoundsCheckFromToIndex($BiFunction* oobe, int32_t fromIndex, int32_t toIndex, int32_t length) {
	$useLocalCurrentObjectStackCache();
	return outOfBounds(oobe, "checkFromToIndex"_s, $$new($NumberArray, {
		$(static_cast<$Number*>($Integer::valueOf(fromIndex))),
		$(static_cast<$Number*>($Integer::valueOf(toIndex))),
		$(static_cast<$Number*>($Integer::valueOf(length)))
	}));
}

$RuntimeException* Preconditions::outOfBoundsCheckFromIndexSize($BiFunction* oobe, int32_t fromIndex, int32_t size, int32_t length) {
	$useLocalCurrentObjectStackCache();
	return outOfBounds(oobe, "checkFromIndexSize"_s, $$new($NumberArray, {
		$(static_cast<$Number*>($Integer::valueOf(fromIndex))),
		$(static_cast<$Number*>($Integer::valueOf(size))),
		$(static_cast<$Number*>($Integer::valueOf(length)))
	}));
}

$RuntimeException* Preconditions::outOfBoundsCheckIndex($BiFunction* oobe, int64_t index, int64_t length) {
	$useLocalCurrentObjectStackCache();
	return outOfBounds(oobe, "checkIndex"_s, $$new($NumberArray, {
		$(static_cast<$Number*>($Long::valueOf(index))),
		$(static_cast<$Number*>($Long::valueOf(length)))
	}));
}

$RuntimeException* Preconditions::outOfBoundsCheckFromToIndex($BiFunction* oobe, int64_t fromIndex, int64_t toIndex, int64_t length) {
	$useLocalCurrentObjectStackCache();
	return outOfBounds(oobe, "checkFromToIndex"_s, $$new($NumberArray, {
		$(static_cast<$Number*>($Long::valueOf(fromIndex))),
		$(static_cast<$Number*>($Long::valueOf(toIndex))),
		$(static_cast<$Number*>($Long::valueOf(length)))
	}));
}

$RuntimeException* Preconditions::outOfBoundsCheckFromIndexSize($BiFunction* oobe, int64_t fromIndex, int64_t size, int64_t length) {
	$useLocalCurrentObjectStackCache();
	return outOfBounds(oobe, "checkFromIndexSize"_s, $$new($NumberArray, {
		$(static_cast<$Number*>($Long::valueOf(fromIndex))),
		$(static_cast<$Number*>($Long::valueOf(size))),
		$(static_cast<$Number*>($Long::valueOf(length)))
	}));
}

$BiFunction* Preconditions::outOfBoundsExceptionFormatter($Function* f) {
	return $new($Preconditions$1, f);
}

$String* Preconditions::outOfBoundsMessage($String* checkKind, $List* args) {
	$useLocalCurrentObjectStackCache();
	if (checkKind == nullptr && args == nullptr) {
		return $String::format("Range check failed"_s, $$new($ObjectArray, 0));
	} else if (checkKind == nullptr) {
		return $String::format("Range check failed: %s"_s, $$new($ObjectArray, {$of(args)}));
	} else if (args == nullptr) {
		return $String::format("Range check failed: %s"_s, $$new($ObjectArray, {$of(checkKind)}));
	}
	int32_t argSize = 0;
	{
		$var($String, s9280$, checkKind);
		int32_t tmp9280$ = -1;
		switch ($nc(s9280$)->hashCode()) {
		case (int32_t)0xDFE238AA:
			{
				if (s9280$->equals("checkIndex"_s)) {
					tmp9280$ = 0;
				}
				break;
			}
		case 0x6DEF39E5:
			{
				if (s9280$->equals("checkFromToIndex"_s)) {
					tmp9280$ = 1;
				}
				break;
			}
		case 0x6E348341:
			{
				if (s9280$->equals("checkFromIndexSize"_s)) {
					tmp9280$ = 2;
				}
				break;
			}
		}
		switch (tmp9280$) {
		case 0:
			{
				argSize = 2;
				break;
			}
		case 1:
			{}
		case 2:
			{
				argSize = 3;
				break;
			}
		default:
			{}
		}
	}
	{
		$var($String, s9635$, ($nc(args)->size() != argSize) ? ""_s : checkKind);
		int32_t tmp9635$ = -1;
		switch ($nc(s9635$)->hashCode()) {
		case (int32_t)0xDFE238AA:
			{
				if (s9635$->equals("checkIndex"_s)) {
					tmp9635$ = 0;
				}
				break;
			}
		case 0x6DEF39E5:
			{
				if (s9635$->equals("checkFromToIndex"_s)) {
					tmp9635$ = 1;
				}
				break;
			}
		case 0x6E348341:
			{
				if (s9635$->equals("checkFromIndexSize"_s)) {
					tmp9635$ = 2;
				}
				break;
			}
		}
		switch (tmp9635$) {
		case 0:
			{
				return $String::format("Index %s out of bounds for length %s"_s, $$new($ObjectArray, {
					$($nc(args)->get(0)),
					$(args->get(1))
				}));
			}
		case 1:
			{
				return $String::format("Range [%s, %s) out of bounds for length %s"_s, $$new($ObjectArray, {
					$($nc(args)->get(0)),
					$(args->get(1)),
					$(args->get(2))
				}));
			}
		case 2:
			{
				return $String::format("Range [%s, %<s + %s) out of bounds for length %s"_s, $$new($ObjectArray, {
					$($nc(args)->get(0)),
					$(args->get(1)),
					$(args->get(2))
				}));
			}
		default:
			{
				return $String::format("Range check failed: %s %s"_s, $$new($ObjectArray, {
					$of(checkKind),
					$of(args)
				}));
			}
		}
	}
}

int32_t Preconditions::checkIndex(int32_t index, int32_t length, $BiFunction* oobef) {
	if (index < 0 || index >= length) {
		$throw($(outOfBoundsCheckIndex(oobef, index, length)));
	}
	return index;
}

int32_t Preconditions::checkFromToIndex(int32_t fromIndex, int32_t toIndex, int32_t length, $BiFunction* oobef) {
	if (fromIndex < 0 || fromIndex > toIndex || toIndex > length) {
		$throw($(outOfBoundsCheckFromToIndex(oobef, fromIndex, toIndex, length)));
	}
	return fromIndex;
}

int32_t Preconditions::checkFromIndexSize(int32_t fromIndex, int32_t size, int32_t length, $BiFunction* oobef) {
	if (((length | fromIndex) | size) < 0 || size > length - fromIndex) {
		$throw($(outOfBoundsCheckFromIndexSize(oobef, fromIndex, size, length)));
	}
	return fromIndex;
}

int64_t Preconditions::checkIndex(int64_t index, int64_t length, $BiFunction* oobef) {
	if (index < 0 || index >= length) {
		$throw($(outOfBoundsCheckIndex(oobef, index, length)));
	}
	return index;
}

int64_t Preconditions::checkFromToIndex(int64_t fromIndex, int64_t toIndex, int64_t length, $BiFunction* oobef) {
	if (fromIndex < 0 || fromIndex > toIndex || toIndex > length) {
		$throw($(outOfBoundsCheckFromToIndex(oobef, fromIndex, toIndex, length)));
	}
	return fromIndex;
}

int64_t Preconditions::checkFromIndexSize(int64_t fromIndex, int64_t size, int64_t length, $BiFunction* oobef) {
	if (((length | fromIndex) | size) < 0 || size > length - fromIndex) {
		$throw($(outOfBoundsCheckFromIndexSize(oobef, fromIndex, size, length)));
	}
	return fromIndex;
}

Preconditions::Preconditions() {
}

$Class* Preconditions::load$($String* name, bool initialize) {
	$loadClass(Preconditions, name, initialize, &_Preconditions_ClassInfo_, allocate$Preconditions);
	return class$;
}

$Class* Preconditions::class$ = nullptr;

		} // util
	} // internal
} // jdk