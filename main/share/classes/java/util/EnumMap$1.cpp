#include <java/util/EnumMap$1.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

$MethodInfo _EnumMap$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(EnumMap$1::*)()>(&EnumMap$1::init$))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _EnumMap$1_EnclosingMethodInfo_ = {
	"java.util.EnumMap",
	nullptr,
	nullptr
};

$InnerClassInfo _EnumMap$1_InnerClassesInfo_[] = {
	{"java.util.EnumMap$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _EnumMap$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.EnumMap$1",
	"java.lang.Object",
	nullptr,
	nullptr,
	_EnumMap$1_MethodInfo_,
	nullptr,
	&_EnumMap$1_EnclosingMethodInfo_,
	_EnumMap$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.EnumMap"
};

$Object* allocate$EnumMap$1($Class* clazz) {
	return $of($alloc(EnumMap$1));
}

void EnumMap$1::init$() {
}

int32_t EnumMap$1::hashCode() {
	return 0;
}

$String* EnumMap$1::toString() {
	return "java.util.EnumMap.NULL"_s;
}

EnumMap$1::EnumMap$1() {
}

$Class* EnumMap$1::load$($String* name, bool initialize) {
	$loadClass(EnumMap$1, name, initialize, &_EnumMap$1_ClassInfo_, allocate$EnumMap$1);
	return class$;
}

$Class* EnumMap$1::class$ = nullptr;

	} // util
} // java