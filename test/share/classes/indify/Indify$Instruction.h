#ifndef _indify_Indify$Instruction_h_
#define _indify_Indify$Instruction_h_
//$ class indify.Indify$Instruction
//$ extends java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

namespace indify {

class $export Indify$Instruction : public ::java::lang::Cloneable {
	$class(Indify$Instruction, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	Indify$Instruction();
	void init$($bytes* codeBase, int32_t pc);
	virtual int32_t alignedIntOffset(int32_t n);
	virtual ::indify::Indify$Instruction* clone() override;
	void computeLength();
	virtual void forceNext(int32_t newLen);
	::indify::Indify$Instruction* init(int32_t pc);
	virtual ::indify::Indify$Instruction* next();
	virtual $String* toString() override;
	virtual int32_t u1At(int32_t pos);
	virtual void u1AtPut(int32_t pos, int32_t x);
	virtual int32_t u2At(int32_t pos);
	virtual void u2AtPut(int32_t pos, int32_t x);
	virtual int32_t u4At(int32_t pos);
	$bytes* codeBase = nullptr;
	int32_t pc = 0;
	int32_t bc = 0;
	int32_t info = 0;
	int32_t wide = 0;
	int32_t len = 0;
};

} // indify

#endif // _indify_Indify$Instruction_h_