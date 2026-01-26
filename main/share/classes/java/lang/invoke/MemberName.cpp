#include <java/lang/invoke/MemberName.h>

#include <java/lang/AbstractMethodError.h>
#include <java/lang/AssertionError.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InternalError.h>
#include <java/lang/LinkageError.h>
#include <java/lang/Module.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/lang/NoSuchFieldException.h>
#include <java/lang/NoSuchMethodError.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/invoke/MemberName$Factory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandleNatives.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/ResolvedMethodName.h>
#include <java/lang/invoke/TypeDescriptor$OfField.h>
#include <java/lang/invoke/VarHandle$AccessMode.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Member.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <java/util/Objects.h>
#include <sun/invoke/util/BytecodeDescriptor.h>
#include <sun/invoke/util/VerifyAccess.h>
#include <jcpp.h>

#undef ALL_ACCESS
#undef ALL_KINDS
#undef ANNOTATION
#undef BRIDGE
#undef CALLER_SENSITIVE
#undef CONSTRUCTOR_NAME
#undef ENUM
#undef INSTANCE
#undef IS_CONSTRUCTOR
#undef IS_FIELD
#undef IS_FIELD_OR_METHOD
#undef IS_INVOCABLE
#undef IS_METHOD
#undef IS_TYPE
#undef MH_INVOKE_MODS
#undef MODULE
#undef PACKAGE
#undef PUBLIC
#undef RECOGNIZED_MODIFIERS
#undef SEARCH_ALL_SUPERS
#undef STATIC
#undef SYNTHETIC
#undef TRUSTED_FINAL
#undef TYPE
#undef VARARGS

using $AbstractMethodError = ::java::lang::AbstractMethodError;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $LinkageError = ::java::lang::LinkageError;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $NoSuchFieldException = ::java::lang::NoSuchFieldException;
using $NoSuchMethodError = ::java::lang::NoSuchMethodError;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Void = ::java::lang::Void;
using $MemberName$Factory = ::java::lang::invoke::MemberName$Factory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandleNatives = ::java::lang::invoke::MethodHandleNatives;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandle$AccessMode = ::java::lang::invoke::VarHandle$AccessMode;
using $Constructor = ::java::lang::reflect::Constructor;
using $Field = ::java::lang::reflect::Field;
using $Member = ::java::lang::reflect::Member;
using $Method = ::java::lang::reflect::Method;
using $Modifier = ::java::lang::reflect::Modifier;
using $Objects = ::java::util::Objects;
using $BytecodeDescriptor = ::sun::invoke::util::BytecodeDescriptor;
using $VerifyAccess = ::sun::invoke::util::VerifyAccess;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _MemberName_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MemberName, $assertionsDisabled)},
	{"clazz", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE, $field(MemberName, clazz)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MemberName, name)},
	{"type", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(MemberName, type)},
	{"flags", "I", nullptr, $PRIVATE, $field(MemberName, flags)},
	{"method", "Ljava/lang/invoke/ResolvedMethodName;", nullptr, $PRIVATE, $field(MemberName, method)},
	{"resolution", "Ljava/lang/Object;", nullptr, 0, $field(MemberName, resolution)},
	{"MH_INVOKE_MODS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MemberName, MH_INVOKE_MODS)},
	{"BRIDGE", "I", nullptr, $STATIC | $FINAL, $constField(MemberName, BRIDGE)},
	{"VARARGS", "I", nullptr, $STATIC | $FINAL, $constField(MemberName, VARARGS)},
	{"SYNTHETIC", "I", nullptr, $STATIC | $FINAL, $constField(MemberName, SYNTHETIC)},
	{"ANNOTATION", "I", nullptr, $STATIC | $FINAL, $constField(MemberName, ANNOTATION)},
	{"ENUM", "I", nullptr, $STATIC | $FINAL, $constField(MemberName, ENUM)},
	{"CONSTRUCTOR_NAME", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(MemberName, CONSTRUCTOR_NAME)},
	{"RECOGNIZED_MODIFIERS", "I", nullptr, $STATIC | $FINAL, $constField(MemberName, RECOGNIZED_MODIFIERS)},
	{"IS_METHOD", "I", nullptr, $STATIC | $FINAL, $constField(MemberName, IS_METHOD)},
	{"IS_CONSTRUCTOR", "I", nullptr, $STATIC | $FINAL, $constField(MemberName, IS_CONSTRUCTOR)},
	{"IS_FIELD", "I", nullptr, $STATIC | $FINAL, $constField(MemberName, IS_FIELD)},
	{"IS_TYPE", "I", nullptr, $STATIC | $FINAL, $constField(MemberName, IS_TYPE)},
	{"CALLER_SENSITIVE", "I", nullptr, $STATIC | $FINAL, $constField(MemberName, CALLER_SENSITIVE)},
	{"TRUSTED_FINAL", "I", nullptr, $STATIC | $FINAL, $constField(MemberName, TRUSTED_FINAL)},
	{"ALL_ACCESS", "I", nullptr, $STATIC | $FINAL, $constField(MemberName, ALL_ACCESS)},
	{"ALL_KINDS", "I", nullptr, $STATIC | $FINAL, $constField(MemberName, ALL_KINDS)},
	{"IS_INVOCABLE", "I", nullptr, $STATIC | $FINAL, $constField(MemberName, IS_INVOCABLE)},
	{"IS_FIELD_OR_METHOD", "I", nullptr, $STATIC | $FINAL, $constField(MemberName, IS_FIELD_OR_METHOD)},
	{"SEARCH_ALL_SUPERS", "I", nullptr, $STATIC | $FINAL, $constField(MemberName, SEARCH_ALL_SUPERS)},
	{}
};

$MethodInfo _MemberName_MethodInfo_[] = {
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/lang/reflect/Method;)V", nullptr, $PUBLIC, $method(MemberName, init$, void, $Method*)},
	{"<init>", "(Ljava/lang/reflect/Method;Z)V", nullptr, $PUBLIC, $method(MemberName, init$, void, $Method*, bool)},
	{"<init>", "(Ljava/lang/reflect/Constructor;)V", "(Ljava/lang/reflect/Constructor<*>;)V", $PUBLIC, $method(MemberName, init$, void, $Constructor*)},
	{"<init>", "(Ljava/lang/reflect/Field;)V", nullptr, $PUBLIC, $method(MemberName, init$, void, $Field*)},
	{"<init>", "(Ljava/lang/reflect/Field;Z)V", nullptr, $PUBLIC, $method(MemberName, init$, void, $Field*, bool)},
	{"<init>", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PUBLIC, $method(MemberName, init$, void, $Class*)},
	{"<init>", "()V", nullptr, 0, $method(MemberName, init$, void)},
	{"<init>", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;B)V", "(Ljava/lang/Class<*>;Ljava/lang/String;Ljava/lang/Class<*>;B)V", $PUBLIC, $method(MemberName, init$, void, $Class*, $String*, $Class*, int8_t)},
	{"<init>", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/invoke/MethodType;B)V", "(Ljava/lang/Class<*>;Ljava/lang/String;Ljava/lang/invoke/MethodType;B)V", $PUBLIC, $method(MemberName, init$, void, $Class*, $String*, $MethodType*, int8_t)},
	{"<init>", "(BLjava/lang/Class;Ljava/lang/String;Ljava/lang/Object;)V", "(BLjava/lang/Class<*>;Ljava/lang/String;Ljava/lang/Object;)V", $PUBLIC, $method(MemberName, init$, void, int8_t, $Class*, $String*, Object$*)},
	{"asConstructor", "()Ljava/lang/invoke/MemberName;", nullptr, $PUBLIC, $method(MemberName, asConstructor, MemberName*)},
	{"asNormalOriginal", "()Ljava/lang/invoke/MemberName;", nullptr, $PUBLIC, $method(MemberName, asNormalOriginal, MemberName*)},
	{"asSetter", "()Ljava/lang/invoke/MemberName;", nullptr, $PUBLIC, $method(MemberName, asSetter, MemberName*)},
	{"asSpecial", "()Ljava/lang/invoke/MemberName;", nullptr, $PUBLIC, $method(MemberName, asSpecial, MemberName*)},
	{"canBeStaticallyBound", "()Z", nullptr, $PUBLIC, $method(MemberName, canBeStaticallyBound, bool)},
	{"changeReferenceKind", "(BB)Ljava/lang/invoke/MemberName;", nullptr, $PRIVATE, $method(MemberName, changeReferenceKind, MemberName*, int8_t, int8_t)},
	{"checkForTypeAlias", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", 0, $method(MemberName, checkForTypeAlias, void, $Class*)},
	{"clone", "()Ljava/lang/invoke/MemberName;", nullptr, $PROTECTED, $virtualMethod(MemberName, clone, $Object*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(MemberName, equals, bool, Object$*)},
	{"equals", "(Ljava/lang/invoke/MemberName;)Z", nullptr, $PUBLIC, $method(MemberName, equals, bool, MemberName*)},
	{"expandFromVM", "()V", nullptr, $PRIVATE, $method(MemberName, expandFromVM, void)},
	{"flagsMods", "(IIB)I", nullptr, $PRIVATE | $STATIC, $staticMethod(MemberName, flagsMods, int32_t, int32_t, int32_t, int8_t)},
	{"getClassLoader", "()Ljava/lang/ClassLoader;", nullptr, $PUBLIC, $method(MemberName, getClassLoader, $ClassLoader*)},
	{"getDeclaringClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(MemberName, getDeclaringClass, $Class*)},
	{"getDefinition", "()Ljava/lang/invoke/MemberName;", nullptr, $PUBLIC, $method(MemberName, getDefinition, MemberName*)},
	{"getFactory", "()Ljava/lang/invoke/MemberName$Factory;", nullptr, $STATIC, $staticMethod(MemberName, getFactory, $MemberName$Factory*)},
	{"getFieldType", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC, $method(MemberName, getFieldType, $Class*)},
	{"getInvocationType", "()Ljava/lang/invoke/MethodType;", nullptr, $PUBLIC, $method(MemberName, getInvocationType, $MethodType*)},
	{"getMethodDescriptor", "()Ljava/lang/String;", nullptr, 0, $method(MemberName, getMethodDescriptor, $String*)},
	{"getMethodOrFieldType", "()Ljava/lang/invoke/MethodType;", nullptr, $PUBLIC, $method(MemberName, getMethodOrFieldType, $MethodType*)},
	{"getMethodType", "()Ljava/lang/invoke/MethodType;", nullptr, $PUBLIC, $method(MemberName, getMethodType, $MethodType*)},
	{"getModifiers", "()I", nullptr, $PUBLIC, $virtualMethod(MemberName, getModifiers, int32_t)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MemberName, getName, $String*)},
	{"getName", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(MemberName, getName, $String*, Object$*)},
	{"getParameterTypes", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC, $method(MemberName, getParameterTypes, $ClassArray*)},
	{"getReferenceKind", "()B", nullptr, $PUBLIC, $method(MemberName, getReferenceKind, int8_t)},
	{"getReturnType", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC, $method(MemberName, getReturnType, $Class*)},
	{"getSignature", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(MemberName, getSignature, $String*)},
	{"getType", "()Ljava/lang/Object;", nullptr, $PUBLIC, $method(MemberName, getType, $Object*)},
	{"hasReceiverTypeDispatch", "()Z", nullptr, $PUBLIC, $method(MemberName, hasReceiverTypeDispatch, bool)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(MemberName, hashCode, int32_t)},
	{"init", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Object;I)V", "(Ljava/lang/Class<*>;Ljava/lang/String;Ljava/lang/Object;I)V", $PRIVATE, $method(MemberName, init, void, $Class*, $String*, Object$*, int32_t)},
	{"initResolved", "(Z)V", nullptr, 0, $method(MemberName, initResolved, void, bool)},
	{"isAbstract", "()Z", nullptr, $PUBLIC, $method(MemberName, isAbstract, bool)},
	{"isAccessibleFrom", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PUBLIC, $method(MemberName, isAccessibleFrom, bool, $Class*)},
	{"isBridge", "()Z", nullptr, $PUBLIC, $method(MemberName, isBridge, bool)},
	{"isCallerSensitive", "()Z", nullptr, $PUBLIC, $method(MemberName, isCallerSensitive, bool)},
	{"isConstructor", "()Z", nullptr, $PUBLIC, $method(MemberName, isConstructor, bool)},
	{"isField", "()Z", nullptr, $PUBLIC, $method(MemberName, isField, bool)},
	{"isFieldOrMethod", "()Z", nullptr, $PUBLIC, $method(MemberName, isFieldOrMethod, bool)},
	{"isFinal", "()Z", nullptr, $PUBLIC, $method(MemberName, isFinal, bool)},
	{"isGetter", "()Z", nullptr, $PUBLIC, $method(MemberName, isGetter, bool)},
	{"isInvocable", "()Z", nullptr, $PUBLIC, $method(MemberName, isInvocable, bool)},
	{"isMethod", "()Z", nullptr, $PUBLIC, $method(MemberName, isMethod, bool)},
	{"isMethodHandleInvoke", "()Z", nullptr, $PUBLIC, $method(MemberName, isMethodHandleInvoke, bool)},
	{"isMethodHandleInvokeName", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(MemberName, isMethodHandleInvokeName, bool, $String*)},
	{"isNative", "()Z", nullptr, $PUBLIC, $method(MemberName, isNative, bool)},
	{"isObjectPublicMethod", "()Z", nullptr, $PRIVATE, $method(MemberName, isObjectPublicMethod, bool)},
	{"isPackage", "()Z", nullptr, $PUBLIC, $method(MemberName, isPackage, bool)},
	{"isPrivate", "()Z", nullptr, $PUBLIC, $method(MemberName, isPrivate, bool)},
	{"isProtected", "()Z", nullptr, $PUBLIC, $method(MemberName, isProtected, bool)},
	{"isPublic", "()Z", nullptr, $PUBLIC, $method(MemberName, isPublic, bool)},
	{"isResolved", "()Z", nullptr, $PUBLIC, $method(MemberName, isResolved, bool)},
	{"isSetter", "()Z", nullptr, $PUBLIC, $method(MemberName, isSetter, bool)},
	{"isStatic", "()Z", nullptr, $PUBLIC, $method(MemberName, isStatic, bool)},
	{"isSynthetic", "()Z", nullptr, $PUBLIC, $virtualMethod(MemberName, isSynthetic, bool)},
	{"isTrustedFinalField", "()Z", nullptr, $PUBLIC, $method(MemberName, isTrustedFinalField, bool)},
	{"isType", "()Z", nullptr, $PUBLIC, $method(MemberName, isType, bool)},
	{"isVarHandleMethodInvoke", "()Z", nullptr, $PUBLIC, $method(MemberName, isVarHandleMethodInvoke, bool)},
	{"isVarHandleMethodInvokeName", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(MemberName, isVarHandleMethodInvokeName, bool, $String*)},
	{"isVarargs", "()Z", nullptr, $PUBLIC, $method(MemberName, isVarargs, bool)},
	{"isVolatile", "()Z", nullptr, $PUBLIC, $method(MemberName, isVolatile, bool)},
	{"makeAccessException", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/IllegalAccessException;", nullptr, $PUBLIC, $method(MemberName, makeAccessException, $IllegalAccessException*, $String*, Object$*)},
	{"makeAccessException", "()Ljava/lang/ReflectiveOperationException;", nullptr, $PUBLIC, $method(MemberName, makeAccessException, $ReflectiveOperationException*)},
	{"makeMethodHandleInvoke", "(Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MemberName;", nullptr, $STATIC, $staticMethod(MemberName, makeMethodHandleInvoke, MemberName*, $String*, $MethodType*)},
	{"makeMethodHandleInvoke", "(Ljava/lang/String;Ljava/lang/invoke/MethodType;I)Ljava/lang/invoke/MemberName;", nullptr, $STATIC, $staticMethod(MemberName, makeMethodHandleInvoke, MemberName*, $String*, $MethodType*, int32_t)},
	{"makeVarHandleMethodInvoke", "(Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MemberName;", nullptr, $STATIC, $staticMethod(MemberName, makeVarHandleMethodInvoke, MemberName*, $String*, $MethodType*)},
	{"makeVarHandleMethodInvoke", "(Ljava/lang/String;Ljava/lang/invoke/MethodType;I)Ljava/lang/invoke/MemberName;", nullptr, $STATIC, $staticMethod(MemberName, makeVarHandleMethodInvoke, MemberName*, $String*, $MethodType*, int32_t)},
	{"message", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(MemberName, message, $String*)},
	{"referenceKindIsConsistent", "()Z", nullptr, $PRIVATE, $method(MemberName, referenceKindIsConsistent, bool)},
	{"referenceKindIsConsistentWith", "(I)Z", nullptr, 0, $method(MemberName, referenceKindIsConsistentWith, bool, int32_t)},
	{"refersTo", "(Ljava/lang/Class;Ljava/lang/String;)Z", "(Ljava/lang/Class<*>;Ljava/lang/String;)Z", $PUBLIC, $method(MemberName, refersTo, bool, $Class*, $String*)},
	{"staticIsConsistent", "()Z", nullptr, $PRIVATE, $method(MemberName, staticIsConsistent, bool)},
	{"testAllFlags", "(I)Z", nullptr, $PRIVATE, $method(MemberName, testAllFlags, bool, int32_t)},
	{"testAnyFlags", "(I)Z", nullptr, $PRIVATE, $method(MemberName, testAnyFlags, bool, int32_t)},
	{"testFlags", "(II)Z", nullptr, $PRIVATE, $method(MemberName, testFlags, bool, int32_t, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MemberName, toString, $String*)},
	{"vminfoIsConsistent", "()Z", nullptr, $PRIVATE, $method(MemberName, vminfoIsConsistent, bool)},
	{}
};

$InnerClassInfo _MemberName_InnerClassesInfo_[] = {
	{"java.lang.invoke.MemberName$Factory", "java.lang.invoke.MemberName", "Factory", $STATIC},
	{}
};

$ClassInfo _MemberName_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.MemberName",
	"java.lang.Object",
	"java.lang.reflect.Member,java.lang.Cloneable",
	_MemberName_FieldInfo_,
	_MemberName_MethodInfo_,
	nullptr,
	nullptr,
	_MemberName_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.invoke.MemberName$Factory"
};

$Object* allocate$MemberName($Class* clazz) {
	return $of($alloc(MemberName));
}

void MemberName::finalize() {
	this->$Member::finalize();
}

bool MemberName::$assertionsDisabled = false;
$String* MemberName::CONSTRUCTOR_NAME = nullptr;

$Class* MemberName::getDeclaringClass() {
	return this->clazz;
}

$ClassLoader* MemberName::getClassLoader() {
	$beforeCallerSensitive();
	return $nc(this->clazz)->getClassLoader();
}

$String* MemberName::getName() {
	if (this->name == nullptr) {
		expandFromVM();
		if (this->name == nullptr) {
			return nullptr;
		}
	}
	return this->name;
}

$MethodType* MemberName::getMethodOrFieldType() {
	if (isInvocable()) {
		return getMethodType();
	}
	if (isGetter()) {
		return $MethodType::methodType(getFieldType());
	}
	if (isSetter()) {
		$init($Void);
		return $MethodType::methodType($Void::TYPE, getFieldType());
	}
	$throwNew($InternalError, $$str({"not a method or field: "_s, this}));
}

$MethodType* MemberName::getMethodType() {
	$useLocalCurrentObjectStackCache();
	if (this->type == nullptr) {
		expandFromVM();
		if (this->type == nullptr) {
			return nullptr;
		}
	}
	if (!isInvocable()) {
		$throw($($MethodHandleStatics::newIllegalArgumentException("not invocable, no method type"_s)));
	}
	{
		$var($Object, type, this->type);
		if ($instanceOf($MethodType, type)) {
			return $cast($MethodType, type);
		}
	}
	$synchronized(this) {
		{
			$var($String, sig, nullptr);
			$var($ObjectArray, typeInfo, nullptr);
			$var($Object, patt5985$temp, this->type);
			bool var$0 = $instanceOf($String, patt5985$temp);
			if (var$0) {
				$assign(sig, $cast($String, patt5985$temp));
				var$0 = true;
			}
			if (var$0) {
				$var($MethodType, res, $MethodType::fromDescriptor(sig, $(getClassLoader())));
				$set(this, type, res);
			} else {
				$var($Object, patt6149$temp, this->type);
				bool var$2 = $instanceOf($ObjectArray, patt6149$temp);
				if (var$2) {
					$assign(typeInfo, $cast($ObjectArray, patt6149$temp));
					var$2 = true;
				}
				if (var$2) {
					$var($ClassArray, ptypes, $cast($ClassArray, $nc(typeInfo)->get(1)));
					$Class* rtype = $cast($Class, typeInfo->get(0));
					$var($MethodType, res, $MethodType::makeImpl(rtype, ptypes, true));
					$set(this, type, res);
				}
			}
		}
		if (!MemberName::$assertionsDisabled && !$instanceOf($MethodType, this->type)) {
			$throwNew($AssertionError, $of($$str({"bad method type "_s, this->type})));
		}
	}
	return $cast($MethodType, this->type);
}

$String* MemberName::getMethodDescriptor() {
	$useLocalCurrentObjectStackCache();
	if (this->type == nullptr) {
		expandFromVM();
		if (this->type == nullptr) {
			return nullptr;
		}
	}
	if (!isInvocable()) {
		$throw($($MethodHandleStatics::newIllegalArgumentException("not invocable, no method type"_s)));
	}
	$var($Object, type, this->type);
	if ($instanceOf($String, type)) {
		return $cast($String, type);
	} else {
		return $nc($(getMethodType()))->toMethodDescriptorString();
	}
}

$MethodType* MemberName::getInvocationType() {
	$useLocalCurrentObjectStackCache();
	$var($MethodType, itype, getMethodOrFieldType());
	bool var$0 = isConstructor();
	if (var$0 && getReferenceKind() == (int8_t)8) {
		return $nc(itype)->changeReturnType(this->clazz);
	}
	if (!isStatic()) {
		return $nc(itype)->insertParameterTypes(0, $$new($ClassArray, {this->clazz}));
	}
	return itype;
}

$ClassArray* MemberName::getParameterTypes() {
	return $fcast($ClassArray, $nc($(getMethodType()))->parameterArray());
}

$Class* MemberName::getReturnType() {
	return $cast($Class, $nc($(getMethodType()))->returnType());
}

$Class* MemberName::getFieldType() {
	$useLocalCurrentObjectStackCache();
	if (this->type == nullptr) {
		expandFromVM();
		if (this->type == nullptr) {
			return nullptr;
		}
	}
	if (isInvocable()) {
		$throw($($MethodHandleStatics::newIllegalArgumentException("not a field or nested class, no simple type"_s)));
	}
	{
		$var($Object, type, this->type);
		if ($instanceOf($Class, type)) {
			return $cast($Class, type);
		}
	}
	$synchronized(this) {
		{
			$var($String, sig, nullptr);
			$var($Object, patt9076$temp, this->type);
			bool var$0 = $instanceOf($String, patt9076$temp);
			if (var$0) {
				$assign(sig, $cast($String, patt9076$temp));
				var$0 = true;
			}
			if (var$0) {
				$var($MethodType, mtype, $MethodType::fromDescriptor($$str({"()"_s, sig}), $(getClassLoader())));
				$Class* res = $cast($Class, $nc(mtype)->returnType());
				$set(this, type, res);
			}
		}
		if (!MemberName::$assertionsDisabled && !$instanceOf($Class, this->type)) {
			$throwNew($AssertionError, $of($$str({"bad field type "_s, this->type})));
		}
	}
	return $cast($Class, this->type);
}

$Object* MemberName::getType() {
	return $of((isInvocable() ? $of(getMethodType()) : $of(getFieldType())));
}

$String* MemberName::getSignature() {
	if (this->type == nullptr) {
		expandFromVM();
		if (this->type == nullptr) {
			return nullptr;
		}
	}
	if (isInvocable()) {
		return $BytecodeDescriptor::unparse($(getMethodType()));
	} else {
		return $BytecodeDescriptor::unparse(getFieldType());
	}
}

int32_t MemberName::getModifiers() {
	return ((int32_t)(this->flags & (uint32_t)MemberName::RECOGNIZED_MODIFIERS));
}

int8_t MemberName::getReferenceKind() {
	return (int8_t)((int32_t)(((int32_t)((uint32_t)this->flags >> 24)) & (uint32_t)15));
}

bool MemberName::referenceKindIsConsistent() {
	int8_t refKind = getReferenceKind();
	if (refKind == (int8_t)0) {
		return isType();
	}
	if (isField()) {
		if (!MemberName::$assertionsDisabled && !(staticIsConsistent())) {
			$throwNew($AssertionError);
		}
		if (!MemberName::$assertionsDisabled && !($MethodHandleNatives::refKindIsField(refKind))) {
			$throwNew($AssertionError);
		}
	} else if (isConstructor()) {
		if (!MemberName::$assertionsDisabled && !(refKind == (int8_t)8 || refKind == (int8_t)7)) {
			$throwNew($AssertionError);
		}
	} else if (isMethod()) {
		if (!MemberName::$assertionsDisabled && !(staticIsConsistent())) {
			$throwNew($AssertionError);
		}
		if (!MemberName::$assertionsDisabled && !($MethodHandleNatives::refKindIsMethod(refKind))) {
			$throwNew($AssertionError);
		}
		if ($nc(this->clazz)->isInterface()) {
			if (!MemberName::$assertionsDisabled && !(refKind == (int8_t)9 || refKind == (int8_t)6 || refKind == (int8_t)7 || refKind == (int8_t)5 && isObjectPublicMethod())) {
				$throwNew($AssertionError);
			}
		}
	} else if (!MemberName::$assertionsDisabled) {
		$throwNew($AssertionError);
	}
	return true;
}

bool MemberName::isObjectPublicMethod() {
	if (this->clazz == $Object::class$) {
		return true;
	}
	$var($MethodType, mtype, getMethodType());
	bool var$1 = $nc(this->name)->equals("toString"_s);
	bool var$0 = var$1 && $cast($Class, $nc(mtype)->returnType()) == $String::class$;
	if (var$0 && mtype->parameterCount() == 0) {
		return true;
	}
	bool var$3 = $nc(this->name)->equals("hashCode"_s);
	$init($Integer);
	bool var$2 = var$3 && $cast($Class, $nc(mtype)->returnType()) == $Integer::TYPE;
	if (var$2 && mtype->parameterCount() == 0) {
		return true;
	}
	bool var$6 = $nc(this->name)->equals("equals"_s);
	$init($Boolean);
	bool var$5 = var$6 && $cast($Class, $nc(mtype)->returnType()) == $Boolean::TYPE;
	bool var$4 = var$5 && mtype->parameterCount() == 1;
	if (var$4 && $cast($Class, mtype->parameterType(0)) == $Object::class$) {
		return true;
	}
	return false;
}

bool MemberName::referenceKindIsConsistentWith(int32_t originalRefKind) {
	$useLocalCurrentObjectStackCache();
	int32_t refKind = getReferenceKind();
	if (refKind == originalRefKind) {
		return true;
	}
	if ($of(this)->getClass()->desiredAssertionStatus()) {
		switch (originalRefKind) {
		case 9:
			{
				{
					if (!MemberName::$assertionsDisabled && !(refKind == (int8_t)5 || refKind == (int8_t)7)) {
						$throwNew($AssertionError, $of(this));
					}
				}
				break;
			}
		case 5:
			{}
		case 8:
			{
				{
					if (!MemberName::$assertionsDisabled && !(refKind == (int8_t)7)) {
						$throwNew($AssertionError, $of(this));
					}
				}
				break;
			}
		default:
			{
				{
					if (!MemberName::$assertionsDisabled) {
						$var($String, var$0, $$str({this, " != "_s}));
						$throwNew($AssertionError, $of(($$concat(var$0, $($MethodHandleNatives::refKindName((int8_t)originalRefKind))))));
					}
				}
				break;
			}
		}
	}
	return true;
}

bool MemberName::staticIsConsistent() {
	int8_t refKind = getReferenceKind();
	bool var$1 = $MethodHandleNatives::refKindIsStatic(refKind);
	bool var$0 = var$1 == isStatic();
	return var$0 || getModifiers() == 0;
}

bool MemberName::vminfoIsConsistent() {
	$useLocalCurrentObjectStackCache();
	int8_t refKind = getReferenceKind();
	if (!MemberName::$assertionsDisabled && !(isResolved())) {
		$throwNew($AssertionError);
	}
	$var($Object, vminfo, $MethodHandleNatives::getMemberVMInfo(this));
	if (!MemberName::$assertionsDisabled && !($instanceOf($ObjectArray, vminfo))) {
		$throwNew($AssertionError);
	}
	int64_t vmindex = $nc(($cast($Long, $nc(($cast($ObjectArray, vminfo)))->get(0))))->longValue();
	$var($Object0, vmtarget, $nc(($cast($ObjectArray, vminfo)))->get(1));
	if ($MethodHandleNatives::refKindIsField(refKind)) {
		if (!MemberName::$assertionsDisabled && !(vmindex >= 0)) {
			$throwNew($AssertionError, $of($$str({$$str(vmindex), ":"_s, this})));
		}
		if (!MemberName::$assertionsDisabled && !($instanceOf($Class, vmtarget))) {
			$throwNew($AssertionError);
		}
	} else {
		if ($MethodHandleNatives::refKindDoesDispatch(refKind)) {
			if (!MemberName::$assertionsDisabled && !(vmindex >= 0)) {
				$throwNew($AssertionError, $of($$str({$$str(vmindex), ":"_s, this})));
			}
		} else if (!MemberName::$assertionsDisabled && !(vmindex < 0)) {
			$throwNew($AssertionError, vmindex);
		}
		if (!MemberName::$assertionsDisabled && !($instanceOf(MemberName, vmtarget))) {
			$throwNew($AssertionError, $of($$str({vmtarget, " in "_s, this})));
		}
	}
	return true;
}

MemberName* MemberName::changeReferenceKind(int8_t refKind, int8_t oldKind) {
	if (!MemberName::$assertionsDisabled && !(getReferenceKind() == oldKind)) {
		$throwNew($AssertionError);
	}
	if (!MemberName::$assertionsDisabled && !($MethodHandleNatives::refKindIsValid(refKind))) {
		$throwNew($AssertionError);
	}
	this->flags += (((int32_t)refKind - oldKind) << 24);
	return this;
}

bool MemberName::testFlags(int32_t mask, int32_t value) {
	return ((int32_t)(this->flags & (uint32_t)mask)) == value;
}

bool MemberName::testAllFlags(int32_t mask) {
	return testFlags(mask, mask);
}

bool MemberName::testAnyFlags(int32_t mask) {
	return !testFlags(mask, 0);
}

bool MemberName::isMethodHandleInvoke() {
	int32_t bits = (int32_t)(MemberName::MH_INVOKE_MODS & (uint32_t)~$Modifier::PUBLIC);
	int32_t negs = $Modifier::STATIC;
	$load($MethodHandle);
	if (testFlags(bits | negs, bits) && this->clazz == $MethodHandle::class$) {
		return isMethodHandleInvokeName(this->name);
	}
	return false;
}

bool MemberName::isMethodHandleInvokeName($String* name) {
	$init(MemberName);
	{
		$var($String, s15088$, name);
		int32_t tmp15088$ = -1;
		switch ($nc(s15088$)->hashCode()) {
		case (int32_t)0xB9724478:
			{
				if (s15088$->equals("invoke"_s)) {
					tmp15088$ = 0;
				}
				break;
			}
		case 0x38222167:
			{
				if (s15088$->equals("invokeExact"_s)) {
					tmp15088$ = 1;
				}
				break;
			}
		}
		switch (tmp15088$) {
		case 0:
			{}
		case 1:
			{
				return true;
			}
		default:
			{
				return false;
			}
		}
	}
}

bool MemberName::isVarHandleMethodInvoke() {
	int32_t bits = (int32_t)(MemberName::MH_INVOKE_MODS & (uint32_t)~$Modifier::PUBLIC);
	int32_t negs = $Modifier::STATIC;
	$load($VarHandle);
	if (testFlags(bits | negs, bits) && this->clazz == $VarHandle::class$) {
		return isVarHandleMethodInvokeName(this->name);
	}
	return false;
}

bool MemberName::isVarHandleMethodInvokeName($String* name) {
	$init(MemberName);
	try {
		$VarHandle$AccessMode::valueFromMethodName(name);
		return true;
	} catch ($IllegalArgumentException& e) {
		return false;
	}
	$shouldNotReachHere();
}

bool MemberName::isStatic() {
	return $Modifier::isStatic(this->flags);
}

bool MemberName::isPublic() {
	return $Modifier::isPublic(this->flags);
}

bool MemberName::isPrivate() {
	return $Modifier::isPrivate(this->flags);
}

bool MemberName::isProtected() {
	return $Modifier::isProtected(this->flags);
}

bool MemberName::isFinal() {
	return $Modifier::isFinal(this->flags);
}

bool MemberName::canBeStaticallyBound() {
	return $Modifier::isFinal(this->flags | $nc(this->clazz)->getModifiers());
}

bool MemberName::isVolatile() {
	return $Modifier::isVolatile(this->flags);
}

bool MemberName::isAbstract() {
	return $Modifier::isAbstract(this->flags);
}

bool MemberName::isNative() {
	return $Modifier::isNative(this->flags);
}

bool MemberName::isBridge() {
	return testAllFlags(MemberName::IS_METHOD | MemberName::BRIDGE);
}

bool MemberName::isVarargs() {
	bool var$0 = testAllFlags(MemberName::VARARGS);
	return var$0 && isInvocable();
}

bool MemberName::isSynthetic() {
	return testAllFlags(MemberName::SYNTHETIC);
}

bool MemberName::isInvocable() {
	return testAnyFlags(MemberName::IS_INVOCABLE);
}

bool MemberName::isFieldOrMethod() {
	return testAnyFlags(MemberName::IS_FIELD_OR_METHOD);
}

bool MemberName::isMethod() {
	return testAllFlags(MemberName::IS_METHOD);
}

bool MemberName::isConstructor() {
	return testAllFlags(MemberName::IS_CONSTRUCTOR);
}

bool MemberName::isField() {
	return testAllFlags(MemberName::IS_FIELD);
}

bool MemberName::isType() {
	return testAllFlags(MemberName::IS_TYPE);
}

bool MemberName::isPackage() {
	return !testAnyFlags(MemberName::ALL_ACCESS);
}

bool MemberName::isCallerSensitive() {
	return testAllFlags(MemberName::CALLER_SENSITIVE);
}

bool MemberName::isTrustedFinalField() {
	return testAllFlags(MemberName::TRUSTED_FINAL | MemberName::IS_FIELD);
}

bool MemberName::isAccessibleFrom($Class* lookupClass) {
	int32_t mode = ((MemberName::ALL_ACCESS | $MethodHandles$Lookup::PACKAGE) | $MethodHandles$Lookup::MODULE);
	$Class* var$0 = this->getDeclaringClass();
	return $VerifyAccess::isMemberAccessible(var$0, this->getDeclaringClass(), this->flags, lookupClass, nullptr, mode);
}

bool MemberName::refersTo($Class* declc, $String* n) {
	return this->clazz == declc && $nc($(getName()))->equals(n);
}

void MemberName::init($Class* defClass, $String* name, Object$* type, int32_t flags) {
	$set(this, clazz, defClass);
	$set(this, name, name);
	$set(this, type, type);
	this->flags = flags;
	if (!MemberName::$assertionsDisabled && !(testAnyFlags(MemberName::ALL_KINDS))) {
		$throwNew($AssertionError);
	}
	if (!MemberName::$assertionsDisabled && !(this->resolution == nullptr)) {
		$throwNew($AssertionError);
	}
}

void MemberName::expandFromVM() {
	if (this->type != nullptr) {
		return;
	}
	if (!isResolved()) {
		return;
	}
	$MethodHandleNatives::expand(this);
}

int32_t MemberName::flagsMods(int32_t flags, int32_t mods, int8_t refKind) {
	$init(MemberName);
	if (!MemberName::$assertionsDisabled && !(((int32_t)(flags & (uint32_t)MemberName::RECOGNIZED_MODIFIERS)) == 0)) {
		$throwNew($AssertionError);
	}
	if (!MemberName::$assertionsDisabled && !(((int32_t)(mods & (uint32_t)~MemberName::RECOGNIZED_MODIFIERS)) == 0)) {
		$throwNew($AssertionError);
	}
	if (!MemberName::$assertionsDisabled && !(((int32_t)(refKind & (uint32_t)~15)) == 0)) {
		$throwNew($AssertionError);
	}
	return (flags | mods) | (refKind << 24);
}

void MemberName::init$($Method* m) {
	MemberName::init$(m, false);
}

void MemberName::init$($Method* m, bool wantSpecial) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(m);
	$MethodHandleNatives::init(this, m);
	if (this->clazz == nullptr) {
		$load($MethodHandle);
		bool var$0 = m->getDeclaringClass() == $MethodHandle::class$;
		if (var$0 && isMethodHandleInvokeName($(m->getName()))) {
			$Class* var$1 = m->getReturnType();
			$var($MethodType, type, $MethodType::methodType(var$1, $(m->getParameterTypes())));
			int32_t flags = flagsMods(MemberName::IS_METHOD, m->getModifiers(), (int8_t)5);
			init($MethodHandle::class$, $(m->getName()), type, flags);
			if (isMethodHandleInvoke()) {
				return;
			}
		}
		$load($VarHandle);
		bool var$2 = m->getDeclaringClass() == $VarHandle::class$;
		if (var$2 && isVarHandleMethodInvokeName($(m->getName()))) {
			$Class* var$3 = m->getReturnType();
			$var($MethodType, type, $MethodType::methodType(var$3, $(m->getParameterTypes())));
			int32_t flags = flagsMods(MemberName::IS_METHOD, m->getModifiers(), (int8_t)5);
			init($VarHandle::class$, $(m->getName()), type, flags);
			if (isVarHandleMethodInvoke()) {
				return;
			}
		}
		$throwNew($LinkageError, $(m->toString()));
	}
	if (!MemberName::$assertionsDisabled && !(isResolved() && this->clazz != nullptr)) {
		$throwNew($AssertionError);
	}
	$set(this, name, m->getName());
	if (this->type == nullptr) {
		$set(this, type, $new($ObjectArray, {
			$of(m->getReturnType()),
			$($of(m->getParameterTypes()))
		}));
	}
	if (wantSpecial) {
		if (isAbstract()) {
			$throwNew($AbstractMethodError, $(this->toString()));
		}
		if (getReferenceKind() == (int8_t)5) {
			changeReferenceKind((int8_t)7, (int8_t)5);
		} else if (getReferenceKind() == (int8_t)9) {
			changeReferenceKind((int8_t)7, (int8_t)9);
		}
	}
}

MemberName* MemberName::asSpecial() {
	$useLocalCurrentObjectStackCache();
	switch (getReferenceKind()) {
	case 7:
		{
			return this;
		}
	case 5:
		{
			return $nc($($cast(MemberName, clone())))->changeReferenceKind((int8_t)7, (int8_t)5);
		}
	case 9:
		{
			return $nc($($cast(MemberName, clone())))->changeReferenceKind((int8_t)7, (int8_t)9);
		}
	case 8:
		{
			return $nc($($cast(MemberName, clone())))->changeReferenceKind((int8_t)7, (int8_t)8);
		}
	}
	$throwNew($IllegalArgumentException, $(this->toString()));
}

MemberName* MemberName::asConstructor() {
	$useLocalCurrentObjectStackCache();
	switch (getReferenceKind()) {
	case 7:
		{
			return $nc($($cast(MemberName, clone())))->changeReferenceKind((int8_t)8, (int8_t)7);
		}
	case 8:
		{
			return this;
		}
	}
	$throwNew($IllegalArgumentException, $(this->toString()));
}

MemberName* MemberName::asNormalOriginal() {
	$useLocalCurrentObjectStackCache();
	int8_t normalVirtual = $nc(this->clazz)->isInterface() ? (int8_t)9 : (int8_t)5;
	int8_t refKind = getReferenceKind();
	int8_t newRefKind = refKind;
	$var(MemberName, result, this);
	switch (refKind) {
	case 9:
		{}
	case 5:
		{}
	case 7:
		{
			newRefKind = normalVirtual;
			break;
		}
	}
	if (newRefKind == refKind) {
		return this;
	}
	$assign(result, $nc($($cast(MemberName, clone())))->changeReferenceKind(newRefKind, refKind));
	if (!MemberName::$assertionsDisabled && !(this->referenceKindIsConsistentWith($nc(result)->getReferenceKind()))) {
		$throwNew($AssertionError);
	}
	return result;
}

void MemberName::init$($Constructor* ctor) {
	$Objects::requireNonNull(ctor);
	$MethodHandleNatives::init(this, ctor);
	if (!MemberName::$assertionsDisabled && !(isResolved() && this->clazz != nullptr)) {
		$throwNew($AssertionError);
	}
	$set(this, name, MemberName::CONSTRUCTOR_NAME);
	if (this->type == nullptr) {
		$init($Void);
		$set(this, type, $new($ObjectArray, {
			$of($Void::TYPE),
			$($of(ctor->getParameterTypes()))
		}));
	}
}

void MemberName::init$($Field* fld) {
	MemberName::init$(fld, false);
}

void MemberName::init$($Field* fld, bool makeSetter) {
	$Objects::requireNonNull(fld);
	$MethodHandleNatives::init(this, fld);
	if (!MemberName::$assertionsDisabled && !(isResolved() && this->clazz != nullptr)) {
		$throwNew($AssertionError);
	}
	$set(this, name, fld->getName());
	$set(this, type, fld->getType());
	int8_t refKind = this->getReferenceKind();
	if (!MemberName::$assertionsDisabled && !(refKind == (isStatic() ? (int8_t)2 : (int8_t)1))) {
		$throwNew($AssertionError);
	}
	if (makeSetter) {
		changeReferenceKind((int8_t)(refKind + ((int8_t)4 - (int8_t)2)), refKind);
	}
}

bool MemberName::isGetter() {
	return $MethodHandleNatives::refKindIsGetter(getReferenceKind());
}

bool MemberName::isSetter() {
	return $MethodHandleNatives::refKindIsSetter(getReferenceKind());
}

MemberName* MemberName::asSetter() {
	int8_t refKind = getReferenceKind();
	if (!MemberName::$assertionsDisabled && !($MethodHandleNatives::refKindIsGetter(refKind))) {
		$throwNew($AssertionError);
	}
	int8_t setterRefKind = (int8_t)(refKind + ((int8_t)3 - (int8_t)1));
	return $nc($($cast(MemberName, clone())))->changeReferenceKind(setterRefKind, refKind);
}

void MemberName::init$($Class* type) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$Class* var$0 = $nc(type)->getDeclaringClass();
	$var($String, var$1, type->getSimpleName());
	$var($Object, var$2, $of(type));
	init(var$0, var$1, var$2, flagsMods(MemberName::IS_TYPE, type->getModifiers(), (int8_t)0));
	initResolved(true);
}

MemberName* MemberName::makeMethodHandleInvoke($String* name, $MethodType* type) {
	$init(MemberName);
	return makeMethodHandleInvoke(name, type, MemberName::MH_INVOKE_MODS | MemberName::SYNTHETIC);
}

MemberName* MemberName::makeMethodHandleInvoke($String* name, $MethodType* type, int32_t mods) {
	$init(MemberName);
	$load($MethodHandle);
	$var(MemberName, mem, $new(MemberName, $MethodHandle::class$, name, type, (int8_t)5));
	mem->flags |= mods;
	if (!MemberName::$assertionsDisabled && !(mem->isMethodHandleInvoke())) {
		$throwNew($AssertionError, $of(mem));
	}
	return mem;
}

MemberName* MemberName::makeVarHandleMethodInvoke($String* name, $MethodType* type) {
	$init(MemberName);
	return makeVarHandleMethodInvoke(name, type, MemberName::MH_INVOKE_MODS | MemberName::SYNTHETIC);
}

MemberName* MemberName::makeVarHandleMethodInvoke($String* name, $MethodType* type, int32_t mods) {
	$init(MemberName);
	$load($VarHandle);
	$var(MemberName, mem, $new(MemberName, $VarHandle::class$, name, type, (int8_t)5));
	mem->flags |= mods;
	if (!MemberName::$assertionsDisabled && !(mem->isVarHandleMethodInvoke())) {
		$throwNew($AssertionError, $of(mem));
	}
	return mem;
}

void MemberName::init$() {
}

$Object* MemberName::clone() {
	try {
		return $of($cast(MemberName, $Member::clone()));
	} catch ($CloneNotSupportedException& ex) {
		$throw($($MethodHandleStatics::newInternalError(static_cast<$Exception*>(ex))));
	}
	$shouldNotReachHere();
}

MemberName* MemberName::getDefinition() {
	$useLocalCurrentObjectStackCache();
	if (!isResolved()) {
		$throwNew($IllegalStateException, $$str({"must be resolved: "_s, this}));
	}
	if (isType()) {
		return this;
	}
	$var(MemberName, res, $cast(MemberName, this->clone()));
	$set($nc(res), clazz, nullptr);
	$set(res, type, nullptr);
	$set(res, name, nullptr);
	$set(res, resolution, res);
	res->expandFromVM();
	if (!MemberName::$assertionsDisabled && !($nc($(res->getName()))->equals($(this->getName())))) {
		$throwNew($AssertionError);
	}
	return res;
}

int32_t MemberName::hashCode() {
	$useLocalCurrentObjectStackCache();
	return $Objects::hash($$new($ObjectArray, {
		$of(this->clazz),
		$of($$new($Byte, getReferenceKind())),
		$of(this->name),
		$(getType())
	}));
}

bool MemberName::equals(Object$* that) {
	return ($instanceOf(MemberName, that) && this->equals($cast(MemberName, that)));
}

bool MemberName::equals(MemberName* that) {
	$useLocalCurrentObjectStackCache();
	if (this == that) {
		return true;
	}
	if (that == nullptr) {
		return false;
	}
	bool var$2 = this->clazz == $nc(that)->clazz;
	if (var$2) {
		int8_t var$3 = this->getReferenceKind();
		var$2 = var$3 == that->getReferenceKind();
	}
	bool var$1 = var$2;
	bool var$0 = var$1 && $Objects::equals(this->name, that->name);
	if (var$0) {
		$var($Object, var$4, this->getType());
		var$0 = $Objects::equals(var$4, $(that->getType()));
	}
	return var$0;
}

void MemberName::init$($Class* defClass, $String* name, $Class* type, int8_t refKind) {
	init(defClass, name, type, flagsMods(MemberName::IS_FIELD, 0, refKind));
	initResolved(false);
}

void MemberName::init$($Class* defClass, $String* name, $MethodType* type, int8_t refKind) {
	int32_t initFlags = (name != nullptr && name->equals(MemberName::CONSTRUCTOR_NAME) ? MemberName::IS_CONSTRUCTOR : MemberName::IS_METHOD);
	init(defClass, name, type, flagsMods(initFlags, 0, refKind));
	initResolved(false);
}

void MemberName::init$(int8_t refKind, $Class* defClass, $String* name, Object$* type) {
	$useLocalCurrentObjectStackCache();
	int32_t kindFlags = 0;
	if ($MethodHandleNatives::refKindIsField(refKind)) {
		kindFlags = MemberName::IS_FIELD;
		if (!($instanceOf($Class, type))) {
			$throw($($MethodHandleStatics::newIllegalArgumentException("not a field type"_s)));
		}
	} else if ($MethodHandleNatives::refKindIsMethod(refKind)) {
		kindFlags = MemberName::IS_METHOD;
		if (!($instanceOf($MethodType, type))) {
			$throw($($MethodHandleStatics::newIllegalArgumentException("not a method type"_s)));
		}
	} else if (refKind == (int8_t)8) {
		kindFlags = MemberName::IS_CONSTRUCTOR;
		if (!($instanceOf($MethodType, type)) || !$nc(MemberName::CONSTRUCTOR_NAME)->equals(name)) {
			$throw($($MethodHandleStatics::newIllegalArgumentException("not a constructor type or name"_s)));
		}
	} else {
		$throw($($MethodHandleStatics::newIllegalArgumentException($$str({"bad reference kind "_s, $$str(refKind)}))));
	}
	init(defClass, name, type, flagsMods(kindFlags, 0, refKind));
	initResolved(false);
}

bool MemberName::hasReceiverTypeDispatch() {
	return $MethodHandleNatives::refKindDoesDispatch(getReferenceKind());
}

bool MemberName::isResolved() {
	return this->resolution == nullptr;
}

void MemberName::initResolved(bool isResolved) {
	if (!MemberName::$assertionsDisabled && !(this->resolution == nullptr)) {
		$throwNew($AssertionError);
	}
	if (!isResolved) {
		$set(this, resolution, this);
	}
	if (!MemberName::$assertionsDisabled && !(this->isResolved() == isResolved)) {
		$throwNew($AssertionError);
	}
}

void MemberName::checkForTypeAlias($Class* refc) {
	$useLocalCurrentObjectStackCache();
	if (isInvocable()) {
		$var($MethodType, type, nullptr);
		if ($instanceOf($MethodType, this->type)) {
			$assign(type, $cast($MethodType, this->type));
		} else {
			$set(this, type, ($assign(type, getMethodType())));
		}
		if ($nc(type)->erase() == type) {
			return;
		}
		if ($VerifyAccess::isTypeVisible(type, refc)) {
			return;
		}
		$throwNew($LinkageError, $$str({"bad method type alias: "_s, type, " not visible from "_s, refc}));
	} else {
		$Class* type = nullptr;
		if ($instanceOf($Class, this->type)) {
			type = $cast($Class, this->type);
		} else {
			$set(this, type, (type = getFieldType()));
		}
		if ($VerifyAccess::isTypeVisible(type, refc)) {
			return;
		}
		$throwNew($LinkageError, $$str({"bad field type alias: "_s, type, " not visible from "_s, refc}));
	}
}

$String* MemberName::toString() {
	$useLocalCurrentObjectStackCache();
	if (isType()) {
		return $nc($of(this->type))->toString();
	}
	$var($StringBuilder, buf, $new($StringBuilder));
	if (getDeclaringClass() != nullptr) {
		buf->append($(getName(this->clazz)));
		buf->append(u'.');
	}
	$var($String, name, this->name);
	buf->append(name == nullptr ? "*"_s : name);
	$var($Object, type, this->type);
	if (!isInvocable()) {
		buf->append(u'/');
		buf->append(type == nullptr ? "*"_s : $(getName(type)));
	} else {
		buf->append(type == nullptr ? "(*)*"_s : $(getName(type)));
	}
	int8_t refKind = getReferenceKind();
	if (refKind != (int8_t)0) {
		buf->append(u'/');
		buf->append($($MethodHandleNatives::refKindName(refKind)));
	}
	return buf->toString();
}

$String* MemberName::getName(Object$* obj) {
	$init(MemberName);
	if ($instanceOf($Class, obj)) {
		return $nc(($cast($Class, obj)))->getName();
	}
	return $String::valueOf(obj);
}

$IllegalAccessException* MemberName::makeAccessException($String* message$renamed, Object$* from$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Object, from, from$renamed);
	$var($String, message, message$renamed);
	$assign(message, $str({message, ": "_s, $(toString())}));
	if (from != nullptr) {
		if ($equals(from, $MethodHandles::publicLookup())) {
			$plusAssign(message, ", from public Lookup"_s);
		} else {
			$var($Module, m, nullptr);
			$Class* plc = nullptr;
			{
				$var($MethodHandles$Lookup, lookup, nullptr);
				bool var$0 = $instanceOf($MethodHandles$Lookup, from);
				if (var$0) {
					$assign(lookup, $cast($MethodHandles$Lookup, from));
					var$0 = true;
				}
				if (var$0) {
					$assign(from, $nc(lookup)->lookupClass());
					$assign(m, $nc(lookup->lookupClass())->getModule());
					plc = lookup->previousLookupClass();
				} else {
					$assign(m, $nc(($cast($Class, from)))->getModule());
					plc = nullptr;
				}
			}
			$plusAssign(message, $$str({", from "_s, from, " ("_s, m, ")"_s}));
			if (plc != nullptr) {
				$var($String, var$2, $$str({", previous lookup "_s, $(plc->getName()), " ("_s}));
				$var($String, var$1, $$concat(var$2, $(plc->getModule())));
				$plusAssign(message, $$concat(var$1, ")"_s));
			}
		}
	}
	return $new($IllegalAccessException, message);
}

$String* MemberName::message() {
	if (isResolved()) {
		return "no access"_s;
	} else if (isConstructor()) {
		return "no such constructor"_s;
	} else if (isMethod()) {
		return "no such method"_s;
	} else {
		return "no such field"_s;
	}
}

$ReflectiveOperationException* MemberName::makeAccessException() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $$str({$(this->message()), ": "_s}));
	$var($String, message, $concat(var$0, $(toString())));
	$var($ReflectiveOperationException, ex, nullptr);
	if (isResolved() || !($instanceOf($NoSuchMethodError, this->resolution) || $instanceOf($NoSuchFieldError, this->resolution))) {
		$assign(ex, $new($IllegalAccessException, message));
	} else if (isConstructor()) {
		$assign(ex, $new($NoSuchMethodException, message));
	} else if (isMethod()) {
		$assign(ex, $new($NoSuchMethodException, message));
	} else {
		$assign(ex, $new($NoSuchFieldException, message));
	}
	if ($instanceOf($Throwable, this->resolution)) {
		$nc(ex)->initCause($cast($Throwable, this->resolution));
	}
	return ex;
}

$MemberName$Factory* MemberName::getFactory() {
	$init(MemberName);
	$init($MemberName$Factory);
	return $MemberName$Factory::INSTANCE;
}

void clinit$MemberName($Class* class$) {
	$assignStatic(MemberName::CONSTRUCTOR_NAME, "<init>"_s);
	MemberName::$assertionsDisabled = !MemberName::class$->desiredAssertionStatus();
}

MemberName::MemberName() {
}

$Class* MemberName::load$($String* name, bool initialize) {
	$loadClass(MemberName, name, initialize, &_MemberName_ClassInfo_, clinit$MemberName, allocate$MemberName);
	return class$;
}

$Class* MemberName::class$ = nullptr;

		} // invoke
	} // lang
} // java