#include <jdk/internal/org/objectweb/asm/tree/analysis/Interpreter.h>

#include <java/util/List.h>
#include <jdk/internal/org/objectweb/asm/Type.h>
#include <jdk/internal/org/objectweb/asm/tree/AbstractInsnNode.h>
#include <jdk/internal/org/objectweb/asm/tree/TryCatchBlockNode.h>
#include <jdk/internal/org/objectweb/asm/tree/analysis/Frame.h>
#include <jdk/internal/org/objectweb/asm/tree/analysis/Value.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Type = ::jdk::internal::org::objectweb::asm$::Type;
using $TryCatchBlockNode = ::jdk::internal::org::objectweb::asm$::tree::TryCatchBlockNode;
using $Frame = ::jdk::internal::org::objectweb::asm$::tree::analysis::Frame;
using $1Value = ::jdk::internal::org::objectweb::asm$::tree::analysis::Value;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {
						namespace analysis {

$FieldInfo _Interpreter_FieldInfo_[] = {
	{"api", "I", nullptr, $PROTECTED | $FINAL, $field(Interpreter, api)},
	{}
};

$MethodInfo _Interpreter_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PROTECTED, $method(static_cast<void(Interpreter::*)(int32_t)>(&Interpreter::init$))},
	{"binaryOperation", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljdk/internal/org/objectweb/asm/tree/analysis/Value;Ljdk/internal/org/objectweb/asm/tree/analysis/Value;)Ljdk/internal/org/objectweb/asm/tree/analysis/Value;", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;TV;TV;)TV;", $PUBLIC | $ABSTRACT, nullptr, "jdk.internal.org.objectweb.asm.tree.analysis.AnalyzerException"},
	{"copyOperation", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljdk/internal/org/objectweb/asm/tree/analysis/Value;)Ljdk/internal/org/objectweb/asm/tree/analysis/Value;", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;TV;)TV;", $PUBLIC | $ABSTRACT, nullptr, "jdk.internal.org.objectweb.asm.tree.analysis.AnalyzerException"},
	{"merge", "(Ljdk/internal/org/objectweb/asm/tree/analysis/Value;Ljdk/internal/org/objectweb/asm/tree/analysis/Value;)Ljdk/internal/org/objectweb/asm/tree/analysis/Value;", "(TV;TV;)TV;", $PUBLIC | $ABSTRACT},
	{"naryOperation", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljava/util/List;)Ljdk/internal/org/objectweb/asm/tree/analysis/Value;", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljava/util/List<+TV;>;)TV;", $PUBLIC | $ABSTRACT, nullptr, "jdk.internal.org.objectweb.asm.tree.analysis.AnalyzerException"},
	{"newEmptyValue", "(I)Ljdk/internal/org/objectweb/asm/tree/analysis/Value;", "(I)TV;", $PUBLIC},
	{"newExceptionValue", "(Ljdk/internal/org/objectweb/asm/tree/TryCatchBlockNode;Ljdk/internal/org/objectweb/asm/tree/analysis/Frame;Ljdk/internal/org/objectweb/asm/Type;)Ljdk/internal/org/objectweb/asm/tree/analysis/Value;", "(Ljdk/internal/org/objectweb/asm/tree/TryCatchBlockNode;Ljdk/internal/org/objectweb/asm/tree/analysis/Frame<TV;>;Ljdk/internal/org/objectweb/asm/Type;)TV;", $PUBLIC},
	{"newOperation", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;)Ljdk/internal/org/objectweb/asm/tree/analysis/Value;", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;)TV;", $PUBLIC | $ABSTRACT, nullptr, "jdk.internal.org.objectweb.asm.tree.analysis.AnalyzerException"},
	{"newParameterValue", "(ZILjdk/internal/org/objectweb/asm/Type;)Ljdk/internal/org/objectweb/asm/tree/analysis/Value;", "(ZILjdk/internal/org/objectweb/asm/Type;)TV;", $PUBLIC},
	{"newReturnTypeValue", "(Ljdk/internal/org/objectweb/asm/Type;)Ljdk/internal/org/objectweb/asm/tree/analysis/Value;", "(Ljdk/internal/org/objectweb/asm/Type;)TV;", $PUBLIC},
	{"newValue", "(Ljdk/internal/org/objectweb/asm/Type;)Ljdk/internal/org/objectweb/asm/tree/analysis/Value;", "(Ljdk/internal/org/objectweb/asm/Type;)TV;", $PUBLIC | $ABSTRACT},
	{"returnOperation", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljdk/internal/org/objectweb/asm/tree/analysis/Value;Ljdk/internal/org/objectweb/asm/tree/analysis/Value;)V", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;TV;TV;)V", $PUBLIC | $ABSTRACT, nullptr, "jdk.internal.org.objectweb.asm.tree.analysis.AnalyzerException"},
	{"ternaryOperation", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljdk/internal/org/objectweb/asm/tree/analysis/Value;Ljdk/internal/org/objectweb/asm/tree/analysis/Value;Ljdk/internal/org/objectweb/asm/tree/analysis/Value;)Ljdk/internal/org/objectweb/asm/tree/analysis/Value;", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;TV;TV;TV;)TV;", $PUBLIC | $ABSTRACT, nullptr, "jdk.internal.org.objectweb.asm.tree.analysis.AnalyzerException"},
	{"unaryOperation", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljdk/internal/org/objectweb/asm/tree/analysis/Value;)Ljdk/internal/org/objectweb/asm/tree/analysis/Value;", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;TV;)TV;", $PUBLIC | $ABSTRACT, nullptr, "jdk.internal.org.objectweb.asm.tree.analysis.AnalyzerException"},
	{}
};

$ClassInfo _Interpreter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"jdk.internal.org.objectweb.asm.tree.analysis.Interpreter",
	"java.lang.Object",
	nullptr,
	_Interpreter_FieldInfo_,
	_Interpreter_MethodInfo_,
	"<V::Ljdk/internal/org/objectweb/asm/tree/analysis/Value;>Ljava/lang/Object;"
};

$Object* allocate$Interpreter($Class* clazz) {
	return $of($alloc(Interpreter));
}

void Interpreter::init$(int32_t api) {
	this->api = api;
}

$1Value* Interpreter::newParameterValue(bool isInstanceMethod, int32_t local, $Type* type) {
	return newValue(type);
}

$1Value* Interpreter::newReturnTypeValue($Type* type) {
	return newValue(type);
}

$1Value* Interpreter::newEmptyValue(int32_t local) {
	return newValue(nullptr);
}

$1Value* Interpreter::newExceptionValue($TryCatchBlockNode* tryCatchBlockNode, $Frame* handlerFrame, $Type* exceptionType) {
	return newValue(exceptionType);
}

Interpreter::Interpreter() {
}

$Class* Interpreter::load$($String* name, bool initialize) {
	$loadClass(Interpreter, name, initialize, &_Interpreter_ClassInfo_, allocate$Interpreter);
	return class$;
}

$Class* Interpreter::class$ = nullptr;

						} // analysis
					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk