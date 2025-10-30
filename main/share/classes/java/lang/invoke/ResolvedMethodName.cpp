#include <java/lang/invoke/ResolvedMethodName.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _ResolvedMethodName_FieldInfo_[] = {
	{"vmtarget", "Ljava/lang/reflect/Executable;", nullptr, 2, $field(ResolvedMethodName, vmtarget)},
	{"vmholder", "Ljava/lang/Class;", nullptr, 2, $field(ResolvedMethodName, vmholder)},
	{}
};

$MethodInfo _ResolvedMethodName_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ResolvedMethodName::*)()>(&ResolvedMethodName::init$))},
	{}
};

$ClassInfo _ResolvedMethodName_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.ResolvedMethodName",
	"java.lang.Object",
	nullptr,
	_ResolvedMethodName_FieldInfo_,
	_ResolvedMethodName_MethodInfo_
};

$Object* allocate$ResolvedMethodName($Class* clazz) {
	return $of($alloc(ResolvedMethodName));
}

void ResolvedMethodName::init$() {
}

ResolvedMethodName::ResolvedMethodName() {
}

$Class* ResolvedMethodName::load$($String* name, bool initialize) {
	$loadClass(ResolvedMethodName, name, initialize, &_ResolvedMethodName_ClassInfo_, allocate$ResolvedMethodName);
	return class$;
}

$Class* ResolvedMethodName::class$ = nullptr;

		} // invoke
	} // lang
} // java