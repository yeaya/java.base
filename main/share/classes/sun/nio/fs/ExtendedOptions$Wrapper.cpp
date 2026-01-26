#include <sun/nio/fs/ExtendedOptions$Wrapper.h>

#include <sun/nio/fs/ExtendedOptions.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _ExtendedOptions$Wrapper_FieldInfo_[] = {
	{"option", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(ExtendedOptions$Wrapper, option)},
	{"param", "Ljava/lang/Object;", "TT;", $PRIVATE | $FINAL, $field(ExtendedOptions$Wrapper, param)},
	{}
};

$MethodInfo _ExtendedOptions$Wrapper_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V", "(Ljava/lang/Object;TT;)V", 0, $method(ExtendedOptions$Wrapper, init$, void, Object$*, Object$*)},
	{"parameter", "()Ljava/lang/Object;", "()TT;", 0, $method(ExtendedOptions$Wrapper, parameter, $Object*)},
	{}
};

$InnerClassInfo _ExtendedOptions$Wrapper_InnerClassesInfo_[] = {
	{"sun.nio.fs.ExtendedOptions$Wrapper", "sun.nio.fs.ExtendedOptions", "Wrapper", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ExtendedOptions$Wrapper_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.nio.fs.ExtendedOptions$Wrapper",
	"java.lang.Object",
	nullptr,
	_ExtendedOptions$Wrapper_FieldInfo_,
	_ExtendedOptions$Wrapper_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_ExtendedOptions$Wrapper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.ExtendedOptions"
};

$Object* allocate$ExtendedOptions$Wrapper($Class* clazz) {
	return $of($alloc(ExtendedOptions$Wrapper));
}

void ExtendedOptions$Wrapper::init$(Object$* option, Object$* param) {
	$set(this, option, option);
	$set(this, param, param);
}

$Object* ExtendedOptions$Wrapper::parameter() {
	return $of(this->param);
}

ExtendedOptions$Wrapper::ExtendedOptions$Wrapper() {
}

$Class* ExtendedOptions$Wrapper::load$($String* name, bool initialize) {
	$loadClass(ExtendedOptions$Wrapper, name, initialize, &_ExtendedOptions$Wrapper_ClassInfo_, allocate$ExtendedOptions$Wrapper);
	return class$;
}

$Class* ExtendedOptions$Wrapper::class$ = nullptr;

		} // fs
	} // nio
} // sun