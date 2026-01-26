#include <java/lang/invoke/GenerateJLIClassesHelper$HolderClassBuilder.h>

#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/GenerateJLIClassesHelper.h>
#include <java/lang/invoke/LambdaForm$BasicType.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/TypeDescriptor$OfField.h>
#include <java/lang/invoke/TypeDescriptor$OfMethod.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/TreeMap.h>
#include <java/util/TreeSet.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

#undef DMH_METHOD_TYPE_MAP

using $MethodTypeArray = $Array<::java::lang::invoke::MethodType>;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $GenerateJLIClassesHelper = ::java::lang::invoke::GenerateJLIClassesHelper;
using $LambdaForm$BasicType = ::java::lang::invoke::LambdaForm$BasicType;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $TreeMap = ::java::util::TreeMap;
using $TreeSet = ::java::util::TreeSet;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace lang {
		namespace invoke {

class GenerateJLIClassesHelper$HolderClassBuilder$$Lambda$lambda$build$0 : public $Consumer {
	$class(GenerateJLIClassesHelper$HolderClassBuilder$$Lambda$lambda$build$0, $NO_CLASS_INIT, $Consumer)
public:
	void init$($Map* result) {
		$set(this, result, result);
	}
	virtual void accept(Object$* types) override {
		GenerateJLIClassesHelper$HolderClassBuilder::lambda$build$0(result, $cast($String, types));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<GenerateJLIClassesHelper$HolderClassBuilder$$Lambda$lambda$build$0>());
	}
	$Map* result = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo GenerateJLIClassesHelper$HolderClassBuilder$$Lambda$lambda$build$0::fieldInfos[2] = {
	{"result", "Ljava/util/Map;", nullptr, $PUBLIC, $field(GenerateJLIClassesHelper$HolderClassBuilder$$Lambda$lambda$build$0, result)},
	{}
};
$MethodInfo GenerateJLIClassesHelper$HolderClassBuilder$$Lambda$lambda$build$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/Map;)V", nullptr, $PUBLIC, $method(GenerateJLIClassesHelper$HolderClassBuilder$$Lambda$lambda$build$0, init$, void, $Map*)},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(GenerateJLIClassesHelper$HolderClassBuilder$$Lambda$lambda$build$0, accept, void, Object$*)},
	{}
};
$ClassInfo GenerateJLIClassesHelper$HolderClassBuilder$$Lambda$lambda$build$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.invoke.GenerateJLIClassesHelper$HolderClassBuilder$$Lambda$lambda$build$0",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* GenerateJLIClassesHelper$HolderClassBuilder$$Lambda$lambda$build$0::load$($String* name, bool initialize) {
	$loadClass(GenerateJLIClassesHelper$HolderClassBuilder$$Lambda$lambda$build$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* GenerateJLIClassesHelper$HolderClassBuilder$$Lambda$lambda$build$0::class$ = nullptr;

$FieldInfo _GenerateJLIClassesHelper$HolderClassBuilder_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(GenerateJLIClassesHelper$HolderClassBuilder, $assertionsDisabled)},
	{"speciesTypes", "Ljava/util/TreeSet;", "Ljava/util/TreeSet<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(GenerateJLIClassesHelper$HolderClassBuilder, speciesTypes)},
	{"invokerTypes", "Ljava/util/TreeSet;", "Ljava/util/TreeSet<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(GenerateJLIClassesHelper$HolderClassBuilder, invokerTypes)},
	{"callSiteTypes", "Ljava/util/TreeSet;", "Ljava/util/TreeSet<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(GenerateJLIClassesHelper$HolderClassBuilder, callSiteTypes)},
	{"dmhMethods", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;", $PRIVATE | $FINAL, $field(GenerateJLIClassesHelper$HolderClassBuilder, dmhMethods)},
	{}
};

$MethodInfo _GenerateJLIClassesHelper$HolderClassBuilder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(GenerateJLIClassesHelper$HolderClassBuilder, init$, void)},
	{"addCallSiteType", "(Ljava/lang/String;)Ljava/lang/invoke/GenerateJLIClassesHelper$HolderClassBuilder;", nullptr, 0, $virtualMethod(GenerateJLIClassesHelper$HolderClassBuilder, addCallSiteType, GenerateJLIClassesHelper$HolderClassBuilder*, $String*)},
	{"addDMHMethodType", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(GenerateJLIClassesHelper$HolderClassBuilder, addDMHMethodType, void, $String*, $String*)},
	{"addInvokerType", "(Ljava/lang/String;)Ljava/lang/invoke/GenerateJLIClassesHelper$HolderClassBuilder;", nullptr, 0, $virtualMethod(GenerateJLIClassesHelper$HolderClassBuilder, addInvokerType, GenerateJLIClassesHelper$HolderClassBuilder*, $String*)},
	{"addSpeciesType", "(Ljava/lang/String;)Ljava/lang/invoke/GenerateJLIClassesHelper$HolderClassBuilder;", nullptr, 0, $virtualMethod(GenerateJLIClassesHelper$HolderClassBuilder, addSpeciesType, GenerateJLIClassesHelper$HolderClassBuilder*, $String*)},
	{"asMethodType", "(Ljava/lang/String;)Ljava/lang/invoke/MethodType;", nullptr, $PRIVATE | $STATIC, $staticMethod(GenerateJLIClassesHelper$HolderClassBuilder, asMethodType, $MethodType*, $String*)},
	{"build", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;[B>;", 0, $virtualMethod(GenerateJLIClassesHelper$HolderClassBuilder, build, $Map*)},
	{"expandSignature", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(GenerateJLIClassesHelper$HolderClassBuilder, expandSignature, $String*, $String*)},
	{"lambda$build$0", "(Ljava/util/Map;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(GenerateJLIClassesHelper$HolderClassBuilder, lambda$build$0, void, $Map*, $String*)},
	{"requireBasicType", "(C)V", nullptr, $PRIVATE | $STATIC, $staticMethod(GenerateJLIClassesHelper$HolderClassBuilder, requireBasicType, void, char16_t)},
	{"simpleType", "(C)Ljava/lang/Class;", "(C)Ljava/lang/Class<*>;", $PRIVATE | $STATIC, $staticMethod(GenerateJLIClassesHelper$HolderClassBuilder, simpleType, $Class*, char16_t)},
	{"validateMethodType", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(GenerateJLIClassesHelper$HolderClassBuilder, validateMethodType, void, $String*)},
	{}
};

$InnerClassInfo _GenerateJLIClassesHelper$HolderClassBuilder_InnerClassesInfo_[] = {
	{"java.lang.invoke.GenerateJLIClassesHelper$HolderClassBuilder", "java.lang.invoke.GenerateJLIClassesHelper", "HolderClassBuilder", $STATIC},
	{}
};

$ClassInfo _GenerateJLIClassesHelper$HolderClassBuilder_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.GenerateJLIClassesHelper$HolderClassBuilder",
	"java.lang.Object",
	nullptr,
	_GenerateJLIClassesHelper$HolderClassBuilder_FieldInfo_,
	_GenerateJLIClassesHelper$HolderClassBuilder_MethodInfo_,
	nullptr,
	nullptr,
	_GenerateJLIClassesHelper$HolderClassBuilder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.GenerateJLIClassesHelper"
};

$Object* allocate$GenerateJLIClassesHelper$HolderClassBuilder($Class* clazz) {
	return $of($alloc(GenerateJLIClassesHelper$HolderClassBuilder));
}

bool GenerateJLIClassesHelper$HolderClassBuilder::$assertionsDisabled = false;

void GenerateJLIClassesHelper$HolderClassBuilder::init$() {
	$set(this, speciesTypes, $new($TreeSet));
	$set(this, invokerTypes, $new($TreeSet));
	$set(this, callSiteTypes, $new($TreeSet));
	$set(this, dmhMethods, static_cast<$Map*>(static_cast<$AbstractMap*>($new($TreeMap))));
}

GenerateJLIClassesHelper$HolderClassBuilder* GenerateJLIClassesHelper$HolderClassBuilder::addSpeciesType($String* type) {
	$nc(this->speciesTypes)->add($(expandSignature(type)));
	return this;
}

GenerateJLIClassesHelper$HolderClassBuilder* GenerateJLIClassesHelper$HolderClassBuilder::addInvokerType($String* methodType) {
	validateMethodType(methodType);
	$nc(this->invokerTypes)->add(methodType);
	return this;
}

GenerateJLIClassesHelper$HolderClassBuilder* GenerateJLIClassesHelper$HolderClassBuilder::addCallSiteType($String* csType) {
	validateMethodType(csType);
	$nc(this->callSiteTypes)->add(csType);
	return this;
}

$Map* GenerateJLIClassesHelper$HolderClassBuilder::build() {
	$useLocalCurrentObjectStackCache();
	int32_t count = 0;
	{
		$var($Iterator, i$, $nc($($nc(this->dmhMethods)->values()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Set, entry, $cast($Set, i$->next()));
			{
				count += $nc(entry)->size();
			}
		}
	}
	$var($MethodTypeArray, directMethodTypes, $new($MethodTypeArray, count));
	$var($ints, dmhTypes, $new($ints, count));
	int32_t index = 0;
	{
		$var($Iterator, i$, $nc($($nc(this->dmhMethods)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				$var($String, dmhType, $cast($String, $nc(entry)->getKey()));
				{
					$var($Iterator, i$, $nc(($cast($Set, $(entry->getValue()))))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($String, type, $cast($String, i$->next()));
						{
							$var($MethodType, mt, asMethodType(type));
							bool var$0 = $nc(mt)->parameterCount() < 1;
							if (var$0 || $cast($Class, $nc(mt)->parameterType(0)) != $Object::class$) {
								$throwNew($RuntimeException, $$str({"DMH type parameter must start with L: "_s, dmhType, " "_s, type}));
							}
							directMethodTypes->set(index, $($cast($MethodType, $nc(mt)->dropParameterTypes(0, 1))));
							$init($GenerateJLIClassesHelper);
							dmhTypes->set(index, $nc(($cast($Integer, $($nc($GenerateJLIClassesHelper::DMH_METHOD_TYPE_MAP)->get(dmhType)))))->intValue());
							if (dmhTypes->get(index) == 4 || dmhTypes->get(index) == 0) {
								bool var$1 = mt->parameterCount() < 2;
								if (var$1 || $cast($Class, mt->parameterType(1)) != $Object::class$) {
									$throwNew($RuntimeException, $$str({"DMH type parameter must start with LL: "_s, dmhType, " "_s, type}));
								}
							}
							++index;
						}
					}
				}
			}
		}
	}
	$var($MethodTypeArray, invokerMethodTypes, $new($MethodTypeArray, $nc(this->invokerTypes)->size()));
	index = 0;
	{
		$var($Iterator, i$, $nc(this->invokerTypes)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, invokerType, $cast($String, i$->next()));
			{
				$var($MethodType, mt, asMethodType(invokerType));
				int32_t lastParam = $nc(mt)->parameterCount() - 1;
				bool var$3 = mt->parameterCount() < 2;
				bool var$2 = var$3 || $cast($Class, mt->parameterType(0)) != $Object::class$;
				if (var$2 || $cast($Class, mt->parameterType(lastParam)) != $Object::class$) {
					$throwNew($RuntimeException, $$str({"Invoker type parameter must start and end with Object: "_s, invokerType}));
				}
				$assign(mt, $cast($MethodType, mt->dropParameterTypes(lastParam, lastParam + 1)));
				invokerMethodTypes->set(index, $($cast($MethodType, mt->dropParameterTypes(0, 1))));
				++index;
			}
		}
	}
	$var($MethodTypeArray, callSiteMethodTypes, $new($MethodTypeArray, $nc(this->callSiteTypes)->size()));
	index = 0;
	{
		$var($Iterator, i$, $nc(this->callSiteTypes)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, callSiteType, $cast($String, i$->next()));
			{
				$var($MethodType, mt, asMethodType(callSiteType));
				int32_t lastParam = $nc(mt)->parameterCount() - 1;
				bool var$4 = mt->parameterCount() < 1;
				if (var$4 || $cast($Class, mt->parameterType(lastParam)) != $Object::class$) {
					$throwNew($RuntimeException, $$str({"CallSite type parameter must end with Object: "_s, callSiteType}));
				}
				callSiteMethodTypes->set(index, $($cast($MethodType, mt->dropParameterTypes(lastParam, lastParam + 1))));
				++index;
			}
		}
	}
	$var($Map, result, static_cast<$Map*>(static_cast<$AbstractMap*>($new($TreeMap))));
	result->put("java/lang/invoke/DirectMethodHandle$Holder"_s, $($GenerateJLIClassesHelper::generateDirectMethodHandleHolderClassBytes("java/lang/invoke/DirectMethodHandle$Holder"_s, directMethodTypes, dmhTypes)));
	result->put("java/lang/invoke/DelegatingMethodHandle$Holder"_s, $($GenerateJLIClassesHelper::generateDelegatingMethodHandleHolderClassBytes("java/lang/invoke/DelegatingMethodHandle$Holder"_s, directMethodTypes)));
	result->put("java/lang/invoke/Invokers$Holder"_s, $($GenerateJLIClassesHelper::generateInvokersHolderClassBytes("java/lang/invoke/Invokers$Holder"_s, invokerMethodTypes, callSiteMethodTypes)));
	result->put("java/lang/invoke/LambdaForm$Holder"_s, $($GenerateJLIClassesHelper::generateBasicFormsClassBytes("java/lang/invoke/LambdaForm$Holder"_s)));
	$nc(this->speciesTypes)->forEach(static_cast<$Consumer*>($$new(GenerateJLIClassesHelper$HolderClassBuilder$$Lambda$lambda$build$0, result)));
	$nc(this->speciesTypes)->clear();
	$nc(this->invokerTypes)->clear();
	$nc(this->callSiteTypes)->clear();
	$nc(this->dmhMethods)->clear();
	return result;
}

$MethodType* GenerateJLIClassesHelper$HolderClassBuilder::asMethodType($String* basicSignatureString) {
	$init(GenerateJLIClassesHelper$HolderClassBuilder);
	$useLocalCurrentObjectStackCache();
	$var($StringArray, parts, $nc(basicSignatureString)->split("_"_s));
	if (!GenerateJLIClassesHelper$HolderClassBuilder::$assertionsDisabled && !(parts->length == 2)) {
		$throwNew($AssertionError);
	}
	if (!GenerateJLIClassesHelper$HolderClassBuilder::$assertionsDisabled && !($nc(parts->get(1))->length() == 1)) {
		$throwNew($AssertionError);
	}
	$var($String, parameters, expandSignature(parts->get(0)));
	$Class* rtype = simpleType($nc(parts->get(1))->charAt(0));
	if ($nc(parameters)->isEmpty()) {
		return $MethodType::methodType(rtype);
	} else {
		$var($ClassArray, ptypes, $new($ClassArray, parameters->length()));
		for (int32_t i = 0; i < ptypes->length; ++i) {
			ptypes->set(i, simpleType(parameters->charAt(i)));
		}
		return $MethodType::methodType(rtype, ptypes);
	}
}

void GenerateJLIClassesHelper$HolderClassBuilder::addDMHMethodType($String* dmh, $String* methodType) {
	validateMethodType(methodType);
	$var($Set, methodTypes, $cast($Set, $nc(this->dmhMethods)->get(dmh)));
	if (methodTypes == nullptr) {
		$assign(methodTypes, static_cast<$Set*>(static_cast<$AbstractSet*>($new($TreeSet))));
		$nc(this->dmhMethods)->put(dmh, methodTypes);
	}
	$nc(methodTypes)->add(methodType);
}

void GenerateJLIClassesHelper$HolderClassBuilder::validateMethodType($String* type) {
	$init(GenerateJLIClassesHelper$HolderClassBuilder);
	$var($StringArray, typeParts, $nc(type)->split("_"_s));
	bool var$0 = typeParts->length != 2 || $nc(typeParts->get(1))->length() != 1;
	if (var$0 || !$LambdaForm$BasicType::isBasicTypeChar($nc(typeParts->get(1))->charAt(0))) {
		$throwNew($RuntimeException, "Method type signature must be of form [LJIFD]*_[LJIFDV]"_s);
	}
	expandSignature(typeParts->get(0));
}

$String* GenerateJLIClassesHelper$HolderClassBuilder::expandSignature($String* signature) {
	$init(GenerateJLIClassesHelper$HolderClassBuilder);
	$var($StringBuilder, sb, $new($StringBuilder));
	char16_t last = u'X';
	int32_t count = 0;
	for (int32_t i = 0; i < $nc(signature)->length(); ++i) {
		char16_t c = signature->charAt(i);
		if (c >= u'0' && c <= u'9') {
			count *= 10;
			count += (c - u'0');
		} else {
			requireBasicType(c);
			for (int32_t j = 1; j < count; ++j) {
				sb->append(last);
			}
			sb->append(c);
			last = c;
			count = 0;
		}
	}
	if (count > 1) {
		requireBasicType(last);
		for (int32_t j = 1; j < count; ++j) {
			sb->append(last);
		}
	}
	return sb->toString();
}

void GenerateJLIClassesHelper$HolderClassBuilder::requireBasicType(char16_t c) {
	$init(GenerateJLIClassesHelper$HolderClassBuilder);
	$useLocalCurrentObjectStackCache();
	if (!$LambdaForm$BasicType::isArgBasicTypeChar(c)) {
		$throwNew($RuntimeException, $$str({"Character "_s, $$str(c), " must correspond to a basic field type: LIJFD"_s}));
	}
}

$Class* GenerateJLIClassesHelper$HolderClassBuilder::simpleType(char16_t c) {
	$init(GenerateJLIClassesHelper$HolderClassBuilder);
	$useLocalCurrentObjectStackCache();
	if ($LambdaForm$BasicType::isBasicTypeChar(c)) {
		return $nc($($LambdaForm$BasicType::basicType(c)))->basicTypeClass();
	}
	switch (c) {
	case u'Z':
		{}
	case u'B':
		{}
	case u'S':
		{}
	case u'C':
		{
			$throwNew($IllegalArgumentException, $$str({"Not a valid primitive: "_s, $$str(c), " (use I instead)"_s}));
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"Not a primitive: "_s, $$str(c)}));
		}
	}
}

void GenerateJLIClassesHelper$HolderClassBuilder::lambda$build$0($Map* result, $String* types) {
	$init(GenerateJLIClassesHelper$HolderClassBuilder);
	$useLocalCurrentObjectStackCache();
	$var($Map$Entry, entry, $GenerateJLIClassesHelper::generateConcreteBMHClassBytes(types));
	$var($Object, var$0, $cast($String, $nc(entry)->getKey()));
	$nc(result)->put(var$0, $cast($bytes, $(entry->getValue())));
}

void clinit$GenerateJLIClassesHelper$HolderClassBuilder($Class* class$) {
	$load($GenerateJLIClassesHelper);
	GenerateJLIClassesHelper$HolderClassBuilder::$assertionsDisabled = !$GenerateJLIClassesHelper::class$->desiredAssertionStatus();
}

GenerateJLIClassesHelper$HolderClassBuilder::GenerateJLIClassesHelper$HolderClassBuilder() {
}

$Class* GenerateJLIClassesHelper$HolderClassBuilder::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(GenerateJLIClassesHelper$HolderClassBuilder$$Lambda$lambda$build$0::classInfo$.name)) {
			return GenerateJLIClassesHelper$HolderClassBuilder$$Lambda$lambda$build$0::load$(name, initialize);
		}
	}
	$loadClass(GenerateJLIClassesHelper$HolderClassBuilder, name, initialize, &_GenerateJLIClassesHelper$HolderClassBuilder_ClassInfo_, clinit$GenerateJLIClassesHelper$HolderClassBuilder, allocate$GenerateJLIClassesHelper$HolderClassBuilder);
	return class$;
}

$Class* GenerateJLIClassesHelper$HolderClassBuilder::class$ = nullptr;

		} // invoke
	} // lang
} // java