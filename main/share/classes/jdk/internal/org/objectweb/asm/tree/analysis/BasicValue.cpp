#include <jdk/internal/org/objectweb/asm/tree/analysis/BasicValue.h>
#include <jdk/internal/org/objectweb/asm/Type.h>
#include <jcpp.h>

#undef ARRAY
#undef DOUBLE_TYPE
#undef DOUBLE_VALUE
#undef FLOAT_TYPE
#undef FLOAT_VALUE
#undef INT_TYPE
#undef INT_VALUE
#undef LONG_TYPE
#undef LONG_VALUE
#undef OBJECT
#undef REFERENCE_VALUE
#undef RETURNADDRESS_VALUE
#undef UNINITIALIZED_VALUE
#undef VOID_TYPE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Type = ::jdk::internal::org::objectweb::asm$::Type;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {
						namespace analysis {

BasicValue* BasicValue::UNINITIALIZED_VALUE = nullptr;
BasicValue* BasicValue::INT_VALUE = nullptr;
BasicValue* BasicValue::FLOAT_VALUE = nullptr;
BasicValue* BasicValue::LONG_VALUE = nullptr;
BasicValue* BasicValue::DOUBLE_VALUE = nullptr;
BasicValue* BasicValue::REFERENCE_VALUE = nullptr;
BasicValue* BasicValue::RETURNADDRESS_VALUE = nullptr;

void BasicValue::init$($Type* type) {
	$set(this, type, type);
}

$Type* BasicValue::getType() {
	return this->type;
}

int32_t BasicValue::getSize() {
	$init($Type);
	return this->type == $Type::LONG_TYPE || this->type == $Type::DOUBLE_TYPE ? 2 : 1;
}

bool BasicValue::isReference() {
	bool var$0 = this->type != nullptr;
	if (var$0) {
		bool var$1 = this->type->getSort() == $Type::OBJECT;
		var$0 = var$1 || this->type->getSort() == $Type::ARRAY;
	}
	return var$0;
}

bool BasicValue::equals(Object$* value) {
	if ($equals(value, this)) {
		return true;
	} else if ($instanceOf(BasicValue, value)) {
		if (this->type == nullptr) {
			return $cast(BasicValue, value)->type == nullptr;
		} else {
			return this->type->equals($cast(BasicValue, value)->type);
		}
	} else {
		return false;
	}
}

int32_t BasicValue::hashCode() {
	return this->type == nullptr ? 0 : this->type->hashCode();
}

$String* BasicValue::toString() {
	if (this == BasicValue::UNINITIALIZED_VALUE) {
		return "."_s;
	} else if (this == BasicValue::RETURNADDRESS_VALUE) {
		return "A"_s;
	} else if (this == BasicValue::REFERENCE_VALUE) {
		return "R"_s;
	} else {
		return $nc(this->type)->getDescriptor();
	}
}

void BasicValue::clinit$($Class* clazz) {
	$assignStatic(BasicValue::UNINITIALIZED_VALUE, $new(BasicValue, nullptr));
	$init($Type);
	$assignStatic(BasicValue::INT_VALUE, $new(BasicValue, $Type::INT_TYPE));
	$assignStatic(BasicValue::FLOAT_VALUE, $new(BasicValue, $Type::FLOAT_TYPE));
	$assignStatic(BasicValue::LONG_VALUE, $new(BasicValue, $Type::LONG_TYPE));
	$assignStatic(BasicValue::DOUBLE_VALUE, $new(BasicValue, $Type::DOUBLE_TYPE));
	$assignStatic(BasicValue::REFERENCE_VALUE, $new(BasicValue, $($Type::getObjectType("java/lang/Object"_s))));
	$assignStatic(BasicValue::RETURNADDRESS_VALUE, $new(BasicValue, $Type::VOID_TYPE));
}

BasicValue::BasicValue() {
}

$Class* BasicValue::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"UNINITIALIZED_VALUE", "Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasicValue, UNINITIALIZED_VALUE)},
		{"INT_VALUE", "Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasicValue, INT_VALUE)},
		{"FLOAT_VALUE", "Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasicValue, FLOAT_VALUE)},
		{"LONG_VALUE", "Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasicValue, LONG_VALUE)},
		{"DOUBLE_VALUE", "Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasicValue, DOUBLE_VALUE)},
		{"REFERENCE_VALUE", "Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasicValue, REFERENCE_VALUE)},
		{"RETURNADDRESS_VALUE", "Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasicValue, RETURNADDRESS_VALUE)},
		{"type", "Ljdk/internal/org/objectweb/asm/Type;", nullptr, $PRIVATE | $FINAL, $field(BasicValue, type)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/org/objectweb/asm/Type;)V", nullptr, $PUBLIC, $method(BasicValue, init$, void, $Type*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(BasicValue, equals, bool, Object$*)},
		{"getSize", "()I", nullptr, $PUBLIC, $virtualMethod(BasicValue, getSize, int32_t)},
		{"getType", "()Ljdk/internal/org/objectweb/asm/Type;", nullptr, $PUBLIC, $virtualMethod(BasicValue, getType, $Type*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(BasicValue, hashCode, int32_t)},
		{"isReference", "()Z", nullptr, $PUBLIC, $virtualMethod(BasicValue, isReference, bool)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(BasicValue, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.org.objectweb.asm.tree.analysis.BasicValue",
		"java.lang.Object",
		"jdk.internal.org.objectweb.asm.tree.analysis.Value",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BasicValue, name, initialize, &classInfo$$, BasicValue::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(BasicValue);
	});
	return class$;
}

$Class* BasicValue::class$ = nullptr;

						} // analysis
					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk