#include <jdk/internal/org/objectweb/asm/tree/analysis/AnalyzerException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _AnalyzerException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AnalyzerException, serialVersionUID)},
	{"node", "Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", nullptr, $PUBLIC | $FINAL | $TRANSIENT, $field(AnalyzerException, node)},
	{}
};

$MethodInfo _AnalyzerException_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(AnalyzerException::*)($AbstractInsnNode*,$String*)>(&AnalyzerException::init$))},
	{"<init>", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(AnalyzerException::*)($AbstractInsnNode*,$String*,$Throwable*)>(&AnalyzerException::init$))},
	{"<init>", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljava/lang/String;Ljava/lang/Object;Ljdk/internal/org/objectweb/asm/tree/analysis/Value;)V", nullptr, $PUBLIC, $method(static_cast<void(AnalyzerException::*)($AbstractInsnNode*,$String*,Object$*,$1Value*)>(&AnalyzerException::init$))},
	{}
};

$ClassInfo _AnalyzerException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.tree.analysis.AnalyzerException",
	"java.lang.Exception",
	nullptr,
	_AnalyzerException_FieldInfo_,
	_AnalyzerException_MethodInfo_
};

$Object* allocate$AnalyzerException($Class* clazz) {
	return $of($alloc(AnalyzerException));
}

void AnalyzerException::init$($AbstractInsnNode* insn, $String* message) {
	$Exception::init$(message);
	$set(this, node, insn);
}

void AnalyzerException::init$($AbstractInsnNode* insn, $String* message, $Throwable* cause) {
	$Exception::init$(message, cause);
	$set(this, node, insn);
}

void AnalyzerException::init$($AbstractInsnNode* insn, $String* message, Object$* expected, $1Value* actual) {
	$Exception::init$($$str({(message == nullptr ? "Expected "_s : $$str({message, ": expected "_s})), expected, ", but found "_s, actual}));
	$set(this, node, insn);
}

AnalyzerException::AnalyzerException() {
}

AnalyzerException::AnalyzerException(const AnalyzerException& e) {
}

AnalyzerException AnalyzerException::wrapper$() {
	$pendingException(this);
	return *this;
}

void AnalyzerException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* AnalyzerException::load$($String* name, bool initialize) {
	$loadClass(AnalyzerException, name, initialize, &_AnalyzerException_ClassInfo_, allocate$AnalyzerException);
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