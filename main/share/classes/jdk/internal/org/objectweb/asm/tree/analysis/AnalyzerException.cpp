#include <jdk/internal/org/objectweb/asm/tree/analysis/AnalyzerException.h>
#include <jdk/internal/org/objectweb/asm/tree/AbstractInsnNode.h>
#include <jdk/internal/org/objectweb/asm/tree/analysis/Value.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractInsnNode = ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode;
using $1Value = ::jdk::internal::org::objectweb::asm$::tree::analysis::Value;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {
						namespace analysis {

void AnalyzerException::init$($AbstractInsnNode* insn, $String* message) {
	$Exception::init$(message);
	$set(this, node, insn);
}

void AnalyzerException::init$($AbstractInsnNode* insn, $String* message, $Throwable* cause) {
	$Exception::init$(message, cause);
	$set(this, node, insn);
}

void AnalyzerException::init$($AbstractInsnNode* insn, $String* message, Object$* expected, $1Value* actual) {
	$useLocalObjectStack();
	$Exception::init$($$str({(message == nullptr ? "Expected "_s : $$str({message, ": expected "_s})), expected, ", but found "_s, actual}));
	$set(this, node, insn);
}

AnalyzerException::AnalyzerException() {
}

AnalyzerException::AnalyzerException(const AnalyzerException& e) : $Exception(e) {
}

void AnalyzerException::throw$() {
	throw *this;
}

$Class* AnalyzerException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AnalyzerException, serialVersionUID)},
		{"node", "Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", nullptr, $PUBLIC | $FINAL | $TRANSIENT, $field(AnalyzerException, node)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AnalyzerException, init$, void, $AbstractInsnNode*, $String*)},
		{"<init>", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(AnalyzerException, init$, void, $AbstractInsnNode*, $String*, $Throwable*)},
		{"<init>", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljava/lang/String;Ljava/lang/Object;Ljdk/internal/org/objectweb/asm/tree/analysis/Value;)V", nullptr, $PUBLIC, $method(AnalyzerException, init$, void, $AbstractInsnNode*, $String*, Object$*, $1Value*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.org.objectweb.asm.tree.analysis.AnalyzerException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AnalyzerException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AnalyzerException);
	});
	return class$;
}

$Class* AnalyzerException::class$ = nullptr;

						} // analysis
					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk