#include <java/lang/invoke/LambdaForm.h>

#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Error.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InternalError.h>
#include <java/lang/Math.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/invoke/BoundMethodHandle.h>
#include <java/lang/invoke/InvokerBytecodeGenerator$BytecodeGenerationException.h>
#include <java/lang/invoke/InvokerBytecodeGenerator.h>
#include <java/lang/invoke/LambdaForm$1.h>
#include <java/lang/invoke/LambdaForm$BasicType.h>
#include <java/lang/invoke/LambdaForm$Holder.h>
#include <java/lang/invoke/LambdaForm$Kind.h>
#include <java/lang/invoke/LambdaForm$Name.h>
#include <java/lang/invoke/LambdaForm$NamedFunction.h>
#include <java/lang/invoke/LambdaFormEditor.h>
#include <java/lang/invoke/MemberName$Factory.h>
#include <java/lang/invoke/MemberName.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandleImpl$Intrinsic.h>
#include <java/lang/invoke/MethodHandleImpl.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/MethodTypeForm.h>
#include <java/lang/invoke/SimpleMethodHandle.h>
#include <java/lang/invoke/TypeDescriptor$OfField.h>
#include <java/util/Arrays.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/perf/PerfCounter.h>
#include <sun/invoke/util/Wrapper.h>
#include <jcpp.h>

#undef ARG_TYPES
#undef ARG_TYPE_LIMIT
#undef COMPILE_THRESHOLD
#undef DEBUG_NAMES
#undef DEBUG_NAME_COUNTERS
#undef GENERIC
#undef IDENTITY
#undef IMPL_NAMES
#undef INT
#undef INTERNED_ARGUMENTS
#undef INTERNED_ARGUMENT_LIMIT
#undef LAST_RESULT
#undef LF_FAILED
#undef LF_INTERPRET
#undef LOG_LF_COMPILATION_FAILURE
#undef L_TYPE
#undef MAX_JVM_ARITY
#undef MAX_MH_INVOKER_ARITY
#undef MIN_RUN
#undef NO_CHAR
#undef POS_COLLECT_ARGS
#undef POS_TABLE_SWITCH
#undef POS_UNBOX_RESULT
#undef TRACE_INTERPRETER
#undef TYPE
#undef TYPE_LIMIT
#undef UNSAFE
#undef VOID_RESULT
#undef V_TYPE
#undef ZERO

using $IntegerArray = $Array<::java::lang::Integer>;
using $LambdaForm$BasicTypeArray = $Array<::java::lang::invoke::LambdaForm$BasicType>;
using $LambdaForm$NameArray = $Array<::java::lang::invoke::LambdaForm$Name>;
using $LambdaForm$NamedFunctionArray = $Array<::java::lang::invoke::LambdaForm$NamedFunction>;
using $LambdaFormArray = $Array<::java::lang::invoke::LambdaForm>;
using $LambdaForm$NameArray2 = $Array<::java::lang::invoke::LambdaForm$Name, 2>;
using $PrintStream = ::java::io::PrintStream;
using $AssertionError = ::java::lang::AssertionError;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Void = ::java::lang::Void;
using $BoundMethodHandle = ::java::lang::invoke::BoundMethodHandle;
using $InvokerBytecodeGenerator = ::java::lang::invoke::InvokerBytecodeGenerator;
using $InvokerBytecodeGenerator$BytecodeGenerationException = ::java::lang::invoke::InvokerBytecodeGenerator$BytecodeGenerationException;
using $LambdaForm$1 = ::java::lang::invoke::LambdaForm$1;
using $LambdaForm$BasicType = ::java::lang::invoke::LambdaForm$BasicType;
using $LambdaForm$Holder = ::java::lang::invoke::LambdaForm$Holder;
using $LambdaForm$Kind = ::java::lang::invoke::LambdaForm$Kind;
using $LambdaForm$Name = ::java::lang::invoke::LambdaForm$Name;
using $LambdaForm$NamedFunction = ::java::lang::invoke::LambdaForm$NamedFunction;
using $LambdaFormEditor = ::java::lang::invoke::LambdaFormEditor;
using $MemberName = ::java::lang::invoke::MemberName;
using $MemberName$Factory = ::java::lang::invoke::MemberName$Factory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandleImpl = ::java::lang::invoke::MethodHandleImpl;
using $MethodHandleImpl$Intrinsic = ::java::lang::invoke::MethodHandleImpl$Intrinsic;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodType = ::java::lang::invoke::MethodType;
using $MethodTypeForm = ::java::lang::invoke::MethodTypeForm;
using $SimpleMethodHandle = ::java::lang::invoke::SimpleMethodHandle;
using $Arrays = ::java::util::Arrays;
using $HashMap = ::java::util::HashMap;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $PerfCounter = ::jdk::internal::perf::PerfCounter;
using $Wrapper = ::sun::invoke::util::Wrapper;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _LambdaForm_FieldAnnotations_names[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$CompoundAttribute _LambdaForm_FieldAnnotations_LF_FAILED[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$CompoundAttribute _LambdaForm_FieldAnnotations_LF_identity[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$CompoundAttribute _LambdaForm_FieldAnnotations_LF_zero[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$CompoundAttribute _LambdaForm_FieldAnnotations_NF_identity[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$CompoundAttribute _LambdaForm_FieldAnnotations_NF_zero[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$CompoundAttribute _LambdaForm_MethodAnnotations_interpretName45[] = {
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{"Ljdk/internal/vm/annotation/DontInline;", nullptr},
	{}
};

$CompoundAttribute _LambdaForm_MethodAnnotations_interpretWithArguments46[] = {
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{"Ljdk/internal/vm/annotation/DontInline;", nullptr},
	{}
};

$FieldInfo _LambdaForm_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LambdaForm, $assertionsDisabled)},
	{"arity", "I", nullptr, $FINAL, $field(LambdaForm, arity$)},
	{"result", "I", nullptr, $FINAL, $field(LambdaForm, result)},
	{"forceInline", "Z", nullptr, $FINAL, $field(LambdaForm, forceInline)},
	{"customized", "Ljava/lang/invoke/MethodHandle;", nullptr, $FINAL, $field(LambdaForm, customized)},
	{"names", "[Ljava/lang/invoke/LambdaForm$Name;", nullptr, $FINAL, $field(LambdaForm, names), _LambdaForm_FieldAnnotations_names},
	{"kind", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $FINAL, $field(LambdaForm, kind)},
	{"vmentry", "Ljava/lang/invoke/MemberName;", nullptr, 0, $field(LambdaForm, vmentry)},
	{"isCompiled", "Z", nullptr, $PRIVATE, $field(LambdaForm, isCompiled)},
	{"transformCache", "Ljava/lang/Object;", nullptr, $VOLATILE, $field(LambdaForm, transformCache)},
	{"VOID_RESULT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LambdaForm, VOID_RESULT)},
	{"LAST_RESULT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LambdaForm, LAST_RESULT)},
	{"LF_FAILED", "Ljdk/internal/perf/PerfCounter;", nullptr, $PRIVATE | $STATIC, $staticField(LambdaForm, LF_FAILED), _LambdaForm_FieldAnnotations_LF_FAILED},
	{"COMPILE_THRESHOLD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LambdaForm, COMPILE_THRESHOLD)},
	{"invocationCounter", "I", nullptr, $PRIVATE, $field(LambdaForm, invocationCounter)},
	{"INTERNED_ARGUMENT_LIMIT", "I", nullptr, $STATIC | $FINAL, $constField(LambdaForm, INTERNED_ARGUMENT_LIMIT)},
	{"INTERNED_ARGUMENTS", "[[Ljava/lang/invoke/LambdaForm$Name;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LambdaForm, INTERNED_ARGUMENTS)},
	{"IMPL_NAMES", "Ljava/lang/invoke/MemberName$Factory;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LambdaForm, IMPL_NAMES)},
	{"LF_identity", "[Ljava/lang/invoke/LambdaForm;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LambdaForm, LF_identity), _LambdaForm_FieldAnnotations_LF_identity},
	{"LF_zero", "[Ljava/lang/invoke/LambdaForm;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LambdaForm, LF_zero), _LambdaForm_FieldAnnotations_LF_zero},
	{"NF_identity", "[Ljava/lang/invoke/LambdaForm$NamedFunction;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LambdaForm, NF_identity), _LambdaForm_FieldAnnotations_NF_identity},
	{"NF_zero", "[Ljava/lang/invoke/LambdaForm$NamedFunction;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LambdaForm, NF_zero), _LambdaForm_FieldAnnotations_NF_zero},
	{"createFormsLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LambdaForm, createFormsLock)},
	{"DEBUG_NAME_COUNTERS", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(LambdaForm, DEBUG_NAME_COUNTERS)},
	{"DEBUG_NAMES", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/invoke/LambdaForm;Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(LambdaForm, DEBUG_NAMES)},
	{"TRACE_INTERPRETER", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LambdaForm, TRACE_INTERPRETER)},
	{}
};

$MethodInfo _LambdaForm_MethodInfo_[] = {
	{"<init>", "(I[Ljava/lang/invoke/LambdaForm$Name;I)V", nullptr, 0, $method(static_cast<void(LambdaForm::*)(int32_t,$LambdaForm$NameArray*,int32_t)>(&LambdaForm::init$))},
	{"<init>", "(I[Ljava/lang/invoke/LambdaForm$Name;ILjava/lang/invoke/LambdaForm$Kind;)V", nullptr, 0, $method(static_cast<void(LambdaForm::*)(int32_t,$LambdaForm$NameArray*,int32_t,$LambdaForm$Kind*)>(&LambdaForm::init$))},
	{"<init>", "(I[Ljava/lang/invoke/LambdaForm$Name;IZLjava/lang/invoke/MethodHandle;)V", nullptr, 0, $method(static_cast<void(LambdaForm::*)(int32_t,$LambdaForm$NameArray*,int32_t,bool,$MethodHandle*)>(&LambdaForm::init$))},
	{"<init>", "(I[Ljava/lang/invoke/LambdaForm$Name;IZLjava/lang/invoke/MethodHandle;Ljava/lang/invoke/LambdaForm$Kind;)V", nullptr, 0, $method(static_cast<void(LambdaForm::*)(int32_t,$LambdaForm$NameArray*,int32_t,bool,$MethodHandle*,$LambdaForm$Kind*)>(&LambdaForm::init$))},
	{"<init>", "(I[Ljava/lang/invoke/LambdaForm$Name;)V", nullptr, 0, $method(static_cast<void(LambdaForm::*)(int32_t,$LambdaForm$NameArray*)>(&LambdaForm::init$))},
	{"<init>", "(I[Ljava/lang/invoke/LambdaForm$Name;Ljava/lang/invoke/LambdaForm$Kind;)V", nullptr, 0, $method(static_cast<void(LambdaForm::*)(int32_t,$LambdaForm$NameArray*,$LambdaForm$Kind*)>(&LambdaForm::init$))},
	{"<init>", "(I[Ljava/lang/invoke/LambdaForm$Name;ZLjava/lang/invoke/LambdaForm$Kind;)V", nullptr, 0, $method(static_cast<void(LambdaForm::*)(int32_t,$LambdaForm$NameArray*,bool,$LambdaForm$Kind*)>(&LambdaForm::init$))},
	{"<init>", "(Ljava/lang/invoke/MethodType;)V", nullptr, $PRIVATE, $method(static_cast<void(LambdaForm::*)($MethodType*)>(&LambdaForm::init$))},
	{"argument", "(ILjava/lang/invoke/LambdaForm$BasicType;)Ljava/lang/invoke/LambdaForm$Name;", nullptr, $STATIC, $method(static_cast<$LambdaForm$Name*(*)(int32_t,$LambdaForm$BasicType*)>(&LambdaForm::argument))},
	{"argumentTypesMatch", "(Ljava/lang/String;[Ljava/lang/Object;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*,$ObjectArray*)>(&LambdaForm::argumentTypesMatch))},
	{"arguments", "(ILjava/lang/invoke/MethodType;)[Ljava/lang/invoke/LambdaForm$Name;", nullptr, $STATIC, $method(static_cast<$LambdaForm$NameArray*(*)(int32_t,$MethodType*)>(&LambdaForm::arguments))},
	{"arity", "()I", nullptr, 0},
	{"arityCheck", "([Ljava/lang/Object;)Z", nullptr, $PRIVATE, $method(static_cast<bool(LambdaForm::*)($ObjectArray*)>(&LambdaForm::arityCheck))},
	{"associateWithDebugName", "(Ljava/lang/invoke/LambdaForm;Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)(LambdaForm*,$String*)>(&LambdaForm::associateWithDebugName))},
	{"basicTypeSignature", "()Ljava/lang/String;", nullptr, $FINAL, $method(static_cast<$String*(LambdaForm::*)()>(&LambdaForm::basicTypeSignature))},
	{"basicTypeSignature", "(Ljava/lang/invoke/MethodType;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($MethodType*)>(&LambdaForm::basicTypeSignature))},
	{"buildEmptyNames", "(ILjava/lang/invoke/MethodType;Z)[Ljava/lang/invoke/LambdaForm$Name;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$LambdaForm$NameArray*(*)(int32_t,$MethodType*,bool)>(&LambdaForm::buildEmptyNames))},
	{"buildNames", "([Ljava/lang/invoke/LambdaForm$Name;[Ljava/lang/invoke/LambdaForm$Name;Ljava/lang/invoke/LambdaForm$Name;)[Ljava/lang/invoke/LambdaForm$Name;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$LambdaForm$NameArray*(*)($LambdaForm$NameArray*,$LambdaForm$NameArray*,$LambdaForm$Name*)>(&LambdaForm::buildNames))},
	{"checkInt", "(Ljava/lang/Class;Ljava/lang/Object;)Z", "(Ljava/lang/Class<*>;Ljava/lang/Object;)Z", $PRIVATE | $STATIC, $method(static_cast<bool(*)($Class*,Object$*)>(&LambdaForm::checkInt))},
	{"checkInvocationCounter", "()V", nullptr, $PRIVATE, $method(static_cast<void(LambdaForm::*)()>(&LambdaForm::checkInvocationCounter))},
	{"checkRef", "(Ljava/lang/Class;Ljava/lang/Object;)Z", "(Ljava/lang/Class<*>;Ljava/lang/Object;)Z", $PRIVATE | $STATIC, $method(static_cast<bool(*)($Class*,Object$*)>(&LambdaForm::checkRef))},
	{"compileToBytecode", "()V", nullptr, 0},
	{"constantZero", "(Ljava/lang/invoke/LambdaForm$BasicType;)Ljava/lang/invoke/LambdaForm$NamedFunction;", nullptr, $STATIC, $method(static_cast<$LambdaForm$NamedFunction*(*)($LambdaForm$BasicType*)>(&LambdaForm::constantZero))},
	{"contains", "(Ljava/lang/invoke/LambdaForm$Name;)Z", nullptr, 0},
	{"createFormsFor", "(Ljava/lang/invoke/LambdaForm$BasicType;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($LambdaForm$BasicType*)>(&LambdaForm::createFormsFor))},
	{"customize", "(Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/LambdaForm;", nullptr, 0},
	{"debugNames", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&LambdaForm::debugNames))},
	{"editor", "()Ljava/lang/invoke/LambdaFormEditor;", nullptr, 0},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/invoke/LambdaForm;)Z", nullptr, $PUBLIC},
	{"expressionCount", "()I", nullptr, 0},
	{"failedCompilationCounter", "()Ljdk/internal/perf/PerfCounter;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$PerfCounter*(*)()>(&LambdaForm::failedCompilationCounter))},
	{"fixResult", "(I[Ljava/lang/invoke/LambdaForm$Name;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,$LambdaForm$NameArray*)>(&LambdaForm::fixResult))},
	{"forceInterpretation", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(LambdaForm::*)()>(&LambdaForm::forceInterpretation))},
	{"generateDebugName", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(LambdaForm::*)()>(&LambdaForm::generateDebugName))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"identity", "(Ljava/lang/invoke/LambdaForm$BasicType;)Ljava/lang/invoke/LambdaForm$NamedFunction;", nullptr, $STATIC, $method(static_cast<$LambdaForm$NamedFunction*(*)($LambdaForm$BasicType*)>(&LambdaForm::identity))},
	{"identityForm", "(Ljava/lang/invoke/LambdaForm$BasicType;)Ljava/lang/invoke/LambdaForm;", nullptr, $STATIC, $method(static_cast<LambdaForm*(*)($LambdaForm$BasicType*)>(&LambdaForm::identityForm))},
	{"identity_D", "(D)D", nullptr, $PRIVATE | $STATIC, $method(static_cast<double(*)(double)>(&LambdaForm::identity_D))},
	{"identity_F", "(F)F", nullptr, $PRIVATE | $STATIC, $method(static_cast<float(*)(float)>(&LambdaForm::identity_F))},
	{"identity_I", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&LambdaForm::identity_I))},
	{"identity_J", "(J)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&LambdaForm::identity_J))},
	{"identity_L", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Object*(*)(Object$*)>(&LambdaForm::identity_L))},
	{"identity_V", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&LambdaForm::identity_V))},
	{"internArgument", "(Ljava/lang/invoke/LambdaForm$Name;)Ljava/lang/invoke/LambdaForm$Name;", nullptr, $STATIC, $method(static_cast<$LambdaForm$Name*(*)($LambdaForm$Name*)>(&LambdaForm::internArgument))},
	{"interpretName", "(Ljava/lang/invoke/LambdaForm$Name;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0, nullptr, "java.lang.Throwable", nullptr, _LambdaForm_MethodAnnotations_interpretName45},
	{"interpretWithArguments", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $TRANSIENT, nullptr, "java.lang.Throwable", nullptr, _LambdaForm_MethodAnnotations_interpretWithArguments46},
	{"interpretWithArgumentsTracing", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $TRANSIENT, nullptr, "java.lang.Throwable"},
	{"isEmpty", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(LambdaForm::*)()>(&LambdaForm::isEmpty))},
	{"isGuardWithCatch", "(I)Z", nullptr, 0},
	{"isLoop", "(I)Z", nullptr, 0},
	{"isMatchingIdiom", "(ILjava/lang/String;I)Z", nullptr, $PRIVATE, $method(static_cast<bool(LambdaForm::*)(int32_t,$String*,int32_t)>(&LambdaForm::isMatchingIdiom))},
	{"isSelectAlternative", "(I)Z", nullptr, 0},
	{"isTableSwitch", "(I)Z", nullptr, 0},
	{"isTryFinally", "(I)Z", nullptr, 0},
	{"isValidSignature", "(Ljava/lang/String;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($String*)>(&LambdaForm::isValidSignature))},
	{"lambdaName", "()Ljava/lang/String;", nullptr, 0},
	{"lastUseIndex", "(Ljava/lang/invoke/LambdaForm$Name;)I", nullptr, 0},
	{"methodType", "()Ljava/lang/invoke/MethodType;", nullptr, 0},
	{"nameRefsAreLegal", "()Z", nullptr, 0},
	{"namesOK", "(I[Ljava/lang/invoke/LambdaForm$Name;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(int32_t,$LambdaForm$NameArray*)>(&LambdaForm::namesOK))},
	{"normalize", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(LambdaForm::*)()>(&LambdaForm::normalize))},
	{"parameter", "(I)Ljava/lang/invoke/LambdaForm$Name;", nullptr, 0},
	{"parameterConstraint", "(I)Ljava/lang/Object;", nullptr, 0},
	{"parameterType", "(I)Ljava/lang/invoke/LambdaForm$BasicType;", nullptr, 0},
	{"prepare", "()V", nullptr, $PUBLIC},
	{"resultCheck", "([Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PRIVATE, $method(static_cast<bool(LambdaForm::*)($ObjectArray*,Object$*)>(&LambdaForm::resultCheck))},
	{"returnType", "()Ljava/lang/invoke/LambdaForm$BasicType;", nullptr, 0},
	{"shortenSignature", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&LambdaForm::shortenSignature))},
	{"signatureArity", "(Ljava/lang/String;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($String*)>(&LambdaForm::signatureArity))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"traceInterpreter", "(Ljava/lang/String;Ljava/lang/Object;[Ljava/lang/Object;)V", nullptr, $STATIC | $TRANSIENT, $method(static_cast<void(*)($String*,Object$*,$ObjectArray*)>(&LambdaForm::traceInterpreter))},
	{"traceInterpreter", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,Object$*)>(&LambdaForm::traceInterpreter))},
	{"uncustomize", "()Ljava/lang/invoke/LambdaForm;", nullptr, 0},
	{"useCount", "(Ljava/lang/invoke/LambdaForm$Name;)I", nullptr, 0},
	{"valueMatches", "(Ljava/lang/invoke/LambdaForm$BasicType;Ljava/lang/Class;Ljava/lang/Object;)Z", "(Ljava/lang/invoke/LambdaForm$BasicType;Ljava/lang/Class<*>;Ljava/lang/Object;)Z", $PRIVATE | $STATIC, $method(static_cast<bool(*)($LambdaForm$BasicType*,$Class*,Object$*)>(&LambdaForm::valueMatches))},
	{"zeroForm", "(Ljava/lang/invoke/LambdaForm$BasicType;)Ljava/lang/invoke/LambdaForm;", nullptr, $STATIC, $method(static_cast<LambdaForm*(*)($LambdaForm$BasicType*)>(&LambdaForm::zeroForm))},
	{"zero_D", "()D", nullptr, $PRIVATE | $STATIC, $method(static_cast<double(*)()>(&LambdaForm::zero_D))},
	{"zero_F", "()F", nullptr, $PRIVATE | $STATIC, $method(static_cast<float(*)()>(&LambdaForm::zero_F))},
	{"zero_I", "()I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)()>(&LambdaForm::zero_I))},
	{"zero_J", "()J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)()>(&LambdaForm::zero_J))},
	{"zero_L", "()Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Object*(*)()>(&LambdaForm::zero_L))},
	{}
};

$InnerClassInfo _LambdaForm_InnerClassesInfo_[] = {
	{"java.lang.invoke.LambdaForm$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"java.lang.invoke.LambdaForm$Holder", "java.lang.invoke.LambdaForm", "Holder", $FINAL},
	{"java.lang.invoke.LambdaForm$Compiled", "java.lang.invoke.LambdaForm", "Compiled", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{"java.lang.invoke.LambdaForm$Name", "java.lang.invoke.LambdaForm", "Name", $STATIC | $FINAL},
	{"java.lang.invoke.LambdaForm$NamedFunction", "java.lang.invoke.LambdaForm", "NamedFunction", $STATIC},
	{"java.lang.invoke.LambdaForm$Kind", "java.lang.invoke.LambdaForm", "Kind", $STATIC | $FINAL | $ENUM},
	{"java.lang.invoke.LambdaForm$BasicType", "java.lang.invoke.LambdaForm", "BasicType", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _LambdaForm_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.LambdaForm",
	"java.lang.Object",
	nullptr,
	_LambdaForm_FieldInfo_,
	_LambdaForm_MethodInfo_,
	nullptr,
	nullptr,
	_LambdaForm_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.invoke.LambdaForm$1,java.lang.invoke.LambdaForm$Holder,java.lang.invoke.LambdaForm$Compiled,java.lang.invoke.LambdaForm$Name,java.lang.invoke.LambdaForm$NamedFunction,java.lang.invoke.LambdaForm$Kind,java.lang.invoke.LambdaForm$BasicType"
};

$Object* allocate$LambdaForm($Class* clazz) {
	return $of($alloc(LambdaForm));
}

bool LambdaForm::$assertionsDisabled = false;
$PerfCounter* LambdaForm::LF_FAILED = nullptr;
int32_t LambdaForm::COMPILE_THRESHOLD = 0;
$LambdaForm$NameArray2* LambdaForm::INTERNED_ARGUMENTS = nullptr;
$MemberName$Factory* LambdaForm::IMPL_NAMES = nullptr;
$LambdaFormArray* LambdaForm::LF_identity = nullptr;
$LambdaFormArray* LambdaForm::LF_zero = nullptr;
$LambdaForm$NamedFunctionArray* LambdaForm::NF_identity = nullptr;
$LambdaForm$NamedFunctionArray* LambdaForm::NF_zero = nullptr;
$Object* LambdaForm::createFormsLock = nullptr;
$HashMap* LambdaForm::DEBUG_NAME_COUNTERS = nullptr;
$HashMap* LambdaForm::DEBUG_NAMES = nullptr;
bool LambdaForm::TRACE_INTERPRETER = false;

void LambdaForm::init$(int32_t arity, $LambdaForm$NameArray* names, int32_t result) {
	$init($LambdaForm$Kind);
	LambdaForm::init$(arity, names, result, true, nullptr, $LambdaForm$Kind::GENERIC);
}

void LambdaForm::init$(int32_t arity, $LambdaForm$NameArray* names, int32_t result, $LambdaForm$Kind* kind) {
	LambdaForm::init$(arity, names, result, true, nullptr, kind);
}

void LambdaForm::init$(int32_t arity, $LambdaForm$NameArray* names, int32_t result, bool forceInline, $MethodHandle* customized) {
	$init($LambdaForm$Kind);
	LambdaForm::init$(arity, names, result, forceInline, customized, $LambdaForm$Kind::GENERIC);
}

void LambdaForm::init$(int32_t arity, $LambdaForm$NameArray* names, int32_t result, bool forceInline, $MethodHandle* customized, $LambdaForm$Kind* kind) {
	this->invocationCounter = 0;
	if (!LambdaForm::$assertionsDisabled && !(namesOK(arity, names))) {
		$throwNew($AssertionError);
	}
	this->arity$ = arity;
	this->result = fixResult(result, names);
	$set(this, names, $cast($LambdaForm$NameArray, $nc(names)->clone()));
	this->forceInline = forceInline;
	$set(this, customized, customized);
	$set(this, kind, kind);
	int32_t maxOutArity = normalize();
	if (maxOutArity > $MethodType::MAX_MH_INVOKER_ARITY) {
		if (!LambdaForm::$assertionsDisabled && !(maxOutArity <= $MethodType::MAX_JVM_ARITY)) {
			$throwNew($AssertionError);
		}
		compileToBytecode();
	}
}

void LambdaForm::init$(int32_t arity, $LambdaForm$NameArray* names) {
	$init($LambdaForm$Kind);
	LambdaForm::init$(arity, names, LambdaForm::LAST_RESULT, true, nullptr, $LambdaForm$Kind::GENERIC);
}

void LambdaForm::init$(int32_t arity, $LambdaForm$NameArray* names, $LambdaForm$Kind* kind) {
	LambdaForm::init$(arity, names, LambdaForm::LAST_RESULT, true, nullptr, kind);
}

void LambdaForm::init$(int32_t arity, $LambdaForm$NameArray* names, bool forceInline, $LambdaForm$Kind* kind) {
	LambdaForm::init$(arity, names, LambdaForm::LAST_RESULT, forceInline, nullptr, kind);
}

$LambdaForm$NameArray* LambdaForm::buildNames($LambdaForm$NameArray* formals, $LambdaForm$NameArray* temps, $LambdaForm$Name* result) {
	$init(LambdaForm);
	int32_t arity = $nc(formals)->length;
	int32_t length = arity + $nc(temps)->length + (result == nullptr ? 0 : 1);
	$var($LambdaForm$NameArray, names, $fcast($LambdaForm$NameArray, $Arrays::copyOf(formals, length)));
	$System::arraycopy(temps, 0, names, arity, temps->length);
	if (result != nullptr) {
		names->set(length - 1, result);
	}
	return names;
}

void LambdaForm::init$($MethodType* mt) {
	$useLocalCurrentObjectStackCache();
	this->invocationCounter = 0;
	this->arity$ = $nc(mt)->parameterCount();
	$init($Void);
	bool var$0 = $cast($Class, mt->returnType()) == $Void::TYPE;
	this->result = (var$0 || $cast($Class, mt->returnType()) == $Void::class$) ? -1 : this->arity$;
	$set(this, names, buildEmptyNames(this->arity$, mt, this->result == -1));
	this->forceInline = true;
	$set(this, customized, nullptr);
	$init($LambdaForm$Kind);
	$set(this, kind, $LambdaForm$Kind::ZERO);
	if (!LambdaForm::$assertionsDisabled && !(nameRefsAreLegal())) {
		$throwNew($AssertionError);
	}
	if (!LambdaForm::$assertionsDisabled && !(isEmpty())) {
		$throwNew($AssertionError);
	}
	$var($String, sig, nullptr);
	if (!LambdaForm::$assertionsDisabled && !(isValidSignature($assign(sig, basicTypeSignature())))) {
		$throwNew($AssertionError);
	}
	if (!LambdaForm::$assertionsDisabled && !($nc(sig)->equals($(basicTypeSignature())))) {
		$throwNew($AssertionError, $of($$str({sig, " != "_s, $(basicTypeSignature())})));
	}
}

$LambdaForm$NameArray* LambdaForm::buildEmptyNames(int32_t arity, $MethodType* mt, bool isVoid) {
	$init(LambdaForm);
	$useLocalCurrentObjectStackCache();
	$var($LambdaForm$NameArray, names, arguments(isVoid ? 0 : 1, mt));
	if (!isVoid) {
		$var($LambdaForm$Name, zero, $new($LambdaForm$Name, $(constantZero($($LambdaForm$BasicType::basicType($($cast($Class, $nc(mt)->returnType())))))), $$new($ObjectArray, 0)));
		$nc(names)->set(arity, $(zero->newIndex(arity)));
	}
	return names;
}

int32_t LambdaForm::fixResult(int32_t result, $LambdaForm$NameArray* names) {
	$init(LambdaForm);
	if (result == LambdaForm::LAST_RESULT) {
		result = $nc(names)->length - 1;
	}
	$init($LambdaForm$BasicType);
	if (result >= 0 && $nc($nc(names)->get(result))->type$ == $LambdaForm$BasicType::V_TYPE) {
		result = LambdaForm::VOID_RESULT;
	}
	return result;
}

bool LambdaForm::debugNames() {
	$init(LambdaForm);
	return LambdaForm::DEBUG_NAME_COUNTERS != nullptr;
}

void LambdaForm::associateWithDebugName(LambdaForm* form, $String* name) {
	$init(LambdaForm);
	if (!LambdaForm::$assertionsDisabled && !(debugNames())) {
		$throwNew($AssertionError);
	}
	$synchronized(LambdaForm::DEBUG_NAMES) {
		$nc(LambdaForm::DEBUG_NAMES)->put(form, name);
	}
}

$String* LambdaForm::lambdaName() {
	if (LambdaForm::DEBUG_NAMES != nullptr) {
		$synchronized(LambdaForm::DEBUG_NAMES) {
			$var($String, name, $cast($String, $nc(LambdaForm::DEBUG_NAMES)->get(this)));
			if (name == nullptr) {
				$assign(name, generateDebugName());
			}
			return name;
		}
	}
	return this->kind->defaultLambdaName;
}

$String* LambdaForm::generateDebugName() {
	$useLocalCurrentObjectStackCache();
	if (!LambdaForm::$assertionsDisabled && !(debugNames())) {
		$throwNew($AssertionError);
	}
	$var($String, debugNameStem, this->kind->defaultLambdaName);
	$var($Integer, ctr, $cast($Integer, $nc(LambdaForm::DEBUG_NAME_COUNTERS)->getOrDefault(debugNameStem, $($Integer::valueOf(0)))));
	$nc(LambdaForm::DEBUG_NAME_COUNTERS)->put(debugNameStem, $($Integer::valueOf($nc(ctr)->intValue() + 1)));
	$var($StringBuilder, buf, $new($StringBuilder, debugNameStem));
	int32_t leadingZero = buf->length();
	buf->append($nc(ctr)->intValue());
	for (int32_t i = buf->length() - leadingZero; i < 3; ++i) {
		buf->insert(leadingZero, u'0');
	}
	buf->append(u'_');
	buf->append($(basicTypeSignature()));
	$var($String, name, buf->toString());
	associateWithDebugName(this, name);
	return name;
}

bool LambdaForm::namesOK(int32_t arity, $LambdaForm$NameArray* names) {
	$init(LambdaForm);
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(names)->length; ++i) {
		$var($LambdaForm$Name, n, names->get(i));
		if (!LambdaForm::$assertionsDisabled && !(n != nullptr)) {
			$throwNew($AssertionError, $of("n is null"_s));
		}
		if (i < arity) {
			if (!LambdaForm::$assertionsDisabled && !($nc(n)->isParam())) {
				$throwNew($AssertionError, $of($$str({n, " is not param at "_s, $$str(i)})));
			}
		} else {
			if (!LambdaForm::$assertionsDisabled && !(!$nc(n)->isParam())) {
				$throwNew($AssertionError, $of($$str({n, " is param at "_s, $$str(i)})));
			}
		}
	}
	return true;
}

LambdaForm* LambdaForm::customize($MethodHandle* mh) {
	if (this->customized == mh) {
		return this;
	}
	$var(LambdaForm, customForm, $new(LambdaForm, this->arity$, this->names, this->result, this->forceInline, mh, this->kind));
	if (LambdaForm::COMPILE_THRESHOLD >= 0 && this->isCompiled) {
		customForm->compileToBytecode();
	}
	$set(customForm, transformCache, this);
	return customForm;
}

LambdaForm* LambdaForm::uncustomize() {
	if (this->customized == nullptr) {
		return this;
	}
	if (!LambdaForm::$assertionsDisabled && !(this->transformCache != nullptr)) {
		$throwNew($AssertionError);
	}
	$var(LambdaForm, uncustomizedForm, $cast(LambdaForm, this->transformCache));
	if (LambdaForm::COMPILE_THRESHOLD >= 0 && this->isCompiled) {
		$nc(uncustomizedForm)->compileToBytecode();
	}
	return uncustomizedForm;
}

int32_t LambdaForm::normalize() {
	$useLocalCurrentObjectStackCache();
	$var($LambdaForm$NameArray, oldNames, nullptr);
	int32_t maxOutArity = 0;
	int32_t changesStart = 0;
	for (int32_t i = 0; i < $nc(this->names)->length; ++i) {
		$var($LambdaForm$Name, n, $nc(this->names)->get(i));
		if (!$nc(n)->initIndex(i)) {
			if (oldNames == nullptr) {
				$assign(oldNames, $cast($LambdaForm$NameArray, $nc(this->names)->clone()));
				changesStart = i;
			}
			$nc(this->names)->set(i, $(n->cloneWithIndex(i)));
		}
		if ($nc(n)->arguments != nullptr && maxOutArity < $nc(n->arguments)->length) {
			maxOutArity = $nc(n->arguments)->length;
		}
	}
	if (oldNames != nullptr) {
		int32_t startFixing = this->arity$;
		if (startFixing <= changesStart) {
			startFixing = changesStart + 1;
		}
		for (int32_t i = startFixing; i < $nc(this->names)->length; ++i) {
			$var($LambdaForm$Name, fixed, $nc($nc(this->names)->get(i))->replaceNames(oldNames, this->names, changesStart, i));
			$nc(this->names)->set(i, $($nc(fixed)->newIndex(i)));
		}
	}
	if (!LambdaForm::$assertionsDisabled && !(nameRefsAreLegal())) {
		$throwNew($AssertionError);
	}
	int32_t maxInterned = $Math::min(this->arity$, LambdaForm::INTERNED_ARGUMENT_LIMIT);
	bool needIntern = false;
	for (int32_t i = 0; i < maxInterned; ++i) {
		$var($LambdaForm$Name, n, $nc(this->names)->get(i));
		$var($LambdaForm$Name, n2, internArgument(n));
		if (n != n2) {
			$nc(this->names)->set(i, n2);
			needIntern = true;
		}
	}
	if (needIntern) {
		for (int32_t i = this->arity$; i < $nc(this->names)->length; ++i) {
			$nc($nc(this->names)->get(i))->internArguments();
		}
	}
	if (!LambdaForm::$assertionsDisabled && !(nameRefsAreLegal())) {
		$throwNew($AssertionError);
	}
	return maxOutArity;
}

bool LambdaForm::nameRefsAreLegal() {
	$useLocalCurrentObjectStackCache();
	if (!LambdaForm::$assertionsDisabled && !(this->arity$ >= 0 && this->arity$ <= $nc(this->names)->length)) {
		$throwNew($AssertionError);
	}
	if (!LambdaForm::$assertionsDisabled && !(this->result >= -1 && this->result < $nc(this->names)->length)) {
		$throwNew($AssertionError);
	}
	for (int32_t i = 0; i < this->arity$; ++i) {
		$var($LambdaForm$Name, n, $nc(this->names)->get(i));
		if (!LambdaForm::$assertionsDisabled && !($nc(n)->index() == i)) {
			$throwNew($AssertionError, $($of($Arrays::asList($$new($IntegerArray, {
				$($Integer::valueOf(n->index())),
				$($Integer::valueOf(i))
			})))));
		}
		if (!LambdaForm::$assertionsDisabled && !($nc(n)->isParam())) {
			$throwNew($AssertionError);
		}
	}
	for (int32_t i = this->arity$; i < $nc(this->names)->length; ++i) {
		$var($LambdaForm$Name, n, $nc(this->names)->get(i));
		if (!LambdaForm::$assertionsDisabled && !($nc(n)->index() == i)) {
			$throwNew($AssertionError);
		}
		{
			$var($ObjectArray, arr$, $nc(n)->arguments);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Object0, arg, arr$->get(i$));
				{
					{
						$var($LambdaForm$Name, n2, nullptr);
						bool var$0 = $instanceOf($LambdaForm$Name, arg);
						if (var$0) {
							$assign(n2, $cast($LambdaForm$Name, arg));
							var$0 = true;
						}
						if (var$0) {
							int32_t i2 = $nc(n2)->index$;
							if (!LambdaForm::$assertionsDisabled && !(0 <= i2 && i2 < $nc(this->names)->length)) {
								$throwNew($AssertionError, $of($$str({$(n->debugString()), ": 0 <= i2 && i2 < names.length: 0 <= "_s, $$str(i2), " < "_s, $$str($nc(this->names)->length)})));
							}
							if (!LambdaForm::$assertionsDisabled && !($nc(this->names)->get(i2) == n2)) {
								$throwNew($AssertionError, $($of($Arrays::asList($$new($ObjectArray, {
									$of("-1-"_s),
									$($of($Integer::valueOf(i))),
									$of("-2-"_s),
									$($of(n->debugString())),
									$of("-3-"_s),
									$($of($Integer::valueOf(i2))),
									$of("-4-"_s),
									$($of(n2->debugString())),
									$of("-5-"_s),
									$($of($nc($nc(this->names)->get(i2))->debugString())),
									$of("-6-"_s),
									$of(this)
								})))));
							}
							if (!LambdaForm::$assertionsDisabled && !(i2 < i)) {
								$throwNew($AssertionError);
							}
						}
					}
				}
			}
		}
	}
	return true;
}

$LambdaForm$BasicType* LambdaForm::returnType() {
	if (this->result < 0) {
		$init($LambdaForm$BasicType);
		return $LambdaForm$BasicType::V_TYPE;
	}
	$var($LambdaForm$Name, n, $nc(this->names)->get(this->result));
	return $nc(n)->type$;
}

$LambdaForm$BasicType* LambdaForm::parameterType(int32_t n) {
	return $nc($(parameter(n)))->type$;
}

$LambdaForm$Name* LambdaForm::parameter(int32_t n) {
	$var($LambdaForm$Name, param, $nc(this->names)->get(n));
	if (!LambdaForm::$assertionsDisabled && !(n < this->arity$ && $nc(param)->isParam())) {
		$throwNew($AssertionError);
	}
	return param;
}

$Object* LambdaForm::parameterConstraint(int32_t n) {
	return $of($nc($(parameter(n)))->constraint);
}

int32_t LambdaForm::arity() {
	return this->arity$;
}

int32_t LambdaForm::expressionCount() {
	return $nc(this->names)->length - this->arity$;
}

$MethodType* LambdaForm::methodType() {
	$useLocalCurrentObjectStackCache();
	$var($ClassArray, ptypes, $new($ClassArray, this->arity$));
	for (int32_t i = 0; i < this->arity$; ++i) {
		ptypes->set(i, $nc($(parameterType(i)))->btClass);
	}
	return $MethodType::makeImpl($nc($(returnType()))->btClass, ptypes, true);
}

$String* LambdaForm::basicTypeSignature() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder, arity() + 3));
	{
		int32_t i = 0;
		int32_t a = arity();
		for (; i < a; ++i) {
			buf->append($nc($(parameterType(i)))->basicTypeChar());
		}
	}
	return buf->append(u'_')->append($nc($(returnType()))->basicTypeChar())->toString();
}

int32_t LambdaForm::signatureArity($String* sig) {
	$init(LambdaForm);
	if (!LambdaForm::$assertionsDisabled && !(isValidSignature(sig))) {
		$throwNew($AssertionError);
	}
	return $nc(sig)->indexOf((int32_t)u'_');
}

bool LambdaForm::isValidSignature($String* sig) {
	$init(LambdaForm);
	int32_t arity = $nc(sig)->indexOf((int32_t)u'_');
	if (arity < 0) {
		return false;
	}
	int32_t siglen = sig->length();
	if (siglen != arity + 2) {
		return false;
	}
	for (int32_t i = 0; i < siglen; ++i) {
		if (i == arity) {
			continue;
		}
		char16_t c = sig->charAt(i);
		if (c == u'V') {
			return (i == siglen - 1 && arity == siglen - 2);
		}
		if (!$LambdaForm$BasicType::isArgBasicTypeChar(c)) {
			return false;
		}
	}
	return true;
}

bool LambdaForm::isSelectAlternative(int32_t pos) {
	$useLocalCurrentObjectStackCache();
	if (pos + 1 >= $nc(this->names)->length) {
		return false;
	}
	$var($LambdaForm$Name, name0, $nc(this->names)->get(pos));
	$var($LambdaForm$Name, name1, $nc(this->names)->get(pos + 1));
	$load($MethodHandleImpl);
	bool var$2 = $nc(name0)->refersTo($MethodHandleImpl::class$, "selectAlternative"_s);
	bool var$1 = var$2 && $nc(name1)->isInvokeBasic();
	bool var$0 = var$1 && name1->lastUseIndex(name0) == 0;
	return var$0 && lastUseIndex(name0) == pos + 1;
}

bool LambdaForm::isMatchingIdiom(int32_t pos, $String* idiomName, int32_t nArgs) {
	$useLocalCurrentObjectStackCache();
	if (pos + 2 >= $nc(this->names)->length) {
		return false;
	}
	$var($LambdaForm$Name, name0, $nc(this->names)->get(pos));
	$var($LambdaForm$Name, name1, $nc(this->names)->get(pos + 1));
	$var($LambdaForm$Name, name2, $nc(this->names)->get(pos + 2));
	$load($MethodHandleImpl);
	bool var$5 = $nc(name1)->refersTo($MethodHandleImpl::class$, idiomName);
	bool var$4 = var$5 && $nc(name0)->isInvokeBasic();
	bool var$3 = var$4 && $nc(name2)->isInvokeBasic();
	bool var$2 = var$3 && name1->lastUseIndex(name0) == nArgs;
	bool var$1 = var$2 && lastUseIndex(name0) == pos + 1;
	bool var$0 = var$1 && name2->lastUseIndex(name1) == 1;
	return var$0 && lastUseIndex(name1) == pos + 2;
}

bool LambdaForm::isGuardWithCatch(int32_t pos) {
	return isMatchingIdiom(pos, "guardWithCatch"_s, 3);
}

bool LambdaForm::isTryFinally(int32_t pos) {
	return isMatchingIdiom(pos, "tryFinally"_s, 2);
}

bool LambdaForm::isTableSwitch(int32_t pos) {
	$useLocalCurrentObjectStackCache();
	if (pos + 2 >= $nc(this->names)->length) {
		return false;
	}
	int32_t POS_COLLECT_ARGS = pos;
	int32_t POS_TABLE_SWITCH = pos + 1;
	int32_t POS_UNBOX_RESULT = pos + 2;
	$var($LambdaForm$Name, collectArgs, $nc(this->names)->get(POS_COLLECT_ARGS));
	$var($LambdaForm$Name, tableSwitch, $nc(this->names)->get(POS_TABLE_SWITCH));
	$var($LambdaForm$Name, unboxResult, $nc(this->names)->get(POS_UNBOX_RESULT));
	$load($MethodHandleImpl);
	bool var$5 = $nc(tableSwitch)->refersTo($MethodHandleImpl::class$, "tableSwitch"_s);
	bool var$4 = var$5 && $nc(collectArgs)->isInvokeBasic();
	bool var$3 = var$4 && $nc(unboxResult)->isInvokeBasic();
	bool var$2 = var$3 && tableSwitch->lastUseIndex(collectArgs) == 3;
	bool var$1 = var$2 && lastUseIndex(collectArgs) == POS_TABLE_SWITCH;
	bool var$0 = var$1 && unboxResult->lastUseIndex(tableSwitch) == 1;
	return var$0 && lastUseIndex(tableSwitch) == POS_UNBOX_RESULT;
}

bool LambdaForm::isLoop(int32_t pos) {
	return isMatchingIdiom(pos, "loop"_s, 2);
}

void LambdaForm::prepare() {
	$useLocalCurrentObjectStackCache();
	if (LambdaForm::COMPILE_THRESHOLD == 0 && !forceInterpretation() && !this->isCompiled) {
		compileToBytecode();
	}
	if (this->vmentry != nullptr) {
		return;
	}
	$var($MethodType, mtype, methodType());
	$var(LambdaForm, prep, $nc($($nc(mtype)->form()))->cachedLambdaForm($MethodTypeForm::LF_INTERPRET));
	if (prep == nullptr) {
		if (!LambdaForm::$assertionsDisabled && !(isValidSignature($(basicTypeSignature())))) {
			$throwNew($AssertionError);
		}
		$assign(prep, $new(LambdaForm, mtype));
		$set(prep, vmentry, $InvokerBytecodeGenerator::generateLambdaFormInterpreterEntryPoint(mtype));
		$assign(prep, $nc($(mtype->form()))->setCachedLambdaForm($MethodTypeForm::LF_INTERPRET, prep));
	}
	$set(this, vmentry, $nc(prep)->vmentry);
}

$PerfCounter* LambdaForm::failedCompilationCounter() {
	$init(LambdaForm);
	if (LambdaForm::LF_FAILED == nullptr) {
		$assignStatic(LambdaForm::LF_FAILED, $PerfCounter::newPerfCounter("java.lang.invoke.failedLambdaFormCompilations"_s));
	}
	return LambdaForm::LF_FAILED;
}

void LambdaForm::compileToBytecode() {
	$useLocalCurrentObjectStackCache();
	if (forceInterpretation()) {
		return;
	}
	if (this->vmentry != nullptr && this->isCompiled) {
		return;
	}
	$var($MethodType, invokerType, methodType());
	if (!LambdaForm::$assertionsDisabled && !(this->vmentry == nullptr || $nc($($nc($($nc(this->vmentry)->getMethodType()))->basicType()))->equals($of(invokerType)))) {
		$throwNew($AssertionError);
	}
	try {
		$set(this, vmentry, $InvokerBytecodeGenerator::generateCustomizedCode(this, invokerType));
		if (LambdaForm::TRACE_INTERPRETER) {
			traceInterpreter("compileToBytecode"_s, this);
		}
		this->isCompiled = true;
	} catch ($InvokerBytecodeGenerator$BytecodeGenerationException& bge) {
		this->invocationCounter = -1;
		$nc($(failedCompilationCounter()))->increment();
		$init($MethodHandleStatics);
		if ($MethodHandleStatics::LOG_LF_COMPILATION_FAILURE) {
			$nc($System::out)->println($$str({"LambdaForm compilation failed: "_s, this}));
			bge->printStackTrace($System::out);
		}
	} catch ($Error& e) {
		$throw(e);
	} catch ($Exception& e) {
		$throw($($MethodHandleStatics::newInternalError($(this->toString()), e)));
	}
}

bool LambdaForm::argumentTypesMatch($String* sig, $ObjectArray* av) {
	$init(LambdaForm);
	$useLocalCurrentObjectStackCache();
	int32_t arity = signatureArity(sig);
	if (!LambdaForm::$assertionsDisabled && !($nc(av)->length == arity)) {
		$throwNew($AssertionError, $of($$str({"av.length == arity: av.length="_s, $$str(av->length), ", arity="_s, $$str(arity)})));
	}
	if (!LambdaForm::$assertionsDisabled && !($instanceOf($MethodHandle, $nc(av)->get(0)))) {
		$throwNew($AssertionError, $of($$str({"av[0] not instance of MethodHandle: "_s, av->get(0)})));
	}
	$var($MethodHandle, mh, $cast($MethodHandle, $nc(av)->get(0)));
	$var($MethodType, mt, $nc(mh)->type());
	if (!LambdaForm::$assertionsDisabled && !($nc(mt)->parameterCount() == arity - 1)) {
		$throwNew($AssertionError);
	}
	for (int32_t i = 0; i < av->length; ++i) {
		$Class* pt = (i == 0 ? $MethodHandle::class$ : $cast($Class, $nc(mt)->parameterType(i - 1)));
		if (!LambdaForm::$assertionsDisabled && !(valueMatches($($LambdaForm$BasicType::basicType($nc(sig)->charAt(i))), pt, av->get(i)))) {
			$throwNew($AssertionError);
		}
	}
	return true;
}

bool LambdaForm::valueMatches($LambdaForm$BasicType* tc$renamed, $Class* type, Object$* x) {
	$init(LambdaForm);
	$useLocalCurrentObjectStackCache();
	$var($LambdaForm$BasicType, tc, tc$renamed);
	$init($Void);
	if (type == $Void::TYPE) {
		$init($LambdaForm$BasicType);
		tc = $LambdaForm$BasicType::V_TYPE;
	}
	if (!LambdaForm::$assertionsDisabled && !(tc == $LambdaForm$BasicType::basicType(type))) {
		$var($String, var$0, $$str({tc, " == basicType("_s, type, ")="_s}));
		$throwNew($AssertionError, $of(($$concat(var$0, $($LambdaForm$BasicType::basicType(type))))));
	}
	$init($LambdaForm$1);
	switch ($nc($LambdaForm$1::$SwitchMap$java$lang$invoke$LambdaForm$BasicType)->get($nc((tc))->ordinal())) {
	case 1:
		{
			if (!LambdaForm::$assertionsDisabled && !checkInt(type, x)) {
				$throwNew($AssertionError, $of($$str({"checkInt("_s, type, ","_s, x, ")"_s})));
			}
			break;
		}
	case 2:
		{
			if (!LambdaForm::$assertionsDisabled && !$instanceOf($Long, x)) {
				$throwNew($AssertionError, $of($$str({"instanceof Long: "_s, x})));
			}
			break;
		}
	case 3:
		{
			if (!LambdaForm::$assertionsDisabled && !$instanceOf($Float, x)) {
				$throwNew($AssertionError, $of($$str({"instanceof Float: "_s, x})));
			}
			break;
		}
	case 4:
		{
			if (!LambdaForm::$assertionsDisabled && !$instanceOf($Double, x)) {
				$throwNew($AssertionError, $of($$str({"instanceof Double: "_s, x})));
			}
			break;
		}
	case 5:
		{
			if (!LambdaForm::$assertionsDisabled && !checkRef(type, x)) {
				$throwNew($AssertionError, $of($$str({"checkRef("_s, type, ","_s, x, ")"_s})));
			}
			break;
		}
	case 6:
		{
			break;
		}
	default:
		{
			if (!LambdaForm::$assertionsDisabled) {
				$throwNew($AssertionError);
			}
		}
	}
	return true;
}

bool LambdaForm::checkInt($Class* type, Object$* x) {
	$init(LambdaForm);
	$useLocalCurrentObjectStackCache();
	if (!LambdaForm::$assertionsDisabled && !($instanceOf($Integer, x))) {
		$throwNew($AssertionError);
	}
	$init($Integer);
	if (type == $Integer::TYPE) {
		return true;
	}
	$Wrapper* w = $Wrapper::forBasicType(type);
	if (!LambdaForm::$assertionsDisabled && !($nc(w)->isSubwordOrInt())) {
		$throwNew($AssertionError);
	}
	$var($Object, x1, $Wrapper::INT->wrap($($nc(w)->wrap(x))));
	return $nc($of(x))->equals(x1);
}

bool LambdaForm::checkRef($Class* type, Object$* x) {
	$init(LambdaForm);
	if (!LambdaForm::$assertionsDisabled && !(!$nc(type)->isPrimitive())) {
		$throwNew($AssertionError);
	}
	if (x == nullptr) {
		return true;
	}
	if ($nc(type)->isInterface()) {
		return true;
	}
	return $nc(type)->isInstance(x);
}

bool LambdaForm::forceInterpretation() {
	return this->invocationCounter == -1;
}

$Object* LambdaForm::interpretWithArguments($ObjectArray* argumentValues) {
	$useLocalCurrentObjectStackCache();
	if (LambdaForm::TRACE_INTERPRETER) {
		return $of(interpretWithArgumentsTracing(argumentValues));
	}
	checkInvocationCounter();
	if (!LambdaForm::$assertionsDisabled && !(arityCheck(argumentValues))) {
		$throwNew($AssertionError);
	}
	$var($ObjectArray, values, $Arrays::copyOf(argumentValues, $nc(this->names)->length));
	for (int32_t i = $nc(argumentValues)->length; i < values->length; ++i) {
		values->set(i, $(interpretName($nc(this->names)->get(i), values)));
	}
	$var($Object, rv, (this->result < 0) ? ($Object*)nullptr : values->get(this->result));
	if (!LambdaForm::$assertionsDisabled && !(resultCheck(argumentValues, rv))) {
		$throwNew($AssertionError);
	}
	return $of(rv);
}

$Object* LambdaForm::interpretName($LambdaForm$Name* name, $ObjectArray* values) {
	$useLocalCurrentObjectStackCache();
	if (LambdaForm::TRACE_INTERPRETER) {
		traceInterpreter("| interpretName"_s, $($nc(name)->debugString()), ($ObjectArray*)nullptr);
	}
	$load($ObjectArray);
	$var($ObjectArray, arguments, $Arrays::copyOf($nc(name)->arguments, $nc(name->arguments)->length, $getClass($ObjectArray)));
	for (int32_t i = 0; i < arguments->length; ++i) {
		$var($Object, a, arguments->get(i));
		if ($instanceOf($LambdaForm$Name, a)) {
			int32_t i2 = $nc(($cast($LambdaForm$Name, a)))->index();
			if (!LambdaForm::$assertionsDisabled && !($equals($nc(this->names)->get(i2), a))) {
				$throwNew($AssertionError);
			}
			$assign(a, $nc(values)->get(i2));
			arguments->set(i, a);
		}
	}
	return $of($nc($nc(name)->function)->invokeWithArguments(arguments));
}

void LambdaForm::checkInvocationCounter() {
	if (LambdaForm::COMPILE_THRESHOLD != 0 && !forceInterpretation() && this->invocationCounter < LambdaForm::COMPILE_THRESHOLD) {
		++this->invocationCounter;
		if (this->invocationCounter >= LambdaForm::COMPILE_THRESHOLD) {
			compileToBytecode();
		}
	}
}

$Object* LambdaForm::interpretWithArgumentsTracing($ObjectArray* argumentValues) {
	$useLocalCurrentObjectStackCache();
	traceInterpreter("[ interpretWithArguments"_s, this, argumentValues);
	if (!forceInterpretation() && this->invocationCounter < LambdaForm::COMPILE_THRESHOLD) {
		int32_t ctr = this->invocationCounter++;
		traceInterpreter("| invocationCounter"_s, $($Integer::valueOf(ctr)));
		if (this->invocationCounter >= LambdaForm::COMPILE_THRESHOLD) {
			compileToBytecode();
		}
	}
	$var($Object, rval, nullptr);
	try {
		if (!LambdaForm::$assertionsDisabled && !(arityCheck(argumentValues))) {
			$throwNew($AssertionError);
		}
		$var($ObjectArray, values, $Arrays::copyOf(argumentValues, $nc(this->names)->length));
		for (int32_t i = $nc(argumentValues)->length; i < values->length; ++i) {
			values->set(i, $(interpretName($nc(this->names)->get(i), values)));
		}
		$assign(rval, (this->result < 0) ? ($Object*)nullptr : values->get(this->result));
	} catch ($Throwable& ex) {
		traceInterpreter("] throw =>"_s, ex);
		$throw(ex);
	}
	traceInterpreter("] return =>"_s, rval);
	return $of(rval);
}

void LambdaForm::traceInterpreter($String* event, Object$* obj, $ObjectArray* args) {
	$init(LambdaForm);
	$useLocalCurrentObjectStackCache();
	if (LambdaForm::TRACE_INTERPRETER) {
		$var($String, var$0, $$str({"LFI: "_s, event, " "_s, (obj != nullptr ? $of(obj) : $of(""_s))}));
		$nc($System::out)->println($$concat(var$0, $((args != nullptr && args->length != 0 ? $of($Arrays::asList(args)) : $of(""_s)))));
	}
}

void LambdaForm::traceInterpreter($String* event, Object$* obj) {
	$init(LambdaForm);
	traceInterpreter(event, obj, ($ObjectArray*)nullptr);
}

bool LambdaForm::arityCheck($ObjectArray* argumentValues) {
	$useLocalCurrentObjectStackCache();
	if (!LambdaForm::$assertionsDisabled && !($nc(argumentValues)->length == this->arity$)) {
		$throwNew($AssertionError, $of($$str({$$str(this->arity$), "!="_s, $($Arrays::asList(argumentValues)), ".length"_s})));
	}
	if (!LambdaForm::$assertionsDisabled && !($instanceOf($MethodHandle, $nc(argumentValues)->get(0)))) {
		$throwNew($AssertionError, $of($$str({"not MH: "_s, argumentValues->get(0)})));
	}
	$var($MethodHandle, mh, $cast($MethodHandle, $nc(argumentValues)->get(0)));
	if (!LambdaForm::$assertionsDisabled && !($nc(mh)->internalForm() == this)) {
		$throwNew($AssertionError);
	}
	argumentTypesMatch($(basicTypeSignature()), argumentValues);
	return true;
}

bool LambdaForm::resultCheck($ObjectArray* argumentValues, Object$* result) {
	$useLocalCurrentObjectStackCache();
	$var($MethodHandle, mh, $cast($MethodHandle, $nc(argumentValues)->get(0)));
	$var($MethodType, mt, $nc(mh)->type());
	bool var$0 = !LambdaForm::$assertionsDisabled;
	if (var$0) {
		$var($LambdaForm$BasicType, var$1, returnType());
		var$0 = !(valueMatches(var$1, $($cast($Class, $nc(mt)->returnType())), result));
	}
	if (var$0) {
		$throwNew($AssertionError);
	}
	return true;
}

bool LambdaForm::isEmpty() {
	if (this->result < 0) {
		return ($nc(this->names)->length == this->arity$);
	} else if (this->result == this->arity$ && $nc(this->names)->length == this->arity$ + 1) {
		return $nc($nc(this->names)->get(this->arity$))->isConstantZero();
	} else {
		return false;
	}
}

$String* LambdaForm::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, lambdaName, this->lambdaName());
	$var($StringBuilder, buf, $new($StringBuilder, $$str({lambdaName, "=Lambda("_s})));
	for (int32_t i = 0; i < $nc(this->names)->length; ++i) {
		if (i == this->arity$) {
			buf->append(")=>{"_s);
		}
		$var($LambdaForm$Name, n, $nc(this->names)->get(i));
		if (i >= this->arity$) {
			buf->append("\n    "_s);
		}
		buf->append($($nc(n)->paramString()));
		if (i < this->arity$) {
			if (i + 1 < this->arity$) {
				buf->append(","_s);
			}
			continue;
		}
		buf->append("="_s)->append($($nc(n)->exprString()));
		buf->append(";"_s);
	}
	if (this->arity$ == $nc(this->names)->length) {
		buf->append(")=>{"_s);
	}
	buf->append(this->result < 0 ? $of("void"_s) : $of($nc(this->names)->get(this->result)))->append("}"_s);
	if (LambdaForm::TRACE_INTERPRETER) {
		buf->append(":"_s)->append($(basicTypeSignature()));
		buf->append("/"_s)->append($of(this->vmentry));
	}
	return buf->toString();
}

bool LambdaForm::equals(Object$* obj) {
	return $instanceOf(LambdaForm, obj) && equals($cast(LambdaForm, obj));
}

bool LambdaForm::equals(LambdaForm* that) {
	if (this->result != $nc(that)->result) {
		return false;
	}
	return $Arrays::equals(this->names, $nc(that)->names);
}

int32_t LambdaForm::hashCode() {
	return this->result + 31 * $Arrays::hashCode(this->names);
}

$LambdaFormEditor* LambdaForm::editor() {
	return $LambdaFormEditor::lambdaFormEditor(this);
}

bool LambdaForm::contains($LambdaForm$Name* name) {
	int32_t pos = $nc(name)->index();
	if (pos >= 0) {
		return pos < $nc(this->names)->length && name->equals($nc(this->names)->get(pos));
	}
	for (int32_t i = this->arity$; i < $nc(this->names)->length; ++i) {
		if (name->equals($nc(this->names)->get(i))) {
			return true;
		}
	}
	return false;
}

$String* LambdaForm::basicTypeSignature($MethodType* type) {
	$init(LambdaForm);
	$useLocalCurrentObjectStackCache();
	int32_t params = $nc(type)->parameterCount();
	$var($chars, sig, $new($chars, params + 2));
	int32_t sigp = 0;
	while (sigp < params) {
		sig->set(sigp, $LambdaForm$BasicType::basicTypeChar($($cast($Class, type->parameterType(sigp++)))));
	}
	sig->set(sigp++, u'_');
	sig->set(sigp++, $LambdaForm$BasicType::basicTypeChar($($cast($Class, type->returnType()))));
	if (!LambdaForm::$assertionsDisabled && !(sigp == sig->length)) {
		$throwNew($AssertionError);
	}
	return $String::valueOf(sig);
}

$String* LambdaForm::shortenSignature($String* signature) {
	$init(LambdaForm);
	$useLocalCurrentObjectStackCache();
	int32_t NO_CHAR = -1;
	int32_t MIN_RUN = 3;
	int32_t c0 = 0;
	int32_t c1 = NO_CHAR;
	int32_t c1reps = 0;
	$var($StringBuilder, buf, nullptr);
	int32_t len = $nc(signature)->length();
	if (len < MIN_RUN) {
		return signature;
	}
	for (int32_t i = 0; i <= len; ++i) {
		if (c1 != NO_CHAR && !(u'A' <= c1 && c1 <= u'Z')) {
			if (buf != nullptr) {
				buf->append(static_cast<$CharSequence*>(signature), i - c1reps, len);
			}
			break;
		}
		c0 = c1;
		c1 = (i == len ? NO_CHAR : (int32_t)signature->charAt(i));
		if (c1 == c0) {
			++c1reps;
			continue;
		}
		int32_t c0reps = c1reps;
		c1reps = 1;
		if (c0reps < MIN_RUN) {
			if (buf != nullptr) {
				while (--c0reps >= 0) {
					buf->append((char16_t)c0);
				}
			}
			continue;
		}
		if (buf == nullptr) {
			$assign(buf, $$new($StringBuilder)->append(static_cast<$CharSequence*>(signature), 0, i - c0reps));
		}
		$nc(buf)->append((char16_t)c0)->append(c0reps);
	}
	return (buf == nullptr) ? signature : $nc(buf)->toString();
}

int32_t LambdaForm::lastUseIndex($LambdaForm$Name* n) {
	int32_t ni = $nc(n)->index$;
	int32_t nmax = $nc(this->names)->length;
	if (!LambdaForm::$assertionsDisabled && !($nc(this->names)->get(ni) == n)) {
		$throwNew($AssertionError);
	}
	if (this->result == ni) {
		return nmax;
	}
	for (int32_t i = nmax; --i > ni;) {
		if ($nc($nc(this->names)->get(i))->lastUseIndex(n) >= 0) {
			return i;
		}
	}
	return -1;
}

int32_t LambdaForm::useCount($LambdaForm$Name* n) {
	int32_t count = (this->result == $nc(n)->index$) ? 1 : 0;
	int32_t i = $Math::max($nc(n)->index$ + 1, this->arity$);
	while (i < $nc(this->names)->length) {
		count += $nc($nc(this->names)->get(i++))->useCount(n);
	}
	return count;
}

$LambdaForm$Name* LambdaForm::argument(int32_t which, $LambdaForm$BasicType* type) {
	$init(LambdaForm);
	if (which >= LambdaForm::INTERNED_ARGUMENT_LIMIT) {
		return $new($LambdaForm$Name, which, type);
	}
	return $nc($nc(LambdaForm::INTERNED_ARGUMENTS)->get($nc(type)->ordinal()))->get(which);
}

$LambdaForm$Name* LambdaForm::internArgument($LambdaForm$Name* n) {
	$init(LambdaForm);
	if (!LambdaForm::$assertionsDisabled && !($nc(n)->isParam())) {
		$throwNew($AssertionError, $of($$str({"not param: "_s, n})));
	}
	if (!LambdaForm::$assertionsDisabled && !($nc(n)->index$ < LambdaForm::INTERNED_ARGUMENT_LIMIT)) {
		$throwNew($AssertionError);
	}
	if ($nc(n)->constraint != nullptr) {
		return n;
	}
	return argument($nc(n)->index$, n->type$);
}

$LambdaForm$NameArray* LambdaForm::arguments(int32_t extra, $MethodType* types) {
	$init(LambdaForm);
	$useLocalCurrentObjectStackCache();
	int32_t length = $nc(types)->parameterCount();
	$var($LambdaForm$NameArray, names, $new($LambdaForm$NameArray, length + extra));
	for (int32_t i = 0; i < length; ++i) {
		names->set(i, $(argument(i, $($LambdaForm$BasicType::basicType($($cast($Class, types->parameterType(i))))))));
	}
	return names;
}

LambdaForm* LambdaForm::identityForm($LambdaForm$BasicType* type) {
	$init(LambdaForm);
	int32_t ord = $nc(type)->ordinal();
	$var(LambdaForm, form, $nc(LambdaForm::LF_identity)->get(ord));
	if (form != nullptr) {
		return form;
	}
	createFormsFor(type);
	return $nc(LambdaForm::LF_identity)->get(ord);
}

LambdaForm* LambdaForm::zeroForm($LambdaForm$BasicType* type) {
	$init(LambdaForm);
	int32_t ord = $nc(type)->ordinal();
	$var(LambdaForm, form, $nc(LambdaForm::LF_zero)->get(ord));
	if (form != nullptr) {
		return form;
	}
	createFormsFor(type);
	return $nc(LambdaForm::LF_zero)->get(ord);
}

$LambdaForm$NamedFunction* LambdaForm::identity($LambdaForm$BasicType* type) {
	$init(LambdaForm);
	int32_t ord = $nc(type)->ordinal();
	$var($LambdaForm$NamedFunction, function, $nc(LambdaForm::NF_identity)->get(ord));
	if (function != nullptr) {
		return function;
	}
	createFormsFor(type);
	return $nc(LambdaForm::NF_identity)->get(ord);
}

$LambdaForm$NamedFunction* LambdaForm::constantZero($LambdaForm$BasicType* type) {
	$init(LambdaForm);
	int32_t ord = $nc(type)->ordinal();
	$var($LambdaForm$NamedFunction, function, $nc(LambdaForm::NF_zero)->get(ord));
	if (function != nullptr) {
		return function;
	}
	createFormsFor(type);
	return $nc(LambdaForm::NF_zero)->get(ord);
}

void LambdaForm::createFormsFor($LambdaForm$BasicType* type) {
	$init(LambdaForm);
	$useLocalCurrentObjectStackCache();
	$init($MethodHandleStatics);
	$load($BoundMethodHandle);
	$nc($MethodHandleStatics::UNSAFE)->ensureClassInitialized($BoundMethodHandle::class$);
	$synchronized(LambdaForm::createFormsLock) {
		int32_t ord = $nc(type)->ordinal();
		$var(LambdaForm, idForm, $nc(LambdaForm::LF_identity)->get(ord));
		if (idForm != nullptr) {
			return;
		}
		char16_t btChar = type->basicTypeChar();
		bool isVoid = (type == $LambdaForm$BasicType::V_TYPE);
		$Class* btClass = type->btClass;
		$var($MethodType, zeType, $MethodType::methodType(btClass));
		$var($MethodType, idType, (isVoid) ? zeType : $MethodType::methodType(btClass, btClass));
		$var($MemberName, idMem, $new($MemberName, LambdaForm::class$, $$str({"identity_"_s, $$str(btChar)}), idType, (int8_t)6));
		$var($MemberName, zeMem, nullptr);
		try {
			$load($NoSuchMethodException);
			$assign(idMem, $nc(LambdaForm::IMPL_NAMES)->resolveOrFail((int8_t)6, idMem, nullptr, -1, $NoSuchMethodException::class$));
			if (!isVoid) {
				$assign(zeMem, $new($MemberName, LambdaForm::class$, $$str({"zero_"_s, $$str(btChar)}), zeType, (int8_t)6));
				$assign(zeMem, $nc(LambdaForm::IMPL_NAMES)->resolveOrFail((int8_t)6, zeMem, nullptr, -1, $NoSuchMethodException::class$));
			}
		} catch ($IllegalAccessException& ex) {
			$throw($($MethodHandleStatics::newInternalError(static_cast<$Exception*>(ex))));
		} catch ($NoSuchMethodException& ex) {
			$throw($($MethodHandleStatics::newInternalError(static_cast<$Exception*>(ex))));
		}
		$var($LambdaForm$NamedFunction, idFun, nullptr);
		$var(LambdaForm, zeForm, nullptr);
		$var($LambdaForm$NamedFunction, zeFun, nullptr);
		if (isVoid) {
			$var($LambdaForm$NameArray, idNames, $new($LambdaForm$NameArray, {$(argument(0, $LambdaForm$BasicType::L_TYPE))}));
			$init($LambdaForm$Kind);
			$assign(idForm, $new(LambdaForm, 1, idNames, LambdaForm::VOID_RESULT, $LambdaForm$Kind::IDENTITY));
			idForm->compileToBytecode();
			$assign(idFun, $new($LambdaForm$NamedFunction, idMem, $($SimpleMethodHandle::make($(idMem->getInvocationType()), idForm))));
			$assign(zeForm, idForm);
			$assign(zeFun, idFun);
		} else {
			$var($LambdaForm$NameArray, idNames, $new($LambdaForm$NameArray, {
				$(argument(0, $LambdaForm$BasicType::L_TYPE)),
				$(argument(1, type))
			}));
			$init($LambdaForm$Kind);
			$assign(idForm, $new(LambdaForm, 2, idNames, 1, $LambdaForm$Kind::IDENTITY));
			idForm->compileToBytecode();
			$init($MethodHandleImpl$Intrinsic);
			$assign(idFun, $new($LambdaForm$NamedFunction, idMem, $($MethodHandleImpl::makeIntrinsic($($SimpleMethodHandle::make($(idMem->getInvocationType()), idForm)), $MethodHandleImpl$Intrinsic::IDENTITY))));
			$var($Object, zeValue, $nc($($Wrapper::forBasicType(btChar)))->zero());
			$var($LambdaForm$NameArray, zeNames, $new($LambdaForm$NameArray, {
				$(argument(0, $LambdaForm$BasicType::L_TYPE)),
				$$new($LambdaForm$Name, idFun, $$new($ObjectArray, {zeValue}))
			}));
			$assign(zeForm, $new(LambdaForm, 1, zeNames, 1, $LambdaForm$Kind::ZERO));
			zeForm->compileToBytecode();
			$assign(zeFun, $new($LambdaForm$NamedFunction, zeMem, $($MethodHandleImpl::makeIntrinsic($($SimpleMethodHandle::make($($nc(zeMem)->getInvocationType()), zeForm)), $MethodHandleImpl$Intrinsic::ZERO))));
		}
		$nc(LambdaForm::LF_zero)->set(ord, zeForm);
		$nc(LambdaForm::NF_zero)->set(ord, zeFun);
		$nc(LambdaForm::LF_identity)->set(ord, idForm);
		$nc(LambdaForm::NF_identity)->set(ord, idFun);
		if (!LambdaForm::$assertionsDisabled && !($nc(idFun)->isIdentity())) {
			$throwNew($AssertionError);
		}
		if (!LambdaForm::$assertionsDisabled && !($nc(zeFun)->isConstantZero())) {
			$throwNew($AssertionError);
		}
		if (!LambdaForm::$assertionsDisabled && !($$new($LambdaForm$Name, zeFun, $$new($ObjectArray, 0))->isConstantZero())) {
			$throwNew($AssertionError);
		}
	}
}

int32_t LambdaForm::identity_I(int32_t x) {
	$init(LambdaForm);
	return x;
}

int64_t LambdaForm::identity_J(int64_t x) {
	$init(LambdaForm);
	return x;
}

float LambdaForm::identity_F(float x) {
	$init(LambdaForm);
	return x;
}

double LambdaForm::identity_D(double x) {
	$init(LambdaForm);
	return x;
}

$Object* LambdaForm::identity_L(Object$* x) {
	$init(LambdaForm);
	return $of(x);
}

void LambdaForm::identity_V() {
	$init(LambdaForm);
	return;
}

int32_t LambdaForm::zero_I() {
	$init(LambdaForm);
	return 0;
}

int64_t LambdaForm::zero_J() {
	$init(LambdaForm);
	return 0;
}

float LambdaForm::zero_F() {
	$init(LambdaForm);
	return (float)0;
}

double LambdaForm::zero_D() {
	$init(LambdaForm);
	return (double)0;
}

$Object* LambdaForm::zero_L() {
	$init(LambdaForm);
	return $of(nullptr);
}

void clinit$LambdaForm($Class* class$) {
	$useLocalCurrentObjectStackCache();
	LambdaForm::$assertionsDisabled = !LambdaForm::class$->desiredAssertionStatus();
	{
		$init($MethodHandleStatics);
		LambdaForm::COMPILE_THRESHOLD = $Math::max(-1, $MethodHandleStatics::COMPILE_THRESHOLD);
	}
	$init($LambdaForm$BasicType);
	$assignStatic(LambdaForm::INTERNED_ARGUMENTS, $new($LambdaForm$NameArray2, $LambdaForm$BasicType::ARG_TYPE_LIMIT, LambdaForm::INTERNED_ARGUMENT_LIMIT));
	{
		{
			$var($LambdaForm$BasicTypeArray, arr$, $LambdaForm$BasicType::ARG_TYPES);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$LambdaForm$BasicType* type = arr$->get(i$);
				{
					int32_t ord = $nc(type)->ordinal();
					for (int32_t i = 0; i < $nc($nc(LambdaForm::INTERNED_ARGUMENTS)->get(ord))->length; ++i) {
						$nc($nc(LambdaForm::INTERNED_ARGUMENTS)->get(ord))->set(i, $$new($LambdaForm$Name, i, type));
					}
				}
			}
		}
	}
	$assignStatic(LambdaForm::IMPL_NAMES, $MemberName::getFactory());
	$assignStatic(LambdaForm::LF_identity, $new($LambdaFormArray, $LambdaForm$BasicType::TYPE_LIMIT));
	$assignStatic(LambdaForm::LF_zero, $new($LambdaFormArray, $LambdaForm$BasicType::TYPE_LIMIT));
	$assignStatic(LambdaForm::NF_identity, $new($LambdaForm$NamedFunctionArray, $LambdaForm$BasicType::TYPE_LIMIT));
	$assignStatic(LambdaForm::NF_zero, $new($LambdaForm$NamedFunctionArray, $LambdaForm$BasicType::TYPE_LIMIT));
	$assignStatic(LambdaForm::createFormsLock, $new($Object));
	{
		if ($MethodHandleStatics::debugEnabled()) {
			$assignStatic(LambdaForm::DEBUG_NAME_COUNTERS, $new($HashMap));
			$assignStatic(LambdaForm::DEBUG_NAMES, $new($HashMap));
		} else {
			$assignStatic(LambdaForm::DEBUG_NAME_COUNTERS, nullptr);
			$assignStatic(LambdaForm::DEBUG_NAMES, nullptr);
		}
	}
	{
		$init($MethodHandleStatics);
		$load($LambdaForm$Holder);
		$nc($MethodHandleStatics::UNSAFE)->ensureClassInitialized($LambdaForm$Holder::class$);
	}
	$init($MethodHandleStatics);
	LambdaForm::TRACE_INTERPRETER = $MethodHandleStatics::TRACE_INTERPRETER;
}

LambdaForm::LambdaForm() {
}

$Class* LambdaForm::load$($String* name, bool initialize) {
	$loadClass(LambdaForm, name, initialize, &_LambdaForm_ClassInfo_, clinit$LambdaForm, allocate$LambdaForm);
	return class$;
}

$Class* LambdaForm::class$ = nullptr;

		} // invoke
	} // lang
} // java