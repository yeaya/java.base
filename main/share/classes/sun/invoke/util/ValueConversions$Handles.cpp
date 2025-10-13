#include <sun/invoke/util/ValueConversions$Handles.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/TypeDescriptor$OfMethod.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/invoke/util/ValueConversions.h>
#include <jcpp.h>

#undef CAST_REFERENCE
#undef EMPTY
#undef IGNORE
#undef IMPL_LOOKUP
#undef THIS_CLASS
#undef TYPE

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $ValueConversions = ::sun::invoke::util::ValueConversions;

namespace sun {
	namespace invoke {
		namespace util {

$FieldInfo _ValueConversions$Handles_FieldInfo_[] = {
	{"CAST_REFERENCE", "Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC | $FINAL, $staticField(ValueConversions$Handles, CAST_REFERENCE)},
	{"IGNORE", "Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC | $FINAL, $staticField(ValueConversions$Handles, IGNORE)},
	{"EMPTY", "Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC | $FINAL, $staticField(ValueConversions$Handles, EMPTY)},
	{}
};

$MethodInfo _ValueConversions$Handles_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ValueConversions$Handles::*)()>(&ValueConversions$Handles::init$))},
	{}
};

$InnerClassInfo _ValueConversions$Handles_InnerClassesInfo_[] = {
	{"sun.invoke.util.ValueConversions$Handles", "sun.invoke.util.ValueConversions", "Handles", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ValueConversions$Handles_ClassInfo_ = {
	$ACC_SUPER,
	"sun.invoke.util.ValueConversions$Handles",
	"java.lang.Object",
	nullptr,
	_ValueConversions$Handles_FieldInfo_,
	_ValueConversions$Handles_MethodInfo_,
	nullptr,
	nullptr,
	_ValueConversions$Handles_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.invoke.util.ValueConversions"
};

$Object* allocate$ValueConversions$Handles($Class* clazz) {
	return $of($alloc(ValueConversions$Handles));
}

$MethodHandle* ValueConversions$Handles::CAST_REFERENCE = nullptr;
$MethodHandle* ValueConversions$Handles::IGNORE = nullptr;
$MethodHandle* ValueConversions$Handles::EMPTY = nullptr;

void ValueConversions$Handles::init$() {
}

void clinit$ValueConversions$Handles($Class* class$) {
	{
		try {
			$var($MethodType, idType, $MethodType::genericMethodType(1));
			$init($Void);
			$var($MethodType, ignoreType, $nc(idType)->changeReturnType($Void::TYPE));
			$init($ValueConversions);
			$load($Class);
			$assignStatic(ValueConversions$Handles::CAST_REFERENCE, $nc($ValueConversions::IMPL_LOOKUP)->findVirtual($Class::class$, "cast"_s, idType));
			$assignStatic(ValueConversions$Handles::IGNORE, $nc($ValueConversions::IMPL_LOOKUP)->findStatic($ValueConversions::THIS_CLASS, "ignore"_s, ignoreType));
			$assignStatic(ValueConversions$Handles::EMPTY, $nc($ValueConversions::IMPL_LOOKUP)->findStatic($ValueConversions::THIS_CLASS, "empty"_s, $($cast($MethodType, $nc(ignoreType)->dropParameterTypes(0, 1)))));
		} catch ($NoSuchMethodException&) {
			$var($ReflectiveOperationException, ex, $catch());
			$throw($($ValueConversions::newInternalError("uncaught exception"_s, ex)));
		} catch ($IllegalAccessException&) {
			$var($ReflectiveOperationException, ex, $catch());
			$throw($($ValueConversions::newInternalError("uncaught exception"_s, ex)));
		}
	}
}

ValueConversions$Handles::ValueConversions$Handles() {
}

$Class* ValueConversions$Handles::load$($String* name, bool initialize) {
	$loadClass(ValueConversions$Handles, name, initialize, &_ValueConversions$Handles_ClassInfo_, clinit$ValueConversions$Handles, allocate$ValueConversions$Handles);
	return class$;
}

$Class* ValueConversions$Handles::class$ = nullptr;

		} // util
	} // invoke
} // sun