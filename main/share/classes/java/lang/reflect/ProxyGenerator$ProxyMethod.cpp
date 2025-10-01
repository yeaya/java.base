#include <java/lang/reflect/ProxyGenerator$ProxyMethod.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Boolean.h>
#include <java/lang/Byte.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/ProxyGenerator$PrimitiveTypeInfo.h>
#include <java/lang/reflect/ProxyGenerator.h>
#include <java/util/Arrays.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jdk/internal/org/objectweb/asm/ClassWriter.h>
#include <jdk/internal/org/objectweb/asm/Label.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jcpp.h>

#undef NEW
#undef ANEWARRAY
#undef ICONST_0
#undef AASTORE
#undef ACONST_NULL
#undef MAX_VALUE
#undef BIPUSH
#undef MIN_VALUE
#undef SIPUSH
#undef TYPE

using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $Void = ::java::lang::Void;
using $MethodType = ::java::lang::invoke::MethodType;
using $Method = ::java::lang::reflect::Method;
using $ProxyGenerator = ::java::lang::reflect::ProxyGenerator;
using $ProxyGenerator$PrimitiveTypeInfo = ::java::lang::reflect::ProxyGenerator$PrimitiveTypeInfo;
using $Arrays = ::java::util::Arrays;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $ClassWriter = ::jdk::internal::org::objectweb::asm$::ClassWriter;
using $Label = ::jdk::internal::org::objectweb::asm$::Label;
using $MethodVisitor = ::jdk::internal::org::objectweb::asm$::MethodVisitor;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;

namespace java {
	namespace lang {
		namespace reflect {

$FieldInfo _ProxyGenerator$ProxyMethod_FieldInfo_[] = {
	{"method", "Ljava/lang/reflect/Method;", nullptr, $PRIVATE | $FINAL, $field(ProxyGenerator$ProxyMethod, method)},
	{"shortSignature", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ProxyGenerator$ProxyMethod, shortSignature)},
	{"fromClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(ProxyGenerator$ProxyMethod, fromClass)},
	{"parameterTypes", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(ProxyGenerator$ProxyMethod, parameterTypes)},
	{"returnType", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(ProxyGenerator$ProxyMethod, returnType)},
	{"methodFieldName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ProxyGenerator$ProxyMethod, methodFieldName)},
	{"exceptionTypes", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PRIVATE, $field(ProxyGenerator$ProxyMethod, exceptionTypes)},
	{}
};

$MethodInfo _ProxyGenerator$ProxyMethod_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/reflect/Method;Ljava/lang/String;[Ljava/lang/Class;Ljava/lang/Class;[Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/String;)V", "(Ljava/lang/reflect/Method;Ljava/lang/String;[Ljava/lang/Class<*>;Ljava/lang/Class<*>;[Ljava/lang/Class<*>;Ljava/lang/Class<*>;Ljava/lang/String;)V", $PRIVATE, $method(static_cast<void(ProxyGenerator$ProxyMethod::*)($Method*,$String*,$ClassArray*,$Class*,$ClassArray*,$Class*,$String*)>(&ProxyGenerator$ProxyMethod::init$))},
	{"<init>", "(Ljava/lang/reflect/Method;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(ProxyGenerator$ProxyMethod::*)($Method*,$String*)>(&ProxyGenerator$ProxyMethod::init$))},
	{"codeClassForName", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;Ljava/lang/Class;)V", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;Ljava/lang/Class<*>;)V", $PRIVATE, $method(static_cast<void(ProxyGenerator$ProxyMethod::*)($MethodVisitor*,$Class*)>(&ProxyGenerator$ProxyMethod::codeClassForName))},
	{"codeFieldInitialization", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(ProxyGenerator$ProxyMethod::*)($MethodVisitor*,$String*)>(&ProxyGenerator$ProxyMethod::codeFieldInitialization))},
	{"codeUnwrapReturnValue", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;Ljava/lang/Class;)V", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;Ljava/lang/Class<*>;)V", $PRIVATE, $method(static_cast<void(ProxyGenerator$ProxyMethod::*)($MethodVisitor*,$Class*)>(&ProxyGenerator$ProxyMethod::codeUnwrapReturnValue))},
	{"codeWrapArgument", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;Ljava/lang/Class;I)V", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;Ljava/lang/Class<*>;I)V", $PRIVATE, $method(static_cast<void(ProxyGenerator$ProxyMethod::*)($MethodVisitor*,$Class*,int32_t)>(&ProxyGenerator$ProxyMethod::codeWrapArgument))},
	{"emitIconstInsn", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;I)V", nullptr, $PRIVATE, $method(static_cast<void(ProxyGenerator$ProxyMethod::*)($MethodVisitor*,int32_t)>(&ProxyGenerator$ProxyMethod::emitIconstInsn))},
	{"generateMethod", "(Ljdk/internal/org/objectweb/asm/ClassWriter;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(ProxyGenerator$ProxyMethod::*)($ClassWriter*,$String*)>(&ProxyGenerator$ProxyMethod::generateMethod))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ProxyGenerator$ProxyMethod_InnerClassesInfo_[] = {
	{"java.lang.reflect.ProxyGenerator$ProxyMethod", "java.lang.reflect.ProxyGenerator", "ProxyMethod", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ProxyGenerator$ProxyMethod_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.reflect.ProxyGenerator$ProxyMethod",
	"java.lang.Object",
	nullptr,
	_ProxyGenerator$ProxyMethod_FieldInfo_,
	_ProxyGenerator$ProxyMethod_MethodInfo_,
	nullptr,
	nullptr,
	_ProxyGenerator$ProxyMethod_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.reflect.ProxyGenerator"
};

$Object* allocate$ProxyGenerator$ProxyMethod($Class* clazz) {
	return $of($alloc(ProxyGenerator$ProxyMethod));
}

void ProxyGenerator$ProxyMethod::init$($Method* method, $String* sig, $ClassArray* parameterTypes, $Class* returnType, $ClassArray* exceptionTypes, $Class* fromClass, $String* methodFieldName) {
	$set(this, method, method);
	$set(this, shortSignature, sig);
	$set(this, parameterTypes, parameterTypes);
	$set(this, returnType, returnType);
	$set(this, exceptionTypes, exceptionTypes);
	$set(this, fromClass, fromClass);
	$set(this, methodFieldName, methodFieldName);
}

void ProxyGenerator$ProxyMethod::init$($Method* method, $String* methodFieldName) {
	$var($Method, var$0, method);
	$var($String, var$1, $nc(method)->toShortSignature());
	$var($ClassArray, var$2, method->getParameterTypes());
	$Class* var$3 = method->getReturnType();
	$var($ClassArray, var$4, method->getExceptionTypes());
	ProxyGenerator$ProxyMethod::init$(var$0, var$1, var$2, var$3, var$4, method->getDeclaringClass(), methodFieldName);
}

void ProxyGenerator$ProxyMethod::generateMethod($ClassWriter* cw, $String* className) {
	$var($MethodType, mt, $MethodType::methodType(this->returnType, this->parameterTypes));
	$var($String, desc, $nc(mt)->toMethodDescriptorString());
	int32_t accessFlags = 1 | 16;
	if ($nc(this->method)->isVarArgs()) {
		accessFlags |= 128;
	}
	int32_t var$0 = accessFlags;
	$var($String, var$1, $nc(this->method)->getName());
	$var($String, var$2, desc);
	$var($MethodVisitor, mv, $nc(cw)->visitMethod(var$0, var$1, var$2, nullptr, $($ProxyGenerator::typeNames($($Arrays::asList(this->exceptionTypes))))));
	$var($ints, parameterSlot, $new($ints, $nc(this->parameterTypes)->length));
	int32_t nextSlot = 1;
	for (int32_t i = 0; i < parameterSlot->length; ++i) {
		parameterSlot->set(i, nextSlot);
		nextSlot += $ProxyGenerator::getWordsPerType($nc(this->parameterTypes)->get(i));
	}
	$nc(mv)->visitCode();
	$var($Label, L_startBlock, $new($Label));
	$var($Label, L_endBlock, $new($Label));
	$var($Label, L_RuntimeHandler, $new($Label));
	$var($Label, L_ThrowableHandler, $new($Label));
	$var($List, catchList, $ProxyGenerator::computeUniqueCatchList(this->exceptionTypes));
	if ($nc(catchList)->size() > 0) {
		{
			$var($Iterator, i$, catchList->iterator());
			for (; $nc(i$)->hasNext();) {
				$Class* ex = $cast($Class, i$->next());
				{
					mv->visitTryCatchBlock(L_startBlock, L_endBlock, L_RuntimeHandler, $($ProxyGenerator::dotToSlash($($nc(ex)->getName()))));
				}
			}
		}
		mv->visitTryCatchBlock(L_startBlock, L_endBlock, L_ThrowableHandler, "java/lang/Throwable"_s);
	}
	mv->visitLabel(L_startBlock);
	mv->visitVarInsn(25, 0);
	mv->visitFieldInsn(180, "java/lang/reflect/Proxy"_s, "h"_s, "Ljava/lang/reflect/InvocationHandler;"_s);
	mv->visitVarInsn(25, 0);
	mv->visitFieldInsn(178, $($ProxyGenerator::dotToSlash(className)), this->methodFieldName, "Ljava/lang/reflect/Method;"_s);
	if ($nc(this->parameterTypes)->length > 0) {
		emitIconstInsn(mv, $nc(this->parameterTypes)->length);
		mv->visitTypeInsn($Opcodes::ANEWARRAY, "java/lang/Object"_s);
		for (int32_t i = 0; i < $nc(this->parameterTypes)->length; ++i) {
			mv->visitInsn(89);
			emitIconstInsn(mv, i);
			codeWrapArgument(mv, $nc(this->parameterTypes)->get(i), parameterSlot->get(i));
			mv->visitInsn($Opcodes::AASTORE);
		}
	} else {
		mv->visitInsn($Opcodes::ACONST_NULL);
	}
	mv->visitMethodInsn(185, "java/lang/reflect/InvocationHandler"_s, "invoke"_s, "(Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;"_s, true);
	$init($Void);
	if (this->returnType == $Void::TYPE) {
		mv->visitInsn(87);
		mv->visitInsn(177);
	} else {
		codeUnwrapReturnValue(mv, this->returnType);
	}
	mv->visitLabel(L_endBlock);
	mv->visitLabel(L_RuntimeHandler);
	mv->visitInsn(191);
	mv->visitLabel(L_ThrowableHandler);
	mv->visitVarInsn(58, 1);
	mv->visitTypeInsn($Opcodes::NEW, "java/lang/reflect/UndeclaredThrowableException"_s);
	mv->visitInsn(89);
	mv->visitVarInsn(25, 1);
	mv->visitMethodInsn(183, "java/lang/reflect/UndeclaredThrowableException"_s, "<init>"_s, "(Ljava/lang/Throwable;)V"_s, false);
	mv->visitInsn(191);
	mv->visitMaxs(-1, -1);
	mv->visitEnd();
}

void ProxyGenerator$ProxyMethod::codeWrapArgument($MethodVisitor* mv, $Class* type, int32_t slot) {
	if ($nc(type)->isPrimitive()) {
		$var($ProxyGenerator$PrimitiveTypeInfo, prim, $ProxyGenerator$PrimitiveTypeInfo::get(type));
		$init($Integer);
		$init($Boolean);
		$init($Byte);
		$init($Character);
		$init($Short);
		if (type == $Integer::TYPE || type == $Boolean::TYPE || type == $Byte::TYPE || type == $Character::TYPE || type == $Short::TYPE) {
			$nc(mv)->visitVarInsn(21, slot);
		} else {
			$init($Long);
			if (type == $Long::TYPE) {
				$nc(mv)->visitVarInsn(22, slot);
			} else {
				$init($Float);
				if (type == $Float::TYPE) {
					$nc(mv)->visitVarInsn(23, slot);
				} else {
					$init($Double);
					if (type == $Double::TYPE) {
						$nc(mv)->visitVarInsn(24, slot);
					} else {
						$throwNew($AssertionError);
					}
				}
			}
		}
		$nc(mv)->visitMethodInsn(184, $nc(prim)->wrapperClassName, "valueOf"_s, prim->wrapperValueOfDesc, false);
	} else {
		$nc(mv)->visitVarInsn(25, slot);
	}
}

void ProxyGenerator$ProxyMethod::codeUnwrapReturnValue($MethodVisitor* mv, $Class* type) {
	if ($nc(type)->isPrimitive()) {
		$var($ProxyGenerator$PrimitiveTypeInfo, prim, $ProxyGenerator$PrimitiveTypeInfo::get(type));
		$nc(mv)->visitTypeInsn(192, $nc(prim)->wrapperClassName);
		mv->visitMethodInsn(182, $nc(prim)->wrapperClassName, prim->unwrapMethodName, prim->unwrapMethodDesc, false);
		$init($Integer);
		$init($Boolean);
		$init($Byte);
		$init($Character);
		$init($Short);
		if (type == $Integer::TYPE || type == $Boolean::TYPE || type == $Byte::TYPE || type == $Character::TYPE || type == $Short::TYPE) {
			mv->visitInsn(172);
		} else {
			$init($Long);
			if (type == $Long::TYPE) {
				mv->visitInsn(173);
			} else {
				$init($Float);
				if (type == $Float::TYPE) {
					mv->visitInsn(174);
				} else {
					$init($Double);
					if (type == $Double::TYPE) {
						mv->visitInsn(175);
					} else {
						$throwNew($AssertionError);
					}
				}
			}
		}
	} else {
		$nc(mv)->visitTypeInsn(192, $($ProxyGenerator::dotToSlash($(type->getName()))));
		mv->visitInsn(176);
	}
}

void ProxyGenerator$ProxyMethod::codeFieldInitialization($MethodVisitor* mv, $String* className) {
	codeClassForName(mv, this->fromClass);
	$nc(mv)->visitLdcInsn($($nc(this->method)->getName()));
	emitIconstInsn(mv, $nc(this->parameterTypes)->length);
	mv->visitTypeInsn($Opcodes::ANEWARRAY, "java/lang/Class"_s);
	for (int32_t i = 0; i < $nc(this->parameterTypes)->length; ++i) {
		mv->visitInsn(89);
		emitIconstInsn(mv, i);
		if ($nc($nc(this->parameterTypes)->get(i))->isPrimitive()) {
			$var($ProxyGenerator$PrimitiveTypeInfo, prim, $ProxyGenerator$PrimitiveTypeInfo::get($nc(this->parameterTypes)->get(i)));
			mv->visitFieldInsn(178, $nc(prim)->wrapperClassName, "TYPE"_s, "Ljava/lang/Class;"_s);
		} else {
			codeClassForName(mv, $nc(this->parameterTypes)->get(i));
		}
		mv->visitInsn($Opcodes::AASTORE);
	}
	mv->visitMethodInsn(182, "java/lang/Class"_s, "getMethod"_s, "(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;"_s, false);
	mv->visitFieldInsn(179, $($ProxyGenerator::dotToSlash(className)), this->methodFieldName, "Ljava/lang/reflect/Method;"_s);
}

void ProxyGenerator$ProxyMethod::codeClassForName($MethodVisitor* mv, $Class* cl) {
	$nc(mv)->visitLdcInsn($($nc(cl)->getName()));
	mv->visitMethodInsn(184, "java/lang/Class"_s, "forName"_s, "(Ljava/lang/String;)Ljava/lang/Class;"_s, false);
}

void ProxyGenerator$ProxyMethod::emitIconstInsn($MethodVisitor* mv, int32_t cst) {
	if (cst >= -1 && cst <= 5) {
		$nc(mv)->visitInsn($Opcodes::ICONST_0 + cst);
	} else if (cst >= $Byte::MIN_VALUE && cst <= $Byte::MAX_VALUE) {
		$nc(mv)->visitIntInsn($Opcodes::BIPUSH, cst);
	} else if (cst >= $Short::MIN_VALUE && cst <= $Short::MAX_VALUE) {
		$nc(mv)->visitIntInsn($Opcodes::SIPUSH, cst);
	} else {
		$nc(mv)->visitLdcInsn($($Integer::valueOf(cst)));
	}
}

$String* ProxyGenerator$ProxyMethod::toString() {
	return $nc(this->method)->toShortString();
}

ProxyGenerator$ProxyMethod::ProxyGenerator$ProxyMethod() {
}

$Class* ProxyGenerator$ProxyMethod::load$($String* name, bool initialize) {
	$loadClass(ProxyGenerator$ProxyMethod, name, initialize, &_ProxyGenerator$ProxyMethod_ClassInfo_, allocate$ProxyGenerator$ProxyMethod);
	return class$;
}

$Class* ProxyGenerator$ProxyMethod::class$ = nullptr;

		} // reflect
	} // lang
} // java