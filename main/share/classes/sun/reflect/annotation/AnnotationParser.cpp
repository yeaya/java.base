#include <sun/reflect/annotation/AnnotationParser.h>
#include <java/io/Serializable.h>
#include <java/lang/Enum.h>
#include <java/lang/NoClassDefFoundError.h>
#include <java/lang/TypeNotPresentException.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/annotation/AnnotationFormatError.h>
#include <java/lang/annotation/RetentionPolicy.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Array.h>
#include <java/lang/reflect/GenericArrayType.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Proxy.h>
#include <java/lang/reflect/Type.h>
#include <java/nio/BufferUnderflowException.h>
#include <java/nio/ByteBuffer.h>
#include <java/security/AccessController.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/function/Supplier.h>
#include <jdk/internal/reflect/ConstantPool.h>
#include <sun/reflect/annotation/AnnotationParser$1.h>
#include <sun/reflect/annotation/AnnotationType.h>
#include <sun/reflect/annotation/AnnotationTypeMismatchExceptionProxy.h>
#include <sun/reflect/annotation/EnumConstantNotPresentExceptionProxy.h>
#include <sun/reflect/annotation/ExceptionProxy.h>
#include <sun/reflect/annotation/TypeNotPresentExceptionProxy.h>
#include <sun/reflect/generics/factory/CoreReflectionFactory.h>
#include <sun/reflect/generics/factory/GenericsFactory.h>
#include <sun/reflect/generics/parser/SignatureParser.h>
#include <sun/reflect/generics/scope/ClassScope.h>
#include <sun/reflect/generics/scope/Scope.h>
#include <sun/reflect/generics/tree/TypeSignature.h>
#include <sun/reflect/generics/tree/TypeTree.h>
#include <sun/reflect/generics/visitor/Reifier.h>
#include <jcpp.h>

#undef EMPTY_ANNOTATIONS_ARRAY
#undef EMPTY_ANNOTATION_ARRAY
#undef RUNTIME
#undef TYPE

using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $AnnotationArray2 = $Array<::java::lang::annotation::Annotation, 2>;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoClassDefFoundError = ::java::lang::NoClassDefFoundError;
using $Short = ::java::lang::Short;
using $TypeNotPresentException = ::java::lang::TypeNotPresentException;
using $Void = ::java::lang::Void;
using $Annotation = ::java::lang::annotation::Annotation;
using $AnnotationFormatError = ::java::lang::annotation::AnnotationFormatError;
using $RetentionPolicy = ::java::lang::annotation::RetentionPolicy;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $1Array = ::java::lang::reflect::Array;
using $GenericArrayType = ::java::lang::reflect::GenericArrayType;
using $Method = ::java::lang::reflect::Method;
using $Proxy = ::java::lang::reflect::Proxy;
using $Type = ::java::lang::reflect::Type;
using $BufferUnderflowException = ::java::nio::BufferUnderflowException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AccessController = ::java::security::AccessController;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Supplier = ::java::util::function::Supplier;
using $ConstantPool = ::jdk::internal::reflect::ConstantPool;
using $AnnotationParser$1 = ::sun::reflect::annotation::AnnotationParser$1;
using $AnnotationType = ::sun::reflect::annotation::AnnotationType;
using $AnnotationTypeMismatchExceptionProxy = ::sun::reflect::annotation::AnnotationTypeMismatchExceptionProxy;
using $EnumConstantNotPresentExceptionProxy = ::sun::reflect::annotation::EnumConstantNotPresentExceptionProxy;
using $ExceptionProxy = ::sun::reflect::annotation::ExceptionProxy;
using $TypeNotPresentExceptionProxy = ::sun::reflect::annotation::TypeNotPresentExceptionProxy;
using $CoreReflectionFactory = ::sun::reflect::generics::factory::CoreReflectionFactory;
using $GenericsFactory = ::sun::reflect::generics::factory::GenericsFactory;
using $SignatureParser = ::sun::reflect::generics::parser::SignatureParser;
using $ClassScope = ::sun::reflect::generics::scope::ClassScope;
using $TypeSignature = ::sun::reflect::generics::tree::TypeSignature;
using $Reifier = ::sun::reflect::generics::visitor::Reifier;

namespace sun {
	namespace reflect {
		namespace annotation {

class AnnotationParser$$Lambda$lambda$parseClassArray$0 : public $Supplier {
	$class(AnnotationParser$$Lambda$lambda$parseClassArray$0, $NO_CLASS_INIT, $Supplier)
public:
	void init$($ByteBuffer* buf, $ConstantPool* constPool, $Class* container) {
		$set(this, buf, buf);
		$set(this, constPool, constPool);
		this->container = container;
	}
	virtual $Object* get() override {
		 return AnnotationParser::lambda$parseClassArray$0(buf, constPool, container);
	}
	$ByteBuffer* buf = nullptr;
	$ConstantPool* constPool = nullptr;
	$Class* container = nullptr;
};
$Class* AnnotationParser$$Lambda$lambda$parseClassArray$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"buf", "Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, $field(AnnotationParser$$Lambda$lambda$parseClassArray$0, buf)},
		{"constPool", "Ljdk/internal/reflect/ConstantPool;", nullptr, $PUBLIC, $field(AnnotationParser$$Lambda$lambda$parseClassArray$0, constPool)},
		{"container", "Ljava/lang/Class;", nullptr, $PUBLIC, $field(AnnotationParser$$Lambda$lambda$parseClassArray$0, container)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/ByteBuffer;Ljdk/internal/reflect/ConstantPool;Ljava/lang/Class;)V", nullptr, $PUBLIC, $method(AnnotationParser$$Lambda$lambda$parseClassArray$0, init$, void, $ByteBuffer*, $ConstantPool*, $Class*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AnnotationParser$$Lambda$lambda$parseClassArray$0, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.reflect.annotation.AnnotationParser$$Lambda$lambda$parseClassArray$0",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AnnotationParser$$Lambda$lambda$parseClassArray$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AnnotationParser$$Lambda$lambda$parseClassArray$0);
	});
	return class$;
}
$Class* AnnotationParser$$Lambda$lambda$parseClassArray$0::class$ = nullptr;

class AnnotationParser$$Lambda$lambda$parseEnumArray$1$1 : public $Supplier {
	$class(AnnotationParser$$Lambda$lambda$parseEnumArray$1$1, $NO_CLASS_INIT, $Supplier)
public:
	void init$($Class* enumType, $ByteBuffer* buf, $ConstantPool* constPool, $Class* container) {
		this->enumType = enumType;
		$set(this, buf, buf);
		$set(this, constPool, constPool);
		this->container = container;
	}
	virtual $Object* get() override {
		 return AnnotationParser::lambda$parseEnumArray$1(enumType, buf, constPool, container);
	}
	$Class* enumType = nullptr;
	$ByteBuffer* buf = nullptr;
	$ConstantPool* constPool = nullptr;
	$Class* container = nullptr;
};
$Class* AnnotationParser$$Lambda$lambda$parseEnumArray$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"enumType", "Ljava/lang/Class;", nullptr, $PUBLIC, $field(AnnotationParser$$Lambda$lambda$parseEnumArray$1$1, enumType)},
		{"buf", "Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, $field(AnnotationParser$$Lambda$lambda$parseEnumArray$1$1, buf)},
		{"constPool", "Ljdk/internal/reflect/ConstantPool;", nullptr, $PUBLIC, $field(AnnotationParser$$Lambda$lambda$parseEnumArray$1$1, constPool)},
		{"container", "Ljava/lang/Class;", nullptr, $PUBLIC, $field(AnnotationParser$$Lambda$lambda$parseEnumArray$1$1, container)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;Ljava/nio/ByteBuffer;Ljdk/internal/reflect/ConstantPool;Ljava/lang/Class;)V", nullptr, $PUBLIC, $method(AnnotationParser$$Lambda$lambda$parseEnumArray$1$1, init$, void, $Class*, $ByteBuffer*, $ConstantPool*, $Class*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AnnotationParser$$Lambda$lambda$parseEnumArray$1$1, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.reflect.annotation.AnnotationParser$$Lambda$lambda$parseEnumArray$1$1",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AnnotationParser$$Lambda$lambda$parseEnumArray$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AnnotationParser$$Lambda$lambda$parseEnumArray$1$1);
	});
	return class$;
}
$Class* AnnotationParser$$Lambda$lambda$parseEnumArray$1$1::class$ = nullptr;

class AnnotationParser$$Lambda$lambda$parseAnnotationArray$2$2 : public $Supplier {
	$class(AnnotationParser$$Lambda$lambda$parseAnnotationArray$2$2, $NO_CLASS_INIT, $Supplier)
public:
	void init$($ByteBuffer* buf, $ConstantPool* constPool, $Class* container) {
		$set(this, buf, buf);
		$set(this, constPool, constPool);
		this->container = container;
	}
	virtual $Object* get() override {
		 return AnnotationParser::lambda$parseAnnotationArray$2(buf, constPool, container);
	}
	$ByteBuffer* buf = nullptr;
	$ConstantPool* constPool = nullptr;
	$Class* container = nullptr;
};
$Class* AnnotationParser$$Lambda$lambda$parseAnnotationArray$2$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"buf", "Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, $field(AnnotationParser$$Lambda$lambda$parseAnnotationArray$2$2, buf)},
		{"constPool", "Ljdk/internal/reflect/ConstantPool;", nullptr, $PUBLIC, $field(AnnotationParser$$Lambda$lambda$parseAnnotationArray$2$2, constPool)},
		{"container", "Ljava/lang/Class;", nullptr, $PUBLIC, $field(AnnotationParser$$Lambda$lambda$parseAnnotationArray$2$2, container)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/ByteBuffer;Ljdk/internal/reflect/ConstantPool;Ljava/lang/Class;)V", nullptr, $PUBLIC, $method(AnnotationParser$$Lambda$lambda$parseAnnotationArray$2$2, init$, void, $ByteBuffer*, $ConstantPool*, $Class*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AnnotationParser$$Lambda$lambda$parseAnnotationArray$2$2, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.reflect.annotation.AnnotationParser$$Lambda$lambda$parseAnnotationArray$2$2",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AnnotationParser$$Lambda$lambda$parseAnnotationArray$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AnnotationParser$$Lambda$lambda$parseAnnotationArray$2$2);
	});
	return class$;
}
$Class* AnnotationParser$$Lambda$lambda$parseAnnotationArray$2$2::class$ = nullptr;

$AnnotationArray* AnnotationParser::EMPTY_ANNOTATIONS_ARRAY = nullptr;
$AnnotationArray* AnnotationParser::EMPTY_ANNOTATION_ARRAY = nullptr;

void AnnotationParser::init$() {
}

$Map* AnnotationParser::parseAnnotations($bytes* rawAnnotations, $ConstantPool* constPool, $Class* container) {
	$init(AnnotationParser);
	if (rawAnnotations == nullptr) {
		return $Collections::emptyMap();
	}
	try {
		return parseAnnotations2(rawAnnotations, constPool, container, nullptr);
	} catch ($BufferUnderflowException& e) {
		$throwNew($AnnotationFormatError, "Unexpected end of annotations."_s);
	} catch ($IllegalArgumentException& e) {
		$throwNew($AnnotationFormatError, e);
	}
	$shouldNotReachHere();
}

$Map* AnnotationParser::parseSelectAnnotations($bytes* rawAnnotations, $ConstantPool* constPool, $Class* container, $ClassArray* selectAnnotationClasses) {
	$init(AnnotationParser);
	if (rawAnnotations == nullptr) {
		return $Collections::emptyMap();
	}
	try {
		return parseAnnotations2(rawAnnotations, constPool, container, selectAnnotationClasses);
	} catch ($BufferUnderflowException& e) {
		$throwNew($AnnotationFormatError, "Unexpected end of annotations."_s);
	} catch ($IllegalArgumentException& e) {
		$throwNew($AnnotationFormatError, e);
	}
	$shouldNotReachHere();
}

$Map* AnnotationParser::parseAnnotations2($bytes* rawAnnotations, $ConstantPool* constPool, $Class* container, $ClassArray* selectAnnotationClasses) {
	$init(AnnotationParser);
	$useLocalObjectStack();
	$var($Map, result, $new($LinkedHashMap));
	$var($ByteBuffer, buf, $ByteBuffer::wrap(rawAnnotations));
	int32_t numAnnotations = $nc(buf)->getShort() & 0xffff;
	for (int32_t i = 0; i < numAnnotations; ++i) {
		$var($Annotation, a, parseAnnotation2(buf, constPool, container, false, selectAnnotationClasses));
		if (a != nullptr) {
			$Class* klass = a->annotationType();
			$init($RetentionPolicy);
			bool var$0 = $$nc($AnnotationType::getInstance(klass))->retention() == $RetentionPolicy::RUNTIME;
			if (var$0 && result->put(klass, a) != nullptr) {
				$throwNew($AnnotationFormatError, $$str({"Duplicate annotation for class: "_s, klass, ": "_s, a}));
			}
		}
	}
	return result;
}

$AnnotationArray2* AnnotationParser::parseParameterAnnotations($bytes* rawAnnotations, $ConstantPool* constPool, $Class* container) {
	$init(AnnotationParser);
	try {
		return parseParameterAnnotations2(rawAnnotations, constPool, container);
	} catch ($BufferUnderflowException& e) {
		$throwNew($AnnotationFormatError, "Unexpected end of parameter annotations."_s);
	} catch ($IllegalArgumentException& e) {
		$throwNew($AnnotationFormatError, e);
	}
	$shouldNotReachHere();
}

$AnnotationArray2* AnnotationParser::parseParameterAnnotations2($bytes* rawAnnotations, $ConstantPool* constPool, $Class* container) {
	$init(AnnotationParser);
	$useLocalObjectStack();
	$var($ByteBuffer, buf, $ByteBuffer::wrap(rawAnnotations));
	int32_t numParameters = $nc(buf)->get() & 0xff;
	$var($AnnotationArray2, result, $new($AnnotationArray2, numParameters));
	for (int32_t i = 0; i < numParameters; ++i) {
		int32_t numAnnotations = buf->getShort() & 0xffff;
		$var($List, annotations, $new($ArrayList, numAnnotations));
		for (int32_t j = 0; j < numAnnotations; ++j) {
			$var($Annotation, a, parseAnnotation(buf, constPool, container, false));
			if (a != nullptr) {
				$var($AnnotationType, type, $AnnotationType::getInstance(a->annotationType()));
				$init($RetentionPolicy);
				if ($nc(type)->retention() == $RetentionPolicy::RUNTIME) {
					annotations->add(a);
				}
			}
		}
		result->set(i, $$cast($AnnotationArray, annotations->toArray(AnnotationParser::EMPTY_ANNOTATIONS_ARRAY)));
	}
	return result;
}

$Annotation* AnnotationParser::parseAnnotation($ByteBuffer* buf, $ConstantPool* constPool, $Class* container, bool exceptionOnMissingAnnotationClass) {
	$init(AnnotationParser);
	return parseAnnotation2(buf, constPool, container, exceptionOnMissingAnnotationClass, nullptr);
}

$Annotation* AnnotationParser::parseAnnotation2($ByteBuffer* buf, $ConstantPool* constPool, $Class* container, bool exceptionOnMissingAnnotationClass, $ClassArray* selectAnnotationClasses) {
	$init(AnnotationParser);
	$useLocalObjectStack();
	int32_t typeIndex = $nc(buf)->getShort() & 0xffff;
	$Class* annotationClass = nullptr;
	$var($String, sig, "[unknown]"_s);
	try {
		$assign(sig, $nc(constPool)->getUTF8At(typeIndex));
		annotationClass = parseSig(sig, container);
	} catch ($NoClassDefFoundError& e) {
		if (exceptionOnMissingAnnotationClass) {
			$throwNew($TypeNotPresentException, sig, e);
		}
		skipAnnotation(buf, false);
		return nullptr;
	} catch ($TypeNotPresentException& e) {
		if (exceptionOnMissingAnnotationClass) {
			$throw(e);
		}
		skipAnnotation(buf, false);
		return nullptr;
	}
	if (selectAnnotationClasses != nullptr && !contains(selectAnnotationClasses, annotationClass)) {
		skipAnnotation(buf, false);
		return nullptr;
	}
	$var($AnnotationType, type, nullptr);
	try {
		$assign(type, $AnnotationType::getInstance(annotationClass));
	} catch ($IllegalArgumentException& e) {
		skipAnnotation(buf, false);
		return nullptr;
	}
	$var($Map, memberTypes, $nc(type)->memberTypes());
	$var($Map, memberValues, $new($LinkedHashMap, $(type->memberDefaults())));
	int32_t numMembers = buf->getShort() & 0xffff;
	for (int32_t i = 0; i < numMembers; ++i) {
		int32_t memberNameIndex = buf->getShort() & 0xffff;
		$var($String, memberName, $nc(constPool)->getUTF8At(memberNameIndex));
		$Class* memberType = $cast($Class, $nc(memberTypes)->get(memberName));
		if (memberType == nullptr) {
			skipMemberValue(buf);
		} else {
			$var($Object, value, parseMemberValue(memberType, buf, constPool, container));
			if ($instanceOf($AnnotationTypeMismatchExceptionProxy, value)) {
				$cast($AnnotationTypeMismatchExceptionProxy, value)->setMember($$cast($Method, $$nc(type->members())->get(memberName)));
			}
			memberValues->put(memberName, value);
		}
	}
	return annotationForMap(annotationClass, memberValues);
}

$Annotation* AnnotationParser::annotationForMap($Class* type, $Map* memberValues) {
	$init(AnnotationParser);
	$beforeCallerSensitive();
	return $cast($Annotation, $AccessController::doPrivileged($$new($AnnotationParser$1, type, memberValues)));
}

$Object* AnnotationParser::parseMemberValue($Class* memberType, $ByteBuffer* buf, $ConstantPool* constPool, $Class* container) {
	$init(AnnotationParser);
	$useLocalObjectStack();
	$var($Object, result, nullptr);
	int32_t tag = $nc(buf)->get();
	switch (tag) {
	case u'e':
		return parseEnumValue(memberType, buf, constPool, container);
	case u'c':
		$assign(result, parseClassValue(buf, constPool, container));
		break;
	case u'@':
		$assign(result, parseAnnotation(buf, constPool, container, true));
		break;
	case u'[':
		return parseArray(memberType, buf, constPool, container);
	default:
		$assign(result, parseConst(tag, buf, constPool));
	}
	if (result == nullptr) {
		$assign(result, $new($AnnotationTypeMismatchExceptionProxy, $Proxy::isProxyClass(memberType) ? $($nc($($nc(memberType)->getInterfaces())->get(0))->getName()) : $($nc(memberType)->getName())));
	} else if (!($instanceOf($ExceptionProxy, result)) && !$nc(memberType)->isInstance(result)) {
		if ($instanceOf($Annotation, result)) {
			$assign(result, $new($AnnotationTypeMismatchExceptionProxy, $(result->toString())));
		} else {
			$assign(result, $new($AnnotationTypeMismatchExceptionProxy, $$str({$(result->getClass()->getName()), "["_s, result, "]"_s})));
		}
	}
	return result;
}

$Object* AnnotationParser::parseConst(int32_t tag, $ByteBuffer* buf, $ConstantPool* constPool) {
	$init(AnnotationParser);
	$useLocalObjectStack();
	int32_t constIndex = $nc(buf)->getShort() & 0xffff;
	switch (tag) {
	case u'B':
		return $of($Byte::valueOf((int8_t)$nc(constPool)->getIntAt(constIndex)));
	case u'C':
		return $of($Character::valueOf((char16_t)$nc(constPool)->getIntAt(constIndex)));
	case u'D':
		return $of($Double::valueOf($nc(constPool)->getDoubleAt(constIndex)));
	case u'F':
		return $of($Float::valueOf($nc(constPool)->getFloatAt(constIndex)));
	case u'I':
		return $of($Integer::valueOf($nc(constPool)->getIntAt(constIndex)));
	case u'J':
		return $of($Long::valueOf($nc(constPool)->getLongAt(constIndex)));
	case u'S':
		return $of($Short::valueOf((int16_t)$nc(constPool)->getIntAt(constIndex)));
	case u'Z':
		return $of($Boolean::valueOf($nc(constPool)->getIntAt(constIndex) != 0));
	case u's':
		return $of($nc(constPool)->getUTF8At(constIndex));
	default:
		$throwNew($AnnotationFormatError, $$str({"Invalid member-value tag in annotation: "_s, $$str(tag)}));
	}
}

$Object* AnnotationParser::parseClassValue($ByteBuffer* buf, $ConstantPool* constPool, $Class* container) {
	$init(AnnotationParser);
	$useLocalObjectStack();
	int32_t classIndex = $nc(buf)->getShort() & 0xffff;
	try {
		$var($String, sig, $nc(constPool)->getUTF8At(classIndex));
		return $of(parseSig(sig, container));
	} catch ($NoClassDefFoundError& e) {
		return $new($TypeNotPresentExceptionProxy, "[unknown]"_s, e);
	} catch ($TypeNotPresentException& e) {
		$var($String, var$0, e->typeName());
		return $new($TypeNotPresentExceptionProxy, var$0, $(e->getCause()));
	}
	$shouldNotReachHere();
}

$Class* AnnotationParser::parseSig($String* sig, $Class* container) {
	$init(AnnotationParser);
	$useLocalObjectStack();
	if ($nc(sig)->equals("V"_s)) {
		return $Void::TYPE;
	}
	$var($SignatureParser, parser, $SignatureParser::make());
	$var($TypeSignature, typeSig, $nc(parser)->parseTypeSig(sig));
	$var($GenericsFactory, factory, $CoreReflectionFactory::make(container, $($ClassScope::make(container))));
	$var($Reifier, reify, $Reifier::make(factory));
	$nc(typeSig)->accept(reify);
	$var($Type, result, $cast($Type, $nc(reify)->getResult()));
	return toClass(result);
}

$Class* AnnotationParser::toClass($Type* o) {
	$init(AnnotationParser);
	$useLocalObjectStack();
	if ($instanceOf($GenericArrayType, o)) {
		return $($1Array::newInstance(toClass($($cast($GenericArrayType, o)->getGenericComponentType())), 0))->getClass();
	}
	return $cast($Class, o);
}

$Object* AnnotationParser::parseEnumValue($Class* enumType, $ByteBuffer* buf, $ConstantPool* constPool, $Class* container) {
	$init(AnnotationParser);
	$useLocalObjectStack();
	int32_t typeNameIndex = $nc(buf)->getShort() & 0xffff;
	$var($String, typeName, $nc(constPool)->getUTF8At(typeNameIndex));
	int32_t constNameIndex = buf->getShort() & 0xffff;
	$var($String, constName, constPool->getUTF8At(constNameIndex));
	bool var$0 = !$nc(enumType)->isEnum();
	if (var$0 || enumType != parseSig(typeName, container)) {
		return $new($AnnotationTypeMismatchExceptionProxy, $$str({$($($nc(typeName)->substring(1, $nc(typeName)->length() - 1))->replace(u'/', u'.')), "."_s, constName}));
	}
	try {
		return $of($Enum::valueOf(enumType, constName));
	} catch ($IllegalArgumentException& e) {
		return $new($EnumConstantNotPresentExceptionProxy, enumType, constName);
	}
	$shouldNotReachHere();
}

$Object* AnnotationParser::parseArray($Class* arrayType, $ByteBuffer* buf, $ConstantPool* constPool, $Class* container) {
	$init(AnnotationParser);
	int32_t length = $nc(buf)->getShort() & 0xffff;
	$Class* componentType = $nc(arrayType)->getComponentType();
	if (componentType == $Byte::TYPE) {
		return parseByteArray(length, buf, constPool);
	} else if (componentType == $Character::TYPE) {
		return parseCharArray(length, buf, constPool);
	} else if (componentType == $Double::TYPE) {
		return parseDoubleArray(length, buf, constPool);
	} else if (componentType == $Float::TYPE) {
		return parseFloatArray(length, buf, constPool);
	} else if (componentType == $Integer::TYPE) {
		return parseIntArray(length, buf, constPool);
	} else if (componentType == $Long::TYPE) {
		return parseLongArray(length, buf, constPool);
	} else if (componentType == $Short::TYPE) {
		return parseShortArray(length, buf, constPool);
	} else if (componentType == $Boolean::TYPE) {
		return parseBooleanArray(length, buf, constPool);
	} else if (componentType == $String::class$) {
		return parseStringArray(length, buf, constPool);
	} else if (componentType == $Class::class$) {
		return parseClassArray(length, buf, constPool, container);
	} else if ($nc(componentType)->isEnum()) {
		return parseEnumArray(length, componentType, buf, constPool, container);
	} else if (componentType->isAnnotation()) {
		return parseAnnotationArray(length, componentType, buf, constPool, container);
	} else {
		return parseUnknownArray(length, buf);
	}
}

$Object* AnnotationParser::parseByteArray(int32_t length, $ByteBuffer* buf, $ConstantPool* constPool) {
	$init(AnnotationParser);
	$var($bytes, result, $new($bytes, length));
	bool typeMismatch = false;
	int32_t tag = 0;
	for (int32_t i = 0; i < length; ++i) {
		tag = $nc(buf)->get();
		if (tag == u'B') {
			int32_t index = buf->getShort() & 0xffff;
			result->set(i, (int8_t)$nc(constPool)->getIntAt(index));
		} else {
			skipMemberValue(tag, buf);
			typeMismatch = true;
		}
	}
	return typeMismatch ? $of(exceptionProxy(tag)) : $of(result);
}

$Object* AnnotationParser::parseCharArray(int32_t length, $ByteBuffer* buf, $ConstantPool* constPool) {
	$init(AnnotationParser);
	$var($chars, result, $new($chars, length));
	bool typeMismatch = false;
	int8_t tag = 0;
	for (int32_t i = 0; i < length; ++i) {
		tag = $nc(buf)->get();
		if (tag == u'C') {
			int32_t index = buf->getShort() & 0xffff;
			result->set(i, (char16_t)$nc(constPool)->getIntAt(index));
		} else {
			skipMemberValue(tag, buf);
			typeMismatch = true;
		}
	}
	return typeMismatch ? $of(exceptionProxy(tag)) : $of(result);
}

$Object* AnnotationParser::parseDoubleArray(int32_t length, $ByteBuffer* buf, $ConstantPool* constPool) {
	$init(AnnotationParser);
	$var($doubles, result, $new($doubles, length));
	bool typeMismatch = false;
	int32_t tag = 0;
	for (int32_t i = 0; i < length; ++i) {
		tag = $nc(buf)->get();
		if (tag == u'D') {
			int32_t index = buf->getShort() & 0xffff;
			result->set(i, $nc(constPool)->getDoubleAt(index));
		} else {
			skipMemberValue(tag, buf);
			typeMismatch = true;
		}
	}
	return typeMismatch ? $of(exceptionProxy(tag)) : $of(result);
}

$Object* AnnotationParser::parseFloatArray(int32_t length, $ByteBuffer* buf, $ConstantPool* constPool) {
	$init(AnnotationParser);
	$var($floats, result, $new($floats, length));
	bool typeMismatch = false;
	int32_t tag = 0;
	for (int32_t i = 0; i < length; ++i) {
		tag = $nc(buf)->get();
		if (tag == u'F') {
			int32_t index = buf->getShort() & 0xffff;
			result->set(i, $nc(constPool)->getFloatAt(index));
		} else {
			skipMemberValue(tag, buf);
			typeMismatch = true;
		}
	}
	return typeMismatch ? $of(exceptionProxy(tag)) : $of(result);
}

$Object* AnnotationParser::parseIntArray(int32_t length, $ByteBuffer* buf, $ConstantPool* constPool) {
	$init(AnnotationParser);
	$var($ints, result, $new($ints, length));
	bool typeMismatch = false;
	int32_t tag = 0;
	for (int32_t i = 0; i < length; ++i) {
		tag = $nc(buf)->get();
		if (tag == u'I') {
			int32_t index = buf->getShort() & 0xffff;
			result->set(i, $nc(constPool)->getIntAt(index));
		} else {
			skipMemberValue(tag, buf);
			typeMismatch = true;
		}
	}
	return typeMismatch ? $of(exceptionProxy(tag)) : $of(result);
}

$Object* AnnotationParser::parseLongArray(int32_t length, $ByteBuffer* buf, $ConstantPool* constPool) {
	$init(AnnotationParser);
	$var($longs, result, $new($longs, length));
	bool typeMismatch = false;
	int32_t tag = 0;
	for (int32_t i = 0; i < length; ++i) {
		tag = $nc(buf)->get();
		if (tag == u'J') {
			int32_t index = buf->getShort() & 0xffff;
			result->set(i, $nc(constPool)->getLongAt(index));
		} else {
			skipMemberValue(tag, buf);
			typeMismatch = true;
		}
	}
	return typeMismatch ? $of(exceptionProxy(tag)) : $of(result);
}

$Object* AnnotationParser::parseShortArray(int32_t length, $ByteBuffer* buf, $ConstantPool* constPool) {
	$init(AnnotationParser);
	$var($shorts, result, $new($shorts, length));
	bool typeMismatch = false;
	int32_t tag = 0;
	for (int32_t i = 0; i < length; ++i) {
		tag = $nc(buf)->get();
		if (tag == u'S') {
			int32_t index = buf->getShort() & 0xffff;
			result->set(i, (int16_t)$nc(constPool)->getIntAt(index));
		} else {
			skipMemberValue(tag, buf);
			typeMismatch = true;
		}
	}
	return typeMismatch ? $of(exceptionProxy(tag)) : $of(result);
}

$Object* AnnotationParser::parseBooleanArray(int32_t length, $ByteBuffer* buf, $ConstantPool* constPool) {
	$init(AnnotationParser);
	$var($booleans, result, $new($booleans, length));
	bool typeMismatch = false;
	int32_t tag = 0;
	for (int32_t i = 0; i < length; ++i) {
		tag = $nc(buf)->get();
		if (tag == u'Z') {
			int32_t index = buf->getShort() & 0xffff;
			result->set(i, ($nc(constPool)->getIntAt(index) != 0));
		} else {
			skipMemberValue(tag, buf);
			typeMismatch = true;
		}
	}
	return typeMismatch ? $of(exceptionProxy(tag)) : $of(result);
}

$Object* AnnotationParser::parseStringArray(int32_t length, $ByteBuffer* buf, $ConstantPool* constPool) {
	$init(AnnotationParser);
	$useLocalObjectStack();
	$var($StringArray, result, $new($StringArray, length));
	bool typeMismatch = false;
	int32_t tag = 0;
	for (int32_t i = 0; i < length; ++i) {
		tag = $nc(buf)->get();
		if (tag == u's') {
			int32_t index = buf->getShort() & 0xffff;
			result->set(i, $($nc(constPool)->getUTF8At(index)));
		} else {
			skipMemberValue(tag, buf);
			typeMismatch = true;
		}
	}
	return typeMismatch ? $of(exceptionProxy(tag)) : $of(result);
}

$Object* AnnotationParser::parseClassArray(int32_t length, $ByteBuffer* buf, $ConstantPool* constPool, $Class* container) {
	$init(AnnotationParser);
	$useLocalObjectStack();
	return parseArrayElements($$new($ClassArray, length), buf, u'c', $$new(AnnotationParser$$Lambda$lambda$parseClassArray$0, buf, constPool, container));
}

$Object* AnnotationParser::parseEnumArray(int32_t length, $Class* enumType, $ByteBuffer* buf, $ConstantPool* constPool, $Class* container) {
	$init(AnnotationParser);
	$useLocalObjectStack();
	$var($ObjectArray, var$0, $cast($ObjectArray, $1Array::newInstance(enumType, length)));
	return parseArrayElements(var$0, buf, u'e', $$new(AnnotationParser$$Lambda$lambda$parseEnumArray$1$1, enumType, buf, constPool, container));
}

$Object* AnnotationParser::parseAnnotationArray(int32_t length, $Class* annotationType, $ByteBuffer* buf, $ConstantPool* constPool, $Class* container) {
	$init(AnnotationParser);
	$useLocalObjectStack();
	$var($ObjectArray, var$0, $cast($ObjectArray, $1Array::newInstance(annotationType, length)));
	return parseArrayElements(var$0, buf, u'@', $$new(AnnotationParser$$Lambda$lambda$parseAnnotationArray$2$2, buf, constPool, container));
}

$Object* AnnotationParser::parseArrayElements($ObjectArray* result, $ByteBuffer* buf, int32_t expectedTag, $Supplier* parseElement) {
	$init(AnnotationParser);
	$useLocalObjectStack();
	$var($Object, exceptionProxy, nullptr);
	for (int32_t i = 0; i < $nc(result)->length; ++i) {
		int32_t tag = $nc(buf)->get();
		if (tag == expectedTag) {
			$var($Object, value, $nc(parseElement)->get());
			if ($instanceOf($ExceptionProxy, value)) {
				if (exceptionProxy == nullptr) {
					$assign(exceptionProxy, $cast($ExceptionProxy, value));
				}
			} else {
				result->set(i, value);
			}
		} else {
			skipMemberValue(tag, buf);
			if (exceptionProxy == nullptr) {
				$assign(exceptionProxy, AnnotationParser::exceptionProxy(tag));
			}
		}
	}
	return (exceptionProxy != nullptr) ? exceptionProxy : $of(result);
}

$Object* AnnotationParser::parseUnknownArray(int32_t length, $ByteBuffer* buf) {
	$init(AnnotationParser);
	int32_t tag = 0;
	for (int32_t i = 0; i < length; ++i) {
		tag = $nc(buf)->get();
		skipMemberValue(tag, buf);
	}
	return exceptionProxy(tag);
}

$ExceptionProxy* AnnotationParser::exceptionProxy(int32_t tag) {
	$init(AnnotationParser);
	$useLocalObjectStack();
	return $new($AnnotationTypeMismatchExceptionProxy, $$str({"Array with component tag: "_s, (tag == 0 ? $cast($Serializable, "0"_s) : $$cast($Serializable, $Character::valueOf((char16_t)tag)))}));
}

void AnnotationParser::skipAnnotation($ByteBuffer* buf, bool complete) {
	$init(AnnotationParser);
	if (complete) {
		$nc(buf)->getShort();
	}
	int32_t numMembers = $nc(buf)->getShort() & 0xffff;
	for (int32_t i = 0; i < numMembers; ++i) {
		buf->getShort();
		skipMemberValue(buf);
	}
}

void AnnotationParser::skipMemberValue($ByteBuffer* buf) {
	$init(AnnotationParser);
	int32_t tag = $nc(buf)->get();
	skipMemberValue(tag, buf);
}

void AnnotationParser::skipMemberValue(int32_t tag, $ByteBuffer* buf) {
	$init(AnnotationParser);
	switch (tag) {
	case u'e':
		$nc(buf)->getInt();
		break;
	case u'@':
		skipAnnotation(buf, true);
		break;
	case u'[':
		skipArray(buf);
		break;
	default:
		$nc(buf)->getShort();
	}
}

void AnnotationParser::skipArray($ByteBuffer* buf) {
	$init(AnnotationParser);
	int32_t length = $nc(buf)->getShort() & 0xffff;
	for (int32_t i = 0; i < length; ++i) {
		skipMemberValue(buf);
	}
}

bool AnnotationParser::contains($ObjectArray* array, Object$* element) {
	$init(AnnotationParser);
	$useLocalObjectStack();
	$var($ObjectArray, arr$, array);
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($Object0, e, arr$->get(i$));
		if ($equals(e, element)) {
			return true;
		}
	}
	return false;
}

$AnnotationArray* AnnotationParser::toArray($Map* annotations) {
	$init(AnnotationParser);
	return $cast($AnnotationArray, $$nc($nc(annotations)->values())->toArray(AnnotationParser::EMPTY_ANNOTATION_ARRAY));
}

$AnnotationArray* AnnotationParser::getEmptyAnnotationArray() {
	$init(AnnotationParser);
	return AnnotationParser::EMPTY_ANNOTATION_ARRAY;
}

$Object* AnnotationParser::lambda$parseAnnotationArray$2($ByteBuffer* buf, $ConstantPool* constPool, $Class* container) {
	$init(AnnotationParser);
	return parseAnnotation(buf, constPool, container, true);
}

$Object* AnnotationParser::lambda$parseEnumArray$1($Class* enumType, $ByteBuffer* buf, $ConstantPool* constPool, $Class* container) {
	$init(AnnotationParser);
	return parseEnumValue(enumType, buf, constPool, container);
}

$Object* AnnotationParser::lambda$parseClassArray$0($ByteBuffer* buf, $ConstantPool* constPool, $Class* container) {
	$init(AnnotationParser);
	return parseClassValue(buf, constPool, container);
}

void AnnotationParser::clinit$($Class* clazz) {
	$assignStatic(AnnotationParser::EMPTY_ANNOTATIONS_ARRAY, $new($AnnotationArray, 0));
	$assignStatic(AnnotationParser::EMPTY_ANNOTATION_ARRAY, $new($AnnotationArray, 0));
}

AnnotationParser::AnnotationParser() {
}

$Class* AnnotationParser::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.reflect.annotation.AnnotationParser$$Lambda$lambda$parseClassArray$0")) {
			return AnnotationParser$$Lambda$lambda$parseClassArray$0::load$(name, initialize);
		}
		if (name->equals("sun.reflect.annotation.AnnotationParser$$Lambda$lambda$parseEnumArray$1$1")) {
			return AnnotationParser$$Lambda$lambda$parseEnumArray$1$1::load$(name, initialize);
		}
		if (name->equals("sun.reflect.annotation.AnnotationParser$$Lambda$lambda$parseAnnotationArray$2$2")) {
			return AnnotationParser$$Lambda$lambda$parseAnnotationArray$2$2::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"EMPTY_ANNOTATIONS_ARRAY", "[Ljava/lang/annotation/Annotation;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AnnotationParser, EMPTY_ANNOTATIONS_ARRAY)},
		{"EMPTY_ANNOTATION_ARRAY", "[Ljava/lang/annotation/Annotation;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AnnotationParser, EMPTY_ANNOTATION_ARRAY)},
		{}
	};
	$CompoundAttribute parseSelectAnnotationsmethodAnnotations$$[] = {
		{"Ljava/lang/SafeVarargs;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AnnotationParser, init$, void)},
		{"annotationForMap", "(Ljava/lang/Class;Ljava/util/Map;)Ljava/lang/annotation/Annotation;", "(Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;)Ljava/lang/annotation/Annotation;", $PUBLIC | $STATIC, $staticMethod(AnnotationParser, annotationForMap, $Annotation*, $Class*, $Map*)},
		{"contains", "([Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(AnnotationParser, contains, bool, $ObjectArray*, Object$*)},
		{"exceptionProxy", "(I)Lsun/reflect/annotation/ExceptionProxy;", nullptr, $PRIVATE | $STATIC, $staticMethod(AnnotationParser, exceptionProxy, $ExceptionProxy*, int32_t)},
		{"getEmptyAnnotationArray", "()[Ljava/lang/annotation/Annotation;", nullptr, $STATIC, $staticMethod(AnnotationParser, getEmptyAnnotationArray, $AnnotationArray*)},
		{"lambda$parseAnnotationArray$2", "(Ljava/nio/ByteBuffer;Ljdk/internal/reflect/ConstantPool;Ljava/lang/Class;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AnnotationParser, lambda$parseAnnotationArray$2, $Object*, $ByteBuffer*, $ConstantPool*, $Class*)},
		{"lambda$parseClassArray$0", "(Ljava/nio/ByteBuffer;Ljdk/internal/reflect/ConstantPool;Ljava/lang/Class;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AnnotationParser, lambda$parseClassArray$0, $Object*, $ByteBuffer*, $ConstantPool*, $Class*)},
		{"lambda$parseEnumArray$1", "(Ljava/lang/Class;Ljava/nio/ByteBuffer;Ljdk/internal/reflect/ConstantPool;Ljava/lang/Class;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AnnotationParser, lambda$parseEnumArray$1, $Object*, $Class*, $ByteBuffer*, $ConstantPool*, $Class*)},
		{"parseAnnotation", "(Ljava/nio/ByteBuffer;Ljdk/internal/reflect/ConstantPool;Ljava/lang/Class;Z)Ljava/lang/annotation/Annotation;", "(Ljava/nio/ByteBuffer;Ljdk/internal/reflect/ConstantPool;Ljava/lang/Class<*>;Z)Ljava/lang/annotation/Annotation;", $STATIC, $staticMethod(AnnotationParser, parseAnnotation, $Annotation*, $ByteBuffer*, $ConstantPool*, $Class*, bool)},
		{"parseAnnotation2", "(Ljava/nio/ByteBuffer;Ljdk/internal/reflect/ConstantPool;Ljava/lang/Class;Z[Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", "(Ljava/nio/ByteBuffer;Ljdk/internal/reflect/ConstantPool;Ljava/lang/Class<*>;Z[Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;)Ljava/lang/annotation/Annotation;", $PRIVATE | $STATIC, $staticMethod(AnnotationParser, parseAnnotation2, $Annotation*, $ByteBuffer*, $ConstantPool*, $Class*, bool, $ClassArray*)},
		{"parseAnnotationArray", "(ILjava/lang/Class;Ljava/nio/ByteBuffer;Ljdk/internal/reflect/ConstantPool;Ljava/lang/Class;)Ljava/lang/Object;", "(ILjava/lang/Class<+Ljava/lang/annotation/Annotation;>;Ljava/nio/ByteBuffer;Ljdk/internal/reflect/ConstantPool;Ljava/lang/Class<*>;)Ljava/lang/Object;", $PRIVATE | $STATIC, $staticMethod(AnnotationParser, parseAnnotationArray, $Object*, int32_t, $Class*, $ByteBuffer*, $ConstantPool*, $Class*)},
		{"parseAnnotations", "([BLjdk/internal/reflect/ConstantPool;Ljava/lang/Class;)Ljava/util/Map;", "([BLjdk/internal/reflect/ConstantPool;Ljava/lang/Class<*>;)Ljava/util/Map<Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;Ljava/lang/annotation/Annotation;>;", $PUBLIC | $STATIC, $staticMethod(AnnotationParser, parseAnnotations, $Map*, $bytes*, $ConstantPool*, $Class*)},
		{"parseAnnotations2", "([BLjdk/internal/reflect/ConstantPool;Ljava/lang/Class;[Ljava/lang/Class;)Ljava/util/Map;", "([BLjdk/internal/reflect/ConstantPool;Ljava/lang/Class<*>;[Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;)Ljava/util/Map<Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;Ljava/lang/annotation/Annotation;>;", $PRIVATE | $STATIC, $staticMethod(AnnotationParser, parseAnnotations2, $Map*, $bytes*, $ConstantPool*, $Class*, $ClassArray*)},
		{"parseArray", "(Ljava/lang/Class;Ljava/nio/ByteBuffer;Ljdk/internal/reflect/ConstantPool;Ljava/lang/Class;)Ljava/lang/Object;", "(Ljava/lang/Class<*>;Ljava/nio/ByteBuffer;Ljdk/internal/reflect/ConstantPool;Ljava/lang/Class<*>;)Ljava/lang/Object;", $PRIVATE | $STATIC, $staticMethod(AnnotationParser, parseArray, $Object*, $Class*, $ByteBuffer*, $ConstantPool*, $Class*)},
		{"parseArrayElements", "([Ljava/lang/Object;Ljava/nio/ByteBuffer;ILjava/util/function/Supplier;)Ljava/lang/Object;", "([Ljava/lang/Object;Ljava/nio/ByteBuffer;ILjava/util/function/Supplier<Ljava/lang/Object;>;)Ljava/lang/Object;", $PRIVATE | $STATIC, $staticMethod(AnnotationParser, parseArrayElements, $Object*, $ObjectArray*, $ByteBuffer*, int32_t, $Supplier*)},
		{"parseBooleanArray", "(ILjava/nio/ByteBuffer;Ljdk/internal/reflect/ConstantPool;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticMethod(AnnotationParser, parseBooleanArray, $Object*, int32_t, $ByteBuffer*, $ConstantPool*)},
		{"parseByteArray", "(ILjava/nio/ByteBuffer;Ljdk/internal/reflect/ConstantPool;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticMethod(AnnotationParser, parseByteArray, $Object*, int32_t, $ByteBuffer*, $ConstantPool*)},
		{"parseCharArray", "(ILjava/nio/ByteBuffer;Ljdk/internal/reflect/ConstantPool;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticMethod(AnnotationParser, parseCharArray, $Object*, int32_t, $ByteBuffer*, $ConstantPool*)},
		{"parseClassArray", "(ILjava/nio/ByteBuffer;Ljdk/internal/reflect/ConstantPool;Ljava/lang/Class;)Ljava/lang/Object;", "(ILjava/nio/ByteBuffer;Ljdk/internal/reflect/ConstantPool;Ljava/lang/Class<*>;)Ljava/lang/Object;", $PRIVATE | $STATIC, $staticMethod(AnnotationParser, parseClassArray, $Object*, int32_t, $ByteBuffer*, $ConstantPool*, $Class*)},
		{"parseClassValue", "(Ljava/nio/ByteBuffer;Ljdk/internal/reflect/ConstantPool;Ljava/lang/Class;)Ljava/lang/Object;", "(Ljava/nio/ByteBuffer;Ljdk/internal/reflect/ConstantPool;Ljava/lang/Class<*>;)Ljava/lang/Object;", $PRIVATE | $STATIC, $staticMethod(AnnotationParser, parseClassValue, $Object*, $ByteBuffer*, $ConstantPool*, $Class*)},
		{"parseConst", "(ILjava/nio/ByteBuffer;Ljdk/internal/reflect/ConstantPool;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticMethod(AnnotationParser, parseConst, $Object*, int32_t, $ByteBuffer*, $ConstantPool*)},
		{"parseDoubleArray", "(ILjava/nio/ByteBuffer;Ljdk/internal/reflect/ConstantPool;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticMethod(AnnotationParser, parseDoubleArray, $Object*, int32_t, $ByteBuffer*, $ConstantPool*)},
		{"parseEnumArray", "(ILjava/lang/Class;Ljava/nio/ByteBuffer;Ljdk/internal/reflect/ConstantPool;Ljava/lang/Class;)Ljava/lang/Object;", "(ILjava/lang/Class<+Ljava/lang/Enum<*>;>;Ljava/nio/ByteBuffer;Ljdk/internal/reflect/ConstantPool;Ljava/lang/Class<*>;)Ljava/lang/Object;", $PRIVATE | $STATIC, $staticMethod(AnnotationParser, parseEnumArray, $Object*, int32_t, $Class*, $ByteBuffer*, $ConstantPool*, $Class*)},
		{"parseEnumValue", "(Ljava/lang/Class;Ljava/nio/ByteBuffer;Ljdk/internal/reflect/ConstantPool;Ljava/lang/Class;)Ljava/lang/Object;", "(Ljava/lang/Class<+Ljava/lang/Enum;>;Ljava/nio/ByteBuffer;Ljdk/internal/reflect/ConstantPool;Ljava/lang/Class<*>;)Ljava/lang/Object;", $PRIVATE | $STATIC, $staticMethod(AnnotationParser, parseEnumValue, $Object*, $Class*, $ByteBuffer*, $ConstantPool*, $Class*)},
		{"parseFloatArray", "(ILjava/nio/ByteBuffer;Ljdk/internal/reflect/ConstantPool;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticMethod(AnnotationParser, parseFloatArray, $Object*, int32_t, $ByteBuffer*, $ConstantPool*)},
		{"parseIntArray", "(ILjava/nio/ByteBuffer;Ljdk/internal/reflect/ConstantPool;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticMethod(AnnotationParser, parseIntArray, $Object*, int32_t, $ByteBuffer*, $ConstantPool*)},
		{"parseLongArray", "(ILjava/nio/ByteBuffer;Ljdk/internal/reflect/ConstantPool;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticMethod(AnnotationParser, parseLongArray, $Object*, int32_t, $ByteBuffer*, $ConstantPool*)},
		{"parseMemberValue", "(Ljava/lang/Class;Ljava/nio/ByteBuffer;Ljdk/internal/reflect/ConstantPool;Ljava/lang/Class;)Ljava/lang/Object;", "(Ljava/lang/Class<*>;Ljava/nio/ByteBuffer;Ljdk/internal/reflect/ConstantPool;Ljava/lang/Class<*>;)Ljava/lang/Object;", $PUBLIC | $STATIC, $staticMethod(AnnotationParser, parseMemberValue, $Object*, $Class*, $ByteBuffer*, $ConstantPool*, $Class*)},
		{"parseParameterAnnotations", "([BLjdk/internal/reflect/ConstantPool;Ljava/lang/Class;)[[Ljava/lang/annotation/Annotation;", "([BLjdk/internal/reflect/ConstantPool;Ljava/lang/Class<*>;)[[Ljava/lang/annotation/Annotation;", $PUBLIC | $STATIC, $staticMethod(AnnotationParser, parseParameterAnnotations, $AnnotationArray2*, $bytes*, $ConstantPool*, $Class*)},
		{"parseParameterAnnotations2", "([BLjdk/internal/reflect/ConstantPool;Ljava/lang/Class;)[[Ljava/lang/annotation/Annotation;", "([BLjdk/internal/reflect/ConstantPool;Ljava/lang/Class<*>;)[[Ljava/lang/annotation/Annotation;", $PRIVATE | $STATIC, $staticMethod(AnnotationParser, parseParameterAnnotations2, $AnnotationArray2*, $bytes*, $ConstantPool*, $Class*)},
		{"parseSelectAnnotations", "([BLjdk/internal/reflect/ConstantPool;Ljava/lang/Class;[Ljava/lang/Class;)Ljava/util/Map;", "([BLjdk/internal/reflect/ConstantPool;Ljava/lang/Class<*>;[Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;)Ljava/util/Map<Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;Ljava/lang/annotation/Annotation;>;", $STATIC | $TRANSIENT, $staticMethod(AnnotationParser, parseSelectAnnotations, $Map*, $bytes*, $ConstantPool*, $Class*, $ClassArray*), nullptr, nullptr, parseSelectAnnotationsmethodAnnotations$$},
		{"parseShortArray", "(ILjava/nio/ByteBuffer;Ljdk/internal/reflect/ConstantPool;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticMethod(AnnotationParser, parseShortArray, $Object*, int32_t, $ByteBuffer*, $ConstantPool*)},
		{"parseSig", "(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Class;", "(Ljava/lang/String;Ljava/lang/Class<*>;)Ljava/lang/Class<*>;", $PRIVATE | $STATIC, $staticMethod(AnnotationParser, parseSig, $Class*, $String*, $Class*)},
		{"parseStringArray", "(ILjava/nio/ByteBuffer;Ljdk/internal/reflect/ConstantPool;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticMethod(AnnotationParser, parseStringArray, $Object*, int32_t, $ByteBuffer*, $ConstantPool*)},
		{"parseUnknownArray", "(ILjava/nio/ByteBuffer;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticMethod(AnnotationParser, parseUnknownArray, $Object*, int32_t, $ByteBuffer*)},
		{"skipAnnotation", "(Ljava/nio/ByteBuffer;Z)V", nullptr, $PRIVATE | $STATIC, $staticMethod(AnnotationParser, skipAnnotation, void, $ByteBuffer*, bool)},
		{"skipArray", "(Ljava/nio/ByteBuffer;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(AnnotationParser, skipArray, void, $ByteBuffer*)},
		{"skipMemberValue", "(Ljava/nio/ByteBuffer;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(AnnotationParser, skipMemberValue, void, $ByteBuffer*)},
		{"skipMemberValue", "(ILjava/nio/ByteBuffer;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(AnnotationParser, skipMemberValue, void, int32_t, $ByteBuffer*)},
		{"toArray", "(Ljava/util/Map;)[Ljava/lang/annotation/Annotation;", "(Ljava/util/Map<Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;Ljava/lang/annotation/Annotation;>;)[Ljava/lang/annotation/Annotation;", $PUBLIC | $STATIC, $staticMethod(AnnotationParser, toArray, $AnnotationArray*, $Map*)},
		{"toClass", "(Ljava/lang/reflect/Type;)Ljava/lang/Class;", "(Ljava/lang/reflect/Type;)Ljava/lang/Class<*>;", $STATIC, $staticMethod(AnnotationParser, toClass, $Class*, $Type*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.reflect.annotation.AnnotationParser$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.reflect.annotation.AnnotationParser",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.reflect.annotation.AnnotationParser$1"
	};
	$loadClass(AnnotationParser, name, initialize, &classInfo$$, AnnotationParser::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AnnotationParser);
	});
	return class$;
}

$Class* AnnotationParser::class$ = nullptr;

		} // annotation
	} // reflect
} // sun