#ifndef _indify_Indify$Logic_h_
#define _indify_Indify$Logic_h_
//$ class indify.Indify$Logic
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("EMPTY_SLOT")
#undef EMPTY_SLOT
#pragma push_macro("UNKNOWN_CON")
#undef UNKNOWN_CON

namespace indify {
	class Indify;
	class Indify$ClassFile;
	class Indify$Constant;
	class Indify$Instruction;
	class Indify$Method;
}
namespace java {
	namespace lang {
		class Short;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
	}
}

namespace indify {

class Indify$Logic : public ::java::lang::Object {
	$class(Indify$Logic, 0, ::java::lang::Object)
public:
	Indify$Logic();
	void init$(::indify::Indify* this$0, ::indify::Indify$ClassFile* cf);
	virtual ::java::util::List* bootstrapMethodSpecifiers(bool createIfNotFound);
	virtual bool findPatternMethods();
	virtual ::indify::Indify$Instruction* findPop(::indify::Indify$Instruction* i);
	void flattenVarargs(::java::util::List* args);
	virtual bool initializeMarks();
	bool isConstant(Object$* x, int32_t tag);
	::indify::Indify$Constant* makeInvokeDynamicCon(::java::util::List* args);
	::indify::Indify$Constant* makeMethodTypeCon(Object$* x);
	virtual bool matchType($String* descr, $String* requiredType);
	virtual char16_t nameAndTypeMark($Array<::java::lang::Short>* n12);
	virtual char16_t nameAndTypeMark(int16_t n1, int16_t n2);
	virtual char16_t nameMark($String* s);
	::indify::Indify$Constant* parseMemberLookup(int8_t refKind, ::java::util::List* args);
	void removeEmptyJVMSlots(::java::util::List* args);
	virtual void reportPatternMethods(bool quietly, bool allowMatchFailure);
	::indify::Indify$Constant* scanPattern(::indify::Indify$Method* m, char16_t patternMark);
	virtual bool transform();
	::indify::Indify* this$0 = nullptr;
	static bool $assertionsDisabled;
	::indify::Indify$ClassFile* cf = nullptr;
	$chars* poolMarks = nullptr;
	::java::util::Map* constants = nullptr;
	::java::util::Map* indySignatures = nullptr;
	$String* EMPTY_SLOT = nullptr;
	$String* UNKNOWN_CON = nullptr;
};

} // indify

#pragma pop_macro("EMPTY_SLOT")
#pragma pop_macro("UNKNOWN_CON")

#endif // _indify_Indify$Logic_h_