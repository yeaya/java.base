#include <jdk/internal/reflect/MethodAccessorGenerator.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/Void.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <jdk/internal/reflect/AccessorGenerator.h>
#include <jdk/internal/reflect/ByteVector.h>
#include <jdk/internal/reflect/ByteVectorFactory.h>
#include <jdk/internal/reflect/ClassFileAssembler.h>
#include <jdk/internal/reflect/ClassFileConstants.h>
#include <jdk/internal/reflect/ConstructorAccessor.h>
#include <jdk/internal/reflect/Label.h>
#include <jdk/internal/reflect/MagicAccessorImpl.h>
#include <jdk/internal/reflect/MethodAccessor.h>
#include <jdk/internal/reflect/MethodAccessorGenerator$1.h>
#include <jdk/internal/reflect/SerializationConstructorAccessorImpl.h>
#include <jcpp.h>

#undef NUM_BOXING_CPOOL_ENTRIES
#undef ACC_PUBLIC
#undef NUM_METHODS
#undef TYPE
#undef S0
#undef NUM_COMMON_CPOOL_ENTRIES
#undef S1
#undef NUM_BASE_CPOOL_ENTRIES
#undef NUM_SERIALIZATION_CPOOL_ENTRIES
#undef S2

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AccessorGenerator = ::jdk::internal::reflect::AccessorGenerator;
using $ByteVector = ::jdk::internal::reflect::ByteVector;
using $ByteVectorFactory = ::jdk::internal::reflect::ByteVectorFactory;
using $ClassFileAssembler = ::jdk::internal::reflect::ClassFileAssembler;
using $ClassFileConstants = ::jdk::internal::reflect::ClassFileConstants;
using $ConstructorAccessor = ::jdk::internal::reflect::ConstructorAccessor;
using $Label = ::jdk::internal::reflect::Label;
using $MagicAccessorImpl = ::jdk::internal::reflect::MagicAccessorImpl;
using $MethodAccessor = ::jdk::internal::reflect::MethodAccessor;
using $MethodAccessorGenerator$1 = ::jdk::internal::reflect::MethodAccessorGenerator$1;
using $SerializationConstructorAccessorImpl = ::jdk::internal::reflect::SerializationConstructorAccessorImpl;

namespace jdk {
	namespace internal {
		namespace reflect {

$FieldInfo _MethodAccessorGenerator_FieldInfo_[] = {
	{"NUM_BASE_CPOOL_ENTRIES", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MethodAccessorGenerator, NUM_BASE_CPOOL_ENTRIES)},
	{"NUM_METHODS", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MethodAccessorGenerator, NUM_METHODS)},
	{"NUM_SERIALIZATION_CPOOL_ENTRIES", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MethodAccessorGenerator, NUM_SERIALIZATION_CPOOL_ENTRIES)},
	{"methodSymnum", "I", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(MethodAccessorGenerator, methodSymnum)},
	{"constructorSymnum", "I", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(MethodAccessorGenerator, constructorSymnum)},
	{"serializationConstructorSymnum", "I", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(MethodAccessorGenerator, serializationConstructorSymnum)},
	{"declaringClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE, $field(MethodAccessorGenerator, declaringClass)},
	{"parameterTypes", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PRIVATE, $field(MethodAccessorGenerator, parameterTypes)},
	{"returnType", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE, $field(MethodAccessorGenerator, returnType)},
	{"isConstructor", "Z", nullptr, $PRIVATE, $field(MethodAccessorGenerator, isConstructor)},
	{"forSerialization", "Z", nullptr, $PRIVATE, $field(MethodAccessorGenerator, forSerialization)},
	{"targetMethodRef", "S", nullptr, $PRIVATE, $field(MethodAccessorGenerator, targetMethodRef)},
	{"invokeIdx", "S", nullptr, $PRIVATE, $field(MethodAccessorGenerator, invokeIdx)},
	{"invokeDescriptorIdx", "S", nullptr, $PRIVATE, $field(MethodAccessorGenerator, invokeDescriptorIdx)},
	{"nonPrimitiveParametersBaseIdx", "S", nullptr, $PRIVATE, $field(MethodAccessorGenerator, nonPrimitiveParametersBaseIdx)},
	{}
};

$MethodInfo _MethodAccessorGenerator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MethodAccessorGenerator::*)()>(&MethodAccessorGenerator::init$))},
	{"buildInternalSignature", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(MethodAccessorGenerator::*)()>(&MethodAccessorGenerator::buildInternalSignature))},
	{"emitInvoke", "()V", nullptr, $PRIVATE, $method(static_cast<void(MethodAccessorGenerator::*)()>(&MethodAccessorGenerator::emitInvoke))},
	{"generate", "(Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/Class;Ljava/lang/Class;[Ljava/lang/Class;IZZLjava/lang/Class;)Ljdk/internal/reflect/MagicAccessorImpl;", "(Ljava/lang/Class<*>;Ljava/lang/String;[Ljava/lang/Class<*>;Ljava/lang/Class<*>;[Ljava/lang/Class<*>;IZZLjava/lang/Class<*>;)Ljdk/internal/reflect/MagicAccessorImpl;", $PRIVATE, $method(static_cast<$MagicAccessorImpl*(MethodAccessorGenerator::*)($Class*,$String*,$ClassArray*,$Class*,$ClassArray*,int32_t,bool,bool,$Class*)>(&MethodAccessorGenerator::generate))},
	{"generateConstructor", "(Ljava/lang/Class;[Ljava/lang/Class;[Ljava/lang/Class;I)Ljdk/internal/reflect/ConstructorAccessor;", "(Ljava/lang/Class<*>;[Ljava/lang/Class<*>;[Ljava/lang/Class<*>;I)Ljdk/internal/reflect/ConstructorAccessor;", $PUBLIC},
	{"generateMethod", "(Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/Class;Ljava/lang/Class;[Ljava/lang/Class;I)Ljdk/internal/reflect/MethodAccessor;", "(Ljava/lang/Class<*>;Ljava/lang/String;[Ljava/lang/Class<*>;Ljava/lang/Class<*>;[Ljava/lang/Class<*>;I)Ljdk/internal/reflect/MethodAccessor;", $PUBLIC},
	{"generateName", "(ZZ)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<$String*(*)(bool,bool)>(&MethodAccessorGenerator::generateName))},
	{"generateSerializationConstructor", "(Ljava/lang/Class;[Ljava/lang/Class;[Ljava/lang/Class;ILjava/lang/Class;)Ljdk/internal/reflect/SerializationConstructorAccessorImpl;", "(Ljava/lang/Class<*>;[Ljava/lang/Class<*>;[Ljava/lang/Class<*>;ILjava/lang/Class<*>;)Ljdk/internal/reflect/SerializationConstructorAccessorImpl;", $PUBLIC},
	{"isInterface", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(MethodAccessorGenerator::*)()>(&MethodAccessorGenerator::isInterface))},
	{"numNonPrimitiveParameterTypes", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(MethodAccessorGenerator::*)()>(&MethodAccessorGenerator::numNonPrimitiveParameterTypes))},
	{"usesPrimitiveTypes", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(MethodAccessorGenerator::*)()>(&MethodAccessorGenerator::usesPrimitiveTypes))},
	{}
};

$InnerClassInfo _MethodAccessorGenerator_InnerClassesInfo_[] = {
	{"jdk.internal.reflect.MethodAccessorGenerator$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MethodAccessorGenerator_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.reflect.MethodAccessorGenerator",
	"jdk.internal.reflect.AccessorGenerator",
	nullptr,
	_MethodAccessorGenerator_FieldInfo_,
	_MethodAccessorGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_MethodAccessorGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.reflect.MethodAccessorGenerator$1"
};

$Object* allocate$MethodAccessorGenerator($Class* clazz) {
	return $of($alloc(MethodAccessorGenerator));
}

$volatile(int32_t) MethodAccessorGenerator::methodSymnum = 0;
$volatile(int32_t) MethodAccessorGenerator::constructorSymnum = 0;
$volatile(int32_t) MethodAccessorGenerator::serializationConstructorSymnum = 0;

void MethodAccessorGenerator::init$() {
	$AccessorGenerator::init$();
}

$MethodAccessor* MethodAccessorGenerator::generateMethod($Class* declaringClass, $String* name, $ClassArray* parameterTypes, $Class* returnType, $ClassArray* checkedExceptions, int32_t modifiers) {
	return $cast($MethodAccessor, generate(declaringClass, name, parameterTypes, returnType, checkedExceptions, modifiers, false, false, nullptr));
}

$ConstructorAccessor* MethodAccessorGenerator::generateConstructor($Class* declaringClass, $ClassArray* parameterTypes, $ClassArray* checkedExceptions, int32_t modifiers) {
	$init($Void);
	return $cast($ConstructorAccessor, generate(declaringClass, "<init>"_s, parameterTypes, $Void::TYPE, checkedExceptions, modifiers, true, false, nullptr));
}

$SerializationConstructorAccessorImpl* MethodAccessorGenerator::generateSerializationConstructor($Class* declaringClass, $ClassArray* parameterTypes, $ClassArray* checkedExceptions, int32_t modifiers, $Class* targetConstructorClass) {
	$init($Void);
	return $cast($SerializationConstructorAccessorImpl, generate(declaringClass, "<init>"_s, parameterTypes, $Void::TYPE, checkedExceptions, modifiers, true, true, targetConstructorClass));
}

$MagicAccessorImpl* MethodAccessorGenerator::generate($Class* declaringClass, $String* name, $ClassArray* parameterTypes, $Class* returnType, $ClassArray* checkedExceptions, int32_t modifiers, bool isConstructor, bool forSerialization, $Class* serializationTargetClass) {
	$beforeCallerSensitive();
	$var($ByteVector, vec, $ByteVectorFactory::create());
	$set(this, asm$, $new($ClassFileAssembler, vec));
	$set(this, declaringClass, declaringClass);
	$set(this, parameterTypes, parameterTypes);
	$set(this, returnType, returnType);
	this->modifiers = modifiers;
	this->isConstructor = isConstructor;
	this->forSerialization = forSerialization;
	$nc(this->asm$)->emitMagicAndVersion();
	int16_t numCPEntries = (int16_t)(MethodAccessorGenerator::NUM_BASE_CPOOL_ENTRIES + this->NUM_COMMON_CPOOL_ENTRIES);
	bool usesPrimitives = usesPrimitiveTypes();
	if (usesPrimitives) {
		numCPEntries += this->NUM_BOXING_CPOOL_ENTRIES;
	}
	if (forSerialization) {
		numCPEntries += MethodAccessorGenerator::NUM_SERIALIZATION_CPOOL_ENTRIES;
	}
	numCPEntries += (int16_t)(2 * numNonPrimitiveParameterTypes());
	$nc(this->asm$)->emitShort(add(numCPEntries, $AccessorGenerator::S1));
	$var($String, generatedName, generateName(isConstructor, forSerialization));
	$nc(this->asm$)->emitConstantPoolUTF8(generatedName);
	$nc(this->asm$)->emitConstantPoolClass($nc(this->asm$)->cpi());
	this->thisClass = $nc(this->asm$)->cpi();
	if (isConstructor) {
		if (forSerialization) {
			$nc(this->asm$)->emitConstantPoolUTF8("jdk/internal/reflect/SerializationConstructorAccessorImpl"_s);
		} else {
			$nc(this->asm$)->emitConstantPoolUTF8("jdk/internal/reflect/ConstructorAccessorImpl"_s);
		}
	} else {
		$nc(this->asm$)->emitConstantPoolUTF8("jdk/internal/reflect/MethodAccessorImpl"_s);
	}
	$nc(this->asm$)->emitConstantPoolClass($nc(this->asm$)->cpi());
	this->superClass = $nc(this->asm$)->cpi();
	$nc(this->asm$)->emitConstantPoolUTF8($(getClassName(declaringClass, false)));
	$nc(this->asm$)->emitConstantPoolClass($nc(this->asm$)->cpi());
	this->targetClass = $nc(this->asm$)->cpi();
	int16_t serializationTargetClassIdx = (int16_t)0;
	if (forSerialization) {
		$nc(this->asm$)->emitConstantPoolUTF8($(getClassName(serializationTargetClass, false)));
		$nc(this->asm$)->emitConstantPoolClass($nc(this->asm$)->cpi());
		serializationTargetClassIdx = $nc(this->asm$)->cpi();
	}
	$nc(this->asm$)->emitConstantPoolUTF8(name);
	$nc(this->asm$)->emitConstantPoolUTF8($(buildInternalSignature()));
	int16_t var$0 = sub($nc(this->asm$)->cpi(), $AccessorGenerator::S1);
	$nc(this->asm$)->emitConstantPoolNameAndType(var$0, $nc(this->asm$)->cpi());
	if (isInterface()) {
		$nc(this->asm$)->emitConstantPoolInterfaceMethodref(this->targetClass, $nc(this->asm$)->cpi());
	} else if (forSerialization) {
		$nc(this->asm$)->emitConstantPoolMethodref(serializationTargetClassIdx, $nc(this->asm$)->cpi());
	} else {
		$nc(this->asm$)->emitConstantPoolMethodref(this->targetClass, $nc(this->asm$)->cpi());
	}
	this->targetMethodRef = $nc(this->asm$)->cpi();
	if (isConstructor) {
		$nc(this->asm$)->emitConstantPoolUTF8("newInstance"_s);
	} else {
		$nc(this->asm$)->emitConstantPoolUTF8("invoke"_s);
	}
	this->invokeIdx = $nc(this->asm$)->cpi();
	if (isConstructor) {
		$nc(this->asm$)->emitConstantPoolUTF8("([Ljava/lang/Object;)Ljava/lang/Object;"_s);
	} else {
		$nc(this->asm$)->emitConstantPoolUTF8("(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;"_s);
	}
	this->invokeDescriptorIdx = $nc(this->asm$)->cpi();
	this->nonPrimitiveParametersBaseIdx = add($nc(this->asm$)->cpi(), $AccessorGenerator::S2);
	for (int32_t i = 0; i < $nc(parameterTypes)->length; ++i) {
		$Class* c = parameterTypes->get(i);
		if (!isPrimitive(c)) {
			$nc(this->asm$)->emitConstantPoolUTF8($(getClassName(c, false)));
			$nc(this->asm$)->emitConstantPoolClass($nc(this->asm$)->cpi());
		}
	}
	emitCommonConstantPoolEntries();
	if (usesPrimitives) {
		emitBoxingContantPoolEntries();
	}
	if ($nc(this->asm$)->cpi() != numCPEntries) {
		$throwNew($InternalError, $$str({"Adjust this code (cpi = "_s, $$str($nc(this->asm$)->cpi()), ", numCPEntries = "_s, $$str(numCPEntries), ")"_s}));
	}
	$nc(this->asm$)->emitShort($ClassFileConstants::ACC_PUBLIC);
	$nc(this->asm$)->emitShort(this->thisClass);
	$nc(this->asm$)->emitShort(this->superClass);
	$nc(this->asm$)->emitShort($AccessorGenerator::S0);
	$nc(this->asm$)->emitShort($AccessorGenerator::S0);
	$nc(this->asm$)->emitShort(MethodAccessorGenerator::NUM_METHODS);
	emitConstructor();
	emitInvoke();
	$nc(this->asm$)->emitShort($AccessorGenerator::S0);
	$nc(vec)->trim();
	$var($bytes, bytes, vec->getData());
	return $cast($MagicAccessorImpl, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($MethodAccessorGenerator$1, this, generatedName, bytes, declaringClass))));
}

void MethodAccessorGenerator::emitInvoke() {
	if ($nc(this->parameterTypes)->length > 0x0000FFFF) {
		$throwNew($InternalError, "Can\'t handle more than 65535 parameters"_s);
	}
	$var($ClassFileAssembler, cb, $new($ClassFileAssembler));
	if (this->isConstructor) {
		cb->setMaxLocals(2);
	} else {
		cb->setMaxLocals(3);
	}
	int16_t illegalArgStartPC = (int16_t)0;
	if (this->isConstructor) {
		cb->opc_new(this->targetClass);
		cb->opc_dup();
	} else if (!isStatic()) {
		$nc(cb)->opc_aload_1();
		$var($Label, l, $new($Label));
		cb->opc_ifnonnull(l);
		cb->opc_new(this->nullPointerClass);
		cb->opc_dup();
		cb->opc_invokespecial(this->nullPointerCtorIdx, 0, 0);
		cb->opc_athrow();
		l->bind();
		illegalArgStartPC = cb->getLength();
		cb->opc_aload_1();
		cb->opc_checkcast(this->targetClass);
	}
	$var($Label, successLabel, $new($Label));
	if ($nc(this->parameterTypes)->length == 0) {
		if (this->isConstructor) {
			cb->opc_aload_1();
		} else {
			cb->opc_aload_2();
		}
		cb->opc_ifnull(successLabel);
	}
	if (this->isConstructor) {
		cb->opc_aload_1();
	} else {
		cb->opc_aload_2();
	}
	cb->opc_arraylength();
	cb->opc_sipush((int16_t)$nc(this->parameterTypes)->length);
	cb->opc_if_icmpeq(successLabel);
	cb->opc_new(this->illegalArgumentClass);
	cb->opc_dup();
	cb->opc_invokespecial(this->illegalArgumentCtorIdx, 0, 0);
	cb->opc_athrow();
	successLabel->bind();
	int16_t paramTypeCPIdx = this->nonPrimitiveParametersBaseIdx;
	$var($Label, nextParamLabel, nullptr);
	int8_t count = (int8_t)1;
	for (int32_t i = 0; i < $nc(this->parameterTypes)->length; ++i) {
		$Class* paramType = $nc(this->parameterTypes)->get(i);
		count += (int8_t)typeSizeInStackSlots(paramType);
		if (nextParamLabel != nullptr) {
			nextParamLabel->bind();
			$assign(nextParamLabel, nullptr);
		}
		if (this->isConstructor) {
			cb->opc_aload_1();
		} else {
			cb->opc_aload_2();
		}
		cb->opc_sipush((int16_t)i);
		cb->opc_aaload();
		if (isPrimitive(paramType)) {
			if (this->isConstructor) {
				cb->opc_astore_2();
			} else {
				cb->opc_astore_3();
			}
			$var($Label, l, nullptr);
			$assign(nextParamLabel, $new($Label));
			$init($AccessorGenerator);
			for (int32_t j = 0; j < $nc($AccessorGenerator::primitiveTypes)->length; ++j) {
				$Class* c = $nc($AccessorGenerator::primitiveTypes)->get(j);
				if (canWidenTo(c, paramType)) {
					if (l != nullptr) {
						l->bind();
					}
					if (this->isConstructor) {
						cb->opc_aload_2();
					} else {
						cb->opc_aload_3();
					}
					cb->opc_instanceof(indexForPrimitiveType(c));
					$assign(l, $new($Label));
					cb->opc_ifeq(l);
					if (this->isConstructor) {
						cb->opc_aload_2();
					} else {
						cb->opc_aload_3();
					}
					cb->opc_checkcast(indexForPrimitiveType(c));
					int16_t var$0 = unboxingMethodForPrimitiveType(c);
					cb->opc_invokevirtual(var$0, 0, typeSizeInStackSlots(c));
					emitWideningBytecodeForPrimitiveConversion(cb, c, paramType);
					cb->opc_goto(nextParamLabel);
				}
			}
			if (l == nullptr) {
				$throwNew($InternalError, "Must have found at least identity conversion"_s);
			}
			$nc(l)->bind();
			cb->opc_new(this->illegalArgumentClass);
			cb->opc_dup();
			cb->opc_invokespecial(this->illegalArgumentCtorIdx, 0, 0);
			cb->opc_athrow();
		} else {
			cb->opc_checkcast(paramTypeCPIdx);
			paramTypeCPIdx = add(paramTypeCPIdx, $AccessorGenerator::S2);
		}
	}
	if (nextParamLabel != nullptr) {
		nextParamLabel->bind();
	}
	int16_t invokeStartPC = cb->getLength();
	if (this->isConstructor) {
		cb->opc_invokespecial(this->targetMethodRef, count, 0);
	} else if (isStatic()) {
		$nc(cb)->opc_invokestatic(this->targetMethodRef, count, typeSizeInStackSlots(this->returnType));
	} else if (isInterface()) {
		$nc(cb)->opc_invokeinterface(this->targetMethodRef, count, count, typeSizeInStackSlots(this->returnType));
	} else {
		$nc(cb)->opc_invokevirtual(this->targetMethodRef, count, typeSizeInStackSlots(this->returnType));
	}
	int16_t invokeEndPC = cb->getLength();
	if (!this->isConstructor) {
		if (isPrimitive(this->returnType)) {
			int16_t var$1 = boxingMethodForPrimitiveType(this->returnType);
			cb->opc_invokestatic(var$1, typeSizeInStackSlots(this->returnType), 0);
		} else {
			$init($Void);
			if (this->returnType == $Void::TYPE) {
				cb->opc_aconst_null();
			}
		}
	}
	cb->opc_areturn();
	int16_t classCastHandler = cb->getLength();
	cb->setStack(1);
	cb->opc_invokespecial(this->toStringIdx, 0, 1);
	cb->opc_new(this->illegalArgumentClass);
	cb->opc_dup_x1();
	cb->opc_swap();
	cb->opc_invokespecial(this->illegalArgumentStringCtorIdx, 1, 0);
	cb->opc_athrow();
	int16_t invocationTargetHandler = cb->getLength();
	cb->setStack(1);
	cb->opc_new(this->invocationTargetClass);
	cb->opc_dup_x1();
	cb->opc_swap();
	cb->opc_invokespecial(this->invocationTargetCtorIdx, 1, 0);
	cb->opc_athrow();
	$var($ClassFileAssembler, exc, $new($ClassFileAssembler));
	exc->emitShort(illegalArgStartPC);
	exc->emitShort(invokeStartPC);
	exc->emitShort(classCastHandler);
	exc->emitShort(this->classCastClass);
	exc->emitShort(illegalArgStartPC);
	exc->emitShort(invokeStartPC);
	exc->emitShort(classCastHandler);
	exc->emitShort(this->nullPointerClass);
	exc->emitShort(invokeStartPC);
	exc->emitShort(invokeEndPC);
	exc->emitShort(invocationTargetHandler);
	exc->emitShort(this->throwableClass);
	emitMethod(this->invokeIdx, cb->getMaxLocals(), cb, exc, $$new($shorts, {this->invocationTargetClass}));
}

bool MethodAccessorGenerator::usesPrimitiveTypes() {
	if ($nc(this->returnType)->isPrimitive()) {
		return true;
	}
	for (int32_t i = 0; i < $nc(this->parameterTypes)->length; ++i) {
		if ($nc($nc(this->parameterTypes)->get(i))->isPrimitive()) {
			return true;
		}
	}
	return false;
}

int32_t MethodAccessorGenerator::numNonPrimitiveParameterTypes() {
	int32_t num = 0;
	for (int32_t i = 0; i < $nc(this->parameterTypes)->length; ++i) {
		if (!$nc($nc(this->parameterTypes)->get(i))->isPrimitive()) {
			++num;
		}
	}
	return num;
}

bool MethodAccessorGenerator::isInterface() {
	return $nc(this->declaringClass)->isInterface();
}

$String* MethodAccessorGenerator::buildInternalSignature() {
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append("("_s);
	for (int32_t i = 0; i < $nc(this->parameterTypes)->length; ++i) {
		sb->append($(getClassName($nc(this->parameterTypes)->get(i), true)));
	}
	sb->append(")"_s);
	sb->append($(getClassName(this->returnType, true)));
	return sb->toString();
}

$String* MethodAccessorGenerator::generateName(bool isConstructor, bool forSerialization) {
	$load(MethodAccessorGenerator);
	$synchronized(class$) {
		$init(MethodAccessorGenerator);
		if (isConstructor) {
			if (forSerialization) {
				int32_t num = ++MethodAccessorGenerator::serializationConstructorSymnum;
				return $str({"jdk/internal/reflect/GeneratedSerializationConstructorAccessor"_s, $$str(num)});
			} else {
				int32_t num = ++MethodAccessorGenerator::constructorSymnum;
				return $str({"jdk/internal/reflect/GeneratedConstructorAccessor"_s, $$str(num)});
			}
		} else {
			int32_t num = ++MethodAccessorGenerator::methodSymnum;
			return $str({"jdk/internal/reflect/GeneratedMethodAccessor"_s, $$str(num)});
		}
	}
}

MethodAccessorGenerator::MethodAccessorGenerator() {
}

$Class* MethodAccessorGenerator::load$($String* name, bool initialize) {
	$loadClass(MethodAccessorGenerator, name, initialize, &_MethodAccessorGenerator_ClassInfo_, allocate$MethodAccessorGenerator);
	return class$;
}

$Class* MethodAccessorGenerator::class$ = nullptr;

		} // reflect
	} // internal
} // jdk