#include <jdk/internal/org/objectweb/asm/Type.h>

#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Math.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jcpp.h>

#undef AALOAD
#undef ARETURN
#undef ARRAY
#undef BALOAD
#undef BOOLEAN
#undef BOOLEAN_TYPE
#undef BYTE
#undef BYTE_TYPE
#undef CALOAD
#undef CHAR
#undef CHAR_TYPE
#undef DALOAD
#undef DOUBLE
#undef DOUBLE_TYPE
#undef DRETURN
#undef FALOAD
#undef FLOAT
#undef FLOAT_TYPE
#undef FRETURN
#undef IALOAD
#undef IASTORE
#undef ILOAD
#undef INT
#undef INTERNAL
#undef INT_TYPE
#undef IRETURN
#undef ISTORE
#undef LALOAD
#undef LONG
#undef LONG_TYPE
#undef LRETURN
#undef METHOD
#undef OBJECT
#undef PRIMITIVE_DESCRIPTORS
#undef RETURN
#undef SALOAD
#undef SHORT
#undef SHORT_TYPE
#undef TYPE
#undef VOID
#undef VOID_TYPE

using $TypeArray = $Array<::jdk::internal::org::objectweb::asm$::Type>;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Void = ::java::lang::Void;
using $Constructor = ::java::lang::reflect::Constructor;
using $Method = ::java::lang::reflect::Method;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

$FieldInfo _Type_FieldInfo_[] = {
	{"VOID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Type, VOID)},
	{"BOOLEAN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Type, BOOLEAN)},
	{"CHAR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Type, CHAR)},
	{"BYTE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Type, BYTE)},
	{"SHORT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Type, SHORT)},
	{"INT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Type, INT)},
	{"FLOAT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Type, FLOAT)},
	{"LONG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Type, LONG)},
	{"DOUBLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Type, DOUBLE)},
	{"ARRAY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Type, ARRAY)},
	{"OBJECT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Type, OBJECT)},
	{"METHOD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Type, METHOD)},
	{"INTERNAL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Type, INTERNAL)},
	{"PRIMITIVE_DESCRIPTORS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Type, PRIMITIVE_DESCRIPTORS)},
	{"VOID_TYPE", "Ljdk/internal/org/objectweb/asm/Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Type, VOID_TYPE)},
	{"BOOLEAN_TYPE", "Ljdk/internal/org/objectweb/asm/Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Type, BOOLEAN_TYPE)},
	{"CHAR_TYPE", "Ljdk/internal/org/objectweb/asm/Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Type, CHAR_TYPE)},
	{"BYTE_TYPE", "Ljdk/internal/org/objectweb/asm/Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Type, BYTE_TYPE)},
	{"SHORT_TYPE", "Ljdk/internal/org/objectweb/asm/Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Type, SHORT_TYPE)},
	{"INT_TYPE", "Ljdk/internal/org/objectweb/asm/Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Type, INT_TYPE)},
	{"FLOAT_TYPE", "Ljdk/internal/org/objectweb/asm/Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Type, FLOAT_TYPE)},
	{"LONG_TYPE", "Ljdk/internal/org/objectweb/asm/Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Type, LONG_TYPE)},
	{"DOUBLE_TYPE", "Ljdk/internal/org/objectweb/asm/Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Type, DOUBLE_TYPE)},
	{"sort", "I", nullptr, $PRIVATE | $FINAL, $field(Type, sort)},
	{"valueBuffer", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Type, valueBuffer)},
	{"valueBegin", "I", nullptr, $PRIVATE | $FINAL, $field(Type, valueBegin)},
	{"valueEnd", "I", nullptr, $PRIVATE | $FINAL, $field(Type, valueEnd)},
	{}
};

$MethodInfo _Type_MethodInfo_[] = {
	{"<init>", "(ILjava/lang/String;II)V", nullptr, $PRIVATE, $method(Type, init$, void, int32_t, $String*, int32_t, int32_t)},
	{"appendDescriptor", "(Ljava/lang/StringBuilder;)V", nullptr, $PRIVATE, $method(Type, appendDescriptor, void, $StringBuilder*)},
	{"appendDescriptor", "(Ljava/lang/Class;Ljava/lang/StringBuilder;)V", "(Ljava/lang/Class<*>;Ljava/lang/StringBuilder;)V", $PRIVATE | $STATIC, $staticMethod(Type, appendDescriptor, void, $Class*, $StringBuilder*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Type, equals, bool, Object$*)},
	{"getArgumentTypes", "()[Ljdk/internal/org/objectweb/asm/Type;", nullptr, $PUBLIC, $method(Type, getArgumentTypes, $TypeArray*)},
	{"getArgumentTypes", "(Ljava/lang/String;)[Ljdk/internal/org/objectweb/asm/Type;", nullptr, $PUBLIC | $STATIC, $staticMethod(Type, getArgumentTypes, $TypeArray*, $String*)},
	{"getArgumentTypes", "(Ljava/lang/reflect/Method;)[Ljdk/internal/org/objectweb/asm/Type;", nullptr, $PUBLIC | $STATIC, $staticMethod(Type, getArgumentTypes, $TypeArray*, $Method*)},
	{"getArgumentsAndReturnSizes", "()I", nullptr, $PUBLIC, $method(Type, getArgumentsAndReturnSizes, int32_t)},
	{"getArgumentsAndReturnSizes", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Type, getArgumentsAndReturnSizes, int32_t, $String*)},
	{"getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(Type, getClassName, $String*)},
	{"getConstructorDescriptor", "(Ljava/lang/reflect/Constructor;)Ljava/lang/String;", "(Ljava/lang/reflect/Constructor<*>;)Ljava/lang/String;", $PUBLIC | $STATIC, $staticMethod(Type, getConstructorDescriptor, $String*, $Constructor*)},
	{"getDescriptor", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(Type, getDescriptor, $String*)},
	{"getDescriptor", "(Ljava/lang/Class;)Ljava/lang/String;", "(Ljava/lang/Class<*>;)Ljava/lang/String;", $PUBLIC | $STATIC, $staticMethod(Type, getDescriptor, $String*, $Class*)},
	{"getDimensions", "()I", nullptr, $PUBLIC, $method(Type, getDimensions, int32_t)},
	{"getElementType", "()Ljdk/internal/org/objectweb/asm/Type;", nullptr, $PUBLIC, $method(Type, getElementType, Type*)},
	{"getInternalName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(Type, getInternalName, $String*)},
	{"getInternalName", "(Ljava/lang/Class;)Ljava/lang/String;", "(Ljava/lang/Class<*>;)Ljava/lang/String;", $PUBLIC | $STATIC, $staticMethod(Type, getInternalName, $String*, $Class*)},
	{"getMethodDescriptor", "(Ljdk/internal/org/objectweb/asm/Type;[Ljdk/internal/org/objectweb/asm/Type;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(Type, getMethodDescriptor, $String*, Type*, $TypeArray*)},
	{"getMethodDescriptor", "(Ljava/lang/reflect/Method;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Type, getMethodDescriptor, $String*, $Method*)},
	{"getMethodType", "(Ljava/lang/String;)Ljdk/internal/org/objectweb/asm/Type;", nullptr, $PUBLIC | $STATIC, $staticMethod(Type, getMethodType, Type*, $String*)},
	{"getMethodType", "(Ljdk/internal/org/objectweb/asm/Type;[Ljdk/internal/org/objectweb/asm/Type;)Ljdk/internal/org/objectweb/asm/Type;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(Type, getMethodType, Type*, Type*, $TypeArray*)},
	{"getObjectType", "(Ljava/lang/String;)Ljdk/internal/org/objectweb/asm/Type;", nullptr, $PUBLIC | $STATIC, $staticMethod(Type, getObjectType, Type*, $String*)},
	{"getOpcode", "(I)I", nullptr, $PUBLIC, $method(Type, getOpcode, int32_t, int32_t)},
	{"getReturnType", "()Ljdk/internal/org/objectweb/asm/Type;", nullptr, $PUBLIC, $method(Type, getReturnType, Type*)},
	{"getReturnType", "(Ljava/lang/String;)Ljdk/internal/org/objectweb/asm/Type;", nullptr, $PUBLIC | $STATIC, $staticMethod(Type, getReturnType, Type*, $String*)},
	{"getReturnType", "(Ljava/lang/reflect/Method;)Ljdk/internal/org/objectweb/asm/Type;", nullptr, $PUBLIC | $STATIC, $staticMethod(Type, getReturnType, Type*, $Method*)},
	{"getReturnTypeOffset", "(Ljava/lang/String;)I", nullptr, $STATIC, $staticMethod(Type, getReturnTypeOffset, int32_t, $String*)},
	{"getSize", "()I", nullptr, $PUBLIC, $method(Type, getSize, int32_t)},
	{"getSort", "()I", nullptr, $PUBLIC, $method(Type, getSort, int32_t)},
	{"getType", "(Ljava/lang/String;)Ljdk/internal/org/objectweb/asm/Type;", nullptr, $PUBLIC | $STATIC, $staticMethod(Type, getType, Type*, $String*)},
	{"getType", "(Ljava/lang/Class;)Ljdk/internal/org/objectweb/asm/Type;", "(Ljava/lang/Class<*>;)Ljdk/internal/org/objectweb/asm/Type;", $PUBLIC | $STATIC, $staticMethod(Type, getType, Type*, $Class*)},
	{"getType", "(Ljava/lang/reflect/Constructor;)Ljdk/internal/org/objectweb/asm/Type;", "(Ljava/lang/reflect/Constructor<*>;)Ljdk/internal/org/objectweb/asm/Type;", $PUBLIC | $STATIC, $staticMethod(Type, getType, Type*, $Constructor*)},
	{"getType", "(Ljava/lang/reflect/Method;)Ljdk/internal/org/objectweb/asm/Type;", nullptr, $PUBLIC | $STATIC, $staticMethod(Type, getType, Type*, $Method*)},
	{"getTypeInternal", "(Ljava/lang/String;II)Ljdk/internal/org/objectweb/asm/Type;", nullptr, $PRIVATE | $STATIC, $staticMethod(Type, getTypeInternal, Type*, $String*, int32_t, int32_t)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(Type, hashCode, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Type, toString, $String*)},
	{}
};

$ClassInfo _Type_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.Type",
	"java.lang.Object",
	nullptr,
	_Type_FieldInfo_,
	_Type_MethodInfo_
};

$Object* allocate$Type($Class* clazz) {
	return $of($alloc(Type));
}

$String* Type::PRIMITIVE_DESCRIPTORS = nullptr;
Type* Type::VOID_TYPE = nullptr;
Type* Type::BOOLEAN_TYPE = nullptr;
Type* Type::CHAR_TYPE = nullptr;
Type* Type::BYTE_TYPE = nullptr;
Type* Type::SHORT_TYPE = nullptr;
Type* Type::INT_TYPE = nullptr;
Type* Type::FLOAT_TYPE = nullptr;
Type* Type::LONG_TYPE = nullptr;
Type* Type::DOUBLE_TYPE = nullptr;

void Type::init$(int32_t sort, $String* valueBuffer, int32_t valueBegin, int32_t valueEnd) {
	this->sort = sort;
	$set(this, valueBuffer, valueBuffer);
	this->valueBegin = valueBegin;
	this->valueEnd = valueEnd;
}

Type* Type::getType($String* typeDescriptor) {
	$init(Type);
	return getTypeInternal(typeDescriptor, 0, $nc(typeDescriptor)->length());
}

Type* Type::getType($Class* clazz) {
	$init(Type);
	if ($nc(clazz)->isPrimitive()) {
		$init($Integer);
		if (clazz == $Integer::TYPE) {
			return Type::INT_TYPE;
		} else {
			$init($Void);
			if (clazz == $Void::TYPE) {
				return Type::VOID_TYPE;
			} else {
				$init($Boolean);
				if (clazz == $Boolean::TYPE) {
					return Type::BOOLEAN_TYPE;
				} else {
					$init($Byte);
					if (clazz == $Byte::TYPE) {
						return Type::BYTE_TYPE;
					} else {
						$init($Character);
						if (clazz == $Character::TYPE) {
							return Type::CHAR_TYPE;
						} else {
							$init($Short);
							if (clazz == $Short::TYPE) {
								return Type::SHORT_TYPE;
							} else {
								$init($Double);
								if (clazz == $Double::TYPE) {
									return Type::DOUBLE_TYPE;
								} else {
									$init($Float);
									if (clazz == $Float::TYPE) {
										return Type::FLOAT_TYPE;
									} else {
										$init($Long);
										if (clazz == $Long::TYPE) {
											return Type::LONG_TYPE;
										} else {
											$throwNew($AssertionError);
										}
									}
								}
							}
						}
					}
				}
			}
		}
	} else {
		return getType($(getDescriptor(clazz)));
	}
}

Type* Type::getType($Constructor* constructor) {
	$init(Type);
	return getType($(getConstructorDescriptor(constructor)));
}

Type* Type::getType($Method* method) {
	$init(Type);
	return getType($(getMethodDescriptor(method)));
}

Type* Type::getElementType() {
	int32_t numDimensions = getDimensions();
	return getTypeInternal(this->valueBuffer, this->valueBegin + numDimensions, this->valueEnd);
}

Type* Type::getObjectType($String* internalName) {
	$init(Type);
	int32_t var$0 = $nc(internalName)->charAt(0) == u'[' ? Type::ARRAY : Type::INTERNAL;
	$var($String, var$1, internalName);
	return $new(Type, var$0, var$1, 0, $nc(internalName)->length());
}

Type* Type::getMethodType($String* methodDescriptor) {
	$init(Type);
	return $new(Type, Type::METHOD, methodDescriptor, 0, $nc(methodDescriptor)->length());
}

Type* Type::getMethodType(Type* returnType, $TypeArray* argumentTypes) {
	$init(Type);
	return getType($(getMethodDescriptor(returnType, argumentTypes)));
}

$TypeArray* Type::getArgumentTypes() {
	return getArgumentTypes($(getDescriptor()));
}

$TypeArray* Type::getArgumentTypes($String* methodDescriptor) {
	$init(Type);
	$useLocalCurrentObjectStackCache();
	int32_t numArgumentTypes = 0;
	int32_t currentOffset = 1;
	while ($nc(methodDescriptor)->charAt(currentOffset) != u')') {
		while (methodDescriptor->charAt(currentOffset) == u'[') {
			++currentOffset;
		}
		if (methodDescriptor->charAt(currentOffset++) == u'L') {
			int32_t semiColumnOffset = methodDescriptor->indexOf((int32_t)u';', currentOffset);
			currentOffset = $Math::max(currentOffset, semiColumnOffset + 1);
		}
		++numArgumentTypes;
	}
	$var($TypeArray, argumentTypes, $new($TypeArray, numArgumentTypes));
	currentOffset = 1;
	int32_t currentArgumentTypeIndex = 0;
	while ($nc(methodDescriptor)->charAt(currentOffset) != u')') {
		int32_t currentArgumentTypeOffset = currentOffset;
		while (methodDescriptor->charAt(currentOffset) == u'[') {
			++currentOffset;
		}
		if (methodDescriptor->charAt(currentOffset++) == u'L') {
			int32_t semiColumnOffset = methodDescriptor->indexOf((int32_t)u';', currentOffset);
			currentOffset = $Math::max(currentOffset, semiColumnOffset + 1);
		}
		argumentTypes->set(currentArgumentTypeIndex++, $(getTypeInternal(methodDescriptor, currentArgumentTypeOffset, currentOffset)));
	}
	return argumentTypes;
}

$TypeArray* Type::getArgumentTypes($Method* method) {
	$init(Type);
	$useLocalCurrentObjectStackCache();
	$var($ClassArray, classes, $nc(method)->getParameterTypes());
	$var($TypeArray, types, $new($TypeArray, $nc(classes)->length));
	for (int32_t i = classes->length - 1; i >= 0; --i) {
		types->set(i, $(getType(classes->get(i))));
	}
	return types;
}

Type* Type::getReturnType() {
	return getReturnType($(getDescriptor()));
}

Type* Type::getReturnType($String* methodDescriptor) {
	$init(Type);
	$var($String, var$0, methodDescriptor);
	int32_t var$1 = getReturnTypeOffset(methodDescriptor);
	return getTypeInternal(var$0, var$1, $nc(methodDescriptor)->length());
}

Type* Type::getReturnType($Method* method) {
	$init(Type);
	return getType($nc(method)->getReturnType());
}

int32_t Type::getReturnTypeOffset($String* methodDescriptor) {
	$init(Type);
	int32_t currentOffset = 1;
	while ($nc(methodDescriptor)->charAt(currentOffset) != u')') {
		while (methodDescriptor->charAt(currentOffset) == u'[') {
			++currentOffset;
		}
		if (methodDescriptor->charAt(currentOffset++) == u'L') {
			int32_t semiColumnOffset = methodDescriptor->indexOf((int32_t)u';', currentOffset);
			currentOffset = $Math::max(currentOffset, semiColumnOffset + 1);
		}
	}
	return currentOffset + 1;
}

Type* Type::getTypeInternal($String* descriptorBuffer, int32_t descriptorBegin, int32_t descriptorEnd) {
	$init(Type);
	switch ($nc(descriptorBuffer)->charAt(descriptorBegin)) {
	case u'V':
		{
			return Type::VOID_TYPE;
		}
	case u'Z':
		{
			return Type::BOOLEAN_TYPE;
		}
	case u'C':
		{
			return Type::CHAR_TYPE;
		}
	case u'B':
		{
			return Type::BYTE_TYPE;
		}
	case u'S':
		{
			return Type::SHORT_TYPE;
		}
	case u'I':
		{
			return Type::INT_TYPE;
		}
	case u'F':
		{
			return Type::FLOAT_TYPE;
		}
	case u'J':
		{
			return Type::LONG_TYPE;
		}
	case u'D':
		{
			return Type::DOUBLE_TYPE;
		}
	case u'[':
		{
			return $new(Type, Type::ARRAY, descriptorBuffer, descriptorBegin, descriptorEnd);
		}
	case u'L':
		{
			return $new(Type, Type::OBJECT, descriptorBuffer, descriptorBegin + 1, descriptorEnd - 1);
		}
	case u'(':
		{
			return $new(Type, Type::METHOD, descriptorBuffer, descriptorBegin, descriptorEnd);
		}
	default:
		{
			$throwNew($IllegalArgumentException);
		}
	}
}

$String* Type::getClassName() {
	$useLocalCurrentObjectStackCache();
	{
		$var($StringBuilder, stringBuilder, nullptr)
		switch (this->sort) {
		case Type::VOID:
			{
				return "void"_s;
			}
		case Type::BOOLEAN:
			{
				return "boolean"_s;
			}
		case Type::CHAR:
			{
				return "char"_s;
			}
		case Type::BYTE:
			{
				return "byte"_s;
			}
		case Type::SHORT:
			{
				return "short"_s;
			}
		case Type::INT:
			{
				return "int"_s;
			}
		case Type::FLOAT:
			{
				return "float"_s;
			}
		case Type::LONG:
			{
				return "long"_s;
			}
		case Type::DOUBLE:
			{
				return "double"_s;
			}
		case Type::ARRAY:
			{
				$assign(stringBuilder, $new($StringBuilder, $($nc($(getElementType()))->getClassName())));
				for (int32_t i = getDimensions(); i > 0; --i) {
					$nc(stringBuilder)->append("[]"_s);
				}
				return $nc(stringBuilder)->toString();
			}
		case Type::OBJECT:
			{}
		case Type::INTERNAL:
			{
				return $($nc(this->valueBuffer)->substring(this->valueBegin, this->valueEnd))->replace(u'/', u'.');
			}
		default:
			{
				$throwNew($AssertionError);
			}
		}
	}
}

$String* Type::getInternalName() {
	return $nc(this->valueBuffer)->substring(this->valueBegin, this->valueEnd);
}

$String* Type::getInternalName($Class* clazz) {
	$init(Type);
	return $nc($($nc(clazz)->getName()))->replace(u'.', u'/');
}

$String* Type::getDescriptor() {
	$useLocalCurrentObjectStackCache();
	if (this->sort == Type::OBJECT) {
		return $nc(this->valueBuffer)->substring(this->valueBegin - 1, this->valueEnd + 1);
	} else if (this->sort == Type::INTERNAL) {
		return $str({$$str(u'L'), $($nc(this->valueBuffer)->substring(this->valueBegin, this->valueEnd)), $$str(u';')});
	} else {
		return $nc(this->valueBuffer)->substring(this->valueBegin, this->valueEnd);
	}
}

$String* Type::getDescriptor($Class* clazz) {
	$init(Type);
	$var($StringBuilder, stringBuilder, $new($StringBuilder));
	appendDescriptor(clazz, stringBuilder);
	return stringBuilder->toString();
}

$String* Type::getConstructorDescriptor($Constructor* constructor) {
	$init(Type);
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, stringBuilder, $new($StringBuilder));
	stringBuilder->append(u'(');
	$var($ClassArray, parameters, $nc(constructor)->getParameterTypes());
	{
		$var($ClassArray, arr$, parameters);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$Class* parameter = arr$->get(i$);
			{
				appendDescriptor(parameter, stringBuilder);
			}
		}
	}
	return stringBuilder->append(")V"_s)->toString();
}

$String* Type::getMethodDescriptor(Type* returnType, $TypeArray* argumentTypes) {
	$init(Type);
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, stringBuilder, $new($StringBuilder));
	stringBuilder->append(u'(');
	{
		$var($TypeArray, arr$, argumentTypes);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var(Type, argumentType, arr$->get(i$));
			{
				$nc(argumentType)->appendDescriptor(stringBuilder);
			}
		}
	}
	stringBuilder->append(u')');
	$nc(returnType)->appendDescriptor(stringBuilder);
	return stringBuilder->toString();
}

$String* Type::getMethodDescriptor($Method* method) {
	$init(Type);
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, stringBuilder, $new($StringBuilder));
	stringBuilder->append(u'(');
	$var($ClassArray, parameters, $nc(method)->getParameterTypes());
	{
		$var($ClassArray, arr$, parameters);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$Class* parameter = arr$->get(i$);
			{
				appendDescriptor(parameter, stringBuilder);
			}
		}
	}
	stringBuilder->append(u')');
	appendDescriptor(method->getReturnType(), stringBuilder);
	return stringBuilder->toString();
}

void Type::appendDescriptor($StringBuilder* stringBuilder) {
	if (this->sort == Type::OBJECT) {
		$nc(stringBuilder)->append(static_cast<$CharSequence*>(this->valueBuffer), this->valueBegin - 1, this->valueEnd + 1);
	} else if (this->sort == Type::INTERNAL) {
		$nc(stringBuilder)->append(u'L')->append(static_cast<$CharSequence*>(this->valueBuffer), this->valueBegin, this->valueEnd)->append(u';');
	} else {
		$nc(stringBuilder)->append(static_cast<$CharSequence*>(this->valueBuffer), this->valueBegin, this->valueEnd);
	}
}

void Type::appendDescriptor($Class* clazz, $StringBuilder* stringBuilder) {
	$init(Type);
	$Class* currentClass = clazz;
	while ($nc(currentClass)->isArray()) {
		$nc(stringBuilder)->append(u'[');
		currentClass = currentClass->getComponentType();
	}
	if ($nc(currentClass)->isPrimitive()) {
		char16_t descriptor = 0;
		$init($Integer);
		if (currentClass == $Integer::TYPE) {
			descriptor = u'I';
		} else {
			$init($Void);
			if (currentClass == $Void::TYPE) {
				descriptor = u'V';
			} else {
				$init($Boolean);
				if (currentClass == $Boolean::TYPE) {
					descriptor = u'Z';
				} else {
					$init($Byte);
					if (currentClass == $Byte::TYPE) {
						descriptor = u'B';
					} else {
						$init($Character);
						if (currentClass == $Character::TYPE) {
							descriptor = u'C';
						} else {
							$init($Short);
							if (currentClass == $Short::TYPE) {
								descriptor = u'S';
							} else {
								$init($Double);
								if (currentClass == $Double::TYPE) {
									descriptor = u'D';
								} else {
									$init($Float);
									if (currentClass == $Float::TYPE) {
										descriptor = u'F';
									} else {
										$init($Long);
										if (currentClass == $Long::TYPE) {
											descriptor = u'J';
										} else {
											$throwNew($AssertionError);
										}
									}
								}
							}
						}
					}
				}
			}
		}
		$nc(stringBuilder)->append(descriptor);
	} else {
		$nc(stringBuilder)->append(u'L')->append($(getInternalName(currentClass)))->append(u';');
	}
}

int32_t Type::getSort() {
	return this->sort == Type::INTERNAL ? Type::OBJECT : this->sort;
}

int32_t Type::getDimensions() {
	int32_t numDimensions = 1;
	while ($nc(this->valueBuffer)->charAt(this->valueBegin + numDimensions) == u'[') {
		++numDimensions;
	}
	return numDimensions;
}

int32_t Type::getSize() {
	switch (this->sort) {
	case Type::VOID:
		{
			return 0;
		}
	case Type::BOOLEAN:
		{}
	case Type::CHAR:
		{}
	case Type::BYTE:
		{}
	case Type::SHORT:
		{}
	case Type::INT:
		{}
	case Type::FLOAT:
		{}
	case Type::ARRAY:
		{}
	case Type::OBJECT:
		{}
	case Type::INTERNAL:
		{
			return 1;
		}
	case Type::LONG:
		{}
	case Type::DOUBLE:
		{
			return 2;
		}
	default:
		{
			$throwNew($AssertionError);
		}
	}
}

int32_t Type::getArgumentsAndReturnSizes() {
	return getArgumentsAndReturnSizes($(getDescriptor()));
}

int32_t Type::getArgumentsAndReturnSizes($String* methodDescriptor) {
	$init(Type);
	int32_t argumentsSize = 1;
	int32_t currentOffset = 1;
	int32_t currentChar = $nc(methodDescriptor)->charAt(currentOffset);
	while (currentChar != u')') {
		if (currentChar == u'J' || currentChar == u'D') {
			++currentOffset;
			argumentsSize += 2;
		} else {
			while (methodDescriptor->charAt(currentOffset) == u'[') {
				++currentOffset;
			}
			if (methodDescriptor->charAt(currentOffset++) == u'L') {
				int32_t semiColumnOffset = methodDescriptor->indexOf((int32_t)u';', currentOffset);
				currentOffset = $Math::max(currentOffset, semiColumnOffset + 1);
			}
			argumentsSize += 1;
		}
		currentChar = methodDescriptor->charAt(currentOffset);
	}
	currentChar = methodDescriptor->charAt(currentOffset + 1);
	if (currentChar == u'V') {
		return argumentsSize << 2;
	} else {
		int32_t returnSize = (currentChar == u'J' || currentChar == u'D') ? 2 : 1;
		return (argumentsSize << 2) | returnSize;
	}
}

int32_t Type::getOpcode(int32_t opcode) {
	if (opcode == $Opcodes::IALOAD || opcode == $Opcodes::IASTORE) {
		switch (this->sort) {
		case Type::BOOLEAN:
			{}
		case Type::BYTE:
			{
				return opcode + ($Opcodes::BALOAD - $Opcodes::IALOAD);
			}
		case Type::CHAR:
			{
				return opcode + ($Opcodes::CALOAD - $Opcodes::IALOAD);
			}
		case Type::SHORT:
			{
				return opcode + ($Opcodes::SALOAD - $Opcodes::IALOAD);
			}
		case Type::INT:
			{
				return opcode;
			}
		case Type::FLOAT:
			{
				return opcode + ($Opcodes::FALOAD - $Opcodes::IALOAD);
			}
		case Type::LONG:
			{
				return opcode + ($Opcodes::LALOAD - $Opcodes::IALOAD);
			}
		case Type::DOUBLE:
			{
				return opcode + ($Opcodes::DALOAD - $Opcodes::IALOAD);
			}
		case Type::ARRAY:
			{}
		case Type::OBJECT:
			{}
		case Type::INTERNAL:
			{
				return opcode + ($Opcodes::AALOAD - $Opcodes::IALOAD);
			}
		case Type::METHOD:
			{}
		case Type::VOID:
			{
				$throwNew($UnsupportedOperationException);
			}
		default:
			{
				$throwNew($AssertionError);
			}
		}
	} else {
		switch (this->sort) {
		case Type::VOID:
			{
				if (opcode != $Opcodes::IRETURN) {
					$throwNew($UnsupportedOperationException);
				}
				return $Opcodes::RETURN;
			}
		case Type::BOOLEAN:
			{}
		case Type::BYTE:
			{}
		case Type::CHAR:
			{}
		case Type::SHORT:
			{}
		case Type::INT:
			{
				return opcode;
			}
		case Type::FLOAT:
			{
				return opcode + ($Opcodes::FRETURN - $Opcodes::IRETURN);
			}
		case Type::LONG:
			{
				return opcode + ($Opcodes::LRETURN - $Opcodes::IRETURN);
			}
		case Type::DOUBLE:
			{
				return opcode + ($Opcodes::DRETURN - $Opcodes::IRETURN);
			}
		case Type::ARRAY:
			{}
		case Type::OBJECT:
			{}
		case Type::INTERNAL:
			{
				if (opcode != $Opcodes::ILOAD && opcode != $Opcodes::ISTORE && opcode != $Opcodes::IRETURN) {
					$throwNew($UnsupportedOperationException);
				}
				return opcode + ($Opcodes::ARETURN - $Opcodes::IRETURN);
			}
		case Type::METHOD:
			{
				$throwNew($UnsupportedOperationException);
			}
		default:
			{
				$throwNew($AssertionError);
			}
		}
	}
}

bool Type::equals(Object$* object) {
	if ($equals(this, object)) {
		return true;
	}
	if (!($instanceOf(Type, object))) {
		return false;
	}
	$var(Type, other, $cast(Type, object));
	if ((this->sort == Type::INTERNAL ? Type::OBJECT : this->sort) != ($nc(other)->sort == Type::INTERNAL ? Type::OBJECT : $nc(other)->sort)) {
		return false;
	}
	int32_t begin = this->valueBegin;
	int32_t end = this->valueEnd;
	int32_t otherBegin = $nc(other)->valueBegin;
	int32_t otherEnd = other->valueEnd;
	if (end - begin != otherEnd - otherBegin) {
		return false;
	}
	{
		int32_t i = begin;
		int32_t j = otherBegin;
		for (; i < end; ++i, ++j) {
			char16_t var$0 = $nc(this->valueBuffer)->charAt(i);
			if (var$0 != $nc(other->valueBuffer)->charAt(j)) {
				return false;
			}
		}
	}
	return true;
}

int32_t Type::hashCode() {
	int32_t hashCode = 13 * (this->sort == Type::INTERNAL ? Type::OBJECT : this->sort);
	if (this->sort >= Type::ARRAY) {
		{
			int32_t i = this->valueBegin;
			int32_t end = this->valueEnd;
			for (; i < end; ++i) {
				hashCode = 17 * (hashCode + $nc(this->valueBuffer)->charAt(i));
			}
		}
	}
	return hashCode;
}

$String* Type::toString() {
	return getDescriptor();
}

void clinit$Type($Class* class$) {
	$assignStatic(Type::PRIMITIVE_DESCRIPTORS, "VZCBSIFJD"_s);
	$assignStatic(Type::VOID_TYPE, $new(Type, Type::VOID, Type::PRIMITIVE_DESCRIPTORS, Type::VOID, Type::VOID + 1));
	$assignStatic(Type::BOOLEAN_TYPE, $new(Type, Type::BOOLEAN, Type::PRIMITIVE_DESCRIPTORS, Type::BOOLEAN, Type::BOOLEAN + 1));
	$assignStatic(Type::CHAR_TYPE, $new(Type, Type::CHAR, Type::PRIMITIVE_DESCRIPTORS, Type::CHAR, Type::CHAR + 1));
	$assignStatic(Type::BYTE_TYPE, $new(Type, Type::BYTE, Type::PRIMITIVE_DESCRIPTORS, Type::BYTE, Type::BYTE + 1));
	$assignStatic(Type::SHORT_TYPE, $new(Type, Type::SHORT, Type::PRIMITIVE_DESCRIPTORS, Type::SHORT, Type::SHORT + 1));
	$assignStatic(Type::INT_TYPE, $new(Type, Type::INT, Type::PRIMITIVE_DESCRIPTORS, Type::INT, Type::INT + 1));
	$assignStatic(Type::FLOAT_TYPE, $new(Type, Type::FLOAT, Type::PRIMITIVE_DESCRIPTORS, Type::FLOAT, Type::FLOAT + 1));
	$assignStatic(Type::LONG_TYPE, $new(Type, Type::LONG, Type::PRIMITIVE_DESCRIPTORS, Type::LONG, Type::LONG + 1));
	$assignStatic(Type::DOUBLE_TYPE, $new(Type, Type::DOUBLE, Type::PRIMITIVE_DESCRIPTORS, Type::DOUBLE, Type::DOUBLE + 1));
}

Type::Type() {
}

$Class* Type::load$($String* name, bool initialize) {
	$loadClass(Type, name, initialize, &_Type_ClassInfo_, clinit$Type, allocate$Type);
	return class$;
}

$Class* Type::class$ = nullptr;

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk