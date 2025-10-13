#include <java/lang/invoke/MethodHandleStatics.h>

#include <java/io/PrintStream.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/Integer.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/invoke/LambdaForm.h>
#include <java/lang/invoke/MemberName.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Properties.h>
#include <jdk/internal/misc/CDS.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef COMPILE_THRESHOLD
#undef CUSTOMIZE_THRESHOLD
#undef DEBUG_METHOD_HANDLE_NAMES
#undef DONT_INLINE_THRESHOLD
#undef DUMP_CLASS_FILES
#undef LOG_LF_COMPILATION_FAILURE
#undef MAX_ARITY
#undef PROFILE_GWT
#undef PROFILE_LEVEL
#undef TRACE_INTERPRETER
#undef TRACE_METHOD_LINKAGE
#undef TRACE_RESOLVE
#undef UNSAFE
#undef VAR_HANDLE_GUARDS
#undef VAR_HANDLE_IDENTITY_ADAPT

using $PrintStream = ::java::io::PrintStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $LambdaForm = ::java::lang::invoke::LambdaForm;
using $MemberName = ::java::lang::invoke::MemberName;
using $MethodType = ::java::lang::invoke::MethodType;
using $Properties = ::java::util::Properties;
using $CDS = ::jdk::internal::misc::CDS;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _MethodHandleStatics_FieldInfo_[] = {
	{"UNSAFE", "Ljdk/internal/misc/Unsafe;", nullptr, $STATIC | $FINAL, $staticField(MethodHandleStatics, UNSAFE)},
	{"DEBUG_METHOD_HANDLE_NAMES", "Z", nullptr, $STATIC | $FINAL, $staticField(MethodHandleStatics, DEBUG_METHOD_HANDLE_NAMES)},
	{"DUMP_CLASS_FILES", "Z", nullptr, $STATIC | $FINAL, $staticField(MethodHandleStatics, DUMP_CLASS_FILES)},
	{"TRACE_INTERPRETER", "Z", nullptr, $STATIC | $FINAL, $staticField(MethodHandleStatics, TRACE_INTERPRETER)},
	{"TRACE_METHOD_LINKAGE", "Z", nullptr, $STATIC | $FINAL, $staticField(MethodHandleStatics, TRACE_METHOD_LINKAGE)},
	{"TRACE_RESOLVE", "Z", nullptr, $STATIC | $FINAL, $staticField(MethodHandleStatics, TRACE_RESOLVE)},
	{"COMPILE_THRESHOLD", "I", nullptr, $STATIC | $FINAL, $staticField(MethodHandleStatics, COMPILE_THRESHOLD)},
	{"LOG_LF_COMPILATION_FAILURE", "Z", nullptr, $STATIC | $FINAL, $staticField(MethodHandleStatics, LOG_LF_COMPILATION_FAILURE)},
	{"DONT_INLINE_THRESHOLD", "I", nullptr, $STATIC | $FINAL, $staticField(MethodHandleStatics, DONT_INLINE_THRESHOLD)},
	{"PROFILE_LEVEL", "I", nullptr, $STATIC | $FINAL, $staticField(MethodHandleStatics, PROFILE_LEVEL)},
	{"PROFILE_GWT", "Z", nullptr, $STATIC | $FINAL, $staticField(MethodHandleStatics, PROFILE_GWT)},
	{"CUSTOMIZE_THRESHOLD", "I", nullptr, $STATIC | $FINAL, $staticField(MethodHandleStatics, CUSTOMIZE_THRESHOLD)},
	{"VAR_HANDLE_GUARDS", "Z", nullptr, $STATIC | $FINAL, $staticField(MethodHandleStatics, VAR_HANDLE_GUARDS)},
	{"MAX_ARITY", "I", nullptr, $STATIC | $FINAL, $staticField(MethodHandleStatics, MAX_ARITY)},
	{"VAR_HANDLE_IDENTITY_ADAPT", "Z", nullptr, $STATIC | $FINAL, $staticField(MethodHandleStatics, VAR_HANDLE_IDENTITY_ADAPT)},
	{}
};

$MethodInfo _MethodHandleStatics_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MethodHandleStatics::*)()>(&MethodHandleStatics::init$))},
	{"debugEnabled", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&MethodHandleStatics::debugEnabled))},
	{"message", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*,Object$*)>(&MethodHandleStatics::message))},
	{"message", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*,Object$*,Object$*)>(&MethodHandleStatics::message))},
	{"newIllegalArgumentException", "(Ljava/lang/String;)Ljava/lang/RuntimeException;", nullptr, $STATIC, $method(static_cast<$RuntimeException*(*)($String*)>(&MethodHandleStatics::newIllegalArgumentException))},
	{"newIllegalArgumentException", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/RuntimeException;", nullptr, $STATIC, $method(static_cast<$RuntimeException*(*)($String*,Object$*)>(&MethodHandleStatics::newIllegalArgumentException))},
	{"newIllegalArgumentException", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/RuntimeException;", nullptr, $STATIC, $method(static_cast<$RuntimeException*(*)($String*,Object$*,Object$*)>(&MethodHandleStatics::newIllegalArgumentException))},
	{"newIllegalStateException", "(Ljava/lang/String;)Ljava/lang/RuntimeException;", nullptr, $STATIC, $method(static_cast<$RuntimeException*(*)($String*)>(&MethodHandleStatics::newIllegalStateException))},
	{"newIllegalStateException", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/RuntimeException;", nullptr, $STATIC, $method(static_cast<$RuntimeException*(*)($String*,Object$*)>(&MethodHandleStatics::newIllegalStateException))},
	{"newInternalError", "(Ljava/lang/String;)Ljava/lang/InternalError;", nullptr, $STATIC, $method(static_cast<$InternalError*(*)($String*)>(&MethodHandleStatics::newInternalError))},
	{"newInternalError", "(Ljava/lang/String;Ljava/lang/Exception;)Ljava/lang/InternalError;", nullptr, $STATIC, $method(static_cast<$InternalError*(*)($String*,$Exception*)>(&MethodHandleStatics::newInternalError))},
	{"newInternalError", "(Ljava/lang/Exception;)Ljava/lang/InternalError;", nullptr, $STATIC, $method(static_cast<$InternalError*(*)($Exception*)>(&MethodHandleStatics::newInternalError))},
	{"rangeCheck1", "(II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&MethodHandleStatics::rangeCheck1))},
	{"rangeCheck2", "(III)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t,int32_t,int32_t)>(&MethodHandleStatics::rangeCheck2))},
	{"traceLambdaForm", "(Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/Class;Ljava/lang/invoke/MemberName;)V", "(Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/Class<*>;Ljava/lang/invoke/MemberName;)V", $STATIC, $method(static_cast<void(*)($String*,$MethodType*,$Class*,$MemberName*)>(&MethodHandleStatics::traceLambdaForm))},
	{"traceSpeciesType", "(Ljava/lang/String;Ljava/lang/Class;)V", "(Ljava/lang/String;Ljava/lang/Class<*>;)V", $STATIC, $method(static_cast<void(*)($String*,$Class*)>(&MethodHandleStatics::traceSpeciesType))},
	{"uncaughtException", "(Ljava/lang/Throwable;)Ljava/lang/Error;", nullptr, $STATIC, $method(static_cast<$Error*(*)($Throwable*)>(&MethodHandleStatics::uncaughtException))},
	{}
};

$ClassInfo _MethodHandleStatics_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.MethodHandleStatics",
	"java.lang.Object",
	nullptr,
	_MethodHandleStatics_FieldInfo_,
	_MethodHandleStatics_MethodInfo_
};

$Object* allocate$MethodHandleStatics($Class* clazz) {
	return $of($alloc(MethodHandleStatics));
}

$Unsafe* MethodHandleStatics::UNSAFE = nullptr;
bool MethodHandleStatics::DEBUG_METHOD_HANDLE_NAMES = false;
bool MethodHandleStatics::DUMP_CLASS_FILES = false;
bool MethodHandleStatics::TRACE_INTERPRETER = false;
bool MethodHandleStatics::TRACE_METHOD_LINKAGE = false;
bool MethodHandleStatics::TRACE_RESOLVE = false;
int32_t MethodHandleStatics::COMPILE_THRESHOLD = 0;
bool MethodHandleStatics::LOG_LF_COMPILATION_FAILURE = false;
int32_t MethodHandleStatics::DONT_INLINE_THRESHOLD = 0;
int32_t MethodHandleStatics::PROFILE_LEVEL = 0;
bool MethodHandleStatics::PROFILE_GWT = false;
int32_t MethodHandleStatics::CUSTOMIZE_THRESHOLD = 0;
bool MethodHandleStatics::VAR_HANDLE_GUARDS = false;
int32_t MethodHandleStatics::MAX_ARITY = 0;
bool MethodHandleStatics::VAR_HANDLE_IDENTITY_ADAPT = false;

void MethodHandleStatics::init$() {
}

bool MethodHandleStatics::debugEnabled() {
	$init(MethodHandleStatics);
	return ((((MethodHandleStatics::DEBUG_METHOD_HANDLE_NAMES | MethodHandleStatics::DUMP_CLASS_FILES) | MethodHandleStatics::TRACE_INTERPRETER) | MethodHandleStatics::TRACE_METHOD_LINKAGE) | MethodHandleStatics::LOG_LF_COMPILATION_FAILURE);
}

void MethodHandleStatics::traceLambdaForm($String* name, $MethodType* type, $Class* holder, $MemberName* resolvedMember) {
	$init(MethodHandleStatics);
	if (MethodHandleStatics::TRACE_RESOLVE) {
		$init($System);
		$var($String, var$1, $$str({"[LF_RESOLVE] "_s, $($nc(holder)->getName()), " "_s, name, " "_s}));
		$var($String, var$0, $$concat(var$1, $($LambdaForm::shortenSignature($($LambdaForm::basicTypeSignature(type))))));
		$nc($System::out)->println($$concat(var$0, (resolvedMember != nullptr ? " (success)"_s : " (fail)"_s)));
	}
	if ($CDS::isDumpingClassList()) {
		$var($String, var$2, "[LF_RESOLVE]"_s);
		$var($String, var$3, $nc(holder)->getName());
		$var($String, var$4, name);
		$CDS::traceLambdaFormInvoker(var$2, var$3, var$4, $($LambdaForm::shortenSignature($($LambdaForm::basicTypeSignature(type)))));
	}
}

void MethodHandleStatics::traceSpeciesType($String* cn, $Class* salvage) {
	$init(MethodHandleStatics);
	if (MethodHandleStatics::TRACE_RESOLVE) {
		$init($System);
		$nc($System::out)->println($$str({"[SPECIES_RESOLVE] "_s, cn, (salvage != nullptr ? " (salvaged)"_s : " (generated)"_s)}));
	}
	if ($CDS::isDumpingClassList()) {
		$CDS::traceSpeciesType("[SPECIES_RESOLVE]"_s, cn);
	}
}

$InternalError* MethodHandleStatics::newInternalError($String* message) {
	$init(MethodHandleStatics);
	return $new($InternalError, message);
}

$InternalError* MethodHandleStatics::newInternalError($String* message, $Exception* cause) {
	$init(MethodHandleStatics);
	return $new($InternalError, message, cause);
}

$InternalError* MethodHandleStatics::newInternalError($Exception* cause) {
	$init(MethodHandleStatics);
	return $new($InternalError, static_cast<$Throwable*>(cause));
}

$RuntimeException* MethodHandleStatics::newIllegalStateException($String* message) {
	$init(MethodHandleStatics);
	return $new($IllegalStateException, message);
}

$RuntimeException* MethodHandleStatics::newIllegalStateException($String* message, Object$* obj) {
	$init(MethodHandleStatics);
	return $new($IllegalStateException, $(MethodHandleStatics::message(message, obj)));
}

$RuntimeException* MethodHandleStatics::newIllegalArgumentException($String* message) {
	$init(MethodHandleStatics);
	return $new($IllegalArgumentException, message);
}

$RuntimeException* MethodHandleStatics::newIllegalArgumentException($String* message, Object$* obj) {
	$init(MethodHandleStatics);
	return $new($IllegalArgumentException, $(MethodHandleStatics::message(message, obj)));
}

$RuntimeException* MethodHandleStatics::newIllegalArgumentException($String* message, Object$* obj, Object$* obj2) {
	$init(MethodHandleStatics);
	return $new($IllegalArgumentException, $(MethodHandleStatics::message(message, obj, obj2)));
}

$Error* MethodHandleStatics::uncaughtException($Throwable* ex) {
	$init(MethodHandleStatics);
	if ($instanceOf($Error, ex)) {
		$throw($cast($Error, ex));
	}
	if ($instanceOf($RuntimeException, ex)) {
		$throw($cast($RuntimeException, ex));
	}
	$throwNew($InternalError, "uncaught exception"_s, ex);
	$shouldNotReachHere();
}

$String* MethodHandleStatics::message($String* message$renamed, Object$* obj) {
	$init(MethodHandleStatics);
	$var($String, message, message$renamed);
	if (obj != nullptr) {
		$assign(message, $str({message, ": "_s, obj}));
	}
	return message;
}

$String* MethodHandleStatics::message($String* message$renamed, Object$* obj, Object$* obj2) {
	$init(MethodHandleStatics);
	$var($String, message, message$renamed);
	if (obj != nullptr || obj2 != nullptr) {
		$assign(message, $str({message, ": "_s, obj, ", "_s, obj2}));
	}
	return message;
}

void MethodHandleStatics::rangeCheck2(int32_t start, int32_t end, int32_t size) {
	$init(MethodHandleStatics);
	if (0 > start || start > end || end > size) {
		$throwNew($IndexOutOfBoundsException, $$str({$$str(start), ".."_s, $$str(end)}));
	}
}

int32_t MethodHandleStatics::rangeCheck1(int32_t index, int32_t size) {
	$init(MethodHandleStatics);
	if (0 > index || index >= size) {
		$throwNew($IndexOutOfBoundsException, index);
	}
	return index;
}

void clinit$MethodHandleStatics($Class* class$) {
	$assignStatic(MethodHandleStatics::UNSAFE, $Unsafe::getUnsafe());
	{
		$var($Properties, props, $GetPropertyAction::privilegedGetProperties());
		MethodHandleStatics::DEBUG_METHOD_HANDLE_NAMES = $Boolean::parseBoolean($($nc(props)->getProperty("java.lang.invoke.MethodHandle.DEBUG_NAMES"_s)));
		MethodHandleStatics::DUMP_CLASS_FILES = $Boolean::parseBoolean($($nc(props)->getProperty("java.lang.invoke.MethodHandle.DUMP_CLASS_FILES"_s)));
		MethodHandleStatics::TRACE_INTERPRETER = $Boolean::parseBoolean($($nc(props)->getProperty("java.lang.invoke.MethodHandle.TRACE_INTERPRETER"_s)));
		MethodHandleStatics::TRACE_METHOD_LINKAGE = $Boolean::parseBoolean($($nc(props)->getProperty("java.lang.invoke.MethodHandle.TRACE_METHOD_LINKAGE"_s)));
		MethodHandleStatics::TRACE_RESOLVE = $Boolean::parseBoolean($($nc(props)->getProperty("java.lang.invoke.MethodHandle.TRACE_RESOLVE"_s)));
		MethodHandleStatics::COMPILE_THRESHOLD = $Integer::parseInt($($nc(props)->getProperty("java.lang.invoke.MethodHandle.COMPILE_THRESHOLD"_s, "0"_s)));
		MethodHandleStatics::LOG_LF_COMPILATION_FAILURE = $Boolean::parseBoolean($($nc(props)->getProperty("java.lang.invoke.MethodHandle.LOG_LF_COMPILATION_FAILURE"_s, "false"_s)));
		MethodHandleStatics::DONT_INLINE_THRESHOLD = $Integer::parseInt($($nc(props)->getProperty("java.lang.invoke.MethodHandle.DONT_INLINE_THRESHOLD"_s, "30"_s)));
		MethodHandleStatics::PROFILE_LEVEL = $Integer::parseInt($($nc(props)->getProperty("java.lang.invoke.MethodHandle.PROFILE_LEVEL"_s, "0"_s)));
		MethodHandleStatics::PROFILE_GWT = $Boolean::parseBoolean($($nc(props)->getProperty("java.lang.invoke.MethodHandle.PROFILE_GWT"_s, "true"_s)));
		MethodHandleStatics::CUSTOMIZE_THRESHOLD = $Integer::parseInt($($nc(props)->getProperty("java.lang.invoke.MethodHandle.CUSTOMIZE_THRESHOLD"_s, "127"_s)));
		MethodHandleStatics::VAR_HANDLE_GUARDS = $Boolean::parseBoolean($($nc(props)->getProperty("java.lang.invoke.VarHandle.VAR_HANDLE_GUARDS"_s, "true"_s)));
		MethodHandleStatics::VAR_HANDLE_IDENTITY_ADAPT = $Boolean::parseBoolean($($nc(props)->getProperty("java.lang.invoke.VarHandle.VAR_HANDLE_IDENTITY_ADAPT"_s, "false"_s)));
		MethodHandleStatics::MAX_ARITY = $Integer::parseInt($($nc(props)->getProperty("java.lang.invoke.MethodHandleImpl.MAX_ARITY"_s, "255"_s)));
		if (MethodHandleStatics::CUSTOMIZE_THRESHOLD < -1 || MethodHandleStatics::CUSTOMIZE_THRESHOLD > 127) {
			$throw($(MethodHandleStatics::newInternalError("CUSTOMIZE_THRESHOLD should be in [-1...127] range"_s)));
		}
	}
}

MethodHandleStatics::MethodHandleStatics() {
}

$Class* MethodHandleStatics::load$($String* name, bool initialize) {
	$loadClass(MethodHandleStatics, name, initialize, &_MethodHandleStatics_ClassInfo_, clinit$MethodHandleStatics, allocate$MethodHandleStatics);
	return class$;
}

$Class* MethodHandleStatics::class$ = nullptr;

		} // invoke
	} // lang
} // java