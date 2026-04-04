#include <java/text/CompactNumberFormat$Patterns.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/text/CompactNumberFormat.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <java/util/function/BiConsumer.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $CompactNumberFormat = ::java::text::CompactNumberFormat;
using $HashMap = ::java::util::HashMap;
using $BiConsumer = ::java::util::function::BiConsumer;

namespace java {
	namespace text {

class CompactNumberFormat$Patterns$$Lambda$lambda$expandAffix$0 : public $BiConsumer {
	$class(CompactNumberFormat$Patterns$$Lambda$lambda$expandAffix$0, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$(CompactNumberFormat$Patterns* inst, CompactNumberFormat$Patterns* ret) {
		$set(this, inst$, inst);
		$set(this, ret, ret);
	}
	virtual void accept(Object$* key, Object$* value) override {
		$nc(inst$)->lambda$expandAffix$0(ret, $cast($String, key), $cast($String, value));
	}
	CompactNumberFormat$Patterns* inst$ = nullptr;
	CompactNumberFormat$Patterns* ret = nullptr;
};
$Class* CompactNumberFormat$Patterns$$Lambda$lambda$expandAffix$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CompactNumberFormat$Patterns$$Lambda$lambda$expandAffix$0, inst$)},
		{"ret", "Ljava/text/CompactNumberFormat$Patterns;", nullptr, $PUBLIC, $field(CompactNumberFormat$Patterns$$Lambda$lambda$expandAffix$0, ret)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/text/CompactNumberFormat$Patterns;Ljava/text/CompactNumberFormat$Patterns;)V", nullptr, $PUBLIC, $method(CompactNumberFormat$Patterns$$Lambda$lambda$expandAffix$0, init$, void, CompactNumberFormat$Patterns*, CompactNumberFormat$Patterns*)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(CompactNumberFormat$Patterns$$Lambda$lambda$expandAffix$0, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.text.CompactNumberFormat$Patterns$$Lambda$lambda$expandAffix$0",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CompactNumberFormat$Patterns$$Lambda$lambda$expandAffix$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CompactNumberFormat$Patterns$$Lambda$lambda$expandAffix$0);
	});
	return class$;
}
$Class* CompactNumberFormat$Patterns$$Lambda$lambda$expandAffix$0::class$ = nullptr;

void CompactNumberFormat$Patterns::init$($CompactNumberFormat* this$0) {
	$set(this, this$0, this$0);
	$set(this, patternsMap, $new($HashMap));
}

void CompactNumberFormat$Patterns::put($String* count, $String* pattern) {
	this->patternsMap->put(count, pattern);
}

$String* CompactNumberFormat$Patterns::get(double num) {
	$useLocalObjectStack();
	$var($Object, var$0, this->this$0->getPluralCategory(num));
	return $cast($String, this->patternsMap->getOrDefault(var$0, $$cast($String, this->patternsMap->getOrDefault("other"_s, ""_s))));
}

CompactNumberFormat$Patterns* CompactNumberFormat$Patterns::expandAffix() {
	$useLocalObjectStack();
	$var(CompactNumberFormat$Patterns, ret, $new(CompactNumberFormat$Patterns, this->this$0));
	this->patternsMap->forEach($$new(CompactNumberFormat$Patterns$$Lambda$lambda$expandAffix$0, this, ret));
	return ret;
}

void CompactNumberFormat$Patterns::lambda$expandAffix$0(CompactNumberFormat$Patterns* ret, $String* key, $String* value) {
	$nc(ret)->put(key, $(this->this$0->expandAffix(value)));
}

CompactNumberFormat$Patterns::CompactNumberFormat$Patterns() {
}

$Class* CompactNumberFormat$Patterns::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.text.CompactNumberFormat$Patterns$$Lambda$lambda$expandAffix$0")) {
			return CompactNumberFormat$Patterns$$Lambda$lambda$expandAffix$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/text/CompactNumberFormat;", nullptr, $FINAL | $SYNTHETIC, $field(CompactNumberFormat$Patterns, this$0)},
		{"patternsMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(CompactNumberFormat$Patterns, patternsMap)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/text/CompactNumberFormat;)V", nullptr, $PRIVATE, $method(CompactNumberFormat$Patterns, init$, void, $CompactNumberFormat*)},
		{"expandAffix", "()Ljava/text/CompactNumberFormat$Patterns;", nullptr, 0, $method(CompactNumberFormat$Patterns, expandAffix, CompactNumberFormat$Patterns*)},
		{"get", "(D)Ljava/lang/String;", nullptr, 0, $method(CompactNumberFormat$Patterns, get, $String*, double)},
		{"lambda$expandAffix$0", "(Ljava/text/CompactNumberFormat$Patterns;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(CompactNumberFormat$Patterns, lambda$expandAffix$0, void, CompactNumberFormat$Patterns*, $String*, $String*)},
		{"put", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(CompactNumberFormat$Patterns, put, void, $String*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.text.CompactNumberFormat$Patterns", "java.text.CompactNumberFormat", "Patterns", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.text.CompactNumberFormat$Patterns",
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
		"java.text.CompactNumberFormat"
	};
	$loadClass(CompactNumberFormat$Patterns, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CompactNumberFormat$Patterns);
	});
	return class$;
}

$Class* CompactNumberFormat$Patterns::class$ = nullptr;

	} // text
} // java