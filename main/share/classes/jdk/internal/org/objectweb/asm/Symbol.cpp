#include <jdk/internal/org/objectweb/asm/Symbol.h>

#include <jdk/internal/org/objectweb/asm/Type.h>
#include <jcpp.h>

#undef BOOTSTRAP_METHOD_TAG
#undef CONSTANT_CLASS_TAG
#undef CONSTANT_DOUBLE_TAG
#undef CONSTANT_DYNAMIC_TAG
#undef CONSTANT_FIELDREF_TAG
#undef CONSTANT_FLOAT_TAG
#undef CONSTANT_INTEGER_TAG
#undef CONSTANT_INTERFACE_METHODREF_TAG
#undef CONSTANT_INVOKE_DYNAMIC_TAG
#undef CONSTANT_LONG_TAG
#undef CONSTANT_METHODREF_TAG
#undef CONSTANT_METHOD_HANDLE_TAG
#undef CONSTANT_METHOD_TYPE_TAG
#undef CONSTANT_MODULE_TAG
#undef CONSTANT_NAME_AND_TYPE_TAG
#undef CONSTANT_PACKAGE_TAG
#undef CONSTANT_STRING_TAG
#undef CONSTANT_UTF8_TAG
#undef MERGED_TYPE_TAG
#undef TYPE_TAG
#undef UNINITIALIZED_TYPE_TAG

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Type = ::jdk::internal::org::objectweb::asm$::Type;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

$FieldInfo _Symbol_FieldInfo_[] = {
	{"CONSTANT_CLASS_TAG", "I", nullptr, $STATIC | $FINAL, $constField(Symbol, CONSTANT_CLASS_TAG)},
	{"CONSTANT_FIELDREF_TAG", "I", nullptr, $STATIC | $FINAL, $constField(Symbol, CONSTANT_FIELDREF_TAG)},
	{"CONSTANT_METHODREF_TAG", "I", nullptr, $STATIC | $FINAL, $constField(Symbol, CONSTANT_METHODREF_TAG)},
	{"CONSTANT_INTERFACE_METHODREF_TAG", "I", nullptr, $STATIC | $FINAL, $constField(Symbol, CONSTANT_INTERFACE_METHODREF_TAG)},
	{"CONSTANT_STRING_TAG", "I", nullptr, $STATIC | $FINAL, $constField(Symbol, CONSTANT_STRING_TAG)},
	{"CONSTANT_INTEGER_TAG", "I", nullptr, $STATIC | $FINAL, $constField(Symbol, CONSTANT_INTEGER_TAG)},
	{"CONSTANT_FLOAT_TAG", "I", nullptr, $STATIC | $FINAL, $constField(Symbol, CONSTANT_FLOAT_TAG)},
	{"CONSTANT_LONG_TAG", "I", nullptr, $STATIC | $FINAL, $constField(Symbol, CONSTANT_LONG_TAG)},
	{"CONSTANT_DOUBLE_TAG", "I", nullptr, $STATIC | $FINAL, $constField(Symbol, CONSTANT_DOUBLE_TAG)},
	{"CONSTANT_NAME_AND_TYPE_TAG", "I", nullptr, $STATIC | $FINAL, $constField(Symbol, CONSTANT_NAME_AND_TYPE_TAG)},
	{"CONSTANT_UTF8_TAG", "I", nullptr, $STATIC | $FINAL, $constField(Symbol, CONSTANT_UTF8_TAG)},
	{"CONSTANT_METHOD_HANDLE_TAG", "I", nullptr, $STATIC | $FINAL, $constField(Symbol, CONSTANT_METHOD_HANDLE_TAG)},
	{"CONSTANT_METHOD_TYPE_TAG", "I", nullptr, $STATIC | $FINAL, $constField(Symbol, CONSTANT_METHOD_TYPE_TAG)},
	{"CONSTANT_DYNAMIC_TAG", "I", nullptr, $STATIC | $FINAL, $constField(Symbol, CONSTANT_DYNAMIC_TAG)},
	{"CONSTANT_INVOKE_DYNAMIC_TAG", "I", nullptr, $STATIC | $FINAL, $constField(Symbol, CONSTANT_INVOKE_DYNAMIC_TAG)},
	{"CONSTANT_MODULE_TAG", "I", nullptr, $STATIC | $FINAL, $constField(Symbol, CONSTANT_MODULE_TAG)},
	{"CONSTANT_PACKAGE_TAG", "I", nullptr, $STATIC | $FINAL, $constField(Symbol, CONSTANT_PACKAGE_TAG)},
	{"BOOTSTRAP_METHOD_TAG", "I", nullptr, $STATIC | $FINAL, $constField(Symbol, BOOTSTRAP_METHOD_TAG)},
	{"TYPE_TAG", "I", nullptr, $STATIC | $FINAL, $constField(Symbol, TYPE_TAG)},
	{"UNINITIALIZED_TYPE_TAG", "I", nullptr, $STATIC | $FINAL, $constField(Symbol, UNINITIALIZED_TYPE_TAG)},
	{"MERGED_TYPE_TAG", "I", nullptr, $STATIC | $FINAL, $constField(Symbol, MERGED_TYPE_TAG)},
	{"index", "I", nullptr, $FINAL, $field(Symbol, index)},
	{"tag", "I", nullptr, $FINAL, $field(Symbol, tag)},
	{"owner", "Ljava/lang/String;", nullptr, $FINAL, $field(Symbol, owner)},
	{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(Symbol, name)},
	{"value", "Ljava/lang/String;", nullptr, $FINAL, $field(Symbol, value)},
	{"data", "J", nullptr, $FINAL, $field(Symbol, data)},
	{"info", "I", nullptr, 0, $field(Symbol, info)},
	{}
};

$MethodInfo _Symbol_MethodInfo_[] = {
	{"<init>", "(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;J)V", nullptr, 0, $method(static_cast<void(Symbol::*)(int32_t,int32_t,$String*,$String*,$String*,int64_t)>(&Symbol::init$))},
	{"getArgumentsAndReturnSizes", "()I", nullptr, 0},
	{}
};

$ClassInfo _Symbol_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"jdk.internal.org.objectweb.asm.Symbol",
	"java.lang.Object",
	nullptr,
	_Symbol_FieldInfo_,
	_Symbol_MethodInfo_
};

$Object* allocate$Symbol($Class* clazz) {
	return $of($alloc(Symbol));
}

void Symbol::init$(int32_t index, int32_t tag, $String* owner, $String* name, $String* value, int64_t data) {
	this->index = index;
	this->tag = tag;
	$set(this, owner, owner);
	$set(this, name, name);
	$set(this, value, value);
	this->data = data;
}

int32_t Symbol::getArgumentsAndReturnSizes() {
	if (this->info == 0) {
		this->info = $Type::getArgumentsAndReturnSizes(this->value);
	}
	return this->info;
}

Symbol::Symbol() {
}

$Class* Symbol::load$($String* name, bool initialize) {
	$loadClass(Symbol, name, initialize, &_Symbol_ClassInfo_, allocate$Symbol);
	return class$;
}

$Class* Symbol::class$ = nullptr;

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk