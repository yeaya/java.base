#ifndef _jdk_internal_org_objectweb_asm$_Label_h_
#define _jdk_internal_org_objectweb_asm$_Label_h_
//$ class jdk.internal.org.objectweb.asm.Label
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("LINE_NUMBERS_CAPACITY_INCREMENT")
#undef LINE_NUMBERS_CAPACITY_INCREMENT
#pragma push_macro("FLAG_JUMP_TARGET")
#undef FLAG_JUMP_TARGET
#pragma push_macro("FLAG_REACHABLE")
#undef FLAG_REACHABLE
#pragma push_macro("FORWARD_REFERENCES_CAPACITY_INCREMENT")
#undef FORWARD_REFERENCES_CAPACITY_INCREMENT
#pragma push_macro("FORWARD_REFERENCE_TYPE_SHORT")
#undef FORWARD_REFERENCE_TYPE_SHORT
#pragma push_macro("FLAG_SUBROUTINE_END")
#undef FLAG_SUBROUTINE_END
#pragma push_macro("FORWARD_REFERENCE_HANDLE_MASK")
#undef FORWARD_REFERENCE_HANDLE_MASK
#pragma push_macro("FORWARD_REFERENCE_TYPE_MASK")
#undef FORWARD_REFERENCE_TYPE_MASK
#pragma push_macro("FLAG_DEBUG_ONLY")
#undef FLAG_DEBUG_ONLY
#pragma push_macro("FLAG_SUBROUTINE_CALLER")
#undef FLAG_SUBROUTINE_CALLER
#pragma push_macro("FLAG_SUBROUTINE_START")
#undef FLAG_SUBROUTINE_START
#pragma push_macro("FLAG_RESOLVED")
#undef FLAG_RESOLVED
#pragma push_macro("EMPTY_LIST")
#undef EMPTY_LIST
#pragma push_macro("FORWARD_REFERENCE_TYPE_WIDE")
#undef FORWARD_REFERENCE_TYPE_WIDE

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class ByteVector;
					class Edge;
					class Frame;
					class MethodVisitor;
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

class $export Label : public ::java::lang::Object {
	$class(Label, 0, ::java::lang::Object)
public:
	Label();
	void init$();
	void accept(::jdk::internal::org::objectweb::asm$::MethodVisitor* methodVisitor, bool visitLineNumbers);
	void addForwardReference(int32_t sourceInsnBytecodeOffset, int32_t referenceType, int32_t referenceHandle);
	void addLineNumber(int32_t lineNumber);
	void addSubroutineRetSuccessors(::jdk::internal::org::objectweb::asm$::Label* subroutineCaller);
	::jdk::internal::org::objectweb::asm$::Label* getCanonicalInstance();
	virtual int32_t getOffset();
	void markSubroutine(int16_t subroutineId);
	::jdk::internal::org::objectweb::asm$::Label* pushSuccessors(::jdk::internal::org::objectweb::asm$::Label* listOfLabelsToProcess);
	void put(::jdk::internal::org::objectweb::asm$::ByteVector* code, int32_t sourceInsnBytecodeOffset, bool wideReference);
	bool resolve($bytes* code, int32_t bytecodeOffset);
	virtual $String* toString() override;
	static const int32_t FLAG_DEBUG_ONLY = 1;
	static const int32_t FLAG_JUMP_TARGET = 2;
	static const int32_t FLAG_RESOLVED = 4;
	static const int32_t FLAG_REACHABLE = 8;
	static const int32_t FLAG_SUBROUTINE_CALLER = 16;
	static const int32_t FLAG_SUBROUTINE_START = 32;
	static const int32_t FLAG_SUBROUTINE_END = 64;
	static const int32_t LINE_NUMBERS_CAPACITY_INCREMENT = 4;
	static const int32_t FORWARD_REFERENCES_CAPACITY_INCREMENT = 6;
	static const int32_t FORWARD_REFERENCE_TYPE_MASK = 0xF0000000;
	static const int32_t FORWARD_REFERENCE_TYPE_SHORT = 0x10000000;
	static const int32_t FORWARD_REFERENCE_TYPE_WIDE = 0x20000000;
	static const int32_t FORWARD_REFERENCE_HANDLE_MASK = 0x0FFFFFFF;
	static ::jdk::internal::org::objectweb::asm$::Label* EMPTY_LIST;
	$Object* info = nullptr;
	int16_t flags = 0;
	int16_t lineNumber = 0;
	$ints* otherLineNumbers = nullptr;
	int32_t bytecodeOffset = 0;
	$ints* forwardReferences = nullptr;
	int16_t inputStackSize = 0;
	int16_t outputStackSize = 0;
	int16_t outputStackMax = 0;
	int16_t subroutineId = 0;
	::jdk::internal::org::objectweb::asm$::Frame* frame = nullptr;
	::jdk::internal::org::objectweb::asm$::Label* nextBasicBlock = nullptr;
	::jdk::internal::org::objectweb::asm$::Edge* outgoingEdges = nullptr;
	::jdk::internal::org::objectweb::asm$::Label* nextListElement = nullptr;
};

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#pragma pop_macro("LINE_NUMBERS_CAPACITY_INCREMENT")
#pragma pop_macro("FLAG_JUMP_TARGET")
#pragma pop_macro("FLAG_REACHABLE")
#pragma pop_macro("FORWARD_REFERENCES_CAPACITY_INCREMENT")
#pragma pop_macro("FORWARD_REFERENCE_TYPE_SHORT")
#pragma pop_macro("FLAG_SUBROUTINE_END")
#pragma pop_macro("FORWARD_REFERENCE_HANDLE_MASK")
#pragma pop_macro("FORWARD_REFERENCE_TYPE_MASK")
#pragma pop_macro("FLAG_DEBUG_ONLY")
#pragma pop_macro("FLAG_SUBROUTINE_CALLER")
#pragma pop_macro("FLAG_SUBROUTINE_START")
#pragma pop_macro("FLAG_RESOLVED")
#pragma pop_macro("EMPTY_LIST")
#pragma pop_macro("FORWARD_REFERENCE_TYPE_WIDE")

#endif // _jdk_internal_org_objectweb_asm$_Label_h_