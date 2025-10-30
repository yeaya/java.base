#include <jdk/internal/platform/CgroupSubsystemController.h>

#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/io/UncheckedIOException.h>
#include <java/lang/CharSequence.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/math/BigInteger.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/util/ArrayList.h>
#include <java/util/Comparator.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Optional.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/platform/CgroupUtil.h>
#include <jcpp.h>

#undef EMPTY_STR
#undef MAX_VALUE

using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $BigInteger = ::java::math::BigInteger;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $ArrayList = ::java::util::ArrayList;
using $Comparator = ::java::util::Comparator;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Optional = ::java::util::Optional;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $BaseStream = ::java::util::stream::BaseStream;
using $Stream = ::java::util::stream::Stream;
using $CgroupUtil = ::jdk::internal::platform::CgroupUtil;

namespace jdk {
	namespace internal {
		namespace platform {

class CgroupSubsystemController$$Lambda$lambda$getLongEntry$0 : public $Function {
	$class(CgroupSubsystemController$$Lambda$lambda$getLongEntry$0, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* line) override {
		 return $of(CgroupSubsystemController::lambda$getLongEntry$0($cast($String, line)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CgroupSubsystemController$$Lambda$lambda$getLongEntry$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CgroupSubsystemController$$Lambda$lambda$getLongEntry$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CgroupSubsystemController$$Lambda$lambda$getLongEntry$0::*)()>(&CgroupSubsystemController$$Lambda$lambda$getLongEntry$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo CgroupSubsystemController$$Lambda$lambda$getLongEntry$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.platform.CgroupSubsystemController$$Lambda$lambda$getLongEntry$0",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* CgroupSubsystemController$$Lambda$lambda$getLongEntry$0::load$($String* name, bool initialize) {
	$loadClass(CgroupSubsystemController$$Lambda$lambda$getLongEntry$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CgroupSubsystemController$$Lambda$lambda$getLongEntry$0::class$ = nullptr;

class CgroupSubsystemController$$Lambda$lambda$getLongEntry$1$1 : public $Predicate {
	$class(CgroupSubsystemController$$Lambda$lambda$getLongEntry$1$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$($String* entryname) {
		$set(this, entryname, entryname);
	}
	virtual bool test(Object$* line) override {
		 return CgroupSubsystemController::lambda$getLongEntry$1(entryname, $cast($StringArray, line));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CgroupSubsystemController$$Lambda$lambda$getLongEntry$1$1>());
	}
	$String* entryname = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CgroupSubsystemController$$Lambda$lambda$getLongEntry$1$1::fieldInfos[2] = {
	{"entryname", "Ljava/lang/String;", nullptr, $PUBLIC, $field(CgroupSubsystemController$$Lambda$lambda$getLongEntry$1$1, entryname)},
	{}
};
$MethodInfo CgroupSubsystemController$$Lambda$lambda$getLongEntry$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CgroupSubsystemController$$Lambda$lambda$getLongEntry$1$1::*)($String*)>(&CgroupSubsystemController$$Lambda$lambda$getLongEntry$1$1::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo CgroupSubsystemController$$Lambda$lambda$getLongEntry$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.platform.CgroupSubsystemController$$Lambda$lambda$getLongEntry$1$1",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* CgroupSubsystemController$$Lambda$lambda$getLongEntry$1$1::load$($String* name, bool initialize) {
	$loadClass(CgroupSubsystemController$$Lambda$lambda$getLongEntry$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CgroupSubsystemController$$Lambda$lambda$getLongEntry$1$1::class$ = nullptr;

class CgroupSubsystemController$$Lambda$lambda$getLongEntry$2$2 : public $Function {
	$class(CgroupSubsystemController$$Lambda$lambda$getLongEntry$2$2, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* line) override {
		 return $of(CgroupSubsystemController::lambda$getLongEntry$2($cast($StringArray, line)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CgroupSubsystemController$$Lambda$lambda$getLongEntry$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CgroupSubsystemController$$Lambda$lambda$getLongEntry$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CgroupSubsystemController$$Lambda$lambda$getLongEntry$2$2::*)()>(&CgroupSubsystemController$$Lambda$lambda$getLongEntry$2$2::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo CgroupSubsystemController$$Lambda$lambda$getLongEntry$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.platform.CgroupSubsystemController$$Lambda$lambda$getLongEntry$2$2",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* CgroupSubsystemController$$Lambda$lambda$getLongEntry$2$2::load$($String* name, bool initialize) {
	$loadClass(CgroupSubsystemController$$Lambda$lambda$getLongEntry$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CgroupSubsystemController$$Lambda$lambda$getLongEntry$2$2::class$ = nullptr;

$FieldInfo _CgroupSubsystemController_FieldInfo_[] = {
	{"EMPTY_STR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CgroupSubsystemController, EMPTY_STR)},
	{}
};

$MethodInfo _CgroupSubsystemController_MethodInfo_[] = {
	{"convertStringToLong", "(Ljava/lang/String;JJ)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)($String*,int64_t,int64_t)>(&CgroupSubsystemController::convertStringToLong))},
	{"getDoubleValue", "(Ljdk/internal/platform/CgroupSubsystemController;Ljava/lang/String;D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(CgroupSubsystemController*,$String*,double)>(&CgroupSubsystemController::getDoubleValue))},
	{"getLongEntry", "(Ljdk/internal/platform/CgroupSubsystemController;Ljava/lang/String;Ljava/lang/String;J)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(CgroupSubsystemController*,$String*,$String*,int64_t)>(&CgroupSubsystemController::getLongEntry))},
	{"getLongValue", "(Ljdk/internal/platform/CgroupSubsystemController;Ljava/lang/String;Ljava/util/function/Function;J)J", "(Ljdk/internal/platform/CgroupSubsystemController;Ljava/lang/String;Ljava/util/function/Function<Ljava/lang/String;Ljava/lang/Long;>;J)J", $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(CgroupSubsystemController*,$String*,$Function*,int64_t)>(&CgroupSubsystemController::getLongValue))},
	{"getLongValueMatchingLine", "(Ljdk/internal/platform/CgroupSubsystemController;Ljava/lang/String;Ljava/lang/String;Ljava/util/function/Function;J)J", "(Ljdk/internal/platform/CgroupSubsystemController;Ljava/lang/String;Ljava/lang/String;Ljava/util/function/Function<Ljava/lang/String;Ljava/lang/Long;>;J)J", $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(CgroupSubsystemController*,$String*,$String*,$Function*,int64_t)>(&CgroupSubsystemController::getLongValueMatchingLine))},
	{"getStringValue", "(Ljdk/internal/platform/CgroupSubsystemController;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(CgroupSubsystemController*,$String*)>(&CgroupSubsystemController::getStringValue))},
	{"lambda$getLongEntry$0", "(Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$StringArray*(*)($String*)>(&CgroupSubsystemController::lambda$getLongEntry$0))},
	{"lambda$getLongEntry$1", "(Ljava/lang/String;[Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($String*,$StringArray*)>(&CgroupSubsystemController::lambda$getLongEntry$1))},
	{"lambda$getLongEntry$2", "([Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($StringArray*)>(&CgroupSubsystemController::lambda$getLongEntry$2))},
	{"path", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"stringRangeToIntArray", "(Ljava/lang/String;)[I", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ints*(*)($String*)>(&CgroupSubsystemController::stringRangeToIntArray))},
	{}
};

$ClassInfo _CgroupSubsystemController_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.platform.CgroupSubsystemController",
	nullptr,
	nullptr,
	_CgroupSubsystemController_FieldInfo_,
	_CgroupSubsystemController_MethodInfo_
};

$Object* allocate$CgroupSubsystemController($Class* clazz) {
	return $of($alloc(CgroupSubsystemController));
}

$String* CgroupSubsystemController::EMPTY_STR = nullptr;

$String* CgroupSubsystemController::getStringValue(CgroupSubsystemController* controller, $String* param) {
	$init(CgroupSubsystemController);
	if (controller == nullptr) {
		return nullptr;
	}
	try {
		return $CgroupUtil::readStringValue(controller, param);
	} catch ($IOException& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

int64_t CgroupSubsystemController::getLongValueMatchingLine(CgroupSubsystemController* controller, $String* param, $String* match, $Function* conversion, int64_t defaultRetval) {
	$init(CgroupSubsystemController);
	$useLocalCurrentObjectStackCache();
	int64_t retval = defaultRetval;
	if (controller == nullptr) {
		return retval;
	}
	try {
		$var($Path, filePath, $Paths::get($($nc(controller)->path()), $$new($StringArray, {param})));
		$var($List, lines, $CgroupUtil::readAllLinesPrivileged(filePath));
		{
			$var($Iterator, i$, $nc(lines)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($String, line, $cast($String, i$->next()));
				{
					if ($nc(line)->startsWith(match)) {
						retval = $nc(($cast($Long, $($nc(conversion)->apply(line)))))->longValue();
						break;
					}
				}
			}
		}
	} catch ($IOException& e) {
	}
	return retval;
}

int64_t CgroupSubsystemController::getLongValue(CgroupSubsystemController* controller, $String* param, $Function* conversion, int64_t defaultRetval) {
	$init(CgroupSubsystemController);
	$useLocalCurrentObjectStackCache();
	$var($String, strval, getStringValue(controller, param));
	if (strval == nullptr) {
		return defaultRetval;
	}
	return $nc(($cast($Long, $($nc(conversion)->apply(strval)))))->longValue();
}

double CgroupSubsystemController::getDoubleValue(CgroupSubsystemController* controller, $String* param, double defaultRetval) {
	$init(CgroupSubsystemController);
	$var($String, strval, getStringValue(controller, param));
	if (strval == nullptr) {
		return defaultRetval;
	}
	double retval = $Double::parseDouble(strval);
	return retval;
}

int64_t CgroupSubsystemController::getLongEntry(CgroupSubsystemController* controller, $String* param, $String* entryname, int64_t defaultRetval) {
	$init(CgroupSubsystemController);
	$useLocalCurrentObjectStackCache();
	if (controller == nullptr) {
		return defaultRetval;
	}
	try {
		$var($Stream, lines, $CgroupUtil::readFilePrivileged($($Paths::get($($nc(controller)->path()), $$new($StringArray, {param})))));
		{
			$var($Throwable, var$0, nullptr);
			int64_t var$2 = 0;
			bool return$1 = false;
			try {
				try {
					$var($Optional, result, $nc($($nc($($nc($($nc(lines)->map(static_cast<$Function*>($$new(CgroupSubsystemController$$Lambda$lambda$getLongEntry$0)))))->filter(static_cast<$Predicate*>($$new(CgroupSubsystemController$$Lambda$lambda$getLongEntry$1$1, entryname)))))->map(static_cast<$Function*>($$new(CgroupSubsystemController$$Lambda$lambda$getLongEntry$2$2)))))->findFirst());
					var$2 = $nc(result)->isPresent() ? $Long::parseLong($cast($String, $($nc(result)->get()))) : defaultRetval;
					return$1 = true;
					goto $finally;
				} catch ($Throwable& t$) {
					if (lines != nullptr) {
						try {
							lines->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} $finally: {
				if (lines != nullptr) {
					lines->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	} catch ($UncheckedIOException& e) {
		return defaultRetval;
	} catch ($IOException& e) {
		return defaultRetval;
	}
	$shouldNotReachHere();
}

$ints* CgroupSubsystemController::stringRangeToIntArray($String* range) {
	$init(CgroupSubsystemController);
	$useLocalCurrentObjectStackCache();
	if (range == nullptr || $nc(CgroupSubsystemController::EMPTY_STR)->equals(range)) {
		return nullptr;
	}
	$var($ArrayList, results, $new($ArrayList));
	$var($StringArray, strs, $nc(range)->split(","_s));
	{
		$var($StringArray, arr$, strs);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, str, arr$->get(i$));
			{
				if ($nc(str)->contains("-"_s)) {
					$var($StringArray, lohi, str->split("-"_s));
					if (lohi->length != 2) {
						continue;
					}
					int32_t lo = $Integer::parseInt(lohi->get(0));
					int32_t hi = $Integer::parseInt(lohi->get(1));
					for (int32_t i = lo; i <= hi; ++i) {
						results->add($($Integer::valueOf(i)));
					}
				} else {
					results->add($($Integer::valueOf($Integer::parseInt(str))));
				}
			}
		}
	}
	results->sort(nullptr);
	$var($ints, ints, $new($ints, results->size()));
	int32_t i = 0;
	{
		$var($Iterator, i$, results->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Integer, n, $cast($Integer, i$->next()));
			{
				ints->set(i++, $nc(n)->intValue());
			}
		}
	}
	return ints;
}

int64_t CgroupSubsystemController::convertStringToLong($String* strval, int64_t overflowRetval, int64_t defaultRetval) {
	$init(CgroupSubsystemController);
	$useLocalCurrentObjectStackCache();
	int64_t retval = defaultRetval;
	if (strval == nullptr) {
		return retval;
	}
	try {
		retval = $Long::parseLong(strval);
	} catch ($NumberFormatException& e) {
		$var($BigInteger, b, $new($BigInteger, strval));
		if (b->compareTo($($BigInteger::valueOf($Long::MAX_VALUE))) > 0) {
			return overflowRetval;
		}
	}
	return retval;
}

$String* CgroupSubsystemController::lambda$getLongEntry$2($StringArray* line) {
	$init(CgroupSubsystemController);
	return $nc(line)->get(1);
}

bool CgroupSubsystemController::lambda$getLongEntry$1($String* entryname, $StringArray* line) {
	$init(CgroupSubsystemController);
	return ($nc(line)->length == 2 && $nc(line->get(0))->equals(entryname));
}

$StringArray* CgroupSubsystemController::lambda$getLongEntry$0($String* line) {
	$init(CgroupSubsystemController);
	return $nc(line)->split(" "_s);
}

void clinit$CgroupSubsystemController($Class* class$) {
	$assignStatic(CgroupSubsystemController::EMPTY_STR, ""_s);
}

$Class* CgroupSubsystemController::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CgroupSubsystemController$$Lambda$lambda$getLongEntry$0::classInfo$.name)) {
			return CgroupSubsystemController$$Lambda$lambda$getLongEntry$0::load$(name, initialize);
		}
		if (name->equals(CgroupSubsystemController$$Lambda$lambda$getLongEntry$1$1::classInfo$.name)) {
			return CgroupSubsystemController$$Lambda$lambda$getLongEntry$1$1::load$(name, initialize);
		}
		if (name->equals(CgroupSubsystemController$$Lambda$lambda$getLongEntry$2$2::classInfo$.name)) {
			return CgroupSubsystemController$$Lambda$lambda$getLongEntry$2$2::load$(name, initialize);
		}
	}
	$loadClass(CgroupSubsystemController, name, initialize, &_CgroupSubsystemController_ClassInfo_, clinit$CgroupSubsystemController, allocate$CgroupSubsystemController);
	return class$;
}

$Class* CgroupSubsystemController::class$ = nullptr;

		} // platform
	} // internal
} // jdk