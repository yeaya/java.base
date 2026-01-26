#include <Transfers$IntGenerator.h>

#include <Transfers.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _Transfers$IntGenerator_FieldInfo_[] = {
	{"max", "I", nullptr, $PRIVATE, $field(Transfers$IntGenerator, max)},
	{"cur", "I", nullptr, $PRIVATE, $field(Transfers$IntGenerator, cur)},
	{"p2", "I", nullptr, $PRIVATE, $field(Transfers$IntGenerator, p2)},
	{}
};

$MethodInfo _Transfers$IntGenerator_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(Transfers$IntGenerator, init$, void, int32_t)},
	{"hasNext", "()Z", nullptr, 0, $virtualMethod(Transfers$IntGenerator, hasNext, bool)},
	{"next", "()I", nullptr, 0, $virtualMethod(Transfers$IntGenerator, next, int32_t)},
	{}
};

$InnerClassInfo _Transfers$IntGenerator_InnerClassesInfo_[] = {
	{"Transfers$IntGenerator", "Transfers", "IntGenerator", $STATIC},
	{}
};

$ClassInfo _Transfers$IntGenerator_ClassInfo_ = {
	$ACC_SUPER,
	"Transfers$IntGenerator",
	"java.lang.Object",
	nullptr,
	_Transfers$IntGenerator_FieldInfo_,
	_Transfers$IntGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_Transfers$IntGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Transfers"
};

$Object* allocate$Transfers$IntGenerator($Class* clazz) {
	return $of($alloc(Transfers$IntGenerator));
}

void Transfers$IntGenerator::init$(int32_t max) {
	this->cur = -1;
	this->p2 = 8;
	this->max = max;
}

bool Transfers$IntGenerator::hasNext() {
	return this->cur < this->max;
}

int32_t Transfers$IntGenerator::next() {
	if (this->cur >= this->max) {
		$throwNew($IllegalStateException);
	}
	if (this->cur < 6) {
		++this->cur;
		return this->cur;
	}
	if (this->cur == this->p2 + 1) {
		this->p2 <<= 1;
		this->cur = this->p2 - 1;
		return this->cur;
	}
	++this->cur;
	return this->cur;
}

Transfers$IntGenerator::Transfers$IntGenerator() {
}

$Class* Transfers$IntGenerator::load$($String* name, bool initialize) {
	$loadClass(Transfers$IntGenerator, name, initialize, &_Transfers$IntGenerator_ClassInfo_, allocate$Transfers$IntGenerator);
	return class$;
}

$Class* Transfers$IntGenerator::class$ = nullptr;