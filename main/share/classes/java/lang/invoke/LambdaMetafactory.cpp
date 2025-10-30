#include <java/lang/invoke/LambdaMetafactory.h>

#include <java/io/Serializable.h>
#include <java/lang/invoke/AbstractValidatingLambdaMetafactory.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/InnerClassLambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/TypeDescriptor$OfField.h>
#include <java/lang/reflect/Array.h>
#include <java/util/Arrays.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef EMPTY_CLASS_ARRAY
#undef EMPTY_MT_ARRAY
#undef FLAG_BRIDGES
#undef FLAG_MARKERS
#undef FLAG_SERIALIZABLE

using $MethodTypeArray = $Array<::java::lang::invoke::MethodType>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractValidatingLambdaMetafactory = ::java::lang::invoke::AbstractValidatingLambdaMetafactory;
using $CallSite = ::java::lang::invoke::CallSite;
using $InnerClassLambdaMetafactory = ::java::lang::invoke::InnerClassLambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $1Array = ::java::lang::reflect::Array;
using $Arrays = ::java::util::Arrays;
using $Objects = ::java::util::Objects;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _LambdaMetafactory_FieldInfo_[] = {
	{"FLAG_SERIALIZABLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LambdaMetafactory, FLAG_SERIALIZABLE)},
	{"FLAG_MARKERS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LambdaMetafactory, FLAG_MARKERS)},
	{"FLAG_BRIDGES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LambdaMetafactory, FLAG_BRIDGES)},
	{"EMPTY_CLASS_ARRAY", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(LambdaMetafactory, EMPTY_CLASS_ARRAY)},
	{"EMPTY_MT_ARRAY", "[Ljava/lang/invoke/MethodType;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LambdaMetafactory, EMPTY_MT_ARRAY)},
	{}
};

$MethodInfo _LambdaMetafactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(LambdaMetafactory::*)()>(&LambdaMetafactory::init$))},
	{"altMetafactory", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$CallSite*(*)($MethodHandles$Lookup*,$String*,$MethodType*,$ObjectArray*)>(&LambdaMetafactory::altMetafactory)), "java.lang.invoke.LambdaConversionException"},
	{"extractArg", "([Ljava/lang/Object;ILjava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>([Ljava/lang/Object;ILjava/lang/Class<TT;>;)TT;", $PRIVATE | $STATIC, $method(static_cast<$Object*(*)($ObjectArray*,int32_t,$Class*)>(&LambdaMetafactory::extractArg))},
	{"extractArgs", "([Ljava/lang/Object;ILjava/lang/Class;I)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([Ljava/lang/Object;ILjava/lang/Class<TT;>;I)[TT;", $PRIVATE | $STATIC, $method(static_cast<$ObjectArray*(*)($ObjectArray*,int32_t,$Class*,int32_t)>(&LambdaMetafactory::extractArgs))},
	{"metafactory", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$CallSite*(*)($MethodHandles$Lookup*,$String*,$MethodType*,$MethodType*,$MethodHandle*,$MethodType*)>(&LambdaMetafactory::metafactory)), "java.lang.invoke.LambdaConversionException"},
	{}
};

$ClassInfo _LambdaMetafactory_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.lang.invoke.LambdaMetafactory",
	"java.lang.Object",
	nullptr,
	_LambdaMetafactory_FieldInfo_,
	_LambdaMetafactory_MethodInfo_
};

$Object* allocate$LambdaMetafactory($Class* clazz) {
	return $of($alloc(LambdaMetafactory));
}

$ClassArray* LambdaMetafactory::EMPTY_CLASS_ARRAY = nullptr;
$MethodTypeArray* LambdaMetafactory::EMPTY_MT_ARRAY = nullptr;

void LambdaMetafactory::init$() {
}

$CallSite* LambdaMetafactory::metafactory($MethodHandles$Lookup* caller, $String* interfaceMethodName, $MethodType* factoryType, $MethodType* interfaceMethodType, $MethodHandle* implementation, $MethodType* dynamicMethodType) {
	$init(LambdaMetafactory);
	$useLocalCurrentObjectStackCache();
	$var($AbstractValidatingLambdaMetafactory, mf, nullptr);
	$var($MethodHandles$Lookup, var$0, $cast($MethodHandles$Lookup, $Objects::requireNonNull(caller)));
	$var($MethodType, var$1, $cast($MethodType, $Objects::requireNonNull(factoryType)));
	$var($String, var$2, $cast($String, $Objects::requireNonNull(interfaceMethodName)));
	$var($MethodType, var$3, $cast($MethodType, $Objects::requireNonNull(interfaceMethodType)));
	$var($MethodHandle, var$4, $cast($MethodHandle, $Objects::requireNonNull(implementation)));
	$assign(mf, $new($InnerClassLambdaMetafactory, var$0, var$1, var$2, var$3, var$4, $cast($MethodType, $Objects::requireNonNull(dynamicMethodType)), false, LambdaMetafactory::EMPTY_CLASS_ARRAY, LambdaMetafactory::EMPTY_MT_ARRAY));
	mf->validateMetafactoryArgs();
	return mf->buildCallSite();
}

$CallSite* LambdaMetafactory::altMetafactory($MethodHandles$Lookup* caller, $String* interfaceMethodName, $MethodType* factoryType, $ObjectArray* args) {
	$init(LambdaMetafactory);
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(caller);
	$Objects::requireNonNull(interfaceMethodName);
	$Objects::requireNonNull(factoryType);
	$Objects::requireNonNull(args);
	int32_t argIndex = 0;
	$load($MethodType);
	$var($MethodType, interfaceMethodType, $cast($MethodType, extractArg(args, argIndex++, $MethodType::class$)));
	$load($MethodHandle);
	$var($MethodHandle, implementation, $cast($MethodHandle, extractArg(args, argIndex++, $MethodHandle::class$)));
	$var($MethodType, dynamicMethodType, $cast($MethodType, extractArg(args, argIndex++, $MethodType::class$)));
	$load($Integer);
	int32_t flags = $nc(($cast($Integer, $(extractArg(args, argIndex++, $Integer::class$)))))->intValue();
	$var($ClassArray, altInterfaces, LambdaMetafactory::EMPTY_CLASS_ARRAY);
	$var($MethodTypeArray, altMethods, LambdaMetafactory::EMPTY_MT_ARRAY);
	if (((int32_t)(flags & (uint32_t)LambdaMetafactory::FLAG_MARKERS)) != 0) {
		int32_t altInterfaceCount = $nc(($cast($Integer, $(extractArg(args, argIndex++, $Integer::class$)))))->intValue();
		if (altInterfaceCount < 0) {
			$throwNew($IllegalArgumentException, "negative argument count"_s);
		}
		if (altInterfaceCount > 0) {
			$assign(altInterfaces, $fcast($ClassArray, extractArgs(args, argIndex, $Class::class$, altInterfaceCount)));
			argIndex += altInterfaceCount;
		}
	}
	if (((int32_t)(flags & (uint32_t)LambdaMetafactory::FLAG_BRIDGES)) != 0) {
		int32_t altMethodCount = $nc(($cast($Integer, $(extractArg(args, argIndex++, $Integer::class$)))))->intValue();
		if (altMethodCount < 0) {
			$throwNew($IllegalArgumentException, "negative argument count"_s);
		}
		if (altMethodCount > 0) {
			$assign(altMethods, $fcast($MethodTypeArray, extractArgs(args, argIndex, $MethodType::class$, altMethodCount)));
			argIndex += altMethodCount;
		}
	}
	if (argIndex < args->length) {
		$throwNew($IllegalArgumentException, "too many arguments"_s);
	}
	bool isSerializable = (((int32_t)(flags & (uint32_t)LambdaMetafactory::FLAG_SERIALIZABLE)) != 0);
	if (isSerializable) {
		$load($Serializable);
		bool foundSerializableSupertype = $Serializable::class$->isAssignableFrom($($cast($Class, factoryType->returnType())));
		{
			$var($ClassArray, arr$, altInterfaces);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$Class* c = arr$->get(i$);
				foundSerializableSupertype |= $Serializable::class$->isAssignableFrom(c);
			}
		}
		if (!foundSerializableSupertype) {
			$assign(altInterfaces, $fcast($ClassArray, $Arrays::copyOf(altInterfaces, $nc(altInterfaces)->length + 1)));
			altInterfaces->set(altInterfaces->length - 1, $Serializable::class$);
		}
	}
	$var($AbstractValidatingLambdaMetafactory, mf, $new($InnerClassLambdaMetafactory, caller, factoryType, interfaceMethodName, interfaceMethodType, implementation, dynamicMethodType, isSerializable, altInterfaces, altMethods));
	mf->validateMetafactoryArgs();
	return mf->buildCallSite();
}

$Object* LambdaMetafactory::extractArg($ObjectArray* args, int32_t index, $Class* type) {
	$init(LambdaMetafactory);
	if (index >= $nc(args)->length) {
		$throwNew($IllegalArgumentException, "missing argument"_s);
	}
	$var($Object, result, $Objects::requireNonNull($nc(args)->get(index)));
	if (!$nc(type)->isInstance(result)) {
		$throwNew($IllegalArgumentException, "argument has wrong type"_s);
	}
	return $of($nc(type)->cast(result));
}

$ObjectArray* LambdaMetafactory::extractArgs($ObjectArray* args, int32_t index, $Class* type, int32_t count) {
	$init(LambdaMetafactory);
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, result, $cast($ObjectArray, $1Array::newInstance(type, count)));
	for (int32_t i = 0; i < count; ++i) {
		result->set(i, $(extractArg(args, index + i, type)));
	}
	return result;
}

void clinit$LambdaMetafactory($Class* class$) {
	$assignStatic(LambdaMetafactory::EMPTY_CLASS_ARRAY, $new($ClassArray, 0));
	$assignStatic(LambdaMetafactory::EMPTY_MT_ARRAY, $new($MethodTypeArray, 0));
}

LambdaMetafactory::LambdaMetafactory() {
}

$Class* LambdaMetafactory::load$($String* name, bool initialize) {
	$loadClass(LambdaMetafactory, name, initialize, &_LambdaMetafactory_ClassInfo_, clinit$LambdaMetafactory, allocate$LambdaMetafactory);
	return class$;
}

$Class* LambdaMetafactory::class$ = nullptr;

		} // invoke
	} // lang
} // java