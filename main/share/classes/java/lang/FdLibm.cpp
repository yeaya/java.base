#include <java/lang/FdLibm.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef INFINITY
#undef POSITIVE_INFINITY

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;

namespace java {
	namespace lang {

$FieldInfo _FdLibm_FieldInfo_[] = {
	{"INFINITY", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FdLibm, INFINITY)},
	{}
};

$MethodInfo _FdLibm_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(FdLibm::*)()>(&FdLibm::init$))},
	{"__HI", "(D)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(double)>(&FdLibm::__HI))},
	{"__HI", "(DI)D", nullptr, $PRIVATE | $STATIC, $method(static_cast<double(*)(double,int32_t)>(&FdLibm::__HI))},
	{"__LO", "(D)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(double)>(&FdLibm::__LO))},
	{"__LO", "(DI)D", nullptr, $PRIVATE | $STATIC, $method(static_cast<double(*)(double,int32_t)>(&FdLibm::__LO))},
	{}
};

$InnerClassInfo _FdLibm_InnerClassesInfo_[] = {
	{"java.lang.FdLibm$Exp", "java.lang.FdLibm", "Exp", $STATIC},
	{"java.lang.FdLibm$Pow", "java.lang.FdLibm", "Pow", $PUBLIC | $STATIC},
	{"java.lang.FdLibm$Hypot", "java.lang.FdLibm", "Hypot", $PUBLIC | $STATIC},
	{"java.lang.FdLibm$Cbrt", "java.lang.FdLibm", "Cbrt", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _FdLibm_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.FdLibm",
	"java.lang.Object",
	nullptr,
	_FdLibm_FieldInfo_,
	_FdLibm_MethodInfo_,
	nullptr,
	nullptr,
	_FdLibm_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.FdLibm$Exp,java.lang.FdLibm$Pow,java.lang.FdLibm$Hypot,java.lang.FdLibm$Cbrt"
};

$Object* allocate$FdLibm($Class* clazz) {
	return $of($alloc(FdLibm));
}

double FdLibm::INFINITY = 0.0;

void FdLibm::init$() {
	$throwNew($UnsupportedOperationException, "No FdLibm instances for you."_s);
}

int32_t FdLibm::__LO(double x) {
	$init(FdLibm);
	int64_t transducer = $Double::doubleToRawLongBits(x);
	return (int32_t)transducer;
}

double FdLibm::__LO(double x, int32_t low) {
	$init(FdLibm);
	int64_t transX = $Double::doubleToRawLongBits(x);
	return $Double::longBitsToDouble(((int64_t)(transX & (uint64_t)(int64_t)0xFFFFFFFF00000000)) | ((int64_t)(low & (uint64_t)(int64_t)0x00000000FFFFFFFF)));
}

int32_t FdLibm::__HI(double x) {
	$init(FdLibm);
	int64_t transducer = $Double::doubleToRawLongBits(x);
	return (int32_t)(transducer >> 32);
}

double FdLibm::__HI(double x, int32_t high) {
	$init(FdLibm);
	int64_t transX = $Double::doubleToRawLongBits(x);
	return $Double::longBitsToDouble(((int64_t)(transX & (uint64_t)(int64_t)0x00000000FFFFFFFF)) | (((int64_t)high) << 32));
}

FdLibm::FdLibm() {
}

void clinit$FdLibm($Class* class$) {
	$init($Double);
	FdLibm::INFINITY = $Double::POSITIVE_INFINITY;
}

$Class* FdLibm::load$($String* name, bool initialize) {
	$loadClass(FdLibm, name, initialize, &_FdLibm_ClassInfo_, clinit$FdLibm, allocate$FdLibm);
	return class$;
}

$Class* FdLibm::class$ = nullptr;

	} // lang
} // java