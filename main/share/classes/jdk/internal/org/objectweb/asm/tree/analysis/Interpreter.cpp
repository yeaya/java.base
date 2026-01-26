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
using $List = ::java::util::List;
using $Type = ::jdk::internal::org::objectweb::asm$::Type;
using $AbstractInsnNode = ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode;
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
	{"<init>", "(I)V", nullptr, $PROTECTED, $method(Interpreter, init$, void, int32_t)},
	{"binaryOperation", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljdk/internal/org/objectweb/asm/tree/analysis/Value;Ljdk/internal/org/objectweb/asm/tree/analysis/Value;)Ljdk/internal/org/objectweb/asm/tree/analysis/Value;", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;TV;TV;)TV;", $PUBLIC | $ABSTRACT, $virtualMethod(Interpreter, binaryOperation, $1Value*, $AbstractInsnNode*, $1Value*, $1Value*), "jdk.internal.org.objectweb.asm.tree.analysis.AnalyzerException"},
	{"copyOperation", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljdk/internal/org/objectweb/asm/tree/analysis/Value;)Ljdk/internal/org/objectweb/asm/tree/analysis/Value;", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;TV;)TV;", $PUBLIC | $ABSTRACT, $virtualMethod(Interpreter, copyOperation, $1Value*, $AbstractInsnNode*, $1Value*), "jdk.internal.org.objectweb.asm.tree.analysis.AnalyzerException"},
	{"merge", "(Ljdk/internal/org/objectweb/asm/tree/analysis/Value;Ljdk/internal/org/objectweb/asm/tree/analysis/Value;)Ljdk/internal/org/objectweb/asm/tree/analysis/Value;", "(TV;TV;)TV;", $PUBLIC | $ABSTRACT, $virtualMethod(Interpreter, merge, $1Value*, $1Value*, $1Value*)},
	{"naryOperation", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljava/util/List;)Ljdk/internal/org/objectweb/asm/tree/analysis/Value;", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljava/util/List<+TV;>;)TV;", $PUBLIC | $ABSTRACT, $virtualMethod(Interpreter, naryOperation, $1Value*, $AbstractInsnNode*, $List*), "jdk.internal.org.objectweb.asm.tree.analysis.AnalyzerException"},
	{"newEmptyValue", "(I)Ljdk/internal/org/objectweb/asm/tree/analysis/Value;", "(I)TV;", $PUBLIC, $virtualMethod(Interpreter, newEmptyValue, $1Value*, int32_t)},
	{"newExceptionValue", "(Ljdk/internal/org/objectweb/asm/tree/TryCatchBlockNode;Ljdk/internal/org/objectweb/asm/tree/analysis/Frame;Ljdk/internal/org/objectweb/asm/Type;)Ljdk/internal/org/objectweb/asm/tree/analysis/Value;", "(Ljdk/internal/org/objectweb/asm/tree/TryCatchBlockNode;Ljdk/internal/org/objectweb/asm/tree/analysis/Frame<TV;>;Ljdk/internal/org/objectweb/asm/Type;)TV;", $PUBLIC, $virtualMethod(Interpreter, newExceptionValue, $1Value*, $TryCatchBlockNode*, $Frame*, $Type*)},
	{"newOperation", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;)Ljdk/internal/org/objectweb/asm/tree/analysis/Value;", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;)TV;", $PUBLIC | $ABSTRACT, $virtualMethod(Interpreter, newOperation, $1Value*, $AbstractInsnNode*), "jdk.internal.org.objectweb.asm.tree.analysis.AnalyzerException"},
	{"newParameterValue", "(ZILjdk/internal/org/objectweb/asm/Type;)Ljdk/internal/org/objectweb/asm/tree/analysis/Value;", "(ZILjdk/internal/org/objectweb/asm/Type;)TV;", $PUBLIC, $virtualMethod(Interpreter, newParameterValue, $1Value*, bool, int32_t, $Type*)},
	{"newReturnTypeValue", "(Ljdk/internal/org/objectweb/asm/Type;)Ljdk/internal/org/objectweb/asm/tree/analysis/Value;", "(Ljdk/internal/org/objectweb/asm/Type;)TV;", $PUBLIC, $virtualMethod(Interpreter, newReturnTypeValue, $1Value*, $Type*)},
	{"newValue", "(Ljdk/internal/org/objectweb/asm/Type;)Ljdk/internal/org/objectweb/asm/tree/analysis/Value;", "(Ljdk/internal/org/objectweb/asm/Type;)TV;", $PUBLIC | $ABSTRACT, $virtualMethod(Interpreter, newValue, $1Value*, $Type*)},
	{"returnOperation", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljdk/internal/org/objectweb/asm/tree/analysis/Value;Ljdk/internal/org/objectweb/asm/tree/analysis/Value;)V", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;TV;TV;)V", $PUBLIC | $ABSTRACT, $virtualMethod(Interpreter, returnOperation, void, $AbstractInsnNode*, $1Value*, $1Value*), "jdk.internal.org.objectweb.asm.tree.analysis.AnalyzerException"},
	{"ternaryOperation", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljdk/internal/org/objectweb/asm/tree/analysis/Value;Ljdk/internal/org/objectweb/asm/tree/analysis/Value;Ljdk/internal/org/objectweb/asm/tree/analysis/Value;)Ljdk/internal/org/objectweb/asm/tree/analysis/Value;", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;TV;TV;TV;)TV;", $PUBLIC | $ABSTRACT, $virtualMethod(Interpreter, ternaryOperation, $1Value*, $AbstractInsnNode*, $1Value*, $1Value*, $1Value*), "jdk.internal.org.objectweb.asm.tree.analysis.AnalyzerException"},
	{"unaryOperation", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljdk/internal/org/objectweb/asm/tree/analysis/Value;)Ljdk/internal/org/objectweb/asm/tree/analysis/Value;", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;TV;)TV;", $PUBLIC | $ABSTRACT, $virtualMethod(Interpreter, unaryOperation, $1Value*, $AbstractInsnNode*, $1Value*), "jdk.internal.org.objectweb.asm.tree.analysis.AnalyzerException"},
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