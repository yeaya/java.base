#include <java/lang/invoke/MethodHandleImpl$ArrayAccess.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandleImpl$2.h>
#include <java/lang/invoke/MethodHandleImpl$ArrayAccessor.h>
#include <java/lang/invoke/MethodHandleImpl$Intrinsic.h>
#include <java/lang/invoke/MethodHandleImpl.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef ARRAY_LENGTH
#undef ARRAY_LOAD
#undef ARRAY_STORE
#undef GET
#undef GETTER_INDEX
#undef LENGTH
#undef LENGTH_INDEX
#undef OBJECT_ARRAY_GETTER
#undef OBJECT_ARRAY_LENGTH
#undef OBJECT_ARRAY_SETTER
#undef SET
#undef SETTER_INDEX

using $MethodHandleImpl$ArrayAccessArray = $Array<::java::lang::invoke::MethodHandleImpl$ArrayAccess>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandleImpl = ::java::lang::invoke::MethodHandleImpl;
using $MethodHandleImpl$2 = ::java::lang::invoke::MethodHandleImpl$2;
using $MethodHandleImpl$ArrayAccessor = ::java::lang::invoke::MethodHandleImpl$ArrayAccessor;
using $MethodHandleImpl$Intrinsic = ::java::lang::invoke::MethodHandleImpl$Intrinsic;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _MethodHandleImpl$ArrayAccess_FieldInfo_[] = {
	{"GET", "Ljava/lang/invoke/MethodHandleImpl$ArrayAccess;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MethodHandleImpl$ArrayAccess, GET)},
	{"SET", "Ljava/lang/invoke/MethodHandleImpl$ArrayAccess;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MethodHandleImpl$ArrayAccess, SET)},
	{"LENGTH", "Ljava/lang/invoke/MethodHandleImpl$ArrayAccess;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MethodHandleImpl$ArrayAccess, LENGTH)},
	{"$VALUES", "[Ljava/lang/invoke/MethodHandleImpl$ArrayAccess;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(MethodHandleImpl$ArrayAccess, $VALUES)},
	{}
};

$MethodInfo _MethodHandleImpl$ArrayAccess_MethodInfo_[] = {
	{"$values", "()[Ljava/lang/invoke/MethodHandleImpl$ArrayAccess;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$MethodHandleImpl$ArrayAccessArray*(*)()>(&MethodHandleImpl$ArrayAccess::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(MethodHandleImpl$ArrayAccess::*)($String*,int32_t)>(&MethodHandleImpl$ArrayAccess::init$))},
	{"cacheIndex", "(Ljava/lang/invoke/MethodHandleImpl$ArrayAccess;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(MethodHandleImpl$ArrayAccess*)>(&MethodHandleImpl$ArrayAccess::cacheIndex))},
	{"intrinsic", "(Ljava/lang/invoke/MethodHandleImpl$ArrayAccess;)Ljava/lang/invoke/MethodHandleImpl$Intrinsic;", nullptr, $STATIC, $method(static_cast<$MethodHandleImpl$Intrinsic*(*)(MethodHandleImpl$ArrayAccess*)>(&MethodHandleImpl$ArrayAccess::intrinsic))},
	{"objectAccessor", "(Ljava/lang/invoke/MethodHandleImpl$ArrayAccess;)Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC, $method(static_cast<$MethodHandle*(*)(MethodHandleImpl$ArrayAccess*)>(&MethodHandleImpl$ArrayAccess::objectAccessor))},
	{"opName", "(Ljava/lang/invoke/MethodHandleImpl$ArrayAccess;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)(MethodHandleImpl$ArrayAccess*)>(&MethodHandleImpl$ArrayAccess::opName))},
	{"valueOf", "(Ljava/lang/String;)Ljava/lang/invoke/MethodHandleImpl$ArrayAccess;", nullptr, $PUBLIC | $STATIC, $method(static_cast<MethodHandleImpl$ArrayAccess*(*)($String*)>(&MethodHandleImpl$ArrayAccess::valueOf))},
	{"values", "()[Ljava/lang/invoke/MethodHandleImpl$ArrayAccess;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandleImpl$ArrayAccessArray*(*)()>(&MethodHandleImpl$ArrayAccess::values))},
	{}
};

$InnerClassInfo _MethodHandleImpl$ArrayAccess_InnerClassesInfo_[] = {
	{"java.lang.invoke.MethodHandleImpl$ArrayAccess", "java.lang.invoke.MethodHandleImpl", "ArrayAccess", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _MethodHandleImpl$ArrayAccess_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"java.lang.invoke.MethodHandleImpl$ArrayAccess",
	"java.lang.Enum",
	nullptr,
	_MethodHandleImpl$ArrayAccess_FieldInfo_,
	_MethodHandleImpl$ArrayAccess_MethodInfo_,
	"Ljava/lang/Enum<Ljava/lang/invoke/MethodHandleImpl$ArrayAccess;>;",
	nullptr,
	_MethodHandleImpl$ArrayAccess_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.MethodHandleImpl"
};

$Object* allocate$MethodHandleImpl$ArrayAccess($Class* clazz) {
	return $of($alloc(MethodHandleImpl$ArrayAccess));
}

MethodHandleImpl$ArrayAccess* MethodHandleImpl$ArrayAccess::GET = nullptr;
MethodHandleImpl$ArrayAccess* MethodHandleImpl$ArrayAccess::SET = nullptr;
MethodHandleImpl$ArrayAccess* MethodHandleImpl$ArrayAccess::LENGTH = nullptr;
$MethodHandleImpl$ArrayAccessArray* MethodHandleImpl$ArrayAccess::$VALUES = nullptr;

$MethodHandleImpl$ArrayAccessArray* MethodHandleImpl$ArrayAccess::$values() {
	$init(MethodHandleImpl$ArrayAccess);
	return $new($MethodHandleImpl$ArrayAccessArray, {
		MethodHandleImpl$ArrayAccess::GET,
		MethodHandleImpl$ArrayAccess::SET,
		MethodHandleImpl$ArrayAccess::LENGTH
	});
}

$MethodHandleImpl$ArrayAccessArray* MethodHandleImpl$ArrayAccess::values() {
	$init(MethodHandleImpl$ArrayAccess);
	return $cast($MethodHandleImpl$ArrayAccessArray, MethodHandleImpl$ArrayAccess::$VALUES->clone());
}

MethodHandleImpl$ArrayAccess* MethodHandleImpl$ArrayAccess::valueOf($String* name) {
	$init(MethodHandleImpl$ArrayAccess);
	return $cast(MethodHandleImpl$ArrayAccess, $Enum::valueOf(MethodHandleImpl$ArrayAccess::class$, name));
}

void MethodHandleImpl$ArrayAccess::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

$String* MethodHandleImpl$ArrayAccess::opName(MethodHandleImpl$ArrayAccess* a) {
	$init(MethodHandleImpl$ArrayAccess);
	$useLocalCurrentObjectStackCache();
	$init($MethodHandleImpl$2);

	$var($String, var$0, nullptr)
	switch ($nc($MethodHandleImpl$2::$SwitchMap$java$lang$invoke$MethodHandleImpl$ArrayAccess)->get($nc((a))->ordinal())) {
	case 1:
		{
			$assign(var$0, "getElement"_s);
			break;
		}
	case 2:
		{
			$assign(var$0, "setElement"_s);
			break;
		}
	case 3:
		{
			$assign(var$0, "length"_s);
			break;
		}
	default:
		{
			$throw($($MethodHandleImpl::unmatchedArrayAccess(a)));
		}
	}
	return var$0;
}

$MethodHandle* MethodHandleImpl$ArrayAccess::objectAccessor(MethodHandleImpl$ArrayAccess* a) {
	$init(MethodHandleImpl$ArrayAccess);
	$useLocalCurrentObjectStackCache();
	$init($MethodHandleImpl$2);

	$var($MethodHandle, var$0, nullptr)
	switch ($nc($MethodHandleImpl$2::$SwitchMap$java$lang$invoke$MethodHandleImpl$ArrayAccess)->get($nc((a))->ordinal())) {
	case 1:
		{
			$init($MethodHandleImpl$ArrayAccessor);
			$assign(var$0, $MethodHandleImpl$ArrayAccessor::OBJECT_ARRAY_GETTER);
			break;
		}
	case 2:
		{
			$init($MethodHandleImpl$ArrayAccessor);
			$assign(var$0, $MethodHandleImpl$ArrayAccessor::OBJECT_ARRAY_SETTER);
			break;
		}
	case 3:
		{
			$init($MethodHandleImpl$ArrayAccessor);
			$assign(var$0, $MethodHandleImpl$ArrayAccessor::OBJECT_ARRAY_LENGTH);
			break;
		}
	default:
		{
			$throw($($MethodHandleImpl::unmatchedArrayAccess(a)));
		}
	}
	return var$0;
}

int32_t MethodHandleImpl$ArrayAccess::cacheIndex(MethodHandleImpl$ArrayAccess* a) {
	$init(MethodHandleImpl$ArrayAccess);
	$init($MethodHandleImpl$2);

	int32_t var$0 = 0;
	switch ($nc($MethodHandleImpl$2::$SwitchMap$java$lang$invoke$MethodHandleImpl$ArrayAccess)->get($nc((a))->ordinal())) {
	case 1:
		{
			var$0 = $MethodHandleImpl$ArrayAccessor::GETTER_INDEX;
			break;
		}
	case 2:
		{
			var$0 = $MethodHandleImpl$ArrayAccessor::SETTER_INDEX;
			break;
		}
	case 3:
		{
			var$0 = $MethodHandleImpl$ArrayAccessor::LENGTH_INDEX;
			break;
		}
	default:
		{
			$throw($($MethodHandleImpl::unmatchedArrayAccess(a)));
		}
	}
	return var$0;
}

$MethodHandleImpl$Intrinsic* MethodHandleImpl$ArrayAccess::intrinsic(MethodHandleImpl$ArrayAccess* a) {
	$init(MethodHandleImpl$ArrayAccess);
	$useLocalCurrentObjectStackCache();
	$init($MethodHandleImpl$2);

	$var($MethodHandleImpl$Intrinsic, var$0, nullptr)
	switch ($nc($MethodHandleImpl$2::$SwitchMap$java$lang$invoke$MethodHandleImpl$ArrayAccess)->get($nc((a))->ordinal())) {
	case 1:
		{
			$init($MethodHandleImpl$Intrinsic);
			$assign(var$0, $MethodHandleImpl$Intrinsic::ARRAY_LOAD);
			break;
		}
	case 2:
		{
			$init($MethodHandleImpl$Intrinsic);
			$assign(var$0, $MethodHandleImpl$Intrinsic::ARRAY_STORE);
			break;
		}
	case 3:
		{
			$init($MethodHandleImpl$Intrinsic);
			$assign(var$0, $MethodHandleImpl$Intrinsic::ARRAY_LENGTH);
			break;
		}
	default:
		{
			$throw($($MethodHandleImpl::unmatchedArrayAccess(a)));
		}
	}
	return var$0;
}

void clinit$MethodHandleImpl$ArrayAccess($Class* class$) {
	$assignStatic(MethodHandleImpl$ArrayAccess::GET, $new(MethodHandleImpl$ArrayAccess, "GET"_s, 0));
	$assignStatic(MethodHandleImpl$ArrayAccess::SET, $new(MethodHandleImpl$ArrayAccess, "SET"_s, 1));
	$assignStatic(MethodHandleImpl$ArrayAccess::LENGTH, $new(MethodHandleImpl$ArrayAccess, "LENGTH"_s, 2));
	$assignStatic(MethodHandleImpl$ArrayAccess::$VALUES, MethodHandleImpl$ArrayAccess::$values());
}

MethodHandleImpl$ArrayAccess::MethodHandleImpl$ArrayAccess() {
}

$Class* MethodHandleImpl$ArrayAccess::load$($String* name, bool initialize) {
	$loadClass(MethodHandleImpl$ArrayAccess, name, initialize, &_MethodHandleImpl$ArrayAccess_ClassInfo_, clinit$MethodHandleImpl$ArrayAccess, allocate$MethodHandleImpl$ArrayAccess);
	return class$;
}

$Class* MethodHandleImpl$ArrayAccess::class$ = nullptr;

		} // invoke
	} // lang
} // java