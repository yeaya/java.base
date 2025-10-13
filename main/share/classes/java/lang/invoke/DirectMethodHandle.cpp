#include <java/lang/invoke/DirectMethodHandle.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/BoundMethodHandle.h>
#include <java/lang/invoke/DirectMethodHandle$1.h>
#include <java/lang/invoke/DirectMethodHandle$2.h>
#include <java/lang/invoke/DirectMethodHandle$Accessor.h>
#include <java/lang/invoke/DirectMethodHandle$Constructor.h>
#include <java/lang/invoke/DirectMethodHandle$EnsureInitialized.h>
#include <java/lang/invoke/DirectMethodHandle$Holder.h>
#include <java/lang/invoke/DirectMethodHandle$Interface.h>
#include <java/lang/invoke/DirectMethodHandle$Special.h>
#include <java/lang/invoke/DirectMethodHandle$StaticAccessor.h>
#include <java/lang/invoke/InvokerBytecodeGenerator.h>
#include <java/lang/invoke/Invokers.h>
#include <java/lang/invoke/LambdaForm$Kind.h>
#include <java/lang/invoke/LambdaForm$Name.h>
#include <java/lang/invoke/LambdaForm$NamedFunction.h>
#include <java/lang/invoke/LambdaForm.h>
#include <java/lang/invoke/MemberName$Factory.h>
#include <java/lang/invoke/MemberName.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandleImpl.h>
#include <java/lang/invoke/MethodHandleNatives.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/MethodTypeForm.h>
#include <java/lang/invoke/TypeDescriptor$OfField.h>
#include <java/lang/invoke/TypeDescriptor$OfMethod.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <java/util/function/Function.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/invoke/util/ValueConversions.h>
#include <sun/invoke/util/VerifyAccess.h>
#include <sun/invoke/util/VerifyType.h>
#include <sun/invoke/util/Wrapper.h>
#include <jcpp.h>

#undef ACCESSOR_FORMS
#undef AF_GETFIELD
#undef AF_GETSTATIC
#undef AF_GETSTATIC_INIT
#undef AF_LIMIT
#undef AF_PUTFIELD
#undef AF_PUTSTATIC
#undef AF_PUTSTATIC_INIT
#undef ALL_WRAPPERS
#undef ARG_BASE
#undef ARG_LIMIT
#undef CHECK_RECEIVER
#undef DIRECT_INVOKE_INTERFACE
#undef DIRECT_INVOKE_SPECIAL
#undef DIRECT_INVOKE_SPECIAL_IFC
#undef DIRECT_INVOKE_STATIC
#undef DIRECT_INVOKE_STATIC_INIT
#undef DIRECT_INVOKE_VIRTUAL
#undef DIRECT_NEW_INVOKE_SPECIAL
#undef DMH_THIS
#undef FT_CHECKED_REF
#undef FT_LAST_WRAPPER
#undef FT_LIMIT
#undef FT_UNCHECKED_REF
#undef F_HOLDER
#undef F_OFFSET
#undef GET_BOOLEAN
#undef GET_BOOLEAN_VOLATILE
#undef GET_BYTE
#undef GET_BYTE_VOLATILE
#undef GET_CHAR
#undef GET_CHAR_VOLATILE
#undef GET_DOUBLE
#undef GET_DOUBLE_VOLATILE
#undef GET_FLOAT
#undef GET_FLOAT_VOLATILE
#undef GET_INT
#undef GET_INT_VOLATILE
#undef GET_LONG
#undef GET_LONG_VOLATILE
#undef GET_MEMBER
#undef GET_REFERENCE
#undef GET_REFERENCE_VOLATILE
#undef GET_SHORT
#undef GET_SHORT_VOLATILE
#undef IMPL_NAMES
#undef INIT_BAR
#undef INSTANCE
#undef LINKER_CALL
#undef LONG_OBJ_TYPE
#undef NEW_OBJ
#undef NFS
#undef NF_LIMIT
#undef NF_UNSAFE
#undef OBJECT
#undef OBJ_BASE
#undef OBJ_CHECK
#undef OBJ_OBJ_TYPE
#undef POST_CAST
#undef PRE_CAST
#undef PUT_BOOLEAN
#undef PUT_BOOLEAN_VOLATILE
#undef PUT_BYTE
#undef PUT_BYTE_VOLATILE
#undef PUT_CHAR
#undef PUT_CHAR_VOLATILE
#undef PUT_DOUBLE
#undef PUT_DOUBLE_VOLATILE
#undef PUT_FLOAT
#undef PUT_FLOAT_VOLATILE
#undef PUT_INT
#undef PUT_INT_VOLATILE
#undef PUT_LONG
#undef PUT_LONG_VOLATILE
#undef PUT_REFERENCE
#undef PUT_REFERENCE_VOLATILE
#undef PUT_SHORT
#undef PUT_SHORT_VOLATILE
#undef RESULT
#undef SET_VALUE
#undef TYPE
#undef UNSAFE
#undef U_HOLDER

using $LambdaForm$NameArray = $Array<::java::lang::invoke::LambdaForm$Name>;
using $LambdaForm$NamedFunctionArray = $Array<::java::lang::invoke::LambdaForm$NamedFunction>;
using $LambdaFormArray = $Array<::java::lang::invoke::LambdaForm>;
using $WrapperArray = $Array<::sun::invoke::util::Wrapper>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassValue = ::java::lang::ClassValue;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Enum = ::java::lang::Enum;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Void = ::java::lang::Void;
using $BoundMethodHandle = ::java::lang::invoke::BoundMethodHandle;
using $DirectMethodHandle$1 = ::java::lang::invoke::DirectMethodHandle$1;
using $DirectMethodHandle$2 = ::java::lang::invoke::DirectMethodHandle$2;
using $DirectMethodHandle$Accessor = ::java::lang::invoke::DirectMethodHandle$Accessor;
using $DirectMethodHandle$Constructor = ::java::lang::invoke::DirectMethodHandle$Constructor;
using $DirectMethodHandle$EnsureInitialized = ::java::lang::invoke::DirectMethodHandle$EnsureInitialized;
using $DirectMethodHandle$Holder = ::java::lang::invoke::DirectMethodHandle$Holder;
using $DirectMethodHandle$Interface = ::java::lang::invoke::DirectMethodHandle$Interface;
using $DirectMethodHandle$Special = ::java::lang::invoke::DirectMethodHandle$Special;
using $DirectMethodHandle$StaticAccessor = ::java::lang::invoke::DirectMethodHandle$StaticAccessor;
using $InvokerBytecodeGenerator = ::java::lang::invoke::InvokerBytecodeGenerator;
using $Invokers = ::java::lang::invoke::Invokers;
using $LambdaForm = ::java::lang::invoke::LambdaForm;
using $LambdaForm$Kind = ::java::lang::invoke::LambdaForm$Kind;
using $LambdaForm$Name = ::java::lang::invoke::LambdaForm$Name;
using $LambdaForm$NamedFunction = ::java::lang::invoke::LambdaForm$NamedFunction;
using $MemberName = ::java::lang::invoke::MemberName;
using $MemberName$Factory = ::java::lang::invoke::MemberName$Factory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandleImpl = ::java::lang::invoke::MethodHandleImpl;
using $MethodHandleNatives = ::java::lang::invoke::MethodHandleNatives;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodType = ::java::lang::invoke::MethodType;
using $MethodTypeForm = ::java::lang::invoke::MethodTypeForm;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $Function = ::java::util::function::Function;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $ValueConversions = ::sun::invoke::util::ValueConversions;
using $VerifyAccess = ::sun::invoke::util::VerifyAccess;
using $VerifyType = ::sun::invoke::util::VerifyType;
using $Wrapper = ::sun::invoke::util::Wrapper;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _DirectMethodHandle_FieldAnnotations_ACCESSOR_FORMS[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$CompoundAttribute _DirectMethodHandle_FieldAnnotations_NFS[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$CompoundAttribute _DirectMethodHandle_MethodAnnotations_checkBase3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _DirectMethodHandle_MethodAnnotations_checkCast4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _DirectMethodHandle_MethodAnnotations_fieldOffset13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _DirectMethodHandle_MethodAnnotations_internalMemberName19[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _DirectMethodHandle_MethodAnnotations_internalMemberName20[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _DirectMethodHandle_MethodAnnotations_nullCheck31[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _DirectMethodHandle_MethodAnnotations_staticBase39[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _DirectMethodHandle_MethodAnnotations_staticOffset40[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _DirectMethodHandle_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DirectMethodHandle, $assertionsDisabled)},
	{"member", "Ljava/lang/invoke/MemberName;", nullptr, $FINAL, $field(DirectMethodHandle, member)},
	{"crackable", "Z", nullptr, $FINAL, $field(DirectMethodHandle, crackable)},
	{"IMPL_NAMES", "Ljava/lang/invoke/MemberName$Factory;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DirectMethodHandle, IMPL_NAMES)},
	{"AF_GETFIELD", "B", nullptr, $STATIC | $FINAL, $constField(DirectMethodHandle, AF_GETFIELD)},
	{"AF_PUTFIELD", "B", nullptr, $STATIC | $FINAL, $constField(DirectMethodHandle, AF_PUTFIELD)},
	{"AF_GETSTATIC", "B", nullptr, $STATIC | $FINAL, $constField(DirectMethodHandle, AF_GETSTATIC)},
	{"AF_PUTSTATIC", "B", nullptr, $STATIC | $FINAL, $constField(DirectMethodHandle, AF_PUTSTATIC)},
	{"AF_GETSTATIC_INIT", "B", nullptr, $STATIC | $FINAL, $constField(DirectMethodHandle, AF_GETSTATIC_INIT)},
	{"AF_PUTSTATIC_INIT", "B", nullptr, $STATIC | $FINAL, $constField(DirectMethodHandle, AF_PUTSTATIC_INIT)},
	{"AF_LIMIT", "B", nullptr, $STATIC | $FINAL, $constField(DirectMethodHandle, AF_LIMIT)},
	{"FT_LAST_WRAPPER", "I", nullptr, $STATIC | $FINAL, $constField(DirectMethodHandle, FT_LAST_WRAPPER)},
	{"FT_UNCHECKED_REF", "I", nullptr, $STATIC | $FINAL, $staticField(DirectMethodHandle, FT_UNCHECKED_REF)},
	{"FT_CHECKED_REF", "I", nullptr, $STATIC | $FINAL, $constField(DirectMethodHandle, FT_CHECKED_REF)},
	{"FT_LIMIT", "I", nullptr, $STATIC | $FINAL, $constField(DirectMethodHandle, FT_LIMIT)},
	{"ACCESSOR_FORMS", "[Ljava/lang/invoke/LambdaForm;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DirectMethodHandle, ACCESSOR_FORMS), _DirectMethodHandle_FieldAnnotations_ACCESSOR_FORMS},
	{"ALL_WRAPPERS", "[Lsun/invoke/util/Wrapper;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DirectMethodHandle, ALL_WRAPPERS)},
	{"NF_internalMemberName", "B", nullptr, $STATIC | $FINAL, $constField(DirectMethodHandle, NF_internalMemberName)},
	{"NF_internalMemberNameEnsureInit", "B", nullptr, $STATIC | $FINAL, $constField(DirectMethodHandle, NF_internalMemberNameEnsureInit)},
	{"NF_ensureInitialized", "B", nullptr, $STATIC | $FINAL, $constField(DirectMethodHandle, NF_ensureInitialized)},
	{"NF_fieldOffset", "B", nullptr, $STATIC | $FINAL, $constField(DirectMethodHandle, NF_fieldOffset)},
	{"NF_checkBase", "B", nullptr, $STATIC | $FINAL, $constField(DirectMethodHandle, NF_checkBase)},
	{"NF_staticBase", "B", nullptr, $STATIC | $FINAL, $constField(DirectMethodHandle, NF_staticBase)},
	{"NF_staticOffset", "B", nullptr, $STATIC | $FINAL, $constField(DirectMethodHandle, NF_staticOffset)},
	{"NF_checkCast", "B", nullptr, $STATIC | $FINAL, $constField(DirectMethodHandle, NF_checkCast)},
	{"NF_allocateInstance", "B", nullptr, $STATIC | $FINAL, $constField(DirectMethodHandle, NF_allocateInstance)},
	{"NF_constructorMethod", "B", nullptr, $STATIC | $FINAL, $constField(DirectMethodHandle, NF_constructorMethod)},
	{"NF_UNSAFE", "B", nullptr, $STATIC | $FINAL, $constField(DirectMethodHandle, NF_UNSAFE)},
	{"NF_checkReceiver", "B", nullptr, $STATIC | $FINAL, $constField(DirectMethodHandle, NF_checkReceiver)},
	{"NF_LIMIT", "B", nullptr, $STATIC | $FINAL, $constField(DirectMethodHandle, NF_LIMIT)},
	{"NFS", "[Ljava/lang/invoke/LambdaForm$NamedFunction;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DirectMethodHandle, NFS), _DirectMethodHandle_FieldAnnotations_NFS},
	{"OBJ_OBJ_TYPE", "Ljava/lang/invoke/MethodType;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DirectMethodHandle, OBJ_OBJ_TYPE)},
	{"LONG_OBJ_TYPE", "Ljava/lang/invoke/MethodType;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DirectMethodHandle, LONG_OBJ_TYPE)},
	{}
};

$MethodInfo _DirectMethodHandle_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;Ljava/lang/invoke/MemberName;Z)V", nullptr, $PRIVATE, $method(static_cast<void(DirectMethodHandle::*)($MethodType*,$LambdaForm*,$MemberName*,bool)>(&DirectMethodHandle::init$))},
	{"afIndex", "(BZI)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int8_t,bool,int32_t)>(&DirectMethodHandle::afIndex))},
	{"allocateInstance", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)(Object$*)>(&DirectMethodHandle::allocateInstance)), "java.lang.InstantiationException"},
	{"checkBase", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)(Object$*)>(&DirectMethodHandle::checkBase)), nullptr, nullptr, _DirectMethodHandle_MethodAnnotations_checkBase3},
	{"checkCast", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)(Object$*,Object$*)>(&DirectMethodHandle::checkCast)), nullptr, nullptr, _DirectMethodHandle_MethodAnnotations_checkCast4},
	{"checkCast", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0},
	{"checkInitialized", "(Ljava/lang/invoke/MemberName;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($MemberName*)>(&DirectMethodHandle::checkInitialized))},
	{"checkReceiver", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0},
	{"constructorMethod", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)(Object$*)>(&DirectMethodHandle::constructorMethod))},
	{"copyWith", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;)Ljava/lang/invoke/MethodHandle;", nullptr, 0},
	{"createFunction", "(B)Ljava/lang/invoke/LambdaForm$NamedFunction;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$LambdaForm$NamedFunction*(*)(int8_t)>(&DirectMethodHandle::createFunction))},
	{"ensureInitialized", "()V", nullptr, $PRIVATE, $method(static_cast<void(DirectMethodHandle::*)()>(&DirectMethodHandle::ensureInitialized))},
	{"ensureInitialized", "(Ljava/lang/Object;)V", nullptr, $STATIC, $method(static_cast<void(*)(Object$*)>(&DirectMethodHandle::ensureInitialized))},
	{"fieldOffset", "(Ljava/lang/Object;)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(Object$*)>(&DirectMethodHandle::fieldOffset)), nullptr, nullptr, _DirectMethodHandle_MethodAnnotations_fieldOffset13},
	{"findDirectMethodHandle", "(Ljava/lang/invoke/LambdaForm$Name;)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)($LambdaForm$Name*)>(&DirectMethodHandle::findDirectMethodHandle))},
	{"ftypeKind", "(Ljava/lang/Class;)I", "(Ljava/lang/Class<*>;)I", $STATIC, $method(static_cast<int32_t(*)($Class*)>(&DirectMethodHandle::ftypeKind))},
	{"getFieldKind", "(ZZLsun/invoke/util/Wrapper;)Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$LambdaForm$Kind*(*)(bool,bool,$Wrapper*)>(&DirectMethodHandle::getFieldKind))},
	{"getFunction", "(B)Ljava/lang/invoke/LambdaForm$NamedFunction;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$LambdaForm$NamedFunction*(*)(int8_t)>(&DirectMethodHandle::getFunction))},
	{"getNamedFunction", "(Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/LambdaForm$NamedFunction;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$LambdaForm$NamedFunction*(*)($String*,$MethodType*)>(&DirectMethodHandle::getNamedFunction)), "java.lang.ReflectiveOperationException"},
	{"internalMemberName", "()Ljava/lang/invoke/MemberName;", nullptr, 0, nullptr, nullptr, nullptr, _DirectMethodHandle_MethodAnnotations_internalMemberName19},
	{"internalMemberName", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)(Object$*)>(&DirectMethodHandle::internalMemberName)), nullptr, nullptr, _DirectMethodHandle_MethodAnnotations_internalMemberName20},
	{"internalMemberNameEnsureInit", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)(Object$*)>(&DirectMethodHandle::internalMemberNameEnsureInit))},
	{"internalProperties", "()Ljava/lang/String;", nullptr, 0},
	{"isCrackable", "()Z", nullptr, 0},
	{"make", "(BLjava/lang/Class;Ljava/lang/invoke/MemberName;Ljava/lang/Class;)Ljava/lang/invoke/DirectMethodHandle;", "(BLjava/lang/Class<*>;Ljava/lang/invoke/MemberName;Ljava/lang/Class<*>;)Ljava/lang/invoke/DirectMethodHandle;", $STATIC, $method(static_cast<DirectMethodHandle*(*)(int8_t,$Class*,$MemberName*,$Class*)>(&DirectMethodHandle::make))},
	{"make", "(Ljava/lang/Class;Ljava/lang/invoke/MemberName;)Ljava/lang/invoke/DirectMethodHandle;", "(Ljava/lang/Class<*>;Ljava/lang/invoke/MemberName;)Ljava/lang/invoke/DirectMethodHandle;", $STATIC, $method(static_cast<DirectMethodHandle*(*)($Class*,$MemberName*)>(&DirectMethodHandle::make))},
	{"make", "(Ljava/lang/invoke/MemberName;)Ljava/lang/invoke/DirectMethodHandle;", nullptr, $STATIC, $method(static_cast<DirectMethodHandle*(*)($MemberName*)>(&DirectMethodHandle::make))},
	{"makeAllocator", "(Ljava/lang/invoke/MemberName;)Ljava/lang/invoke/DirectMethodHandle;", nullptr, $PRIVATE | $STATIC, $method(static_cast<DirectMethodHandle*(*)($MemberName*)>(&DirectMethodHandle::makeAllocator))},
	{"makePreparedFieldLambdaForm", "(BZI)Ljava/lang/invoke/LambdaForm;", nullptr, $STATIC, $method(static_cast<$LambdaForm*(*)(int8_t,bool,int32_t)>(&DirectMethodHandle::makePreparedFieldLambdaForm))},
	{"makePreparedLambdaForm", "(Ljava/lang/invoke/MethodType;I)Ljava/lang/invoke/LambdaForm;", nullptr, $STATIC, $method(static_cast<$LambdaForm*(*)($MethodType*,int32_t)>(&DirectMethodHandle::makePreparedLambdaForm))},
	{"maybeCompile", "(Ljava/lang/invoke/LambdaForm;Ljava/lang/invoke/MemberName;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($LambdaForm*,$MemberName*)>(&DirectMethodHandle::maybeCompile))},
	{"nullCheck", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)(Object$*)>(&DirectMethodHandle::nullCheck)), nullptr, nullptr, _DirectMethodHandle_MethodAnnotations_nullCheck31},
	{"preparedFieldLambdaForm", "(Ljava/lang/invoke/MemberName;)Ljava/lang/invoke/LambdaForm;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$LambdaForm*(*)($MemberName*)>(&DirectMethodHandle::preparedFieldLambdaForm))},
	{"preparedFieldLambdaForm", "(BZLjava/lang/Class;)Ljava/lang/invoke/LambdaForm;", "(BZLjava/lang/Class<*>;)Ljava/lang/invoke/LambdaForm;", $PRIVATE | $STATIC, $method(static_cast<$LambdaForm*(*)(int8_t,bool,$Class*)>(&DirectMethodHandle::preparedFieldLambdaForm))},
	{"preparedLambdaForm", "(Ljava/lang/invoke/MemberName;Z)Ljava/lang/invoke/LambdaForm;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$LambdaForm*(*)($MemberName*,bool)>(&DirectMethodHandle::preparedLambdaForm))},
	{"preparedLambdaForm", "(Ljava/lang/invoke/MemberName;)Ljava/lang/invoke/LambdaForm;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$LambdaForm*(*)($MemberName*)>(&DirectMethodHandle::preparedLambdaForm))},
	{"preparedLambdaForm", "(Ljava/lang/invoke/MethodType;I)Ljava/lang/invoke/LambdaForm;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$LambdaForm*(*)($MethodType*,int32_t)>(&DirectMethodHandle::preparedLambdaForm))},
	{"rebind", "()Ljava/lang/invoke/BoundMethodHandle;", nullptr, 0},
	{"shouldBeInitialized", "(Ljava/lang/invoke/MemberName;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($MemberName*)>(&DirectMethodHandle::shouldBeInitialized))},
	{"staticBase", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)(Object$*)>(&DirectMethodHandle::staticBase)), nullptr, nullptr, _DirectMethodHandle_MethodAnnotations_staticBase39},
	{"staticOffset", "(Ljava/lang/Object;)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(Object$*)>(&DirectMethodHandle::staticOffset)), nullptr, nullptr, _DirectMethodHandle_MethodAnnotations_staticOffset40},
	{"viewAsType", "(Ljava/lang/invoke/MethodType;Z)Ljava/lang/invoke/MethodHandle;", nullptr, 0},
	{}
};

$InnerClassInfo _DirectMethodHandle_InnerClassesInfo_[] = {
	{"java.lang.invoke.DirectMethodHandle$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"java.lang.invoke.DirectMethodHandle$Holder", "java.lang.invoke.DirectMethodHandle", "Holder", $FINAL},
	{"java.lang.invoke.DirectMethodHandle$StaticAccessor", "java.lang.invoke.DirectMethodHandle", "StaticAccessor", $STATIC},
	{"java.lang.invoke.DirectMethodHandle$Accessor", "java.lang.invoke.DirectMethodHandle", "Accessor", $STATIC},
	{"java.lang.invoke.DirectMethodHandle$Constructor", "java.lang.invoke.DirectMethodHandle", "Constructor", $STATIC},
	{"java.lang.invoke.DirectMethodHandle$Interface", "java.lang.invoke.DirectMethodHandle", "Interface", $STATIC},
	{"java.lang.invoke.DirectMethodHandle$Special", "java.lang.invoke.DirectMethodHandle", "Special", $STATIC},
	{"java.lang.invoke.DirectMethodHandle$EnsureInitialized", "java.lang.invoke.DirectMethodHandle", "EnsureInitialized", $PRIVATE | $STATIC},
	{"java.lang.invoke.DirectMethodHandle$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DirectMethodHandle_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.DirectMethodHandle",
	"java.lang.invoke.MethodHandle",
	nullptr,
	_DirectMethodHandle_FieldInfo_,
	_DirectMethodHandle_MethodInfo_,
	nullptr,
	nullptr,
	_DirectMethodHandle_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.invoke.DirectMethodHandle$2,java.lang.invoke.DirectMethodHandle$Holder,java.lang.invoke.DirectMethodHandle$StaticAccessor,java.lang.invoke.DirectMethodHandle$Accessor,java.lang.invoke.DirectMethodHandle$Constructor,java.lang.invoke.DirectMethodHandle$Interface,java.lang.invoke.DirectMethodHandle$Special,java.lang.invoke.DirectMethodHandle$EnsureInitialized,java.lang.invoke.DirectMethodHandle$1"
};

$Object* allocate$DirectMethodHandle($Class* clazz) {
	return $of($alloc(DirectMethodHandle));
}

bool DirectMethodHandle::$assertionsDisabled = false;
$MemberName$Factory* DirectMethodHandle::IMPL_NAMES = nullptr;
int32_t DirectMethodHandle::FT_UNCHECKED_REF = 0;
$LambdaFormArray* DirectMethodHandle::ACCESSOR_FORMS = nullptr;
$WrapperArray* DirectMethodHandle::ALL_WRAPPERS = nullptr;
$LambdaForm$NamedFunctionArray* DirectMethodHandle::NFS = nullptr;
$MethodType* DirectMethodHandle::OBJ_OBJ_TYPE = nullptr;
$MethodType* DirectMethodHandle::LONG_OBJ_TYPE = nullptr;

void DirectMethodHandle::init$($MethodType* mtype, $LambdaForm* form, $MemberName* member$renamed, bool crackable) {
	$var($MemberName, member, member$renamed);
	$MethodHandle::init$(mtype, form);
	if (!$nc(member)->isResolved()) {
		$throwNew($InternalError);
	}
	bool var$2 = $nc($nc(member)->getDeclaringClass())->isInterface();
	bool var$1 = var$2 && member->getReferenceKind() == (int8_t)9;
	bool var$0 = var$1 && member->isMethod();
	if (var$0 && !member->isAbstract()) {
		$load($Object);
		$Class* var$3 = $Object::class$;
		$var($String, var$4, member->getName());
		$var($MethodType, var$5, member->getMethodType());
		$var($MemberName, m, $new($MemberName, var$3, var$4, var$5, member->getReferenceKind()));
		$assign(m, $nc($($MemberName::getFactory()))->resolveOrNull(m->getReferenceKind(), m, nullptr, -1));
		if (m != nullptr && m->isPublic()) {
			bool var$6 = !DirectMethodHandle::$assertionsDisabled;
			if (var$6) {
				int8_t var$7 = member->getReferenceKind();
				var$6 = !(var$7 == m->getReferenceKind());
			}
			if (var$6) {
				$throwNew($AssertionError);
			}
			$assign(member, m);
		}
	}
	$set(this, member, member);
	this->crackable = crackable;
}

DirectMethodHandle* DirectMethodHandle::make(int8_t refKind, $Class* refc, $MemberName* member$renamed, $Class* callerClass) {
	$init(DirectMethodHandle);
	$var($MemberName, member, member$renamed);
	$var($MethodType, mtype, $nc(member)->getMethodOrFieldType());
	if (!member->isStatic()) {
		bool var$0 = !$nc(member->getDeclaringClass())->isAssignableFrom(refc);
		if (var$0 || member->isConstructor()) {
			$throwNew($InternalError, $(member->toString()));
		}
		$assign(mtype, $nc(mtype)->insertParameterTypes(0, $$new($ClassArray, {refc})));
	}
	if (!member->isField()) {

		$var(DirectMethodHandle, var$1, nullptr)
		switch (refKind) {
		case 7:
			{
				{
					$assign(member, member->asSpecial());
					if (callerClass == nullptr) {
						$throwNew($InternalError, "callerClass must not be null for REF_invokeSpecial"_s);
					}
					$var($LambdaForm, lform, preparedLambdaForm(member, $nc(callerClass)->isInterface()));
					$assign(var$1, $new($DirectMethodHandle$Special, mtype, lform, member, true, callerClass));
					break;
				}
			}
		case 9:
			{
				{
					$var($LambdaForm, lform, preparedLambdaForm(member, true));
					$assign(var$1, $new($DirectMethodHandle$Interface, mtype, lform, member, true, refc));
					break;
				}
			}
		default:
			{
				{
					$var($LambdaForm, lform, preparedLambdaForm(member));
					$assign(var$1, $new(DirectMethodHandle, mtype, lform, member, true));
					break;
				}
			}
		}
		return var$1;
	} else {
		$var($LambdaForm, lform, preparedFieldLambdaForm(member));
		if (member->isStatic()) {
			int64_t offset = $MethodHandleNatives::staticFieldOffset(member);
			$var($Object, base, $MethodHandleNatives::staticFieldBase(member));
			return $new($DirectMethodHandle$StaticAccessor, mtype, lform, member, true, base, offset);
		} else {
			int64_t offset = $MethodHandleNatives::objectFieldOffset(member);
			if (!DirectMethodHandle::$assertionsDisabled && !(offset == (int32_t)offset)) {
				$throwNew($AssertionError);
			}
			return $new($DirectMethodHandle$Accessor, mtype, lform, member, true, (int32_t)offset);
		}
	}
}

DirectMethodHandle* DirectMethodHandle::make($Class* refc, $MemberName* member) {
	$init(DirectMethodHandle);
	int8_t refKind = $nc(member)->getReferenceKind();
	if (refKind == (int8_t)7) {
		refKind = (int8_t)5;
	}
	return make(refKind, refc, member, nullptr);
}

DirectMethodHandle* DirectMethodHandle::make($MemberName* member) {
	$init(DirectMethodHandle);
	if ($nc(member)->isConstructor()) {
		return makeAllocator(member);
	}
	return make($nc(member)->getDeclaringClass(), member);
}

DirectMethodHandle* DirectMethodHandle::makeAllocator($MemberName* ctor$renamed) {
	$init(DirectMethodHandle);
	$var($MemberName, ctor, ctor$renamed);
	bool var$0 = !DirectMethodHandle::$assertionsDisabled;
	if (var$0) {
		bool var$1 = $nc(ctor)->isConstructor();
		var$0 = !(var$1 && $nc($(ctor->getName()))->equals("<init>"_s));
	}
	if (var$0) {
		$throwNew($AssertionError);
	}
	$Class* instanceClass = $nc(ctor)->getDeclaringClass();
	$assign(ctor, ctor->asConstructor());
	bool var$2 = !DirectMethodHandle::$assertionsDisabled;
	if (var$2) {
		bool var$3 = ctor->isConstructor();
		var$2 = !(var$3 && ctor->getReferenceKind() == (int8_t)8);
	}
	if (var$2) {
		$throwNew($AssertionError, $of(ctor));
	}
	$var($MethodType, mtype, $nc($(ctor->getMethodType()))->changeReturnType(instanceClass));
	$var($LambdaForm, lform, preparedLambdaForm(ctor));
	$var($MemberName, init, ctor->asSpecial());
	$init($Void);
	if (!DirectMethodHandle::$assertionsDisabled && !($cast($Class, $nc($($nc(init)->getMethodType()))->returnType()) == $Void::TYPE)) {
		$throwNew($AssertionError);
	}
	return $new($DirectMethodHandle$Constructor, mtype, lform, ctor, true, init, instanceClass);
}

$BoundMethodHandle* DirectMethodHandle::rebind() {
	return $BoundMethodHandle::makeReinvoker(this);
}

$MethodHandle* DirectMethodHandle::copyWith($MethodType* mt, $LambdaForm* lf) {
	if (!DirectMethodHandle::$assertionsDisabled && !($of(this)->getClass() == DirectMethodHandle::class$)) {
		$throwNew($AssertionError);
	}
	return $new(DirectMethodHandle, mt, lf, this->member, this->crackable);
}

$MethodHandle* DirectMethodHandle::viewAsType($MethodType* newType, bool strict) {
	if (!DirectMethodHandle::$assertionsDisabled && !(viewAsTypeChecks(newType, strict))) {
		$throwNew($AssertionError);
	}
	if (!DirectMethodHandle::$assertionsDisabled && !($of(this)->getClass() == DirectMethodHandle::class$)) {
		$throwNew($AssertionError);
	}
	return $new(DirectMethodHandle, newType, this->form, this->member, false);
}

bool DirectMethodHandle::isCrackable() {
	return this->crackable;
}

$Object* DirectMethodHandle::internalProperties() {
	return $of($str({"\n& DMH.MN="_s, $(internalMemberName())}));
}

$MemberName* DirectMethodHandle::internalMemberName() {
	return this->member;
}

$LambdaForm* DirectMethodHandle::preparedLambdaForm($MemberName* m, bool adaptToSpecialIfc) {
	$init(DirectMethodHandle);
	if (!DirectMethodHandle::$assertionsDisabled && !($nc(m)->isInvocable())) {
		$throwNew($AssertionError, $of(m));
	}
	$var($MethodType, mtype, $nc($($nc(m)->getInvocationType()))->basicType());
	if (!DirectMethodHandle::$assertionsDisabled && !(!m->isMethodHandleInvoke())) {
		$throwNew($AssertionError, $of(m));
	}

	int32_t var$0 = 0;
	switch (m->getReferenceKind()) {
	case 5:
		{
			var$0 = 0;
			break;
		}
	case 6:
		{
			var$0 = 1;
			break;
		}
	case 7:
		{
			var$0 = 2;
			break;
		}
	case 9:
		{
			var$0 = 4;
			break;
		}
	case 8:
		{
			var$0 = 3;
			break;
		}
	default:
		{
			$throwNew($InternalError, $(m->toString()));
		}
	}
	int32_t which = var$0;
	if (which == 1 && shouldBeInitialized(m)) {
		preparedLambdaForm(mtype, which);
		which = 5;
	}
	if (which == 2 && adaptToSpecialIfc) {
		which = 20;
	}
	$var($LambdaForm, lform, preparedLambdaForm(mtype, which));
	maybeCompile(lform, m);
	if (!DirectMethodHandle::$assertionsDisabled && !($nc($($cast($MethodType, $nc($($nc(lform)->methodType()))->dropParameterTypes(0, 1))))->equals($($of($nc($(m->getInvocationType()))->basicType()))))) {
		$throwNew($AssertionError, $($of($Arrays::asList($$new($ObjectArray, {
			$of(m),
			$($of($nc($(m->getInvocationType()))->basicType())),
			$of(lform),
			$($of(lform->methodType()))
		})))));
	}
	return lform;
}

$LambdaForm* DirectMethodHandle::preparedLambdaForm($MemberName* m) {
	$init(DirectMethodHandle);
	return preparedLambdaForm(m, false);
}

$LambdaForm* DirectMethodHandle::preparedLambdaForm($MethodType* mtype, int32_t which) {
	$init(DirectMethodHandle);
	$var($LambdaForm, lform, $nc($($nc(mtype)->form()))->cachedLambdaForm(which));
	if (lform != nullptr) {
		return lform;
	}
	$assign(lform, makePreparedLambdaForm(mtype, which));
	return $nc($(mtype->form()))->setCachedLambdaForm(which, lform);
}

$LambdaForm* DirectMethodHandle::makePreparedLambdaForm($MethodType* mtype, int32_t which) {
	$init(DirectMethodHandle);
	bool needsInit = (which == 5);
	bool doesAlloc = (which == 3);
	bool needsReceiverCheck = (which == 4 || which == 20);
	$var($String, linkerName, nullptr);
	$LambdaForm$Kind* kind = nullptr;
	switch (which) {
	case 0:
		{
			$assign(linkerName, "linkToVirtual"_s);
			$init($LambdaForm$Kind);
			kind = $LambdaForm$Kind::DIRECT_INVOKE_VIRTUAL;
			break;
		}
	case 1:
		{
			$assign(linkerName, "linkToStatic"_s);
			$init($LambdaForm$Kind);
			kind = $LambdaForm$Kind::DIRECT_INVOKE_STATIC;
			break;
		}
	case 5:
		{
			$assign(linkerName, "linkToStatic"_s);
			$init($LambdaForm$Kind);
			kind = $LambdaForm$Kind::DIRECT_INVOKE_STATIC_INIT;
			break;
		}
	case 20:
		{
			$assign(linkerName, "linkToSpecial"_s);
			$init($LambdaForm$Kind);
			kind = $LambdaForm$Kind::DIRECT_INVOKE_SPECIAL_IFC;
			break;
		}
	case 2:
		{
			$assign(linkerName, "linkToSpecial"_s);
			$init($LambdaForm$Kind);
			kind = $LambdaForm$Kind::DIRECT_INVOKE_SPECIAL;
			break;
		}
	case 4:
		{
			$assign(linkerName, "linkToInterface"_s);
			$init($LambdaForm$Kind);
			kind = $LambdaForm$Kind::DIRECT_INVOKE_INTERFACE;
			break;
		}
	case 3:
		{
			$assign(linkerName, "linkToSpecial"_s);
			$init($LambdaForm$Kind);
			kind = $LambdaForm$Kind::DIRECT_NEW_INVOKE_SPECIAL;
			break;
		}
	default:
		{
			$throwNew($InternalError, $$str({"which="_s, $$str(which)}));
		}
	}
	$load($MemberName);
	$var($MethodType, mtypeWithArg, $nc(mtype)->appendParameterTypes($$new($ClassArray, {$MemberName::class$})));
	if (doesAlloc) {
		$load($Object);
		$init($Void);
		$assign(mtypeWithArg, $nc($($nc(mtypeWithArg)->insertParameterTypes(0, $$new($ClassArray, {$Object::class$}))))->changeReturnType($Void::TYPE));
	}
	$load($MethodHandle);
	$var($MemberName, linker, $new($MemberName, $MethodHandle::class$, linkerName, mtypeWithArg, (int8_t)6));
	try {
		$load($NoSuchMethodException);
		$assign(linker, $nc(DirectMethodHandle::IMPL_NAMES)->resolveOrFail((int8_t)6, linker, nullptr, -1, $NoSuchMethodException::class$));
	} catch ($ReflectiveOperationException&) {
		$var($ReflectiveOperationException, ex, $catch());
		$throw($($MethodHandleStatics::newInternalError(static_cast<$Exception*>(ex))));
	}
	int32_t DMH_THIS = 0;
	int32_t ARG_BASE = 1;
	int32_t ARG_LIMIT = ARG_BASE + mtype->parameterCount();
	int32_t nameCursor = ARG_LIMIT;
	int32_t NEW_OBJ = (doesAlloc ? nameCursor++ : -1);
	int32_t GET_MEMBER = nameCursor++;
	int32_t CHECK_RECEIVER = (needsReceiverCheck ? nameCursor++ : -1);
	int32_t LINKER_CALL = nameCursor++;
	$var($LambdaForm$NameArray, names, $LambdaForm::arguments(nameCursor - ARG_LIMIT, $(mtype->invokerType())));
	if (!DirectMethodHandle::$assertionsDisabled && !($nc(names)->length == nameCursor)) {
		$throwNew($AssertionError);
	}
	if (doesAlloc) {
		$nc(names)->set(NEW_OBJ, $$new($LambdaForm$Name, $(getFunction(DirectMethodHandle::NF_allocateInstance)), $$new($ObjectArray, {$of(names->get(DMH_THIS))})));
		names->set(GET_MEMBER, $$new($LambdaForm$Name, $(getFunction(DirectMethodHandle::NF_constructorMethod)), $$new($ObjectArray, {$of(names->get(DMH_THIS))})));
	} else if (needsInit) {
		$nc(names)->set(GET_MEMBER, $$new($LambdaForm$Name, $(getFunction(DirectMethodHandle::NF_internalMemberNameEnsureInit)), $$new($ObjectArray, {$of(names->get(DMH_THIS))})));
	} else {
		$nc(names)->set(GET_MEMBER, $$new($LambdaForm$Name, $(getFunction(DirectMethodHandle::NF_internalMemberName)), $$new($ObjectArray, {$of(names->get(DMH_THIS))})));
	}
	if (!DirectMethodHandle::$assertionsDisabled && !($equals(findDirectMethodHandle($nc(names)->get(GET_MEMBER)), $nc(names)->get(DMH_THIS)))) {
		$throwNew($AssertionError);
	}
	$load($ObjectArray);
	$var($ObjectArray, outArgs, $Arrays::copyOfRange(names, ARG_BASE, GET_MEMBER + 1, $getClass($ObjectArray)));
	if (needsReceiverCheck) {
		$nc(names)->set(CHECK_RECEIVER, $$new($LambdaForm$Name, $(getFunction(DirectMethodHandle::NF_checkReceiver)), $$new($ObjectArray, {
			$of(names->get(DMH_THIS)),
			$of(names->get(ARG_BASE))
		})));
		outArgs->set(0, names->get(CHECK_RECEIVER));
	}
	if (!DirectMethodHandle::$assertionsDisabled && !($equals(outArgs->get(outArgs->length - 1), $nc(names)->get(GET_MEMBER)))) {
		$throwNew($AssertionError);
	}
	int32_t result = -2;
	if (doesAlloc) {
		if (!DirectMethodHandle::$assertionsDisabled && !($equals(outArgs->get(outArgs->length - 2), $nc(names)->get(NEW_OBJ)))) {
			$throwNew($AssertionError);
		}
		$System::arraycopy(outArgs, 0, outArgs, 1, outArgs->length - 2);
		outArgs->set(0, $nc(names)->get(NEW_OBJ));
		result = NEW_OBJ;
	}
	$nc(names)->set(LINKER_CALL, $$new($LambdaForm$Name, linker, outArgs));
	$var($LambdaForm, lform, $new($LambdaForm, ARG_LIMIT, names, result, kind));
	lform->compileToBytecode();
	return lform;
}

$Object* DirectMethodHandle::findDirectMethodHandle($LambdaForm$Name* name) {
	$init(DirectMethodHandle);
	bool var$1 = $nc($nc(name)->function)->equals($(getFunction(DirectMethodHandle::NF_internalMemberName)));
	bool var$0 = var$1 || $nc($nc(name)->function)->equals($(getFunction(DirectMethodHandle::NF_internalMemberNameEnsureInit)));
	if (var$0 || $nc($nc(name)->function)->equals($(getFunction(DirectMethodHandle::NF_constructorMethod)))) {
		if (!DirectMethodHandle::$assertionsDisabled && !($nc(name->arguments)->length == 1)) {
			$throwNew($AssertionError);
		}
		return $of($nc(name->arguments)->get(0));
	}
	return $of(nullptr);
}

void DirectMethodHandle::maybeCompile($LambdaForm* lform, $MemberName* m) {
	$init(DirectMethodHandle);
	$load($MethodHandle);
	if ($nc(lform)->vmentry == nullptr && $VerifyAccess::isSamePackage($nc(m)->getDeclaringClass(), $MethodHandle::class$)) {
		lform->compileToBytecode();
	}
}

$Object* DirectMethodHandle::internalMemberName(Object$* mh) {
	$init(DirectMethodHandle);
	return $of($nc(($cast(DirectMethodHandle, mh)))->member);
}

$Object* DirectMethodHandle::internalMemberNameEnsureInit(Object$* mh) {
	$init(DirectMethodHandle);
	$var(DirectMethodHandle, dmh, $cast(DirectMethodHandle, mh));
	$nc(dmh)->ensureInitialized();
	return $of(dmh->member);
}

bool DirectMethodHandle::shouldBeInitialized($MemberName* member) {
	$init(DirectMethodHandle);
	switch ($nc(member)->getReferenceKind()) {
	case 6:
		{}
	case 2:
		{}
	case 4:
		{}
	case 8:
		{
			break;
		}
	default:
		{
			return false;
		}
	}
	$Class* cls = member->getDeclaringClass();
	$load($ValueConversions);
	$load($MethodHandleImpl);
	$load($Invokers);
	if (cls == $ValueConversions::class$ || cls == $MethodHandleImpl::class$ || cls == $Invokers::class$) {
		return false;
	}
	$load($MethodHandle);
	bool var$0 = $VerifyAccess::isSamePackage($MethodHandle::class$, cls);
	if (var$0 || $VerifyAccess::isSamePackage($ValueConversions::class$, cls)) {
		$init($MethodHandleStatics);
		if ($nc($MethodHandleStatics::UNSAFE)->shouldBeInitialized(cls)) {
			$nc($MethodHandleStatics::UNSAFE)->ensureClassInitialized(cls);
		}
		return false;
	}
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->shouldBeInitialized(cls);
}

void DirectMethodHandle::ensureInitialized() {
	if (checkInitialized(this->member)) {
		updateForm($$new($DirectMethodHandle$1, this));
	}
}

bool DirectMethodHandle::checkInitialized($MemberName* member) {
	$init(DirectMethodHandle);
	$Class* defc = $nc(member)->getDeclaringClass();
	$init($DirectMethodHandle$EnsureInitialized);
	$var($WeakReference, ref, $cast($WeakReference, $nc($DirectMethodHandle$EnsureInitialized::INSTANCE)->get(defc)));
	if (ref == nullptr) {
		return true;
	}
	if ($nc(ref)->refersTo($($Thread::currentThread()))) {
		$init($MethodHandleStatics);
		if ($nc($MethodHandleStatics::UNSAFE)->shouldBeInitialized(defc)) {
			return false;
		}
	} else {
		$init($MethodHandleStatics);
		$nc($MethodHandleStatics::UNSAFE)->ensureClassInitialized(defc);
	}
	$init($MethodHandleStatics);
	if (!DirectMethodHandle::$assertionsDisabled && !(!$nc($MethodHandleStatics::UNSAFE)->shouldBeInitialized(defc))) {
		$throwNew($AssertionError);
	}
	$nc($DirectMethodHandle$EnsureInitialized::INSTANCE)->remove(defc);
	return true;
}

void DirectMethodHandle::ensureInitialized(Object$* mh) {
	$init(DirectMethodHandle);
	$nc(($cast(DirectMethodHandle, mh)))->ensureInitialized();
}

$Object* DirectMethodHandle::checkReceiver(Object$* recv) {
	$throwNew($InternalError, "Should only be invoked on a subclass"_s);
	$shouldNotReachHere();
}

$Object* DirectMethodHandle::constructorMethod(Object$* mh) {
	$init(DirectMethodHandle);
	$var($DirectMethodHandle$Constructor, dmh, $cast($DirectMethodHandle$Constructor, mh));
	return $of($nc(dmh)->initMethod);
}

$Object* DirectMethodHandle::allocateInstance(Object$* mh) {
	$init(DirectMethodHandle);
	$var($DirectMethodHandle$Constructor, dmh, $cast($DirectMethodHandle$Constructor, mh));
	$init($MethodHandleStatics);
	return $of($nc($MethodHandleStatics::UNSAFE)->allocateInstance($nc(dmh)->instanceClass));
}

int64_t DirectMethodHandle::fieldOffset(Object$* accessorObj) {
	$init(DirectMethodHandle);
	return $nc(($cast($DirectMethodHandle$Accessor, accessorObj)))->fieldOffset;
}

$Object* DirectMethodHandle::checkBase(Object$* obj) {
	$init(DirectMethodHandle);
	return $of($Objects::requireNonNull(obj));
}

$Object* DirectMethodHandle::nullCheck(Object$* obj) {
	$init(DirectMethodHandle);
	return $of($Objects::requireNonNull(obj));
}

$Object* DirectMethodHandle::staticBase(Object$* accessorObj) {
	$init(DirectMethodHandle);
	return $of($nc(($cast($DirectMethodHandle$StaticAccessor, accessorObj)))->staticBase);
}

int64_t DirectMethodHandle::staticOffset(Object$* accessorObj) {
	$init(DirectMethodHandle);
	return $nc(($cast($DirectMethodHandle$StaticAccessor, accessorObj)))->staticOffset;
}

$Object* DirectMethodHandle::checkCast(Object$* mh, Object$* obj) {
	$init(DirectMethodHandle);
	return $of($nc(($cast(DirectMethodHandle, mh)))->checkCast(obj));
}

$Object* DirectMethodHandle::checkCast(Object$* obj) {
	return $of($nc($nc(this->member)->getReturnType())->cast(obj));
}

int32_t DirectMethodHandle::afIndex(int8_t formOp, bool isVolatile, int32_t ftypeKind) {
	$init(DirectMethodHandle);
	return ((formOp * DirectMethodHandle::FT_LIMIT * 2) + (isVolatile ? DirectMethodHandle::FT_LIMIT : 0) + ftypeKind);
}

int32_t DirectMethodHandle::ftypeKind($Class* ftype) {
	$init(DirectMethodHandle);
	if ($nc(ftype)->isPrimitive()) {
		return $nc($($Wrapper::forPrimitiveType(ftype)))->ordinal();
	} else {
		$load($Object);
		if ($VerifyType::isNullReferenceConversion($Object::class$, ftype)) {
			return DirectMethodHandle::FT_UNCHECKED_REF;
		} else {
			return DirectMethodHandle::FT_CHECKED_REF;
		}
	}
}

$LambdaForm* DirectMethodHandle::preparedFieldLambdaForm($MemberName* m) {
	$init(DirectMethodHandle);
	$Class* ftype = $nc(m)->getFieldType();
	bool isVolatile = m->isVolatile();

	int8_t var$0 = 0;
	switch (m->getReferenceKind()) {
	case 1:
		{
			var$0 = DirectMethodHandle::AF_GETFIELD;
			break;
		}
	case 3:
		{
			var$0 = DirectMethodHandle::AF_PUTFIELD;
			break;
		}
	case 2:
		{
			var$0 = DirectMethodHandle::AF_GETSTATIC;
			break;
		}
	case 4:
		{
			var$0 = DirectMethodHandle::AF_PUTSTATIC;
			break;
		}
	default:
		{
			$throwNew($InternalError, $(m->toString()));
		}
	}
	int8_t formOp = var$0;
	if (shouldBeInitialized(m)) {
		preparedFieldLambdaForm(formOp, isVolatile, ftype);
		formOp += (DirectMethodHandle::AF_GETSTATIC_INIT - DirectMethodHandle::AF_GETSTATIC);
	}
	$var($LambdaForm, lform, preparedFieldLambdaForm(formOp, isVolatile, ftype));
	maybeCompile(lform, m);
	if (!DirectMethodHandle::$assertionsDisabled && !($nc($($cast($MethodType, $nc($($nc(lform)->methodType()))->dropParameterTypes(0, 1))))->equals($($of($nc($(m->getInvocationType()))->basicType()))))) {
		$throwNew($AssertionError, $($of($Arrays::asList($$new($ObjectArray, {
			$of(m),
			$($of($nc($(m->getInvocationType()))->basicType())),
			$of(lform),
			$($of(lform->methodType()))
		})))));
	}
	return lform;
}

$LambdaForm* DirectMethodHandle::preparedFieldLambdaForm(int8_t formOp, bool isVolatile, $Class* ftype) {
	$init(DirectMethodHandle);
	int32_t ftypeKind = DirectMethodHandle::ftypeKind(ftype);
	int32_t afIndex = DirectMethodHandle::afIndex(formOp, isVolatile, ftypeKind);
	$var($LambdaForm, lform, $nc(DirectMethodHandle::ACCESSOR_FORMS)->get(afIndex));
	if (lform != nullptr) {
		return lform;
	}
	$assign(lform, makePreparedFieldLambdaForm(formOp, isVolatile, ftypeKind));
	$nc(DirectMethodHandle::ACCESSOR_FORMS)->set(afIndex, lform);
	return lform;
}

$LambdaForm$Kind* DirectMethodHandle::getFieldKind(bool isGetter, bool isVolatile, $Wrapper* wrapper) {
	$init(DirectMethodHandle);
	if (isGetter) {
		if (isVolatile) {
			$init($DirectMethodHandle$2);
			switch ($nc($DirectMethodHandle$2::$SwitchMap$sun$invoke$util$Wrapper)->get($nc((wrapper))->ordinal())) {
			case 1:
				{
					$init($LambdaForm$Kind);
					return $LambdaForm$Kind::GET_BOOLEAN_VOLATILE;
				}
			case 2:
				{
					$init($LambdaForm$Kind);
					return $LambdaForm$Kind::GET_BYTE_VOLATILE;
				}
			case 3:
				{
					$init($LambdaForm$Kind);
					return $LambdaForm$Kind::GET_SHORT_VOLATILE;
				}
			case 4:
				{
					$init($LambdaForm$Kind);
					return $LambdaForm$Kind::GET_CHAR_VOLATILE;
				}
			case 5:
				{
					$init($LambdaForm$Kind);
					return $LambdaForm$Kind::GET_INT_VOLATILE;
				}
			case 6:
				{
					$init($LambdaForm$Kind);
					return $LambdaForm$Kind::GET_LONG_VOLATILE;
				}
			case 7:
				{
					$init($LambdaForm$Kind);
					return $LambdaForm$Kind::GET_FLOAT_VOLATILE;
				}
			case 8:
				{
					$init($LambdaForm$Kind);
					return $LambdaForm$Kind::GET_DOUBLE_VOLATILE;
				}
			case 9:
				{
					$init($LambdaForm$Kind);
					return $LambdaForm$Kind::GET_REFERENCE_VOLATILE;
				}
			}
		} else {
			$init($DirectMethodHandle$2);
			switch ($nc($DirectMethodHandle$2::$SwitchMap$sun$invoke$util$Wrapper)->get($nc((wrapper))->ordinal())) {
			case 1:
				{
					$init($LambdaForm$Kind);
					return $LambdaForm$Kind::GET_BOOLEAN;
				}
			case 2:
				{
					$init($LambdaForm$Kind);
					return $LambdaForm$Kind::GET_BYTE;
				}
			case 3:
				{
					$init($LambdaForm$Kind);
					return $LambdaForm$Kind::GET_SHORT;
				}
			case 4:
				{
					$init($LambdaForm$Kind);
					return $LambdaForm$Kind::GET_CHAR;
				}
			case 5:
				{
					$init($LambdaForm$Kind);
					return $LambdaForm$Kind::GET_INT;
				}
			case 6:
				{
					$init($LambdaForm$Kind);
					return $LambdaForm$Kind::GET_LONG;
				}
			case 7:
				{
					$init($LambdaForm$Kind);
					return $LambdaForm$Kind::GET_FLOAT;
				}
			case 8:
				{
					$init($LambdaForm$Kind);
					return $LambdaForm$Kind::GET_DOUBLE;
				}
			case 9:
				{
					$init($LambdaForm$Kind);
					return $LambdaForm$Kind::GET_REFERENCE;
				}
			}
		}
	} else if (isVolatile) {
		$init($DirectMethodHandle$2);
		switch ($nc($DirectMethodHandle$2::$SwitchMap$sun$invoke$util$Wrapper)->get($nc((wrapper))->ordinal())) {
		case 1:
			{
				$init($LambdaForm$Kind);
				return $LambdaForm$Kind::PUT_BOOLEAN_VOLATILE;
			}
		case 2:
			{
				$init($LambdaForm$Kind);
				return $LambdaForm$Kind::PUT_BYTE_VOLATILE;
			}
		case 3:
			{
				$init($LambdaForm$Kind);
				return $LambdaForm$Kind::PUT_SHORT_VOLATILE;
			}
		case 4:
			{
				$init($LambdaForm$Kind);
				return $LambdaForm$Kind::PUT_CHAR_VOLATILE;
			}
		case 5:
			{
				$init($LambdaForm$Kind);
				return $LambdaForm$Kind::PUT_INT_VOLATILE;
			}
		case 6:
			{
				$init($LambdaForm$Kind);
				return $LambdaForm$Kind::PUT_LONG_VOLATILE;
			}
		case 7:
			{
				$init($LambdaForm$Kind);
				return $LambdaForm$Kind::PUT_FLOAT_VOLATILE;
			}
		case 8:
			{
				$init($LambdaForm$Kind);
				return $LambdaForm$Kind::PUT_DOUBLE_VOLATILE;
			}
		case 9:
			{
				$init($LambdaForm$Kind);
				return $LambdaForm$Kind::PUT_REFERENCE_VOLATILE;
			}
		}
	} else {
		$init($DirectMethodHandle$2);
		switch ($nc($DirectMethodHandle$2::$SwitchMap$sun$invoke$util$Wrapper)->get($nc((wrapper))->ordinal())) {
		case 1:
			{
				$init($LambdaForm$Kind);
				return $LambdaForm$Kind::PUT_BOOLEAN;
			}
		case 2:
			{
				$init($LambdaForm$Kind);
				return $LambdaForm$Kind::PUT_BYTE;
			}
		case 3:
			{
				$init($LambdaForm$Kind);
				return $LambdaForm$Kind::PUT_SHORT;
			}
		case 4:
			{
				$init($LambdaForm$Kind);
				return $LambdaForm$Kind::PUT_CHAR;
			}
		case 5:
			{
				$init($LambdaForm$Kind);
				return $LambdaForm$Kind::PUT_INT;
			}
		case 6:
			{
				$init($LambdaForm$Kind);
				return $LambdaForm$Kind::PUT_LONG;
			}
		case 7:
			{
				$init($LambdaForm$Kind);
				return $LambdaForm$Kind::PUT_FLOAT;
			}
		case 8:
			{
				$init($LambdaForm$Kind);
				return $LambdaForm$Kind::PUT_DOUBLE;
			}
		case 9:
			{
				$init($LambdaForm$Kind);
				return $LambdaForm$Kind::PUT_REFERENCE;
			}
		}
	}
	$throwNew($AssertionError, $of("Invalid arguments"_s));
}

$LambdaForm* DirectMethodHandle::makePreparedFieldLambdaForm(int8_t formOp, bool isVolatile, int32_t ftypeKind) {
	$init(DirectMethodHandle);
	bool isGetter = ((int32_t)(formOp & (uint32_t)1)) == ((int32_t)(DirectMethodHandle::AF_GETFIELD & (uint32_t)1));
	bool isStatic = (formOp >= DirectMethodHandle::AF_GETSTATIC);
	bool needsInit = (formOp >= DirectMethodHandle::AF_GETSTATIC_INIT);
	bool needsCast = (ftypeKind == DirectMethodHandle::FT_CHECKED_REF);
	$init($Wrapper);
	$Wrapper* fw = (needsCast ? $Wrapper::OBJECT : $nc(DirectMethodHandle::ALL_WRAPPERS)->get(ftypeKind));
	$Class* ft = $nc(fw)->primitiveType();
	$load($String);
	if (!DirectMethodHandle::$assertionsDisabled && !(DirectMethodHandle::ftypeKind(needsCast ? $String::class$ : ft) == ftypeKind)) {
		$throwNew($AssertionError);
	}
	$LambdaForm$Kind* kind = getFieldKind(isGetter, isVolatile, fw);
	$var($MethodType, linkerType, nullptr);
	if (isGetter) {
		$load($Object);
		$init($Long);
		$assign(linkerType, $MethodType::methodType(ft, $Object::class$, $$new($ClassArray, {$Long::TYPE})));
	} else {
		$init($Void);
		$load($Object);
			$init($Long);
		$assign(linkerType, $MethodType::methodType($Void::TYPE, $Object::class$, $$new($ClassArray, {
			$Long::TYPE,
			ft
		})));
	}
	$load($Unsafe);
	$var($MemberName, linker, $new($MemberName, $Unsafe::class$, $nc(kind)->methodName, linkerType, (int8_t)5));
	try {
		$load($NoSuchMethodException);
		$assign(linker, $nc(DirectMethodHandle::IMPL_NAMES)->resolveOrFail((int8_t)5, linker, nullptr, -1, $NoSuchMethodException::class$));
	} catch ($ReflectiveOperationException&) {
		$var($ReflectiveOperationException, ex, $catch());
		$throw($($MethodHandleStatics::newInternalError(static_cast<$Exception*>(ex))));
	}
	$var($MethodType, mtype, nullptr);
	if (isGetter) {
		$assign(mtype, $MethodType::methodType(ft));
	} else {
		$init($Void);
		$assign(mtype, $MethodType::methodType($Void::TYPE, ft));
	}
	$assign(mtype, $nc(mtype)->basicType());
	if (!isStatic) {
		$load($Object);
		$assign(mtype, mtype->insertParameterTypes(0, $$new($ClassArray, {$Object::class$})));
	}
	int32_t DMH_THIS = 0;
	int32_t ARG_BASE = 1;
	int32_t ARG_LIMIT = ARG_BASE + mtype->parameterCount();
	int32_t OBJ_BASE = isStatic ? -1 : ARG_BASE;
	int32_t SET_VALUE = isGetter ? -1 : ARG_LIMIT - 1;
	int32_t nameCursor = ARG_LIMIT;
	int32_t F_HOLDER = (isStatic ? nameCursor++ : -1);
	int32_t F_OFFSET = nameCursor++;
	int32_t OBJ_CHECK = (OBJ_BASE >= 0 ? nameCursor++ : -1);
	int32_t U_HOLDER = nameCursor++;
	int32_t INIT_BAR = (needsInit ? nameCursor++ : -1);
	int32_t PRE_CAST = (needsCast && !isGetter ? nameCursor++ : -1);
	int32_t LINKER_CALL = nameCursor++;
	int32_t POST_CAST = (needsCast && isGetter ? nameCursor++ : -1);
	int32_t RESULT = nameCursor - 1;
	$var($LambdaForm$NameArray, names, $LambdaForm::arguments(nameCursor - ARG_LIMIT, $(mtype->invokerType())));
	if (needsInit) {
		$nc(names)->set(INIT_BAR, $$new($LambdaForm$Name, $(getFunction(DirectMethodHandle::NF_ensureInitialized)), $$new($ObjectArray, {$of(names->get(DMH_THIS))})));
	}
	if (needsCast && !isGetter) {
		$nc(names)->set(PRE_CAST, $$new($LambdaForm$Name, $(getFunction(DirectMethodHandle::NF_checkCast)), $$new($ObjectArray, {
			$of(names->get(DMH_THIS)),
			$of(names->get(SET_VALUE))
		})));
	}
	$var($ObjectArray, outArgs, $new($ObjectArray, 1 + $nc(linkerType)->parameterCount()));
	if (!DirectMethodHandle::$assertionsDisabled && !(outArgs->length == (isGetter ? 3 : 4))) {
		$throwNew($AssertionError);
	}
	outArgs->set(0, $nc(names)->set(U_HOLDER, $$new($LambdaForm$Name, $(getFunction(DirectMethodHandle::NF_UNSAFE)), $$new($ObjectArray, 0))));
	if (isStatic) {
		outArgs->set(1, names->set(F_HOLDER, $$new($LambdaForm$Name, $(getFunction(DirectMethodHandle::NF_staticBase)), $$new($ObjectArray, {$of(names->get(DMH_THIS))}))));
		outArgs->set(2, names->set(F_OFFSET, $$new($LambdaForm$Name, $(getFunction(DirectMethodHandle::NF_staticOffset)), $$new($ObjectArray, {$of(names->get(DMH_THIS))}))));
	} else {
		outArgs->set(1, names->set(OBJ_CHECK, $$new($LambdaForm$Name, $(getFunction(DirectMethodHandle::NF_checkBase)), $$new($ObjectArray, {$of(names->get(OBJ_BASE))}))));
		outArgs->set(2, names->set(F_OFFSET, $$new($LambdaForm$Name, $(getFunction(DirectMethodHandle::NF_fieldOffset)), $$new($ObjectArray, {$of(names->get(DMH_THIS))}))));
	}
	if (!isGetter) {
		outArgs->set(3, (needsCast ? $of(names->get(PRE_CAST)) : $of(names->get(SET_VALUE))));
	}
	{
		$var($ObjectArray, arr$, outArgs);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Object0, a, arr$->get(i$));
			if (!DirectMethodHandle::$assertionsDisabled && !(a != nullptr)) {
				$throwNew($AssertionError);
			}
		}
	}
	names->set(LINKER_CALL, $$new($LambdaForm$Name, linker, outArgs));
	if (needsCast && isGetter) {
		names->set(POST_CAST, $$new($LambdaForm$Name, $(getFunction(DirectMethodHandle::NF_checkCast)), $$new($ObjectArray, {
			$of(names->get(DMH_THIS)),
			$of(names->get(LINKER_CALL))
		})));
	}
	{
		$var($LambdaForm$NameArray, arr$, names);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($LambdaForm$Name, n, arr$->get(i$));
			if (!DirectMethodHandle::$assertionsDisabled && !(n != nullptr)) {
				$throwNew($AssertionError);
			}
		}
	}
	$var($LambdaForm, form, nullptr);
	if (needsCast || needsInit) {
		$assign(form, $new($LambdaForm, ARG_LIMIT, names, RESULT));
	} else {
		$assign(form, $new($LambdaForm, ARG_LIMIT, names, RESULT, kind));
	}
	if ($LambdaForm::debugNames()) {
		$var($StringBuilder, nameBuilder, $new($StringBuilder, $nc(kind)->methodName));
		if (isStatic) {
			nameBuilder->append("Static"_s);
		} else {
			nameBuilder->append("Field"_s);
		}
		if (needsCast) {
			nameBuilder->append("Cast"_s);
		}
		if (needsInit) {
			nameBuilder->append("Init"_s);
		}
		$LambdaForm::associateWithDebugName(form, $(nameBuilder->toString()));
	}
	return form;
}

$LambdaForm$NamedFunction* DirectMethodHandle::getFunction(int8_t func) {
	$init(DirectMethodHandle);
	$var($LambdaForm$NamedFunction, nf, $nc(DirectMethodHandle::NFS)->get(func));
	if (nf != nullptr) {
		return nf;
	}
	$assign(nf, ($nc(DirectMethodHandle::NFS)->set(func, $(createFunction(func)))));
	if (!DirectMethodHandle::$assertionsDisabled && !($InvokerBytecodeGenerator::isStaticallyInvocable($$new($LambdaForm$NamedFunctionArray, {nf})))) {
		$throwNew($AssertionError);
	}
	return nf;
}

$LambdaForm$NamedFunction* DirectMethodHandle::createFunction(int8_t func) {
	$init(DirectMethodHandle);
	try {
		{
			$var($MemberName, member, nullptr)
			switch (func) {
			case DirectMethodHandle::NF_internalMemberName:
				{
					return getNamedFunction("internalMemberName"_s, DirectMethodHandle::OBJ_OBJ_TYPE);
				}
			case DirectMethodHandle::NF_internalMemberNameEnsureInit:
				{
					return getNamedFunction("internalMemberNameEnsureInit"_s, DirectMethodHandle::OBJ_OBJ_TYPE);
				}
			case DirectMethodHandle::NF_ensureInitialized:
				{
					$init($Void);
					$load($Object);
					return getNamedFunction("ensureInitialized"_s, $($MethodType::methodType($Void::TYPE, $Object::class$)));
				}
			case DirectMethodHandle::NF_fieldOffset:
				{
					return getNamedFunction("fieldOffset"_s, DirectMethodHandle::LONG_OBJ_TYPE);
				}
			case DirectMethodHandle::NF_checkBase:
				{
					return getNamedFunction("checkBase"_s, DirectMethodHandle::OBJ_OBJ_TYPE);
				}
			case DirectMethodHandle::NF_staticBase:
				{
					return getNamedFunction("staticBase"_s, DirectMethodHandle::OBJ_OBJ_TYPE);
				}
			case DirectMethodHandle::NF_staticOffset:
				{
					return getNamedFunction("staticOffset"_s, DirectMethodHandle::LONG_OBJ_TYPE);
				}
			case DirectMethodHandle::NF_checkCast:
				{
					$load($Object);
					return getNamedFunction("checkCast"_s, $($MethodType::methodType($Object::class$, $Object::class$, $$new($ClassArray, {$Object::class$}))));
				}
			case DirectMethodHandle::NF_allocateInstance:
				{
					return getNamedFunction("allocateInstance"_s, DirectMethodHandle::OBJ_OBJ_TYPE);
				}
			case DirectMethodHandle::NF_constructorMethod:
				{
					return getNamedFunction("constructorMethod"_s, DirectMethodHandle::OBJ_OBJ_TYPE);
				}
			case DirectMethodHandle::NF_UNSAFE:
				{
					$load($MethodHandleStatics);
					$load($Unsafe);
					$assign(member, $new($MemberName, $MethodHandleStatics::class$, "UNSAFE"_s, $Unsafe::class$, (int8_t)1));
					$load($NoSuchMethodException);
					return $new($LambdaForm$NamedFunction, $($nc($($MemberName::getFactory()))->resolveOrFail((int8_t)1, member, DirectMethodHandle::class$, -1, $NoSuchMethodException::class$)));
				}
			case DirectMethodHandle::NF_checkReceiver:
				{
					$assign(member, $new($MemberName, DirectMethodHandle::class$, "checkReceiver"_s, DirectMethodHandle::OBJ_OBJ_TYPE, (int8_t)5));
					$load($NoSuchMethodException);
					return $new($LambdaForm$NamedFunction, $($nc($($MemberName::getFactory()))->resolveOrFail((int8_t)5, member, DirectMethodHandle::class$, -1, $NoSuchMethodException::class$)));
				}
			default:
				{
					$throw($($MethodHandleStatics::newInternalError($$str({"Unknown function: "_s, $$str(func)}))));
				}
			}
		}
	} catch ($ReflectiveOperationException&) {
		$var($ReflectiveOperationException, ex, $catch());
		$throw($($MethodHandleStatics::newInternalError(static_cast<$Exception*>(ex))));
	}
	$shouldNotReachHere();
}

$LambdaForm$NamedFunction* DirectMethodHandle::getNamedFunction($String* name, $MethodType* type) {
	$init(DirectMethodHandle);
	$var($MemberName, member, $new($MemberName, DirectMethodHandle::class$, name, type, (int8_t)6));
	$load($NoSuchMethodException);
	return $new($LambdaForm$NamedFunction, $($nc($($MemberName::getFactory()))->resolveOrFail((int8_t)6, member, DirectMethodHandle::class$, -1, $NoSuchMethodException::class$)));
}

void clinit$DirectMethodHandle($Class* class$) {
	DirectMethodHandle::$assertionsDisabled = !DirectMethodHandle::class$->desiredAssertionStatus();
	$assignStatic(DirectMethodHandle::IMPL_NAMES, $MemberName::getFactory());
	$init($Wrapper);
	DirectMethodHandle::FT_UNCHECKED_REF = $Wrapper::OBJECT->ordinal();
	$assignStatic(DirectMethodHandle::ACCESSOR_FORMS, $new($LambdaFormArray, DirectMethodHandle::afIndex(DirectMethodHandle::AF_LIMIT, false, 0)));
	$assignStatic(DirectMethodHandle::ALL_WRAPPERS, $Wrapper::values());
	$assignStatic(DirectMethodHandle::NFS, $new($LambdaForm$NamedFunctionArray, DirectMethodHandle::NF_LIMIT));
	$load($Object);
	$assignStatic(DirectMethodHandle::OBJ_OBJ_TYPE, $MethodType::methodType($Object::class$, $Object::class$));
	$init($Long);
	$assignStatic(DirectMethodHandle::LONG_OBJ_TYPE, $MethodType::methodType($Long::TYPE, $Object::class$));
	{
		$init($MethodHandleStatics);
		$load($DirectMethodHandle$Holder);
		$nc($MethodHandleStatics::UNSAFE)->ensureClassInitialized($DirectMethodHandle$Holder::class$);
	}
}

DirectMethodHandle::DirectMethodHandle() {
}

$Class* DirectMethodHandle::load$($String* name, bool initialize) {
	$loadClass(DirectMethodHandle, name, initialize, &_DirectMethodHandle_ClassInfo_, clinit$DirectMethodHandle, allocate$DirectMethodHandle);
	return class$;
}

$Class* DirectMethodHandle::class$ = nullptr;

		} // invoke
	} // lang
} // java