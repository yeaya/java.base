#include <MetafactoryDescriptorTest$ConversionTable.h>
#include <MetafactoryDescriptorTest.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;
using $Function = ::java::util::function::Function;

class MetafactoryDescriptorTest$ConversionTable$$Lambda$lambda$put$0 : public $Function {
	$class(MetafactoryDescriptorTest$ConversionTable$$Lambda$lambda$put$0, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* f) override {
		 return MetafactoryDescriptorTest$ConversionTable::lambda$put$0($cast($Class, f));
	}
};
$Class* MetafactoryDescriptorTest$ConversionTable$$Lambda$lambda$put$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetafactoryDescriptorTest$ConversionTable$$Lambda$lambda$put$0, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetafactoryDescriptorTest$ConversionTable$$Lambda$lambda$put$0, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"MetafactoryDescriptorTest$ConversionTable$$Lambda$lambda$put$0",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(MetafactoryDescriptorTest$ConversionTable$$Lambda$lambda$put$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetafactoryDescriptorTest$ConversionTable$$Lambda$lambda$put$0);
	});
	return class$;
}
$Class* MetafactoryDescriptorTest$ConversionTable$$Lambda$lambda$put$0::class$ = nullptr;

void MetafactoryDescriptorTest$ConversionTable::init$() {
	$set(this, pairs, $new($HashMap));
}

void MetafactoryDescriptorTest$ConversionTable::put($Class* from, $Class* to) {
	$useLocalObjectStack();
	$var($Set, set, $cast($Set, this->pairs->computeIfAbsent(from, $$new(MetafactoryDescriptorTest$ConversionTable$$Lambda$lambda$put$0))));
	$nc(set)->add(to);
}

bool MetafactoryDescriptorTest$ConversionTable::contains($Class* from, $Class* to) {
	bool var$0 = this->pairs->containsKey(from);
	return var$0 && $$sure($Set, this->pairs->get(from))->contains(to);
}

$Set* MetafactoryDescriptorTest$ConversionTable::lambda$put$0($Class* f) {
	return $new($HashSet);
}

MetafactoryDescriptorTest$ConversionTable::MetafactoryDescriptorTest$ConversionTable() {
}

$Class* MetafactoryDescriptorTest$ConversionTable::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("MetafactoryDescriptorTest$ConversionTable$$Lambda$lambda$put$0")) {
			return MetafactoryDescriptorTest$ConversionTable$$Lambda$lambda$put$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"pairs", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Class<*>;Ljava/util/Set<Ljava/lang/Class<*>;>;>;", $PRIVATE | $FINAL, $field(MetafactoryDescriptorTest$ConversionTable, pairs)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(MetafactoryDescriptorTest$ConversionTable, init$, void)},
		{"contains", "(Ljava/lang/Class;Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;)Z", $PUBLIC, $virtualMethod(MetafactoryDescriptorTest$ConversionTable, contains, bool, $Class*, $Class*)},
		{"lambda$put$0", "(Ljava/lang/Class;)Ljava/util/Set;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetafactoryDescriptorTest$ConversionTable, lambda$put$0, $Set*, $Class*)},
		{"put", "(Ljava/lang/Class;Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;)V", $PUBLIC, $virtualMethod(MetafactoryDescriptorTest$ConversionTable, put, void, $Class*, $Class*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"MetafactoryDescriptorTest$ConversionTable", "MetafactoryDescriptorTest", "ConversionTable", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"MetafactoryDescriptorTest$ConversionTable",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"MetafactoryDescriptorTest"
	};
	$loadClass(MetafactoryDescriptorTest$ConversionTable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetafactoryDescriptorTest$ConversionTable);
	});
	return class$;
}

$Class* MetafactoryDescriptorTest$ConversionTable::class$ = nullptr;