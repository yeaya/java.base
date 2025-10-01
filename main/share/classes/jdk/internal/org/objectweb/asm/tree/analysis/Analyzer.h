#ifndef _jdk_internal_org_objectweb_asm$_tree_analysis_Analyzer_h_
#define _jdk_internal_org_objectweb_asm$_tree_analysis_Analyzer_h_
//$ class jdk.internal.org.objectweb.asm.tree.analysis.Analyzer
//$ extends jdk.internal.org.objectweb.asm.Opcodes

#include <java/lang/Array.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {
						class InsnList;
						class MethodNode;
						class TryCatchBlockNode;
					}
				}
			}
		}
	}
}
namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {
						namespace analysis {
							class Frame;
							class Interpreter;
							class Subroutine;
						}
					}
				}
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {
						namespace analysis {

class Analyzer : public ::jdk::internal::org::objectweb::asm$::Opcodes {
	$class(Analyzer, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::Opcodes)
public:
	Analyzer();
	void init$(::jdk::internal::org::objectweb::asm$::tree::analysis::Interpreter* interpreter);
	virtual $Array<::jdk::internal::org::objectweb::asm$::tree::analysis::Frame>* analyze($String* owner, ::jdk::internal::org::objectweb::asm$::tree::MethodNode* method);
	::jdk::internal::org::objectweb::asm$::tree::analysis::Frame* computeInitialFrame($String* owner, ::jdk::internal::org::objectweb::asm$::tree::MethodNode* method);
	void findSubroutine(int32_t insnIndex, ::jdk::internal::org::objectweb::asm$::tree::analysis::Subroutine* subroutine, ::java::util::List* jsrInsns);
	virtual $Array<::jdk::internal::org::objectweb::asm$::tree::analysis::Frame>* getFrames();
	virtual ::java::util::List* getHandlers(int32_t insnIndex);
	virtual void init($String* owner, ::jdk::internal::org::objectweb::asm$::tree::MethodNode* method);
	void merge(int32_t insnIndex, ::jdk::internal::org::objectweb::asm$::tree::analysis::Frame* frame, ::jdk::internal::org::objectweb::asm$::tree::analysis::Subroutine* subroutine);
	void merge(int32_t insnIndex, ::jdk::internal::org::objectweb::asm$::tree::analysis::Frame* frameBeforeJsr, ::jdk::internal::org::objectweb::asm$::tree::analysis::Frame* frameAfterRet, ::jdk::internal::org::objectweb::asm$::tree::analysis::Subroutine* subroutineBeforeJsr, $booleans* localsUsed);
	virtual void newControlFlowEdge(int32_t insnIndex, int32_t successorIndex);
	virtual bool newControlFlowExceptionEdge(int32_t insnIndex, int32_t successorIndex);
	virtual bool newControlFlowExceptionEdge(int32_t insnIndex, ::jdk::internal::org::objectweb::asm$::tree::TryCatchBlockNode* tryCatchBlock);
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::Frame* newFrame(int32_t numLocals, int32_t numStack);
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::Frame* newFrame(::jdk::internal::org::objectweb::asm$::tree::analysis::Frame* frame);
	::jdk::internal::org::objectweb::asm$::tree::analysis::Interpreter* interpreter = nullptr;
	::jdk::internal::org::objectweb::asm$::tree::InsnList* insnList = nullptr;
	int32_t insnListSize = 0;
	$Array<::java::util::List>* handlers = nullptr;
	$Array<::jdk::internal::org::objectweb::asm$::tree::analysis::Frame>* frames = nullptr;
	$Array<::jdk::internal::org::objectweb::asm$::tree::analysis::Subroutine>* subroutines = nullptr;
	$booleans* inInstructionsToProcess = nullptr;
	$ints* instructionsToProcess = nullptr;
	int32_t numInstructionsToProcess = 0;
};

						} // analysis
					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_tree_analysis_Analyzer_h_