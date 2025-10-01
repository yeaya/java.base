#include <indify/Indify$Instruction.h>

#include <indify/Indify.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef INSTRUCTION_NAMES
#undef INSTRUCTION_INFO

using $Indify = ::indify::Indify;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace indify {

$FieldInfo _Indify$Instruction_FieldInfo_[] = {
	{"codeBase", "[B", nullptr, 0, $field(Indify$Instruction, codeBase)},
	{"pc", "I", nullptr, 0, $field(Indify$Instruction, pc)},
	{"bc", "I", nullptr, 0, $field(Indify$Instruction, bc)},
	{"info", "I", nullptr, 0, $field(Indify$Instruction, info)},
	{"wide", "I", nullptr, 0, $field(Indify$Instruction, wide)},
	{"len", "I", nullptr, 0, $field(Indify$Instruction, len)},
	{}
};

$MethodInfo _Indify$Instruction_MethodInfo_[] = {
	{"<init>", "([BI)V", nullptr, 0, $method(static_cast<void(Indify$Instruction::*)($bytes*,int32_t)>(&Indify$Instruction::init$))},
	{"alignedIntOffset", "(I)I", nullptr, $PUBLIC},
	{"clone", "()Lindify/Indify$Instruction;", nullptr, $PUBLIC},
	{"computeLength", "()V", nullptr, $PRIVATE, $method(static_cast<void(Indify$Instruction::*)()>(&Indify$Instruction::computeLength))},
	{"forceNext", "(I)V", nullptr, 0},
	{"init", "(I)Lindify/Indify$Instruction;", nullptr, $PRIVATE, $method(static_cast<Indify$Instruction*(Indify$Instruction::*)(int32_t)>(&Indify$Instruction::init))},
	{"next", "()Lindify/Indify$Instruction;", nullptr, 0},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"u1At", "(I)I", nullptr, $PUBLIC},
	{"u1AtPut", "(II)V", nullptr, $PUBLIC},
	{"u2At", "(I)I", nullptr, $PUBLIC},
	{"u2AtPut", "(II)V", nullptr, $PUBLIC},
	{"u4At", "(I)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Indify$Instruction_InnerClassesInfo_[] = {
	{"indify.Indify$Instruction", "indify.Indify", "Instruction", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Indify$Instruction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"indify.Indify$Instruction",
	"java.lang.Object",
	"java.lang.Cloneable",
	_Indify$Instruction_FieldInfo_,
	_Indify$Instruction_MethodInfo_,
	nullptr,
	nullptr,
	_Indify$Instruction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"indify.Indify"
};

$Object* allocate$Indify$Instruction($Class* clazz) {
	return $of($alloc(Indify$Instruction));
}

void Indify$Instruction::init$($bytes* codeBase, int32_t pc) {
	$set(this, codeBase, codeBase);
	init(pc);
}

Indify$Instruction* Indify$Instruction::clone() {
	try {
		return $cast(Indify$Instruction, $Cloneable::clone());
	} catch ($CloneNotSupportedException&) {
		$var($CloneNotSupportedException, ex, $catch());
		$throwNew($InternalError);
	}
	$shouldNotReachHere();
}

Indify$Instruction* Indify$Instruction::init(int32_t pc) {
	this->pc = pc;
	this->bc = (int32_t)($nc(this->codeBase)->get(pc) & (uint32_t)255);
	$init($Indify);
	this->info = $nc($Indify::INSTRUCTION_INFO)->get(this->bc);
	this->wide = 0;
	this->len = ((int32_t)(this->info & (uint32_t)15));
	if (this->len == 0) {
		computeLength();
	}
	return this;
}

Indify$Instruction* Indify$Instruction::next() {
	if (this->len == 0 && this->bc != 0) {
		$throwNew($InternalError);
	}
	int32_t npc = this->pc + this->len;
	if (npc == $nc(this->codeBase)->length) {
		return nullptr;
	}
	return init(npc);
}

void Indify$Instruction::forceNext(int32_t newLen) {
	this->bc = 0;
	this->len = newLen;
}

$String* Indify$Instruction::toString() {
	$var($StringBuilder, buf, $new($StringBuilder));
	$init($Indify);
	buf->append(this->pc)->append(":"_s)->append($nc($Indify::INSTRUCTION_NAMES)->get(this->bc));
	switch (this->len) {
	case 3:
		{
			buf->append(" "_s)->append(u2At(1));
			break;
		}
	case 5:
		{
			buf->append(" "_s)->append(u2At(1))->append(" "_s)->append(u2At(3));
			break;
		}
	default:
		{
			for (int32_t i = 1; i < this->len; ++i) {
				buf->append(" "_s)->append(u1At(1));
			}
		}
	}
	return buf->toString();
}

void Indify$Instruction::computeLength() {
	int32_t cases = 0;
	switch (this->bc) {
	case 196:
		{
			this->bc = $nc(this->codeBase)->get(this->pc + 1);
			$init($Indify);
			this->info = $nc($Indify::INSTRUCTION_INFO)->get(this->bc);
			this->len = ((int32_t)((this->info >> 4) & (uint32_t)15));
			if (this->len == 0) {
				$throwNew($RuntimeException, $$str({"misplaced wide bytecode: "_s, $$str(this->bc)}));
			}
			return;
		}
	case 170:
		{
			int32_t var$0 = u4At(alignedIntOffset(2));
			cases = (var$0 - u4At(alignedIntOffset(1)) + 1);
			this->len = alignedIntOffset(3 + cases * 1);
			return;
		}
	case 171:
		{
			cases = u4At(alignedIntOffset(1));
			this->len = alignedIntOffset(2 + cases * 2);
			return;
		}
	default:
		{
			$throwNew($RuntimeException, $$str({"unknown bytecode: "_s, $$str(this->bc)}));
		}
	}
}

int32_t Indify$Instruction::alignedIntOffset(int32_t n) {
	int32_t pos = this->pc + 1;
	pos = pos + ((int32_t)((-pos) & (uint32_t)3));
	pos += (n * 4);
	return pos - this->pc;
}

int32_t Indify$Instruction::u1At(int32_t pos) {
	return ((int32_t)($nc(this->codeBase)->get(this->pc + pos) & (uint32_t)255));
}

int32_t Indify$Instruction::u2At(int32_t pos) {
	int32_t var$0 = (u1At(pos + 0) << 8);
	return var$0 + u1At(pos + 1);
}

int32_t Indify$Instruction::u4At(int32_t pos) {
	int32_t var$0 = (u2At(pos + 0) << 16);
	return var$0 + u2At(pos + 2);
}

void Indify$Instruction::u1AtPut(int32_t pos, int32_t x) {
	$nc(this->codeBase)->set(this->pc + pos, (int8_t)x);
}

void Indify$Instruction::u2AtPut(int32_t pos, int32_t x) {
	$nc(this->codeBase)->set(this->pc + pos + 0, (int8_t)(x >> 8));
	$nc(this->codeBase)->set(this->pc + pos + 1, (int8_t)(x >> 0));
}

Indify$Instruction::Indify$Instruction() {
}

$Class* Indify$Instruction::load$($String* name, bool initialize) {
	$loadClass(Indify$Instruction, name, initialize, &_Indify$Instruction_ClassInfo_, allocate$Indify$Instruction);
	return class$;
}

$Class* Indify$Instruction::class$ = nullptr;

} // indify