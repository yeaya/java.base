#include <jdk/internal/org/objectweb/asm/commons/LocalVariablesSorter.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/org/objectweb/asm/AnnotationVisitor.h>
#include <jdk/internal/org/objectweb/asm/Label.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/Type.h>
#include <jdk/internal/org/objectweb/asm/TypePath.h>
#include <jcpp.h>

#undef ACC_STATIC
#undef ALOAD
#undef ARRAY
#undef ASM8
#undef ASTORE
#undef BOOLEAN
#undef BYTE
#undef CHAR
#undef DLOAD
#undef DOUBLE
#undef DOUBLE_TYPE
#undef DSTORE
#undef FLOAD
#undef FLOAT
#undef FLOAT_TYPE
#undef FSTORE
#undef F_NEW
#undef ILOAD
#undef INT
#undef INTEGER
#undef INT_TYPE
#undef ISTORE
#undef LLOAD
#undef LONG
#undef LONG_TYPE
#undef LSTORE
#undef OBJECT
#undef OBJECT_TYPE
#undef RET
#undef SHORT
#undef TOP

using $LabelArray = $Array<::jdk::internal::org::objectweb::asm$::Label>;
using $TypeArray = $Array<::jdk::internal::org::objectweb::asm$::Type>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AnnotationVisitor = ::jdk::internal::org::objectweb::asm$::AnnotationVisitor;
using $Label = ::jdk::internal::org::objectweb::asm$::Label;
using $MethodVisitor = ::jdk::internal::org::objectweb::asm$::MethodVisitor;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $Type = ::jdk::internal::org::objectweb::asm$::Type;
using $TypePath = ::jdk::internal::org::objectweb::asm$::TypePath;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace commons {

$FieldInfo _LocalVariablesSorter_FieldInfo_[] = {
	{"OBJECT_TYPE", "Ljdk/internal/org/objectweb/asm/Type;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LocalVariablesSorter, OBJECT_TYPE)},
	{"remappedVariableIndices", "[I", nullptr, $PRIVATE, $field(LocalVariablesSorter, remappedVariableIndices)},
	{"remappedLocalTypes", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(LocalVariablesSorter, remappedLocalTypes)},
	{"firstLocal", "I", nullptr, $PROTECTED | $FINAL, $field(LocalVariablesSorter, firstLocal)},
	{"nextLocal", "I", nullptr, $PROTECTED, $field(LocalVariablesSorter, nextLocal)},
	{}
};

$MethodInfo _LocalVariablesSorter_MethodInfo_[] = {
	{"<init>", "(ILjava/lang/String;Ljdk/internal/org/objectweb/asm/MethodVisitor;)V", nullptr, $PUBLIC, $method(static_cast<void(LocalVariablesSorter::*)(int32_t,$String*,$MethodVisitor*)>(&LocalVariablesSorter::init$))},
	{"<init>", "(IILjava/lang/String;Ljdk/internal/org/objectweb/asm/MethodVisitor;)V", nullptr, $PROTECTED, $method(static_cast<void(LocalVariablesSorter::*)(int32_t,int32_t,$String*,$MethodVisitor*)>(&LocalVariablesSorter::init$))},
	{"newLocal", "(Ljdk/internal/org/objectweb/asm/Type;)I", nullptr, $PUBLIC},
	{"newLocalMapping", "(Ljdk/internal/org/objectweb/asm/Type;)I", nullptr, $PROTECTED},
	{"remap", "(ILjdk/internal/org/objectweb/asm/Type;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(LocalVariablesSorter::*)(int32_t,$Type*)>(&LocalVariablesSorter::remap))},
	{"setFrameLocal", "(ILjava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(LocalVariablesSorter::*)(int32_t,Object$*)>(&LocalVariablesSorter::setFrameLocal))},
	{"setLocalType", "(ILjdk/internal/org/objectweb/asm/Type;)V", nullptr, $PROTECTED},
	{"updateNewLocals", "([Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"visitFrame", "(II[Ljava/lang/Object;I[Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"visitIincInsn", "(II)V", nullptr, $PUBLIC},
	{"visitLocalVariable", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljdk/internal/org/objectweb/asm/Label;Ljdk/internal/org/objectweb/asm/Label;I)V", nullptr, $PUBLIC},
	{"visitLocalVariableAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;[Ljdk/internal/org/objectweb/asm/Label;[Ljdk/internal/org/objectweb/asm/Label;[ILjava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{"visitMaxs", "(II)V", nullptr, $PUBLIC},
	{"visitVarInsn", "(II)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LocalVariablesSorter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.commons.LocalVariablesSorter",
	"jdk.internal.org.objectweb.asm.MethodVisitor",
	nullptr,
	_LocalVariablesSorter_FieldInfo_,
	_LocalVariablesSorter_MethodInfo_
};

$Object* allocate$LocalVariablesSorter($Class* clazz) {
	return $of($alloc(LocalVariablesSorter));
}


$Type* LocalVariablesSorter::OBJECT_TYPE = nullptr;

void LocalVariablesSorter::init$(int32_t access, $String* descriptor, $MethodVisitor* methodVisitor) {
	LocalVariablesSorter::init$($Opcodes::ASM8, access, descriptor, methodVisitor);
	if ($of(this)->getClass() != LocalVariablesSorter::class$) {
		$throwNew($IllegalStateException);
	}
}

void LocalVariablesSorter::init$(int32_t api, int32_t access, $String* descriptor, $MethodVisitor* methodVisitor) {
	$useLocalCurrentObjectStackCache();
	$MethodVisitor::init$(api, methodVisitor);
	$set(this, remappedVariableIndices, $new($ints, 40));
	$set(this, remappedLocalTypes, $new($ObjectArray, 20));
	this->nextLocal = ((int32_t)($Opcodes::ACC_STATIC & (uint32_t)access)) == 0 ? 1 : 0;
	{
		$var($TypeArray, arr$, $Type::getArgumentTypes(descriptor));
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Type, argumentType, arr$->get(i$));
			{
				this->nextLocal += $nc(argumentType)->getSize();
			}
		}
	}
	this->firstLocal = this->nextLocal;
}

void LocalVariablesSorter::visitVarInsn(int32_t opcode, int32_t var) {
	$useLocalCurrentObjectStackCache();
	$var($Type, varType, nullptr);
	switch (opcode) {
	case $Opcodes::LLOAD:
		{}
	case $Opcodes::LSTORE:
		{
			$init($Type);
			$assign(varType, $Type::LONG_TYPE);
			break;
		}
	case $Opcodes::DLOAD:
		{}
	case $Opcodes::DSTORE:
		{
			$init($Type);
			$assign(varType, $Type::DOUBLE_TYPE);
			break;
		}
	case $Opcodes::FLOAD:
		{}
	case $Opcodes::FSTORE:
		{
			$init($Type);
			$assign(varType, $Type::FLOAT_TYPE);
			break;
		}
	case $Opcodes::ILOAD:
		{}
	case $Opcodes::ISTORE:
		{
			$init($Type);
			$assign(varType, $Type::INT_TYPE);
			break;
		}
	case $Opcodes::ALOAD:
		{}
	case $Opcodes::ASTORE:
		{}
	case $Opcodes::RET:
		{
			$assign(varType, LocalVariablesSorter::OBJECT_TYPE);
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"Invalid opcode "_s, $$str(opcode)}));
		}
	}
	$MethodVisitor::visitVarInsn(opcode, remap(var, varType));
}

void LocalVariablesSorter::visitIincInsn(int32_t var, int32_t increment) {
	$init($Type);
	$MethodVisitor::visitIincInsn(remap(var, $Type::INT_TYPE), increment);
}

void LocalVariablesSorter::visitMaxs(int32_t maxStack, int32_t maxLocals) {
	$MethodVisitor::visitMaxs(maxStack, this->nextLocal);
}

void LocalVariablesSorter::visitLocalVariable($String* name, $String* descriptor, $String* signature, $Label* start, $Label* end, int32_t index) {
	int32_t remappedIndex = remap(index, $($Type::getType(descriptor)));
	$MethodVisitor::visitLocalVariable(name, descriptor, signature, start, end, remappedIndex);
}

$AnnotationVisitor* LocalVariablesSorter::visitLocalVariableAnnotation(int32_t typeRef, $TypePath* typePath, $LabelArray* start, $LabelArray* end, $ints* index, $String* descriptor, bool visible) {
	$useLocalCurrentObjectStackCache();
	$var($Type, type, $Type::getType(descriptor));
	$var($ints, remappedIndex, $new($ints, $nc(index)->length));
	for (int32_t i = 0; i < remappedIndex->length; ++i) {
		remappedIndex->set(i, remap(index->get(i), type));
	}
	return $MethodVisitor::visitLocalVariableAnnotation(typeRef, typePath, start, end, remappedIndex, descriptor, visible);
}

void LocalVariablesSorter::visitFrame(int32_t type, int32_t numLocal, $ObjectArray* local, int32_t numStack, $ObjectArray* stack) {
	$useLocalCurrentObjectStackCache();
	if (type != $Opcodes::F_NEW) {
		$throwNew($IllegalArgumentException, "LocalVariablesSorter only accepts expanded frames (see ClassReader.EXPAND_FRAMES)"_s);
	}
	$var($ObjectArray, oldRemappedLocals, $new($ObjectArray, $nc(this->remappedLocalTypes)->length));
	$System::arraycopy(this->remappedLocalTypes, 0, oldRemappedLocals, 0, oldRemappedLocals->length);
	updateNewLocals(this->remappedLocalTypes);
	int32_t oldVar = 0;
	for (int32_t i = 0; i < numLocal; ++i) {
		$var($Object0, localType, $nc(local)->get(i));
		$init($Opcodes);
		if (!$equals(localType, $Opcodes::TOP)) {
			$var($Type, varType, LocalVariablesSorter::OBJECT_TYPE);
			if ($equals(localType, $Opcodes::INTEGER)) {
				$init($Type);
				$assign(varType, $Type::INT_TYPE);
			} else {
				if ($equals(localType, $Opcodes::FLOAT)) {
					$init($Type);
					$assign(varType, $Type::FLOAT_TYPE);
				} else {
					if ($equals(localType, $Opcodes::LONG)) {
						$init($Type);
						$assign(varType, $Type::LONG_TYPE);
					} else {
						if ($equals(localType, $Opcodes::DOUBLE)) {
							$init($Type);
							$assign(varType, $Type::DOUBLE_TYPE);
						} else if ($instanceOf($String, localType)) {
							$assign(varType, $Type::getObjectType($cast($String, localType)));
						}
					}
				}
			}
			setFrameLocal(remap(oldVar, varType), localType);
		}
		oldVar += $equals(localType, $Opcodes::LONG) || $equals(localType, $Opcodes::DOUBLE) ? 2 : 1;
	}
	oldVar = 0;
	int32_t newVar = 0;
	int32_t remappedNumLocal = 0;
	while (oldVar < $nc(this->remappedLocalTypes)->length) {
		$var($Object0, localType, $nc(this->remappedLocalTypes)->get(oldVar));
		$init($Opcodes);
		oldVar += $equals(localType, $Opcodes::LONG) || $equals(localType, $Opcodes::DOUBLE) ? 2 : 1;
		if (localType != nullptr && !$equals(localType, $Opcodes::TOP)) {
			$nc(this->remappedLocalTypes)->set(newVar++, localType);
			remappedNumLocal = newVar;
		} else {
			$nc(this->remappedLocalTypes)->set(newVar++, $Opcodes::TOP);
		}
	}
	$MethodVisitor::visitFrame(type, remappedNumLocal, this->remappedLocalTypes, numStack, stack);
	$set(this, remappedLocalTypes, oldRemappedLocals);
}

int32_t LocalVariablesSorter::newLocal($Type* type) {
	$var($Object, localType, nullptr);
	switch ($nc(type)->getSort()) {
	case $Type::BOOLEAN:
		{}
	case $Type::CHAR:
		{}
	case $Type::BYTE:
		{}
	case $Type::SHORT:
		{}
	case $Type::INT:
		{
			$init($Opcodes);
			$assign(localType, $Opcodes::INTEGER);
			break;
		}
	case $Type::FLOAT:
		{
			$init($Opcodes);
			$assign(localType, $Opcodes::FLOAT);
			break;
		}
	case $Type::LONG:
		{
			$init($Opcodes);
			$assign(localType, $Opcodes::LONG);
			break;
		}
	case $Type::DOUBLE:
		{
			$init($Opcodes);
			$assign(localType, $Opcodes::DOUBLE);
			break;
		}
	case $Type::ARRAY:
		{
			$assign(localType, type->getDescriptor());
			break;
		}
	case $Type::OBJECT:
		{
			$assign(localType, type->getInternalName());
			break;
		}
	default:
		{
			$throwNew($AssertionError);
		}
	}
	int32_t local = newLocalMapping(type);
	setLocalType(local, type);
	setFrameLocal(local, localType);
	return local;
}

void LocalVariablesSorter::updateNewLocals($ObjectArray* newLocals) {
}

void LocalVariablesSorter::setLocalType(int32_t local, $Type* type) {
}

void LocalVariablesSorter::setFrameLocal(int32_t local, Object$* type) {
	int32_t numLocals = $nc(this->remappedLocalTypes)->length;
	if (local >= numLocals) {
		$var($ObjectArray, newRemappedLocalTypes, $new($ObjectArray, $Math::max(2 * numLocals, local + 1)));
		$System::arraycopy(this->remappedLocalTypes, 0, newRemappedLocalTypes, 0, numLocals);
		$set(this, remappedLocalTypes, newRemappedLocalTypes);
	}
	$nc(this->remappedLocalTypes)->set(local, type);
}

int32_t LocalVariablesSorter::remap(int32_t var, $Type* type) {
	if (var + $nc(type)->getSize() <= this->firstLocal) {
		return var;
	}
	int32_t key = 2 * var + $nc(type)->getSize() - 1;
	int32_t size = $nc(this->remappedVariableIndices)->length;
	if (key >= size) {
		$var($ints, newRemappedVariableIndices, $new($ints, $Math::max(2 * size, key + 1)));
		$System::arraycopy(this->remappedVariableIndices, 0, newRemappedVariableIndices, 0, size);
		$set(this, remappedVariableIndices, newRemappedVariableIndices);
	}
	int32_t value = $nc(this->remappedVariableIndices)->get(key);
	if (value == 0) {
		value = newLocalMapping(type);
		setLocalType(value, type);
		$nc(this->remappedVariableIndices)->set(key, value + 1);
	} else {
		--value;
	}
	return value;
}

int32_t LocalVariablesSorter::newLocalMapping($Type* type) {
	int32_t local = this->nextLocal;
	this->nextLocal += $nc(type)->getSize();
	return local;
}

void clinit$LocalVariablesSorter($Class* class$) {
	$assignStatic(LocalVariablesSorter::OBJECT_TYPE, $Type::getObjectType("java/lang/Object"_s));
}

LocalVariablesSorter::LocalVariablesSorter() {
}

$Class* LocalVariablesSorter::load$($String* name, bool initialize) {
	$loadClass(LocalVariablesSorter, name, initialize, &_LocalVariablesSorter_ClassInfo_, clinit$LocalVariablesSorter, allocate$LocalVariablesSorter);
	return class$;
}

$Class* LocalVariablesSorter::class$ = nullptr;

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk